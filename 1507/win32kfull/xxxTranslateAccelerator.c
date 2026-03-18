/*
 * XREFs of xxxTranslateAccelerator @ 0x1C00414D0
 * Callers:
 *     NtUserTranslateAccelerator @ 0x1C00412F0 (NtUserTranslateAccelerator.c)
 * Callees:
 *     _GetKeyState @ 0x1C0041BD0 (_GetKeyState.c)
 *     SystoChar @ 0x1C0041C64 (SystoChar.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0069380 (xxxSendTransformableMessageTimeout.c)
 *     xxxSetSysMenu @ 0x1C0107E60 (xxxSetSysMenu.c)
 *     ?xxxTA_AccelerateMenu@@YAIQEAUtagWND@@QEAUtagMENU@@IQEAPEAUHMENU__@@@Z @ 0x1C01221C8 (-xxxTA_AccelerateMenu@@YAIQEAUtagWND@@QEAUtagMENU@@IQEAPEAUHMENU__@@@Z.c)
 *     xxxLoadSysDesktopMenu @ 0x1C0128B38 (xxxLoadSysDesktopMenu.c)
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
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // r9
  char v16; // si
  int v18; // eax
  unsigned __int64 v19; // r15
  int v20; // r12d
  unsigned int v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 SysDesktopMenu; // rbx
  __int64 *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v29; // eax
  HMENU v30; // [rsp+50h] [rbp-30h] BYREF
  __int64 v31; // [rsp+58h] [rbp-28h]
  __int64 v32; // [rsp+60h] [rbp-20h] BYREF
  __int64 v33; // [rsp+68h] [rbp-18h]

  v3 = 0;
  v4 = a3;
  v30 = 0LL;
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
  v18 = v8 - 2;
  if ( v18 )
  {
    v29 = v18 - 2;
    if ( !v29 )
      goto LABEL_3;
    if ( v29 != 2 )
      return 0LL;
  }
  v9 = 0;
LABEL_4:
  v10 = *(_QWORD *)(gptiCurrent + 400LL);
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
  v14 = v9;
  v15 = 0LL;
  v31 = v9;
  do
  {
    v16 = *(_BYTE *)v6;
    if ( *(unsigned __int16 *)(v6 + 2) == *(_QWORD *)(v4 + 16)
      && (v14 != 0) == (v16 & 1)
      && (!v14 || (((unsigned __int8)v3 ^ (unsigned __int8)v16) & 0xC) == 0)
      && (((unsigned __int8)v3 ^ (unsigned __int8)v16) & 0x10) == 0 )
    {
      v19 = *(unsigned __int16 *)(v6 + 4);
      v20 = 0;
      v21 = 0;
      if ( *(_WORD *)(v6 + 4) )
      {
        v22 = *((_QWORD *)a1 + 24);
        if ( (*((_BYTE *)a1 + 55) & 0x40) != 0 )
          goto LABEL_30;
        v32 = *(_QWORD *)(gptiCurrent + 376LL);
        *(_QWORD *)(gptiCurrent + 376LL) = &v32;
        v33 = v22;
        if ( v22 )
          ++*(_DWORD *)(v22 + 8);
        v21 = xxxTA_AccelerateMenu(a1, (struct tagMENU *const)v22, v19, &v30);
        ThreadUnlock1(v24, v23);
        v15 = 0LL;
        if ( (*((_BYTE *)a1 + 55) & 0x40) != 0 || !v21 )
        {
LABEL_30:
          SysDesktopMenu = *((_QWORD *)a1 + 23);
          if ( SysDesktopMenu || (*((_BYTE *)a1 + 54) & 8) == 0 )
          {
            v32 = *(_QWORD *)(gptiCurrent + 376LL);
            *(_QWORD *)(gptiCurrent + 376LL) = &v32;
            v33 = SysDesktopMenu;
            if ( SysDesktopMenu )
              ++*(_DWORD *)(SysDesktopMenu + 8);
          }
          else
          {
            v26 = (__int64 *)(*((_QWORD *)a1 + 3) + 48LL);
            SysDesktopMenu = *v26;
            if ( !*v26 )
              SysDesktopMenu = xxxLoadSysDesktopMenu(v26, 16LL, v13, 0LL);
            v32 = *(_QWORD *)(gptiCurrent + 376LL);
            *(_QWORD *)(gptiCurrent + 376LL) = &v32;
            v33 = SysDesktopMenu;
            if ( SysDesktopMenu )
              ++*(_DWORD *)(SysDesktopMenu + 8);
            xxxSetSysMenu(a1, v22, v13, v15);
          }
          v21 = xxxTA_AccelerateMenu(a1, (struct tagMENU *const)SysDesktopMenu, v19, &v30);
          if ( v21 )
            v20 = 1;
          ThreadUnlock1(v28, v27);
          v15 = 0LL;
        }
      }
      if ( (v21 & 1) == 0
        && (!v21
         || ((*((_BYTE *)a1 + 55) & 0x20) == 0 || v20)
         && !*(_QWORD *)(*(_QWORD *)(gptiCurrent + 392LL) + 64LL)
         && (*((_BYTE *)a1 + 55) & 8) == 0) )
      {
        _InterlockedAdd(&glSendMessage, 1u);
        if ( v20 )
          xxxSendTransformableMessageTimeout(a1, 0x112u, v19, 0x10000LL, 0, 0, 0LL, 1, 0);
        else
          xxxSendTransformableMessageTimeout(a1, 0x111u, v19 | 0x10000, 0LL, 0, 0, 0LL, 1, 1);
        v16 = 0x80;
        v15 = 0LL;
      }
      if ( v30 )
      {
        _InterlockedAdd(&glSendMessage, 1u);
        xxxSendTransformableMessageTimeout(a1, 0x125u, (unsigned __int64)v30, 0LL, 0, 0, 0LL, 1, 1);
        v15 = 0LL;
        v30 = 0LL;
      }
      v14 = v31;
      v4 = a3;
      v7 = 1;
    }
    v6 += 6LL;
  }
  while ( v16 >= 0 && !v7 );
  return v7;
}
