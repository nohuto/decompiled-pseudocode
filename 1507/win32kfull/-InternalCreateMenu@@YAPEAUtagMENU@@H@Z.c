/*
 * XREFs of ?InternalCreateMenu@@YAPEAUtagMENU@@H@Z @ 0x1C005BA48
 * Callers:
 *     ?SetLPITEMInfoNoRedraw@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C00557DC (-SetLPITEMInfoNoRedraw@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@.c)
 *     _CreateMenu @ 0x1C005BA40 (_CreateMenu.c)
 *     _CreatePopupMenu @ 0x1C0100AB0 (_CreatePopupMenu.c)
 * Callees:
 *     CheckGrantedAccess @ 0x1C005CD60 (CheckGrantedAccess.c)
 */

struct tagMENU *__fastcall InternalCreateMenu(int a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  struct tagMENU *result; // rax

  v4 = *(_QWORD *)(gptiCurrent + 416LL);
  if ( *(_QWORD *)(gptiCurrent + 520LL)
    && !(unsigned int)CheckGrantedAccess(*(unsigned int *)(gptiCurrent + 776LL), 4LL) )
  {
    return 0LL;
  }
  LOBYTE(a3) = 2;
  result = (struct tagMENU *)HMAllocObject(gptiCurrent, v4, a3, 152LL);
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
