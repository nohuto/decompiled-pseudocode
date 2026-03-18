/*
 * XREFs of xxxMNSelectItem @ 0x1C010D008
 * Callers:
 *     xxxMNButtonDown @ 0x1C01065E0 (xxxMNButtonDown.c)
 *     xxxMenuWindowProc @ 0x1C0109290 (xxxMenuWindowProc.c)
 *     xxxMNMouseMove @ 0x1C010BB60 (xxxMNMouseMove.c)
 *     xxxMNCancel @ 0x1C010C8EC (xxxMNCancel.c)
 *     xxxMNChar @ 0x1C0216834 (xxxMNChar.c)
 *     xxxMNKeyDown @ 0x1C0216E44 (xxxMNKeyDown.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C0217754 (xxxMNSwitchToAlternateMenu.c)
 *     xxxMNKeyFilter @ 0x1C023D934 (xxxMNKeyFilter.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C0070F10 (xxxWindowEvent.c)
 *     FindTimer @ 0x1C0079B7C (FindTimer.c)
 *     ?xxxMNDoScroll@@YAHPEAUtagPOPUPMENU@@IH@Z @ 0x1C0106670 (-xxxMNDoScroll@@YAHPEAUtagPOPUPMENU@@IH@Z.c)
 *     xxxMNCloseHierarchy @ 0x1C010CC10 (xxxMNCloseHierarchy.c)
 *     xxxMNInvertItem @ 0x1C010D450 (xxxMNInvertItem.c)
 *     MNAnimate @ 0x1C010D98C (MNAnimate.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C010D9F0 (safe_cast_fnid_to_PMENUWND.c)
 *     xxxSendMenuSelect @ 0x1C010DA10 (xxxSendMenuSelect.c)
 *     MNSetTimerToCloseHierarchy @ 0x1C02166B0 (MNSetTimerToCloseHierarchy.c)
 */

