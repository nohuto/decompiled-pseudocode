/*
 * XREFs of xxxEndMenuLoop @ 0x1C0142C30
 * Callers:
 *     xxxMenuWindowProc @ 0x1C013CEA0 (xxxMenuWindowProc.c)
 *     xxxMNLoop @ 0x1C0141414 (xxxMNLoop.c)
 *     xxxCallHandleMenuMessages @ 0x1C020F130 (xxxCallHandleMenuMessages.c)
 * Callees:
 *     xxxDWP_DoNCActivate @ 0x1C00AD2F8 (xxxDWP_DoNCActivate.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C0131828 (xxxDrawMenuBarUnderlines.c)
 *     xxxMNCancel @ 0x1C013C7D8 (xxxMNCancel.c)
 *     xxxEndMenu @ 0x1C02341A4 (xxxEndMenu.c)
 */

__int64 __fastcall xxxEndMenuLoop(__int64 a1, unsigned int *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  int v5; // edi
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+28h] [rbp-20h]

  result = *a2;
  v5 = 0;
  if ( (result & 8) != 0 )
  {
    if ( (result & 0x80000) == 0 )
      result = xxxMNCancel(a1, 0, 0, 0LL);
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 8) & 0x20) != 0 )
    {
      v8 = *((_QWORD *)a2 + 1);
      v15 = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = &v15;
      v16 = v8;
      if ( v8 )
        ++*(_DWORD *)(v8 + 8);
      xxxDrawMenuBarUnderlines(*((_QWORD *)a2 + 1), 0LL, a3, a4);
      ThreadUnlock1(v10, v9);
    }
    result = *(unsigned int *)(a1 + 8);
    if ( (result & 0x10) == 0 )
      result = xxxEndMenu(a1);
  }
  if ( (*(_DWORD *)(a1 + 8) & 0x100) != 0 )
  {
    v11 = *((_QWORD *)a2 + 1);
    if ( v11 )
    {
      v12 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 384LL);
      if ( v12 == gpqForeground && *(_QWORD *)(v12 + 88) == v11 )
        v5 = 1;
      result = v5 ^ (*(unsigned __int8 *)(v11 + 40) >> 6) & 1u;
      if ( v5 != ((*(unsigned __int8 *)(v11 + 40) >> 6) & 1) )
      {
        v15 = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = &v15;
        v16 = v11;
        ++*(_DWORD *)(v11 + 8);
        xxxDWP_DoNCActivate((struct tagWND *)v11, 2 - (v5 != 0), 1LL);
        return ThreadUnlock1(v14, v13);
      }
    }
  }
  return result;
}
