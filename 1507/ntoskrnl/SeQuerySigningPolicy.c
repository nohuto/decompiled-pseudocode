/*
 * XREFs of SeQuerySigningPolicy @ 0x14050B2FC
 * Callers:
 *     NtCreateUserProcess @ 0x140509350 (NtCreateUserProcess.c)
 *     PspCreateProcess @ 0x14055AE78 (PspCreateProcess.c)
 * Callees:
 *     SeQuerySigningPolicyExt_0 @ 0x1400012A0 (SeQuerySigningPolicyExt_0.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     SeCompareSigningLevels @ 0x140509298 (SeCompareSigningLevels.c)
 *     SepIsMinTCB @ 0x14050B46C (SepIsMinTCB.c)
 *     RtlRunOnceExecuteOnce @ 0x14050B5E8 (RtlRunOnceExecuteOnce.c)
 *     SeQuerySigningPolicyWorker @ 0x14050B8C8 (SeQuerySigningPolicyWorker.c)
 */

__int64 __fastcall SeQuerySigningPolicy(
        HANDLE TokenHandle,
        PCUNICODE_STRING String2,
        __int64 a3,
        __int64 a4,
        _BYTE *a5,
        _BYTE *a6,
        _BYTE *a7)
{
  NTSTATUS IsMinTCB; // esi
  int SigningPolicyExt_0; // eax

  IsMinTCB = RtlRunOnceExecuteOnce(&SeQuerySigningPolicyInit, SepInitQuerySigningPolicyExt, 0LL, 0LL);
  if ( IsMinTCB < 0 )
    return (unsigned int)IsMinTCB;
  if ( !SeQuerySigningPolicyExtAllowed )
    goto LABEL_5;
  SigningPolicyExt_0 = SeQuerySigningPolicyExt_0();
  IsMinTCB = SigningPolicyExt_0;
  if ( SigningPolicyExt_0 == -1073741637 )
  {
    if ( SeFailIfExtensionNotSupported )
      KeBugCheckEx(0x29u, 2uLL, 0xFFFFFFFFC00000BBuLL, 0LL, 0LL);
LABEL_5:
    IsMinTCB = SepIsMinTCB(String2, (__int64)a6, (__int64)a7);
    if ( IsMinTCB < 0 )
    {
      IsMinTCB = SeQuerySigningPolicyWorker(TokenHandle, (__int64)a5, (__int64)a6, (__int64)a7);
      if ( IsMinTCB < 0 )
        return (unsigned int)IsMinTCB;
    }
    goto LABEL_7;
  }
  if ( SigningPolicyExt_0 < 0 )
    goto LABEL_5;
LABEL_7:
  if ( (*a7 & 7) == 1 )
  {
    *a5 |= 0x30u;
  }
  else if ( (*a7 & 7) == 2 )
  {
    *a5 |= 0x10u;
    *a6 |= 0x10u;
  }
  if ( IsMinTCB >= 0
    && (*a5 & 0xF) != 8
    && (unsigned int)SeCompareSigningLevels()
    && ((SeCiDebugOptions & 4) != 0
     || (SeCiDebugOptions & 2) != 0 && (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent) )
  {
    if ( (unsigned int)SeCompareSigningLevels() || (*a7 & 7) == 0 )
    {
      *a5 = SeILSigningPolicy & 0xF | *a5 & 0x30;
      if ( !(unsigned int)SeCompareSigningLevels() )
        *a6 = SeILSigningPolicy & 0xF | *a6 & 0x30;
    }
    else
    {
      *a5 = *a5 & 0x30 | 8;
      if ( !(unsigned int)SeCompareSigningLevels() )
        *a6 = *a6 & 0x30 | 8;
    }
  }
  return (unsigned int)IsMinTCB;
}
