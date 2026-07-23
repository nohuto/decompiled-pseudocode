/*
 * XREFs of SeQuerySigningPolicy @ 0x14045B8FC
 * Callers:
 *     NtCreateUserProcess @ 0x140459A10 (NtCreateUserProcess.c)
 *     PspCreateProcess @ 0x1404CDA18 (PspCreateProcess.c)
 * Callees:
 *     SeQuerySigningPolicyExt_0 @ 0x1400012E8 (SeQuerySigningPolicyExt_0.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     SepIsMinTCB @ 0x14045BB18 (SepIsMinTCB.c)
 *     RtlRunOnceExecuteOnce @ 0x14045BCD4 (RtlRunOnceExecuteOnce.c)
 *     SeCompareSigningLevels @ 0x14045C0B0 (SeCompareSigningLevels.c)
 *     SeQuerySigningPolicyWorker @ 0x14045C0CC (SeQuerySigningPolicyWorker.c)
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
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx

  IsMinTCB = RtlRunOnceExecuteOnce(&SeQuerySigningPolicyInit, SepInitQuerySigningPolicyExt, 0LL, 0LL);
  if ( IsMinTCB < 0 )
    return (unsigned int)IsMinTCB;
  if ( !SeQuerySigningPolicyExtAllowed || SeILSigningPolicy == 2 )
    goto LABEL_8;
  SigningPolicyExt_0 = SeQuerySigningPolicyExt_0();
  IsMinTCB = SigningPolicyExt_0;
  if ( SigningPolicyExt_0 == -1073741637 )
  {
    if ( SeFailIfExtensionNotSupported )
      KeBugCheckEx(0x29u, 2uLL, 0xFFFFFFFFC00000BBuLL, 0LL, 0LL);
LABEL_8:
    IsMinTCB = SepIsMinTCB(String2, (__int64)a6, (__int64)a7);
    if ( IsMinTCB < 0 )
    {
      IsMinTCB = SeQuerySigningPolicyWorker(Token, (__int64)a5, (__int64)a6, (__int64)a7);
      if ( IsMinTCB < 0 )
        return (unsigned int)IsMinTCB;
    }
    goto LABEL_10;
  }
  if ( SigningPolicyExt_0 < 0 )
    goto LABEL_8;
LABEL_10:
  v12 = (*a7 & 7u) - 1;
  if ( (*a7 & 7) == 1 )
  {
    *a5 |= 0x30u;
  }
  else
  {
    v12 = (*a7 & 7u) - 2;
    if ( (*a7 & 7) == 2 )
    {
      *a5 |= 0x10u;
      *a6 |= 0x10u;
    }
  }
  if ( IsMinTCB >= 0 && (*a5 & 0xF) != 8 )
  {
    LOBYTE(v11) = 8;
    LOBYTE(v12) = *a5;
    if ( (unsigned int)SeCompareSigningLevels(v12, v11) )
    {
      if ( (SeCiDebugOptions & 4) != 0
        || (SeCiDebugOptions & 2) != 0 && (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
      {
        LOBYTE(v14) = SeILSigningPolicy;
        LOBYTE(v13) = 8;
        if ( (unsigned int)SeCompareSigningLevels(v14, v13) || (*a7 & 7) == 0 )
        {
          *a5 = SeILSigningPolicy & 0xF | *a5 & 0x30;
          LOBYTE(v15) = *a6;
          LOBYTE(v16) = SeILSigningPolicy;
          if ( !(unsigned int)SeCompareSigningLevels(v16, v15) )
            *a6 = SeILSigningPolicy & 0xF | *a6 & 0x30;
        }
        else
        {
          LOBYTE(v16) = 8;
          *a5 = *a5 & 0x30 | 8;
          LOBYTE(v15) = *a6;
          if ( !(unsigned int)SeCompareSigningLevels(v16, v15) )
            *a6 = *a6 & 0x30 | 8;
        }
      }
    }
  }
  return (unsigned int)IsMinTCB;
}
