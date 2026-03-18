/*
 * XREFs of xxxMNStartMenu @ 0x1C013B778
 * Callers:
 *     xxxTrackPopupMenuEx @ 0x1C013BE70 (xxxTrackPopupMenuEx.c)
 *     xxxMNLoop @ 0x1C0141414 (xxxMNLoop.c)
 *     xxxMNKeyFilter @ 0x1C02354DC (xxxMNKeyFilter.c)
 * Callees:
 *     xxxSendMessage @ 0x1C0074E60 (xxxSendMessage.c)
 *     xxxWindowEvent @ 0x1C0087F70 (xxxWindowEvent.c)
 *     _GetKeyState @ 0x1C0095870 (_GetKeyState.c)
 *     xxxGetSysMenu @ 0x1C00B83A0 (xxxGetSysMenu.c)
 *     xxxMNSetCapture @ 0x1C013B99C (xxxMNSetCapture.c)
 *     xxxMNReleaseCapture @ 0x1C01404F0 (xxxMNReleaseCapture.c)
 *     LockPopupMenu @ 0x1C0142D1C (LockPopupMenu.c)
 *     ?xxxGetInitMenuParam@@YAPEAUtagMENU@@PEAUtagWND@@PEAH@Z @ 0x1C01F45F8 (-xxxGetInitMenuParam@@YAPEAUtagMENU@@PEAUtagWND@@PEAH@Z.c)
 *     MNPositionSysMenu @ 0x1C01F46E8 (MNPositionSysMenu.c)
 *     xxxUserModeCallback @ 0x1C020E1A4 (xxxUserModeCallback.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C0232EDC (xxxMNRecomputeBarIfNeeded.c)
 */

