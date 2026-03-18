/*
 * XREFs of SeQuerySigningPolicy @ 0x14044869C
 * Callers:
 *     NtCreateUserProcess @ 0x14044741C (NtCreateUserProcess.c)
 *     PspCreateProcess @ 0x1404C3BAC (PspCreateProcess.c)
 * Callees:
 *     SeQuerySigningPolicyExt_0 @ 0x1400012A0 (SeQuerySigningPolicyExt_0.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     SepIsMinTCB @ 0x14044880C (SepIsMinTCB.c)
 *     RtlRunOnceExecuteOnce @ 0x14044897C (RtlRunOnceExecuteOnce.c)
 *     SeQuerySigningPolicyWorker @ 0x140448AFC (SeQuerySigningPolicyWorker.c)
 *     SeCompareSigningLevels @ 0x140448D98 (SeCompareSigningLevels.c)
 */

__int64 __fastcall SeQuerySigningPolicy(
        PACCESS_TOKEN Token,
        PCUNICODE_STRING String2,
        __int64 a3,
        __int64 a4,
        _BYTE *a5,
        _BYTE *a6,
        _BYTE *a7)
{
  NTSTATUS IsMinTCB; // esi
  int SigningPolicyExt_0; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8

  IsMinTCB = RtlRunOnceExecuteOnce(&SeQuerySigningPolicyInit, SepInitQuerySigningPolicyExt, 0LL, 0LL);
  if ( IsMinTCB < 0 )
    return (unsigned int)IsMinTCB;
  if ( !SeQuerySigningPolicyExtAllowed )
    goto LABEL_5;
  SigningPolicyExt_0 = SeQuerySigningPolicyExt_0();
  v12 = -1073741637LL;
  IsMinTCB = SigningPolicyExt_0;
  if ( SigningPolicyExt_0 == -1073741637 )
  {
    if ( SeFailIfExtensionNotSupported )
      KeBugCheckEx(0x29u, 2uLL, 0xFFFFFFFFC00000BBuLL, 0LL, 0LL);
LABEL_5:
    IsMinTCB = SepIsMinTCB(String2, (__int64)a6, (__int64)a7);
    if ( IsMinTCB < 0 )
    {
      IsMinTCB = SeQuerySigningPolicyWorker(Token, (__int64)a5, (__int64)a6, (__int64)a7);
      if ( IsMinTCB < 0 )
        return (unsigned int)IsMinTCB;
    }
    goto LABEL_7;
  }
  if ( SigningPolicyExt_0 < 0 )
    goto LABEL_5;
LABEL_7:
  v13 = (*a7 & 7u) - 1;
  if ( (*a7 & 7) == 1 )
  {
    *a5 |= 0x30u;
  }
  else
  {
    v13 = (*a7 & 7u) - 2;
    if ( (*a7 & 7) == 2 )
    {
      *a5 |= 0x10u;
      *a6 |= 0x10u;
    }
  }
  if ( IsMinTCB >= 0 && (*a5 & 0xF) != 8 )
  {
    LOBYTE(v11) = 8;
    LOBYTE(v13) = *a5;
    if ( (unsigned int)SeCompareSigningLevels(v13, v11, v12) )
    {
      if ( (SeCiDebugOptions & 4) != 0
        || (SeCiDebugOptions & 2) != 0 && (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
      {
        LOBYTE(v15) = SeILSigningPolicy;
        LOBYTE(v14) = 8;
        if ( (unsigned int)SeCompareSigningLevels(v15, v14, v16) || (*a7 & 7) == 0 )
        {
          *a5 = SeILSigningPolicy & 0xF | *a5 & 0x30;
          LOBYTE(v18) = *a6;
          LOBYTE(v19) = SeILSigningPolicy;
          if ( !(unsigned int)SeCompareSigningLevels(v19, v18, v20) )
            *a6 = SeILSigningPolicy & 0xF | *a6 & 0x30;
        }
        else
        {
          LOBYTE(v19) = 8;
          *a5 = *a5 & 0x30 | 8;
          LOBYTE(v18) = *a6;
          if ( !(unsigned int)SeCompareSigningLevels(v19, v18, v20) )
            *a6 = *a6 & 0x30 | 8;
        }
      }
    }
  }
  return (unsigned int)IsMinTCB;
}
