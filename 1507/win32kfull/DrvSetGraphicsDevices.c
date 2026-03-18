/*
 * XREFs of DrvSetGraphicsDevices @ 0x1C012F374
 * Callers:
 *     xxxRemoteDisconnect @ 0x1C012D870 (xxxRemoteDisconnect.c)
 *     xxxRemoteReconnect @ 0x1C012DFA0 (xxxRemoteReconnect.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0031DE4 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall DrvSetGraphicsDevices(char *a1, __int16 a2)
{
  unsigned int v2; // ebx
  __int64 result; // rax

  if ( a2 )
  {
    v2 = 0;
    gcRemoteNextGlobalDeviceNumber = 0;
  }
  else
  {
    v2 = 1;
  }
  StringCchCopyW((char *)qword_1C032CA68, (unsigned int)dword_1C032CA70, a1);
  gcLocalNextGlobalDeviceNumber = 0;
  result = DrvUpdateGraphicsDeviceList(1LL, v2);
  if ( gpGdiSharedMemory )
    _InterlockedIncrement((volatile signed __int32 *)(gpGdiSharedMemory + 1573024LL));
  return result;
}
