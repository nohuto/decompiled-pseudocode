/*
 * XREFs of xxxSetMenuInfo @ 0x1C0052DC4
 * Callers:
 *     xxxLoadSysMenu @ 0x1C004FD24 (xxxLoadSysMenu.c)
 *     xxxSetMenuInfo @ 0x1C0052DC4 (xxxSetMenuInfo.c)
 *     NtUserThunkedMenuInfo @ 0x1C011D870 (NtUserThunkedMenuInfo.c)
 * Callees:
 *     xxxSetMenuInfo @ 0x1C0052DC4 (xxxSetMenuInfo.c)
 *     MNGetPopupFromMenu @ 0x1C005573C (MNGetPopupFromMenu.c)
 *     xxxMNUpdateShownMenu @ 0x1C023C3A0 (xxxMNUpdateShownMenu.c)
 */

__int64 __fastcall xxxSetMenuInfo(__int64 a1, __int64 a2)
{
  int v4; // ecx
  int v5; // edx
  unsigned int v6; // ebp
  int v7; // eax
  unsigned int v8; // esi
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD v15[7]; // [rsp+20h] [rbp-38h] BYREF
  int v16; // [rsp+68h] [rbp+10h]
  int v17; // [rsp+70h] [rbp+18h]

  v4 = 0;
  v5 = 0;
  v16 = 0;
  v17 = 0;
  v6 = 1;
  if ( (*(_DWORD *)(a2 + 4) & 0x10) != 0 )
  {
    v4 = 1;
    v16 = 1;
    *(_DWORD *)(a1 + 40) ^= (*(_DWORD *)(a1 + 40) ^ *(_DWORD *)(a2 + 8)) & 0xFC000000;
    v5 = 0;
  }
  if ( (*(_DWORD *)(a2 + 4) & 1) != 0 )
  {
    v4 = 1;
    v16 = 1;
    *(_DWORD *)(a1 + 100) = *(_DWORD *)(a2 + 12);
  }
  if ( (*(_DWORD *)(a2 + 4) & 2) != 0 )
  {
    v5 = 1;
    *(_QWORD *)(a1 + 112) = *(_QWORD *)(a2 + 16);
    v17 = 1;
    if ( (*(_BYTE *)(a1 + 128) & 3) != 0 )
      v6 = 5;
  }
  if ( (*(_DWORD *)(a2 + 4) & 4) != 0 )
    *(_DWORD *)(a1 + 96) = *(_DWORD *)(a2 + 24);
  if ( (*(_DWORD *)(a2 + 4) & 8) != 0 )
    *(_QWORD *)(a1 + 104) = *(_QWORD *)(a2 + 32);
  if ( *(int *)(a2 + 4) < 0 )
  {
    v7 = *(_DWORD *)(a1 + 52);
    v8 = 0;
    v9 = v7 ? *(_QWORD *)(a1 + 80) : 0LL;
    if ( v7 )
    {
      do
      {
        if ( !v9 )
          break;
        v10 = *(_QWORD *)(v9 + 16);
        if ( v10 )
        {
          v15[0] = *(_QWORD *)(gptiCurrent + 376LL);
          *(_QWORD *)(gptiCurrent + 376LL) = v15;
          v15[1] = v10;
          ++*(_DWORD *)(v10 + 8);
          xxxSetMenuInfo(*(_QWORD *)(v9 + 16), a2);
          ThreadUnlock1(v14, v13);
        }
        if ( ++v8 == -1 || v8 >= *(_DWORD *)(a1 + 52) )
          v9 = 0LL;
        else
          v9 = *(_QWORD *)(a1 + 80) + 152LL * v8;
      }
      while ( v8 < *(_DWORD *)(a1 + 52) );
      v4 = v16;
      v5 = v17;
    }
  }
  if ( v4 )
  {
    *(_DWORD *)(a1 + 56) = 0;
    *(_DWORD *)(a1 + 60) = 0;
  }
  else if ( !v5 )
  {
    return 1LL;
  }
  v11 = MNGetPopupFromMenu(a1, 0LL);
  if ( v11 )
    xxxMNUpdateShownMenu(v11, 0LL, v6);
  return 1LL;
}
