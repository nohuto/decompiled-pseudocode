/*
 * XREFs of PiCMCaptureEnumerateInputData @ 0x140691700
 * Callers:
 *     PiCMEnumerateSubKeys @ 0x140692C44 (PiCMEnumerateSubKeys.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PiCMCaptureEnumerateInputData(ULONG64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  ULONG64 v4; // rdx
  __int64 result; // rax

  if ( a1 && a2 >= 0x14 )
  {
    if ( (a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v4 = a1 + a2;
    if ( v4 > MmUserProbeAddress || v4 < a1 )
      *(_BYTE *)MmUserProbeAddress = 0;
    *(_OWORD *)a4 = *(_OWORD *)a1;
    *(_DWORD *)(a4 + 16) = *(_DWORD *)(a1 + 16);
    result = 0LL;
    if ( *(_DWORD *)a4 != 20 )
      result = 3221225485LL;
  }
  else
  {
    result = 3221225485LL;
  }
  if ( (int)result < 0 )
  {
    *(_QWORD *)a4 = 0LL;
    *(_QWORD *)(a4 + 8) = 0LL;
    *(_DWORD *)(a4 + 16) = 0;
  }
  return result;
}
