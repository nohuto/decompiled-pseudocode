/*
 * XREFs of KiMcheckAlternateReturn @ 0x1401CCAAC
 * Callers:
 *     KxMcheckAlternateReturn @ 0x140163700 (KxMcheckAlternateReturn.c)
 * Callees:
 *     WheaAttemptPhysicalPageOffline @ 0x140677DE0 (WheaAttemptPhysicalPageOffline.c)
 *     WheaTerminateProcess @ 0x140677F98 (WheaTerminateProcess.c)
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
