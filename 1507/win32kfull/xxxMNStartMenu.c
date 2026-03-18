/*
 * XREFs of xxxMNStartMenu @ 0x1C0107794
 * Callers:
 *     xxxTrackPopupMenuEx @ 0x1C0108A2C (xxxTrackPopupMenuEx.c)
 *     xxxMNLoop @ 0x1C010B494 (xxxMNLoop.c)
 *     xxxMNKeyFilter @ 0x1C023D934 (xxxMNKeyFilter.c)
 * Callees:
 *     _GetKeyState @ 0x1C0041BD0 (_GetKeyState.c)
 *     xxxSendMessage @ 0x1C0068C74 (xxxSendMessage.c)
 *     xxxWindowEvent @ 0x1C0070F10 (xxxWindowEvent.c)
 *     xxxMNSetCapture @ 0x1C0107ABC (xxxMNSetCapture.c)
 *     xxxGetSysMenu @ 0x1C0107D14 (xxxGetSysMenu.c)
 *     LockPopupMenu @ 0x1C010CEB4 (LockPopupMenu.c)
 *     xxxMNReleaseCapture @ 0x1C010DB8C (xxxMNReleaseCapture.c)
 *     MNPositionSysMenu @ 0x1C0118354 (MNPositionSysMenu.c)
 *     ?xxxGetInitMenuParam@@YAPEAUtagMENU@@PEAUtagWND@@PEAH@Z @ 0x1C01FCEC8 (-xxxGetInitMenuParam@@YAPEAUtagMENU@@PEAUtagWND@@PEAH@Z.c)
 *     xxxUserModeCallback @ 0x1C0215618 (xxxUserModeCallback.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C023B1E4 (xxxMNRecomputeBarIfNeeded.c)
 */

