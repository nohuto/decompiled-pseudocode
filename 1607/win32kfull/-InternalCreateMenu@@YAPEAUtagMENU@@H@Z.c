/*
 * XREFs of ?InternalCreateMenu@@YAPEAUtagMENU@@H@Z @ 0x1C01185F8
 * Callers:
 *     ?SetLPITEMInfoNoRedraw@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C006BE54 (-SetLPITEMInfoNoRedraw@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@.c)
 *     _CreatePopupMenu @ 0x1C01185E0 (_CreatePopupMenu.c)
 *     _CreateMenu @ 0x1C01185F0 (_CreateMenu.c)
 * Callees:
 *     CheckGrantedAccess @ 0x1C007163C (CheckGrantedAccess.c)
 */

struct tagMENU *__fastcall InternalCreateMenu(int a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  struct tagMENU *result; // rax

  v4 = *(_QWORD *)(gptiCurrent + 408LL);
  if ( *(_QWORD *)(gptiCurrent + 512LL) && !(unsigned int)CheckGrantedAccess(*(_DWORD *)(gptiCurrent + 776LL), 4u) )
    return 0LL;
  LOBYTE(a3) = 2;
  result = (struct tagMENU *)HMAllocObject(gptiCurrent, v4, a3);
  if ( result )
  {
    if ( a1 )
    {
      *((_DWORD *)result + 10) = 1;
      *(_QWORD *)((char *)result + 132) = 0LL;
      *(_QWORD *)((char *)result + 140) = 0LL;
      *((_DWORD *)result + 37) = 0;
    }
  }
  return result;
}
