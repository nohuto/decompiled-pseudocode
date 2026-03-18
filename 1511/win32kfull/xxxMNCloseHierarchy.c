/*
 * XREFs of xxxMNCloseHierarchy @ 0x1C0138900
 * Callers:
 *     xxxMNOpenHierarchy @ 0x1C0133768 (xxxMNOpenHierarchy.c)
 *     xxxMenuWindowProc @ 0x1C0135770 (xxxMenuWindowProc.c)
 *     xxxMNCancel @ 0x1C01385D8 (xxxMNCancel.c)
 *     xxxMNSelectItem @ 0x1C0138CE0 (xxxMNSelectItem.c)
 *     xxxMNKeyDown @ 0x1C0216CA8 (xxxMNKeyDown.c)
 *     xxxEndMenu @ 0x1C023C80C (xxxEndMenu.c)
 *     xxxMNKeyFilter @ 0x1C023DB04 (xxxMNKeyFilter.c)
 * Callees:
 *     xxxSendMessage @ 0x1C0057FE8 (xxxSendMessage.c)
 *     xxxWindowEvent @ 0x1C00608D0 (xxxWindowEvent.c)
 *     xxxDestroyWindow @ 0x1C0068F30 (xxxDestroyWindow.c)
 *     xxxActivateThisWindow @ 0x1C008E8B8 (xxxActivateThisWindow.c)
 *     FindTimer @ 0x1C00F646C (FindTimer.c)
 *     MNAnimate @ 0x1C01393FC (MNAnimate.c)
 *     xxxSendMenuSelect @ 0x1C0139480 (xxxSendMenuSelect.c)
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
  __int64 v13; // r10
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // [rsp+30h] [rbp-50h] BYREF
  __int64 v23; // [rsp+38h] [rbp-48h]
  __int64 v24; // [rsp+48h] [rbp-38h] BYREF
  __int64 v25; // [rsp+50h] [rbp-30h]
  _QWORD v26[4]; // [rsp+60h] [rbp-20h] BYREF

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
      v24 = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = &v24;
      v25 = v5;
      ++*(_DWORD *)(v5 + 8);
      xxxSendMessage((struct tagWND *)v5, 0x1E4u, 0LL, 0LL);
      v6 = *(_DWORD *)(a2 + 8);
      if ( (v6 & 0x100) != 0 && (v6 & 4) != 0 && (*a1 & 1) == 0 )
      {
        v7 = *((_QWORD *)a1 + 2);
        v22 = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = &v22;
        v23 = v7;
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
            if ( gpqForeground == *(_QWORD *)(gptiCurrent + 384LL) )
              xxxWindowEvent(0x80000005, v10, 0, 1, 33);
          }
        }
      }
      xxxWindowEvent(7u, (__int64 *)v5, -4, 0, 0);
      if ( ThreadUnlock1(v12, v11) )
        xxxDestroyWindow((_QWORD *)v5);
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
      v13 = *(_QWORD *)(result + 8);
      if ( v13 )
      {
        v22 = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = &v22;
        v23 = v13;
        ++*(_DWORD *)(v13 + 8);
        v14 = *((_QWORD *)a1 + 2);
        v24 = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = &v24;
        v25 = v14;
        ++*(_DWORD *)(v14 + 8);
        v15 = *((_QWORD *)a1 + 5);
        v26[0] = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = v26;
        v26[1] = v15;
        if ( v15 )
          ++*(_DWORD *)(v15 + 8);
        xxxSendMenuSelect(v13, *((_QWORD *)a1 + 2), *((_QWORD *)a1 + 5), a1[20], a2);
        ThreadUnlock1(v17, v16);
        ThreadUnlock1(v19, v18);
        return ThreadUnlock1(v21, v20);
      }
    }
  }
  return result;
}