_BOOL8 __fastcall xxxMNStartMenu(unsigned __int8 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rsi
  unsigned int v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int64 *v10; // rax
  unsigned __int64 v11; // r8
  int v12; // eax
  int v13; // eax
  int v14; // edi
  __int64 *v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  struct tagMENU *InitMenuParam; // rax
  __int64 SysMenu; // rax
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 CurrentProcessWin32Process; // rbp
  int v30; // r9d
  __int64 v31; // [rsp+30h] [rbp-48h] BYREF
  __int64 v32; // [rsp+38h] [rbp-40h]
  _QWORD v33[3]; // [rsp+48h] [rbp-30h] BYREF
  int v34; // [rsp+80h] [rbp+8h] BYREF

  if ( (*(_DWORD *)a1 & 0x8000) != 0 )
    return 0LL;
  v6 = *((_QWORD *)a1 + 1);
  v33[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v33;
  v33[1] = v6;
  if ( v6 )
    ++*(_DWORD *)(v6 + 8);
  *(_DWORD *)(a2 + 8) |= 1u;
  *(_DWORD *)(a2 + 20) = a3;
  v7 = *(_DWORD *)(a2 + 8) ^ (*(_DWORD *)(a2 + 8) ^ ((unsigned __int16)GetKeyState(1u, a2, a3, a4) >> 15 << 6)) & 0x40;
  *(_DWORD *)(a2 + 8) = v7 ^ ((unsigned __int8)v7 ^ (unsigned __int8)(v7 >> 3)) & 8;
  xxxMNSetCapture(a1, a2);
  xxxSendMessage((struct tagWND *)v6, 0x20u, *(_QWORD *)v6, 2LL);
  if ( (*(_DWORD *)a1 & 1) != 0 )
  {
    InitMenuParam = xxxGetInitMenuParam((struct tagWND *)v6, &v34);
    if ( InitMenuParam )
    {
      LockPopupMenu(a1, a1 + 40, InitMenuParam);
      v9 = (unsigned int)v34;
      *(_DWORD *)a1 ^= (*(_DWORD *)a1 ^ (4 * (v34 != 0))) & 4;
      if ( !(_DWORD)v9 )
      {
        SysMenu = xxxGetSysMenu((_BYTE *)v6, 0);
        LockPopupMenu(a1, a1 + 48, SysMenu);
      }
      goto LABEL_5;
    }
    *(_DWORD *)(a2 + 8) &= ~1u;
    xxxMNReleaseCapture(a2);
    ThreadUnlock1(v23, v22);
    return 0LL;
  }
LABEL_5:
  *(_DWORD *)(a2 + 8) ^= (*(_DWORD *)(a2 + 8) ^ (2 * ((*a1 >> 2) & 1))) & 2;
  if ( (*(_DWORD *)a1 & 0x800) == 0 )
  {
    if ( (*(_DWORD *)a1 & 0xC) == 0xC )
      v10 = (unsigned __int64 *)xxxGetInitMenuParam((struct tagWND *)v6, 0LL);
    else
      v10 = (unsigned __int64 *)*((_QWORD *)a1 + 5);
    if ( v10 )
      v11 = *v10;
    else
      v11 = 0LL;
    xxxSendMessage((struct tagWND *)v6, 0x116u, v11, 0LL);
  }
  v12 = *(_DWORD *)a1;
  if ( (*(_DWORD *)a1 & 8) == 0 )
  {
    if ( (v12 & 4) != 0 )
    {
      v26 = *((_QWORD *)a1 + 5);
    }
    else
    {
      if ( (v12 & 1) == 0 )
        goto LABEL_12;
      v8 = *((_QWORD *)a1 + 5);
      if ( !v8 )
        goto LABEL_12;
      *(_DWORD *)(v8 + 40) |= 0x200u;
      v31 = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = &v31;
      v32 = v8;
      ++*(_DWORD *)(v8 + 8);
      xxxMNRecomputeBarIfNeeded(v6, *((_QWORD *)a1 + 5));
      *(_DWORD *)(v32 + 40) &= ~0x200u;
      ThreadUnlock1(v28, v27);
      v26 = *((_QWORD *)a1 + 6);
    }
    MNPositionSysMenu(v6, v26);
  }
LABEL_12:
  if ( (*(_DWORD *)a1 & 0x8000) == 0 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 40LL) & 0x40000000) != 0 )
      *(_DWORD *)(a2 + 8) |= 0x100u;
    if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 40LL) & 0x20000000) == 0 )
      goto LABEL_16;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9, v8);
    if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x100000) == 0 )
    {
      if ( (int)xxxUserModeCallback(99, 0, 0, v30) < 0 )
      {
LABEL_16:
        if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 40LL) & 0x10000000) != 0 )
          *(_DWORD *)(a2 + 8) |= 0x800u;
        if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 40LL) & 0x8000000) != 0 )
          *(_DWORD *)(a2 + 8) |= 0x20000u;
        goto LABEL_20;
      }
      *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x100000u;
    }
    *(_DWORD *)(a2 + 8) |= 0x400u;
    goto LABEL_16;
  }
LABEL_20:
  v13 = *(_DWORD *)(a2 + 8);
  v14 = -1;
  if ( (v13 & 0x100) == 0 )
  {
    if ( gpqForeground )
    {
      v15 = *(__int64 **)(gpqForeground + 80LL);
      if ( v15 )
      {
        v16 = *(_QWORD *)(v6 + 16);
        if ( gpqForeground == *(_QWORD *)(v16 + 384) )
        {
          v17 = v15[2];
          if ( (*(_DWORD *)a1 & 4) != 0 )
            v18 = -1;
          else
            v18 = (*(_DWORD *)a1 & 1) != 0 ? 0xFFFFFFFD : 0;
          if ( v16 == v17 )
            v15 = (__int64 *)v6;
          xxxWindowEvent(0x80000004, v15, v18, 1, (v17 != v16 ? 0x10 : 0) | 0x21);
        }
      }
    }
  }
  if ( (*(_DWORD *)a1 & 4) == 0 )
    v14 = (*(_DWORD *)a1 & 1) != 0 ? 0xFFFFFFFD : 0;
  xxxWindowEvent(4u, (__int64 *)v6, v14, 0, 0);
  ThreadUnlock1(v20, v19);
  return ((*(_DWORD *)a1 >> 15) & 1) == 0;
}
