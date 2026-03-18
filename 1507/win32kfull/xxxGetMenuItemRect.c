/*
 * XREFs of xxxGetMenuItemRect @ 0x1C0118AA8
 * Callers:
 *     NtUserGetMenuItemRect @ 0x1C0118910 (NtUserGetMenuItemRect.c)
 * Callees:
 *     ?GetMenuPwnd@@YAPEAUtagWND@@PEAU1@PEAUtagMENU@@@Z @ 0x1C0118B7C (-GetMenuPwnd@@YAPEAUtagWND@@PEAU1@PEAUtagMENU@@@Z.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C023B1E4 (xxxMNRecomputeBarIfNeeded.c)
 */

__int64 __fastcall xxxGetMenuItemRect(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // r15
  struct tagWND *MenuPwnd; // rbx
  int v9; // r14d
  int v10; // esi
  int v11; // ebx
  _DWORD *v12; // rcx
  int v13; // esi
  int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD v17[7]; // [rsp+20h] [rbp-38h] BYREF

  result = 0LL;
  v5 = a3;
  *(_QWORD *)a4 = 0LL;
  *(_QWORD *)(a4 + 8) = 0LL;
  MenuPwnd = (struct tagWND *)a1;
  if ( a3 < *(_DWORD *)(a2 + 52) )
  {
    if ( !a1 || (*(_BYTE *)(a1 + 45) & 4) != 0 )
      MenuPwnd = GetMenuPwnd((struct tagWND *)a1, (struct tagMENU *)a2);
    if ( !MenuPwnd )
      return 0LL;
    v9 = *((_BYTE *)MenuPwnd + 50) & 0x40;
    if ( (*(_DWORD *)(a2 + 40) & 1) != 0 )
    {
      v10 = (*((_BYTE *)MenuPwnd + 50) & 0x40) != 0 ? *((_DWORD *)MenuPwnd + 34) : *((_DWORD *)MenuPwnd + 32);
      v11 = *((_DWORD *)MenuPwnd + 33);
    }
    else
    {
      v17[0] = *(_QWORD *)(gptiCurrent + 376LL);
      *(_QWORD *)(gptiCurrent + 376LL) = v17;
      ++*((_DWORD *)MenuPwnd + 2);
      v17[1] = MenuPwnd;
      xxxMNRecomputeBarIfNeeded(MenuPwnd, a2);
      v10 = v9 ? *((_DWORD *)MenuPwnd + 30) : *((_DWORD *)MenuPwnd + 28);
      v11 = *((_DWORD *)MenuPwnd + 29);
      ThreadUnlock1(v16, v15);
    }
    if ( (unsigned int)v5 < *(_DWORD *)(a2 + 52) )
    {
      v12 = (_DWORD *)(*(_QWORD *)(a2 + 80) + 152 * v5);
      *(_DWORD *)(a4 + 8) = v12[20];
      *(_DWORD *)(a4 + 12) = v12[21];
      if ( v9 )
        v13 = v10 - (v12[20] + v12[18]);
      else
        v13 = v12[18] + v10;
      v14 = v12[19] + v11;
      result = 1LL;
      *(_DWORD *)(a4 + 12) += v14;
      *(_DWORD *)a4 += v13;
      *(_DWORD *)(a4 + 8) += v13;
      *(_DWORD *)(a4 + 4) += v14;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
