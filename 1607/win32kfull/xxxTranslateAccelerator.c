/*
 * XREFs of xxxTranslateAccelerator @ 0x1C0095174
 * Callers:
 *     NtUserTranslateAccelerator @ 0x1C0094F90 (NtUserTranslateAccelerator.c)
 * Callees:
 *     xxxSetSysMenu @ 0x1C0067980 (xxxSetSysMenu.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0087910 (xxxSendTransformableMessageTimeout.c)
 *     _GetKeyState @ 0x1C0095870 (_GetKeyState.c)
 *     SystoChar @ 0x1C0095904 (SystoChar.c)
 *     xxxLoadSysDesktopMenu @ 0x1C0130080 (xxxLoadSysDesktopMenu.c)
 *     ?xxxTA_AccelerateMenu@@YAIQEAUtagWND@@QEAUtagMENU@@IQEAPEAUHMENU__@@@Z @ 0x1C0150D68 (-xxxTA_AccelerateMenu@@YAIQEAUtagWND@@QEAUtagMENU@@IQEAPEAUHMENU__@@@Z.c)
 */

__int64 __fastcall xxxTranslateAccelerator(struct tagWND *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  __int64 v5; // r13
  unsigned int v6; // r15d
  int v7; // eax
  int v8; // ebx
  __int64 v9; // rax
  unsigned int v10; // esi
  __int64 v11; // rcx
  char v12; // r14
  __int64 v13; // rdx
  char v14; // si
  int v16; // eax
  __int64 v17; // r15
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

  v28 = 0LL;
  v3 = a3;
  if ( (gfInNumpadHexInput & 2) != 0 )
    return 0LL;
  v5 = a2 + 28;
  v6 = 0;
  v7 = SystoChar(*(unsigned int *)(a3 + 8), *(_QWORD *)(a3 + 24)) - 256;
  if ( !v7 )
  {
LABEL_3:
    v8 = 1;
    goto LABEL_4;
  }
  v16 = v7 - 2;
  if ( v16 )
  {
    v27 = v16 - 2;
    if ( !v27 )
      goto LABEL_3;
    if ( v27 != 2 )
      return 0LL;
  }
  v8 = 0;
LABEL_4:
  v9 = *(_QWORD *)(gptiCurrent + 392LL);
  if ( v9
    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 48) + 32LL) + 80LL) & 1) != 0
    && (GetKeyState(165LL) & 0x8000) != 0 )
  {
    v11 = 163LL;
    v10 = 164;
  }
  else
  {
    v10 = 18;
    v11 = 17LL;
  }
  v12 = 0;
  if ( (GetKeyState(v11) & 0x8000u) != 0LL )
    v12 = 8;
  if ( (GetKeyState(v10) & 0x8000u) != 0LL )
    v12 |= 0x10u;
  if ( (GetKeyState(16LL) & 0x8000) != 0 )
    v12 |= 4u;
  v13 = v8;
  v29 = v8;
  do
  {
    v14 = *(_BYTE *)v5;
    if ( *(unsigned __int16 *)(v5 + 2) == *(_QWORD *)(v3 + 16)
      && (v13 != 0) == (v14 & 1)
      && (!v13 || (((unsigned __int8)v12 ^ (unsigned __int8)v14) & 0xC) == 0)
      && (((unsigned __int8)v12 ^ (unsigned __int8)v14) & 0x10) == 0 )
    {
      v17 = *(unsigned __int16 *)(v5 + 4);
      v18 = 0;
      v19 = 0;
      if ( *(_WORD *)(v5 + 4) )
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
         && !*(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 72LL)
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
        xxxSendTransformableMessageTimeout(a1, 293LL, (__int64)v28, 0LL, 0, 0, 0LL, 1, 1);
        v28 = 0LL;
      }
      v13 = v29;
      v3 = a3;
      v6 = 1;
    }
    v5 += 6LL;
  }
  while ( v14 >= 0 && !v6 );
  return v6;
}
