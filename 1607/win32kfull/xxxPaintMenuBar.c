/*
 * XREFs of xxxPaintMenuBar @ 0x1C012D944
 * Callers:
 *     NtUserPaintMenuBar @ 0x1C012D860 (NtUserPaintMenuBar.c)
 * Callees:
 *     MNIsUAHMenu @ 0x1C006F6BC (MNIsUAHMenu.c)
 *     NtGdiPatBlt @ 0x1C00942F0 (NtGdiPatBlt.c)
 *     xxxMenuDraw @ 0x1C00B6AD8 (xxxMenuDraw.c)
 *     xxxSendUAHInitMenuMessage @ 0x1C00B7568 (xxxSendUAHInitMenuMessage.c)
 *     xxxMenuBarCompute @ 0x1C00B7A04 (xxxMenuBarCompute.c)
 *     xxxSendUAHMenuMessage @ 0x1C00B7D88 (xxxSendUAHMenuMessage.c)
 */

__int64 __fastcall xxxPaintMenuBar(__int64 a1, HDC a2, unsigned int a3, int a4, unsigned int a5, char a6)
{
  __int64 v6; // rdi
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rcx
  int v12; // r8d
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int v15; // ebx
  __int64 v17; // rdx
  __int64 v18; // rbx
  __int64 v19; // [rsp+30h] [rbp-38h] BYREF
  __int64 v20; // [rsp+38h] [rbp-30h]
  _QWORD v21[3]; // [rsp+48h] [rbp-20h] BYREF

  v6 = *(_QWORD *)(a1 + 192);
  v9 = a1;
  if ( !v6 )
    return 0LL;
  *(_DWORD *)(v6 + 40) |= 0x200u;
  v19 = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = &v19;
  v20 = v6;
  ++*(_DWORD *)(v6 + 8);
  if ( (a6 & 1) != 0 )
    *(_DWORD *)(v6 + 40) &= ~0x10u;
  else
    *(_DWORD *)(v6 + 40) |= 0x10u;
  v10 = *(_QWORD *)(v6 + 72);
  v11 = gptiCurrent;
  v12 = *(_DWORD *)(v9 + 120) - *(_DWORD *)(v9 + 112) - a3 - a4;
  v21[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v21;
  v21[1] = v10;
  if ( v10 )
    ++*(_DWORD *)(v10 + 8);
  if ( v9 != *(_QWORD *)(v6 + 72) || !*(_DWORD *)(v6 + 56) || !*(_DWORD *)(v6 + 60) )
    xxxMenuBarCompute((struct tagMENU *)v6, v9, a5, a3, v12);
  if ( gihmodUserApiHook >= 0 && v10 && (unsigned int)xxxSendUAHInitMenuMessage((struct tagWND *)v10, v6, (__int64)a2) )
    xxxSendUAHMenuMessage((struct tagWND *)v10, 0x91u, v6, (__int64)a2);
  ThreadUnlock1(v11, v9);
  if ( (unsigned int)MNIsUAHMenu(v6) )
  {
    xxxMenuDraw(a2, v6, 0LL);
  }
  else
  {
    v17 = *(_QWORD *)(v6 + 112);
    if ( !v17 )
      v17 = *(_QWORD *)(gpsi + 5328LL);
    v18 = GreSelectBrush(a2, v17);
    NtGdiPatBlt(a2, a3, a5, *(_DWORD *)(v6 + 56), *(_DWORD *)(v6 + 60), 15728673);
    xxxMenuDraw(a2, v6, 0LL);
    GreSelectBrush(a2, v18);
  }
  v14 = v20;
  v15 = *(_DWORD *)(v6 + 60);
  *(_DWORD *)(v20 + 40) &= ~0x200u;
  ThreadUnlock1(v14, v13);
  return v15;
}
