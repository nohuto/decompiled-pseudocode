/*
 * XREFs of xxxMNCloseHierarchy @ 0x1C010CC10
 * Callers:
 *     xxxMNOpenHierarchy @ 0x1C01066B8 (xxxMNOpenHierarchy.c)
 *     xxxMenuWindowProc @ 0x1C0109290 (xxxMenuWindowProc.c)
 *     xxxMNCancel @ 0x1C010C8EC (xxxMNCancel.c)
 *     xxxMNSelectItem @ 0x1C010D008 (xxxMNSelectItem.c)
 *     xxxMNKeyDown @ 0x1C0216E44 (xxxMNKeyDown.c)
 *     xxxEndMenu @ 0x1C023C63C (xxxEndMenu.c)
 *     xxxMNKeyFilter @ 0x1C023D934 (xxxMNKeyFilter.c)
 * Callees:
 *     xxxSendMessage @ 0x1C0068C74 (xxxSendMessage.c)
 *     xxxWindowEvent @ 0x1C0070F10 (xxxWindowEvent.c)
 *     FindTimer @ 0x1C0079B7C (FindTimer.c)
 *     xxxActivateThisWindow @ 0x1C007F264 (xxxActivateThisWindow.c)
 *     xxxDestroyWindow @ 0x1C0088250 (xxxDestroyWindow.c)
 *     MNAnimate @ 0x1C010D98C (MNAnimate.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C010D9F0 (safe_cast_fnid_to_PMENUWND.c)
 *     xxxSendMenuSelect @ 0x1C010DA10 (xxxSendMenuSelect.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C0215A48 (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 */

__int64 __fastcall xxxMNCloseHierarchy(unsigned int *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rdi
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 *v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct tagMENUWND *v13; // rax
  __int64 v14; // r10
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // [rsp+30h] [rbp-50h] BYREF
  __int64 v24; // [rsp+38h] [rbp-48h]
  __int64 v25; // [rsp+48h] [rbp-38h] BYREF
  __int64 v26; // [rsp+50h] [rbp-30h]
  _QWORD v27[4]; // [rsp+60h] [rbp-20h] BYREF

  MNAnimate(a2, 0LL);
  result = *a1;
  if ( (result & 0x20) != 0 )
  {
    if ( (result & 0x4000) != 0 )
    {
      FindTimer(*((_QWORD *)a1 + 2), 0xFFFFLL, 0, 1, 0LL);
      *a1 &= ~0x4000u;
    }
    v5 = *((_QWORD *)a1 + 3);
    if ( v5 )
    {
      v25 = *(_QWORD *)(gptiCurrent + 376LL);
      *(_QWORD *)(gptiCurrent + 376LL) = &v25;
      v26 = v5;
      ++*(_DWORD *)(v5 + 8);
      xxxSendMessage((struct tagWND *)v5, 0x1E4u, 0LL, 0LL);
      v6 = *(_DWORD *)(a2 + 8);
      if ( (v6 & 0x100) != 0 && (v6 & 4) != 0 && (*a1 & 1) == 0 )
      {
        v7 = *((_QWORD *)a1 + 2);
        v23 = *(_QWORD *)(gptiCurrent + 376LL);
        *(_QWORD *)(gptiCurrent + 376LL) = &v23;
        v24 = v7;
        ++*(_DWORD *)(v7 + 8);
        xxxActivateThisWindow(*((struct tagWND **)a1 + 2), 0, 0, 0);
        ThreadUnlock1(v9, v8);
      }
      if ( (*(_DWORD *)(a2 + 8) & 0x100) == 0 )
      {
        if ( gpqForeground )
        {
          v10 = *(__int64 **)(gpqForeground + 72LL);
          if ( v10 )
          {
            if ( gpqForeground == *(_QWORD *)(gptiCurrent + 392LL) )
              xxxWindowEvent(0x80000005, v10, 0, 1, 33);
          }
        }
      }
      xxxWindowEvent(7u, (__int64 *)v5, -4, 0, 0);
      if ( ThreadUnlock1(v12, v11) )
      {
        if ( !(unsigned int)xxxDestroyWindow(v5) )
        {
          v13 = (struct tagMENUWND *)safe_cast_fnid_to_PMENUWND(v5);
          if ( v13 )
            xxxMNDestroyHandler(v13);
        }
      }
      HMAssignmentUnlock(a1 + 6);
      *a1 &= ~0x20u;
    }
    if ( (*a1 & 1) != 0 )
      HMAssignmentUnlock(a1 + 14);
    else
      HMAssignmentLock(*((_QWORD *)a1 + 8) + 56LL, *((_QWORD *)a1 + 2));
    result = *(unsigned int *)(a2 + 8);
    if ( (result & 4) != 0 && a1[20] != -1 )
    {
      result = *((_QWORD *)a1 + 8);
      v14 = *(_QWORD *)(result + 8);
      if ( v14 )
      {
        v23 = *(_QWORD *)(gptiCurrent + 376LL);
        *(_QWORD *)(gptiCurrent + 376LL) = &v23;
        v24 = v14;
        ++*(_DWORD *)(v14 + 8);
        v15 = *((_QWORD *)a1 + 2);
        v25 = *(_QWORD *)(gptiCurrent + 376LL);
        *(_QWORD *)(gptiCurrent + 376LL) = &v25;
        v26 = v15;
        ++*(_DWORD *)(v15 + 8);
        v16 = *((_QWORD *)a1 + 5);
        v27[0] = *(_QWORD *)(gptiCurrent + 376LL);
        *(_QWORD *)(gptiCurrent + 376LL) = v27;
        v27[1] = v16;
        if ( v16 )
          ++*(_DWORD *)(v16 + 8);
        xxxSendMenuSelect(v14, *((_QWORD *)a1 + 2), *((_QWORD *)a1 + 5), a1[20], a2);
        ThreadUnlock1(v18, v17);
        ThreadUnlock1(v20, v19);
        return ThreadUnlock1(v22, v21);
      }
    }
  }
  return result;
}
