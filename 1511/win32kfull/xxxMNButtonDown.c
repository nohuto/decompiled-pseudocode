/*
 * XREFs of xxxMNButtonDown @ 0x1C0133690
 * Callers:
 *     xxxMenuWindowProc @ 0x1C0135770 (xxxMenuWindowProc.c)
 *     xxxHandleMenuMessages @ 0x1C0137D0C (xxxHandleMenuMessages.c)
 *     xxxMNMouseMove @ 0x1C0138358 (xxxMNMouseMove.c)
 * Callees:
 *     ?xxxMNDoScroll@@YAHPEAUtagPOPUPMENU@@IH@Z @ 0x1C0133720 (-xxxMNDoScroll@@YAHPEAUtagPOPUPMENU@@IH@Z.c)
 *     xxxMNOpenHierarchy @ 0x1C0133768 (xxxMNOpenHierarchy.c)
 *     ?xxxMNHideNextHierarchy@@YAHPEAUtagPOPUPMENU@@@Z @ 0x1C013459C (-xxxMNHideNextHierarchy@@YAHPEAUtagPOPUPMENU@@@Z.c)
 *     xxxMNSelectItem @ 0x1C0138CE0 (xxxMNSelectItem.c)
 */

__int64 __fastcall xxxMNButtonDown(struct tagPOPUPMENU *a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 result; // rax
  int v9; // edi

  if ( *((_DWORD *)a1 + 20) == a3 )
  {
    if ( a4 )
      *(_DWORD *)a1 |= 0x80u;
    result = xxxMNHideNextHierarchy(a1);
    if ( !(_DWORD)result )
    {
      if ( !a4 )
        return result;
      result = xxxMNOpenHierarchy(a1);
      if ( result )
        *(_DWORD *)a1 &= ~0x80u;
    }
    goto LABEL_8;
  }
  if ( a4 )
  {
    *(_DWORD *)a1 &= ~0x80u;
    v9 = 1;
  }
  else
  {
    v9 = (*(_DWORD *)a1 >> 10) & 1;
  }
  result = xxxMNSelectItem(a1);
  if ( !result
    || !*(_QWORD *)(result + 16)
    || (result = *(unsigned int *)(result + 4), (result & 3) != 0)
    || !v9
    || (result = xxxMNOpenHierarchy(a1), result != -1) )
  {
LABEL_8:
    if ( a4 )
    {
      *(_DWORD *)(a2 + 8) |= 8u;
      return xxxMNDoScroll(a1, a3, 1);
    }
  }
  return result;
}