_BOOL8 __fastcall xxxMNStartMenu(unsigned __int8 *a1, __int64 a2, int a3)
{
  __int64 v6; // rsi
  unsigned int v7; // ecx
  __int64 v8; // rcx
  struct tagMENU *InitMenuParam; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 SysMenu; // rax
  unsigned __int64 *v13; // rax
  unsigned __int64 v14; // r8
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 CurrentProcessWin32Process; // rbp
  int v21; // r9d
  int v22; // eax
  int v23; // edi
  __int64 *v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // [rsp+30h] [rbp-48h] BYREF
  __int64 v31; // [rsp+38h] [rbp-40h]
  _QWORD v32[3]; // [rsp+48h] [rbp-30h] BYREF
  int v33; // [rsp+80h] [rbp+8h] BYREF

  if ( (*(_DWORD *)a1 & 0x8000) != 0 )
    return 0LL;
  v6 = *((_QWORD *)a1 + 1);
  v32[0] = *(_QWORD *)(gptiCurrent + 376LL);
  *(_QWORD *)(gptiCurrent + 376LL) = v32;
  v32[1] = v6;
  if ( v6 )
    ++*(_DWORD *)(v6 + 8);
  *(_DWORD *)(a2 + 8) |= 1u;
  *(_DWORD *)(a2 + 20) = a3;
  v7 = *(_DWORD *)(a2 + 8) ^ (*(_DWORD *)(a2 + 8) ^ ((unsigned __int16)GetKeyState(1u) >> 15 << 6)) & 0x40;
  *(_DWORD *)(a2 + 8) = v7 ^ ((unsigned __int8)v7 ^ (unsigned __int8)(v7 >> 3)) & 8;
  xxxMNSetCapture(a1, a2);
  xxxSendMessage((struct tagWND *)v6, 0x20u, *(_QWORD *)v6, 2LL);
  if ( (*(_DWORD *)a1 & 1) != 0 )
  {
    InitMenuParam = xxxGetInitMenuParam((struct tagWND *)v6, &v33);
    if ( !InitMenuParam )
    {
      *(_DWORD *)(a2 + 8) &= ~1u;
      xxxMNReleaseCapture(a2);
      ThreadUnlock1(v11, v10);
      return 0LL;
    }
    LockPopupMenu(a1, a1 + 40, InitMenuParam);
    v8 = (unsigned int)v33;
    *(_DWORD *)a1 ^= (*(_DWORD *)a1 ^ (4 * (v33 != 0))) & 4;
    if ( !(_DWORD)v8 )
    {
      SysMenu = xxxGetSysMenu(v6, 0LL);
      LockPopupMenu(a1, a1 + 48, SysMenu);
    }
  }
  *(_DWORD *)(a2 + 8) ^= (*(_DWORD *)(a2 + 8) ^ (2 * ((*a1 >> 2) & 1))) & 2;
  if ( (*(_DWORD *)a1 & 0x800) == 0 )
  {
    if ( (*(_DWORD *)a1 & 0xC) == 0xC )
      v13 = (unsigned __int64 *)xxxGetInitMenuParam((struct tagWND *)v6, 0LL);
    else
      v13 = (unsigned __int64 *)*((_QWORD *)a1 + 5);
    if ( v13 )
      v14 = *v13;
    else
      v14 = 0LL;
    xxxSendMessage((struct tagWND *)v6, 0x116u, v14, 0LL);
  }
  v15 = *(_DWORD *)a1;
  if ( (*(_DWORD *)a1 & 8) == 0 )
  {
    if ( (v15 & 4) != 0 )
    {
      v16 = *((_QWORD *)a1 + 5);
LABEL_24:
      MNPositionSysMenu(v6, v16);
      goto LABEL_25;
    }
    if ( (v15 & 1) != 0 )
    {
      v17 = *((_QWORD *)a1 + 5);
      if ( v17 )
      {
        *(_DWORD *)(v17 + 40) |= 0x200u;
        v30 = *(_QWORD *)(gptiCurrent + 376LL);
        *(_QWORD *)(gptiCurrent + 376LL) = &v30;
        v31 = v17;
        ++*(_DWORD *)(v17 + 8);
        xxxMNRecomputeBarIfNeeded(v6, *((_QWORD *)a1 + 5));
        *(_DWORD *)(v31 + 40) &= ~0x200u;
        ThreadUnlock1(v19, v18);
        v16 = *((_QWORD *)a1 + 6);
        goto LABEL_24;
      }
    }
  }
LABEL_25:
  if ( (*(_DWORD *)a1 & 0x8000) == 0 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 40LL) & 0x40000000) != 0 )
      *(_DWORD *)(a2 + 8) |= 0x100u;
    if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 40LL) & 0x20000000) == 0 )
      goto LABEL_33;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
    if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x100000) == 0 )
    {
      if ( (int)xxxUserModeCallback(98, 0, 0, v21) < 0 )
      {
LABEL_33:
        if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 40LL) & 0x10000000) != 0 )
          *(_DWORD *)(a2 + 8) |= 0x800u;
        if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 40LL) & 0x8000000) != 0 )
          *(_DWORD *)(a2 + 8) |= 0x20000u;
        goto LABEL_37;
      }
      *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x100000u;
    }
    *(_DWORD *)(a2 + 8) |= 0x400u;
    goto LABEL_33;
  }
LABEL_37:
  v22 = *(_DWORD *)(a2 + 8);
  v23 = -1;
  if ( (v22 & 0x100) == 0 )
  {
    if ( gpqForeground )
    {
      v24 = *(__int64 **)(gpqForeground + 72LL);
      if ( v24 )
      {
        v25 = *(_QWORD *)(v6 + 16);
        if ( gpqForeground == *(_QWORD *)(v25 + 392) )
        {
          v26 = v24[2];
          if ( (*(_DWORD *)a1 & 4) != 0 )
            v27 = -1;
          else
            v27 = (*(_DWORD *)a1 & 1) != 0 ? 0xFFFFFFFD : 0;
          if ( v25 == v26 )
            v24 = (__int64 *)v6;
          xxxWindowEvent(0x80000004, v24, v27, 1, (v26 != v25 ? 0x10 : 0) | 0x21);
        }
      }
    }
  }
  if ( (*(_DWORD *)a1 & 4) == 0 )
    v23 = (*(_DWORD *)a1 & 1) != 0 ? 0xFFFFFFFD : 0;
  xxxWindowEvent(4u, (__int64 *)v6, v23, 0, 0);
  ThreadUnlock1(v29, v28);
  return ((*(_DWORD *)a1 >> 15) & 1) == 0;
}
