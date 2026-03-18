/*
 * XREFs of xxxTranslateAccelerator @ 0x1C0092F94
 * Callers:
 *     NtUserTranslateAccelerator @ 0x1C0092DB0 (NtUserTranslateAccelerator.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C0058D90 (xxxSendTransformableMessageTimeout.c)
 *     xxxSetSysMenu @ 0x1C0072F20 (xxxSetSysMenu.c)
 *     _GetKeyState @ 0x1C00936A0 (_GetKeyState.c)
 *     SystoChar @ 0x1C0093734 (SystoChar.c)
 *     xxxLoadSysDesktopMenu @ 0x1C010FC68 (xxxLoadSysDesktopMenu.c)
 *     ?xxxTA_AccelerateMenu@@YAIQEAUtagWND@@QEAUtagMENU@@IQEAPEAUHMENU__@@@Z @ 0x1C014BEE8 (-xxxTA_AccelerateMenu@@YAIQEAUtagWND@@QEAUtagMENU@@IQEAPEAUHMENU__@@@Z.c)
 */

__int64 __fastcall xxxTranslateAccelerator(struct tagWND *a1, __int64 a2, __int64 a3)
{
  char v3; // r14
  __int64 v4; // r12
  __int64 v6; // r13
  unsigned int v7; // r15d
  int v8; // eax
  int v9; // ebx
  __int64 v10; // rax
  unsigned int v11; // esi
  __int64 v12; // rcx
  __int64 v13; // rdx
  char v14; // si
  int v16; // eax
  unsigned __int64 v17; // r15
  int v18; // r12d
  unsigned int v19; // ebx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 SysDesktopMenu; // rbx
  __int64 *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v27; // eax
  HMENU v28; // [rsp+50h] [rbp-30h] BYREF
  __int64 v29; // [rsp+58h] [rbp-28h]
  __int64 v30; // [rsp+60h] [rbp-20h] BYREF
  __int64 v31; // [rsp+68h] [rbp-18h]

  v3 = 0;
  v4 = a3;
  v28 = 0LL;
  if ( (gfInNumpadHexInput & 2) != 0 )
    return 0LL;
  v6 = a2 + 28;
  v7 = 0;
  v8 = SystoChar(*(unsigned int *)(a3 + 8), *(_QWORD *)(a3 + 24)) - 256;
  if ( !v8 )
  {
LABEL_3:
    v9 = 1;
    goto LABEL_4;
  }
  v16 = v8 - 2;
  if ( v16 )
  {
    v27 = v16 - 2;
    if ( !v27 )
      goto LABEL_3;
    if ( v27 != 2 )
      return 0LL;
  }
  v9 = 0;
LABEL_4:
  v10 = *(_QWORD *)(gptiCurrent + 392LL);
  if ( v10
    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 48) + 32LL) + 80LL) & 1) != 0
    && (GetKeyState(165LL) & 0x8000) != 0 )
  {
    v12 = 163LL;
    v11 = 164;
  }
  else
  {
    v11 = 18;
    v12 = 17LL;
  }
  if ( (GetKeyState(v12) & 0x8000) != 0 )
    v3 = 8;
  if ( (GetKeyState(v11) & 0x8000u) != 0LL )
    v3 |= 0x10u;
  if ( (GetKeyState(16LL) & 0x8000) != 0 )
    v3 |= 4u;
  v13 = v9;
  v29 = v9;
  do
  {
    v14 = *(_BYTE *)v6;
    if ( *(unsigned __int16 *)(v6 + 2) == *(_QWORD *)(v4 + 16)
      && (v13 != 0) == (v14 & 1)
      && (!v13 || (((unsigned __int8)v3 ^ (unsigned __int8)v14) & 0xC) == 0)
      && (((unsigned __int8)v3 ^ (unsigned __int8)v14) & 0x10) == 0 )
    {
      v17 = *(unsigned __int16 *)(v6 + 4);
      v18 = 0;
      v19 = 0;
      if ( *(_WORD *)(v6 + 4) )
      {
        v20 = *((_QWORD *)a1 + 24);
        if ( (*((_BYTE *)a1 + 55) & 0x40) != 0 )
          goto LABEL_30;
        v30 = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = &v30;
        v31 = v20;
        if ( v20 )
          ++*(_DWORD *)(v20 + 8);
        v19 = xxxTA_AccelerateMenu(a1, (struct tagMENU *const)v20, v17, &v28);
        ThreadUnlock1(v22, v21);
        if ( (*((_BYTE *)a1 + 55) & 0x40) != 0 || !v19 )
        {
LABEL_30:
          SysDesktopMenu = *((_QWORD *)a1 + 23);
          if ( SysDesktopMenu || (*((_BYTE *)a1 + 54) & 8) == 0 )
          {
            v30 = *(_QWORD *)(gptiCurrent + 368LL);
            *(_QWORD *)(gptiCurrent + 368LL) = &v30;
            v31 = SysDesktopMenu;
            if ( SysDesktopMenu )
              ++*(_DWORD *)(SysDesktopMenu + 8);
          }
          else
          {
            v24 = (__int64 *)(*((_QWORD *)a1 + 3) + 48LL);
            SysDesktopMenu = *v24;
            if ( !*v24 )
              SysDesktopMenu = xxxLoadSysDesktopMenu(v24, 16LL);
            v30 = *(_QWORD *)(gptiCurrent + 368LL);
            *(_QWORD *)(gptiCurrent + 368LL) = &v30;
            v31 = SysDesktopMenu;
            if ( SysDesktopMenu )
              ++*(_DWORD *)(SysDesktopMenu + 8);
            xxxSetSysMenu(a1);
          }
          v19 = xxxTA_AccelerateMenu(a1, (struct tagMENU *const)SysDesktopMenu, v17, &v28);
          if ( v19 )
            v18 = 1;
          ThreadUnlock1(v26, v25);
        }
      }
      if ( (v19 & 1) == 0
        && (!v19
         || ((*((_BYTE *)a1 + 55) & 0x20) == 0 || v18)
         && !*(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 64LL)
         && (*((_BYTE *)a1 + 55) & 8) == 0) )
      {
        _InterlockedAdd(&glSendMessage, 1u);
        if ( v18 )
          xxxSendTransformableMessageTimeout(a1, 274LL, v17, 0x10000LL, 0, 0, 0LL, 1, 0);
        else
          xxxSendTransformableMessageTimeout(a1, 273LL, v17 | 0x10000, 0LL, 0, 0, 0LL, 1, 1);
        v14 = 0x80;
      }
      if ( v28 )
      {
        _InterlockedAdd(&glSendMessage, 1u);
        xxxSendTransformableMessageTimeout(a1, 293LL, (unsigned __int64)v28, 0LL, 0, 0, 0LL, 1, 1);
        v28 = 0LL;
      }
      v13 = v29;
      v4 = a3;
      v7 = 1;
    }
    v6 += 6LL;
  }
  while ( v14 >= 0 && !v7 );
  return v7;
}
