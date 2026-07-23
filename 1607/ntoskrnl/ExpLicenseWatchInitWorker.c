/*
 * XREFs of ExpLicenseWatchInitWorker @ 0x1407AB13C
 * Callers:
 *     ExpWatchProductTypeInitialization @ 0x1407A9F80 (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

__int64 ExpLicenseWatchInitWorker()
{
  __int64 v0; // rax
  __int64 v1; // r11
  __int64 (__fastcall *v2)(__int64); // rbx
  char v3; // r10
  unsigned __int64 v4; // r9
  __int64 result; // rax

  v0 = KiProcessorBlock[0];
  v1 = *(_QWORD *)(KiProcessorBlock[0] + 1576);
  *(_QWORD *)(KiProcessorBlock[0] + 1576) = 0LL;
  v2 = *(__int64 (__fastcall **)(__int64))(v0 + 1568);
  *(_QWORD *)(v0 + 1568) = 0LL;
  v3 = (InitSafeBootMode != 0) | (MEMORY[0xFFFFF780000002D4] >> 1);
  v4 = __rdtsc() >> 3;
  result = (unsigned int)(1374389535 * v4);
  if ( (unsigned int)v4 % 0x64 > 3 )
    v3 |= 1u;
  if ( !v3 )
  {
    result = v2(v1);
    if ( (_DWORD)result != 1 )
      KeBugCheckEx(0x9Au, 0x42424242uLL, 0xC000026AuLL, 0LL, 0LL);
  }
  return result;
}
