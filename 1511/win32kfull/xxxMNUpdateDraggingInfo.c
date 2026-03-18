/*
 * XREFs of xxxMNUpdateDraggingInfo @ 0x1C023BD30
 * Callers:
 *     xxxMNMouseMove @ 0x1C0138358 (xxxMNMouseMove.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     IsMFMWFPWindow @ 0x1C0138064 (IsMFMWFPWindow.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C0139460 (safe_cast_fnid_to_PMENUWND.c)
 *     LockMFMWFPWindow @ 0x1C0216468 (LockMFMWFPWindow.c)
 *     MNGetpItem @ 0x1C02164F0 (MNGetpItem.c)
 *     xxxMNSetGapState @ 0x1C023B8E4 (xxxMNSetGapState.c)
 */

__int64 __fastcall xxxMNUpdateDraggingInfo(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 *v3; // rsi
  __int64 v6; // rcx
  __int64 v7; // r12
  int v8; // ebp
  unsigned int v9; // r13d
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r15
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // r14d
  unsigned __int64 v22; // rcx
  int v23; // edi
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // ecx
  __int64 v27; // rcx
  __int64 v28; // rcx
  int v29; // ecx
  __int64 v30; // rcx
  __int64 v31; // rcx
  int v32; // ecx
  __int64 v33; // rcx
  __int64 v34; // rcx
  int v35; // ecx
  _DWORD *v36; // rcx
  unsigned int v37; // eax
  bool v38; // zf
  _QWORD v40[4]; // [rsp+20h] [rbp-48h] BYREF

  v3 = (__int64 *)(a1 + 80);
  v6 = *(_QWORD *)(a1 + 80);
  v40[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v40;
  v40[1] = v6;
  if ( v6 )
    ++*(_DWORD *)(v6 + 8);
  v7 = *v3;
  v8 = *(_DWORD *)(a1 + 92) & 3;
  v9 = *(_DWORD *)(a1 + 88);
  LockMFMWFPWindow(v3, a2);
  v10 = *v3;
  *(_DWORD *)(a1 + 88) = a3;
  if ( !IsMFMWFPWindow(v10) || (v13 = safe_cast_fnid_to_PMENUWND(v12)) == 0 || !*(_QWORD *)(v13 + 376) )
  {
    *v3 = 0LL;
    *(_DWORD *)(a1 + 88) = -1;
    return ThreadUnlock1(v12, v11);
  }
  v14 = MNGetpItem(*(_QWORD *)(v13 + 376), a3);
  *(_DWORD *)(a1 + 92) = 0;
  v17 = v14;
  if ( v14 )
  {
    v18 = *(_QWORD *)(v15 + 40);
    v19 = *(unsigned int *)(v18 + 120);
    if ( (_DWORD)v19 == -1 || (unsigned int)v19 >= *(_DWORD *)(v18 + 52) )
      v20 = 0LL;
    else
      v20 = *(_QWORD *)(v18 + 80) + 152 * v19;
    v21 = *(_DWORD *)(v20 + 76) + *(_DWORD *)(a1 + 16) - *(_DWORD *)(v16 + 132);
    v23 = IsDPIAbsoluteSysMet(0x45uLL);
    if ( v23 )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v22) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v24) + 776) & 0x4000) != 0 )
      {
        goto LABEL_14;
      }
    }
    else if ( !IsDPIDWMSysMet(v22)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v27) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v28) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
             ? (v29 = 0)
             : (v29 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                            + 8LL)
                                + 244LL) & 1),
               !v29) )
    {
LABEL_14:
      if ( IsDPIDWMSysMet(0x45uLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v25) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          ? (v26 = 0)
          : (v26 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v26) )
      {
        v12 = gpsi + 2932LL;
      }
      else
      {
        v12 = gpsi + 2156LL;
      }
LABEL_30:
      if ( v21 <= *(_DWORD *)(v17 + 76) + *(_DWORD *)v12 )
      {
        *(_DWORD *)(a1 + 92) = 1;
        goto LABEL_53;
      }
      if ( v23 )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v12) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v30) + 776) & 0x4000) != 0 )
        {
          goto LABEL_35;
        }
      }
      else if ( !IsDPIDWMSysMet(0x45uLL)
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v33) + 776) & 0x2000) != 0
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v34) + 776) & 0x4000) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
               ? (v35 = 0)
               : (v35 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                 !v35) )
      {
LABEL_35:
        if ( IsDPIDWMSysMet(0x45uLL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v31) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
            ? (v32 = 0)
            : (v32 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                           + 8LL)
                               + 244LL) & 1),
              v32) )
        {
          v36 = (_DWORD *)(gpsi + 2932LL);
        }
        else
        {
          v36 = (_DWORD *)(gpsi + 2156LL);
        }
        goto LABEL_51;
      }
      v36 = (_DWORD *)(gpsi + 2544LL);
LABEL_51:
      v12 = (unsigned int)(*(_DWORD *)(v17 + 76) + *(_DWORD *)(v17 + 84) - *v36);
      if ( v21 >= (int)v12 )
        *(_DWORD *)(a1 + 92) = 2;
      goto LABEL_53;
    }
    v12 = gpsi + 2544LL;
    goto LABEL_30;
  }
LABEL_53:
  if ( v7 != *v3 )
    goto LABEL_64;
  v37 = *(_DWORD *)(a1 + 88) - v9;
  if ( v37 != -1 )
  {
    if ( !v37 )
    {
      if ( v8 == *(_DWORD *)(a1 + 92) )
        return ThreadUnlock1(v12, v11);
      goto LABEL_64;
    }
    if ( v37 == 1 && *(_DWORD *)(a1 + 92) == 1 )
    {
      v38 = v8 == 2;
      goto LABEL_63;
    }
LABEL_64:
    *(_DWORD *)(a1 + 92) |= 4u;
    xxxMNSetGapState(v7, v9, v8);
    xxxMNSetGapState(*v3, *(unsigned int *)(a1 + 88), *(_DWORD *)(a1 + 92));
    return ThreadUnlock1(v12, v11);
  }
  if ( *(_DWORD *)(a1 + 92) != 2 )
    goto LABEL_64;
  v38 = v8 == 1;
LABEL_63:
  if ( !v38 )
    goto LABEL_64;
  return ThreadUnlock1(v12, v11);
}