__int64 __fastcall xxxMNSelectItem(struct tagPOPUPMENU *a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rcx
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // r14
  __int64 v11; // r12
  __int64 v12; // rdi
  __int64 v13; // r12
  __int64 v14; // r14
  __int64 v15; // r8
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // ecx
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 *v28; // rdx
  unsigned int v29; // r8d
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // r10
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // [rsp+30h] [rbp-49h] BYREF
  __int64 v47; // [rsp+38h] [rbp-41h]
  __int64 v48; // [rsp+48h] [rbp-31h] BYREF
  __int64 v49; // [rsp+50h] [rbp-29h]
  _QWORD v50[3]; // [rsp+60h] [rbp-19h] BYREF
  _QWORD v51[3]; // [rsp+78h] [rbp-1h] BYREF
  _QWORD v52[4]; // [rsp+90h] [rbp+17h] BYREF
  __int64 v53; // [rsp+E0h] [rbp+67h]
  __int64 v54; // [rsp+F8h] [rbp+7Fh]

  if ( *((_DWORD *)a1 + 20) == a3 )
  {
    if ( a3 != -1 )
    {
      v6 = *((_QWORD *)a1 + 5);
      if ( a3 < *(_DWORD *)(v6 + 52) )
        return *(_QWORD *)(v6 + 80) + 152LL * a3;
    }
    return 0LL;
  }
  v8 = safe_cast_fnid_to_PMENUWND(*((_QWORD *)a1 + 4));
  v9 = v8;
  if ( (*(_DWORD *)a1 & 0x1000) != 0 && !v8 )
    return 0LL;
  MNAnimate(a2, 0LL);
  if ( (*(_DWORD *)a1 & 0x2000) != 0 )
  {
    FindTimer(*((_QWORD *)a1 + 2), 65534LL, 0, 1, 0LL);
    *(_DWORD *)a1 &= ~0x2000u;
  }
  v53 = *((_QWORD *)a1 + 5);
  v10 = v53;
  v48 = *(_QWORD *)(gptiCurrent + 376LL);
  *(_QWORD *)(gptiCurrent + 376LL) = &v48;
  v49 = v53;
  if ( v53 )
    ++*(_DWORD *)(v53 + 8);
  v54 = *((_QWORD *)a1 + 1);
  v11 = v54;
  v46 = *(_QWORD *)(gptiCurrent + 376LL);
  *(_QWORD *)(gptiCurrent + 376LL) = &v46;
  v47 = v54;
  if ( v54 )
    ++*(_DWORD *)(v54 + 8);
  if ( (*(_DWORD *)a1 & 0x1000) != 0 )
  {
    v12 = *(_QWORD *)(v9 + 376);
    if ( v12 )
    {
      FindTimer(*(_QWORD *)(v12 + 16), 0xFFFFLL, 0, 1, 0LL);
      *(_DWORD *)v12 &= ~0x4000u;
      if ( (*(_DWORD *)v12 & 0x2000) != 0 )
      {
        FindTimer(*(_QWORD *)(v12 + 16), 65534LL, 0, 1, 0LL);
        *(_DWORD *)v12 &= ~0x2000u;
      }
      if ( *(_DWORD *)(v12 + 80) != *(_DWORD *)(v12 + 84) )
      {
        v13 = *(_QWORD *)(v12 + 40);
        v14 = *(_QWORD *)(v12 + 8);
        v50[0] = *(_QWORD *)(gptiCurrent + 376LL);
        *(_QWORD *)(gptiCurrent + 376LL) = v50;
        v50[1] = v13;
        if ( v13 )
          ++*(_DWORD *)(v13 + 8);
        v51[0] = *(_QWORD *)(gptiCurrent + 376LL);
        *(_QWORD *)(gptiCurrent + 376LL) = v51;
        v51[1] = v14;
        if ( v14 )
          ++*(_DWORD *)(v14 + 8);
        v15 = *(unsigned int *)(v12 + 80);
        if ( (_DWORD)v15 != -1 )
          xxxMNInvertItem(v12, v13, v15, v14, 0);
        v16 = *(unsigned int *)(v12 + 84);
        *(_DWORD *)(v12 + 80) = v16;
        xxxMNInvertItem(v12, v13, v16, v14, 1);
        ThreadUnlock1(v18, v17);
        ThreadUnlock1(v20, v19);
        v10 = v53;
        v11 = v54;
      }
      v21 = *((_QWORD *)a1 + 8);
      *(_DWORD *)a1 &= ~0x1000u;
      HMAssignmentLock(v21 + 56, *((_QWORD *)a1 + 2));
    }
  }
  v22 = *((_DWORD *)a1 + 20);
  if ( v22 < 0 )
  {
    if ( (unsigned int)(v22 + 4) > 1 )
      goto LABEL_34;
    FindTimer(*((_QWORD *)a1 + 2), *((unsigned int *)a1 + 20), 0, 1, 0LL);
  }
  else if ( *((_QWORD *)a1 + 3) )
  {
    if ( (*(_DWORD *)a1 & 1) != 0 )
      xxxMNCloseHierarchy((unsigned int *)a1, a2);
    else
      MNSetTimerToCloseHierarchy(a1);
  }
  xxxMNInvertItem(a1, v10, *((unsigned int *)a1 + 20), v11, 0);
LABEL_34:
  *((_DWORD *)a1 + 20) = a3;
  if ( a3 == -1 )
  {
    v28 = (__int64 *)*((_QWORD *)a1 + 2);
    if ( *((__int64 **)a1 + 1) == v28 )
      v29 = (*(_BYTE *)a1 >> 1) & 2 | 0xFFFFFFFD;
    else
      v29 = -4;
    xxxWindowEvent(0x8005u, v28, v29, 0, 0);
    ThreadUnlock1(v31, v30);
    ThreadUnlock1(v33, v32);
    v34 = *((_QWORD *)a1 + 4);
    if ( v34 )
    {
      if ( (*(_DWORD *)a1 & 2) != 0 && v34 == *((_QWORD *)a1 + 1) )
      {
        v35 = *((_QWORD *)a1 + 8);
        goto LABEL_47;
      }
      v36 = safe_cast_fnid_to_PMENUWND(v34);
      if ( v36 )
      {
        v35 = *(_QWORD *)(v36 + 376);
        if ( v35 )
        {
LABEL_47:
          if ( v35 )
          {
            v37 = *(_QWORD *)(v35 + 8);
            if ( v37 )
            {
              v46 = *(_QWORD *)(gptiCurrent + 376LL);
              *(_QWORD *)(gptiCurrent + 376LL) = &v46;
              v47 = v37;
              ++*(_DWORD *)(v37 + 8);
              v38 = *(_QWORD *)(v35 + 16);
              v52[0] = *(_QWORD *)(gptiCurrent + 376LL);
              *(_QWORD *)(gptiCurrent + 376LL) = v52;
              v52[1] = v38;
              if ( v38 )
                ++*(_DWORD *)(v38 + 8);
              v39 = *(_QWORD *)(v35 + 40);
              v48 = *(_QWORD *)(gptiCurrent + 376LL);
              *(_QWORD *)(gptiCurrent + 376LL) = &v48;
              v49 = v39;
              if ( v39 )
                ++*(_DWORD *)(v39 + 8);
              xxxSendMenuSelect(
                *(_QWORD *)(v35 + 8),
                *(_QWORD *)(v35 + 16),
                *(_QWORD *)(v35 + 40),
                *(_DWORD *)(v35 + 80),
                a2);
              ThreadUnlock1(v41, v40);
              ThreadUnlock1(v43, v42);
              ThreadUnlock1(v45, v44);
            }
          }
        }
      }
    }
    return 0LL;
  }
  *(_DWORD *)(a2 + 8) &= 0xFFFFAFFF;
  if ( (*(_DWORD *)(a2 + 8) & 8) != 0 )
    xxxMNDoScroll(a1, a3, 1);
  v23 = xxxMNInvertItem(a1, v10, a3, v11, 1);
  ThreadUnlock1(v25, v24);
  ThreadUnlock1(v27, v26);
  return v23;
}
