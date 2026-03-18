/*
 * XREFs of KiMcheckAlternateReturn @ 0x14020BE04
 * Callers:
 *     KxMcheckAlternateReturn @ 0x140192100 (KxMcheckAlternateReturn.c)
 * Callees:
 *     WheaAttemptPhysicalPageOffline @ 0x1406FC5FC (WheaAttemptPhysicalPageOffline.c)
 *     WheaTerminateProcess @ 0x1406FC7B4 (WheaTerminateProcess.c)
 */

__int64 __fastcall KiMcheckAlternateReturn(unsigned int *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (*a1 & 4) != 0 )
  {
    LOBYTE(a3) = 1;
    WheaAttemptPhysicalPageOffline(*((_QWORD *)a1 + 1) >> 12, 0LL, a3);
  }
  result = *a1;
  if ( (result & 8) != 0 )
    return WheaTerminateProcess();
  return result;
}
