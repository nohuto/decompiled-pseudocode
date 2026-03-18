/*
 * XREFs of xxxEndMenuLoop @ 0x1C013A060
 * Callers:
 *     xxxMenuWindowProc @ 0x1C0135770 (xxxMenuWindowProc.c)
 *     xxxMNLoop @ 0x1C0137990 (xxxMNLoop.c)
 *     xxxCallHandleMenuMessages @ 0x1C0216594 (xxxCallHandleMenuMessages.c)
 * Callees:
 *     xxxDWP_DoNCActivate @ 0x1C00CADC0 (xxxDWP_DoNCActivate.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C010E45C (xxxDrawMenuBarUnderlines.c)
 *     xxxMNCancel @ 0x1C01385D8 (xxxMNCancel.c)
 *     xxxEndMenu @ 0x1C023C80C (xxxEndMenu.c)
 */

__int64 __fastcall xxxEndMenuLoop(__int64 a1, unsigned int *a2)
{
  __int64 result; // rax
  int v3; // edi
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+28h] [rbp-20h]

  result = *a2;
  v3 = 0;
  if ( (result & 8) != 0 )
  {
    if ( (result & 0x80000) == 0 )
      result = xxxMNCancel(a1, 0, 0, 0LL);
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 8) & 0x20) != 0 )
    {
      v6 = *((_QWORD *)a2 + 1);
      v13 = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = &v13;
      v14 = v6;
      if ( v6 )
        ++*(_DWORD *)(v6 + 8);
      xxxDrawMenuBarUnderlines(*((_QWORD *)a2 + 1), 0);
      ThreadUnlock1(v8, v7);
    }
    result = *(unsigned int *)(a1 + 8);
    if ( (result & 0x10) == 0 )
      result = xxxEndMenu(a1);
  }
  if ( (*(_DWORD *)(a1 + 8) & 0x100) != 0 )
  {
    v9 = *((_QWORD *)a2 + 1);
    if ( v9 )
    {
      v10 = *(_QWORD *)(*(_QWORD *)(v9 + 16) + 384LL);
      if ( v10 == gpqForeground && *(_QWORD *)(v10 + 80) == v9 )
        v3 = 1;
      result = v3 ^ (*(unsigned __int8 *)(v9 + 40) >> 6) & 1u;
      if ( v3 != ((*(unsigned __int8 *)(v9 + 40) >> 6) & 1) )
      {
        v13 = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = &v13;
        v14 = v9;
        ++*(_DWORD *)(v9 + 8);
        xxxDWP_DoNCActivate((struct tagWND *)v9, 2 - (v3 != 0), 1LL);
        return ThreadUnlock1(v12, v11);
      }
    }
  }
  return result;
}
