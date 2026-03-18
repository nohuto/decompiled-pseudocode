/*
 * XREFs of xxxMNSetGapState @ 0x1C023B8E4
 * Callers:
 *     xxxInsertMenuItem @ 0x1C006E9E0 (xxxInsertMenuItem.c)
 *     NtUserMNDragLeave @ 0x1C021D2A0 (NtUserMNDragLeave.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C023BD30 (xxxMNUpdateDraggingInfo.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     IsMFMWFPWindow @ 0x1C0138064 (IsMFMWFPWindow.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C0139460 (safe_cast_fnid_to_PMENUWND.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     xxxInvalidateRect @ 0x1C02156F4 (xxxInvalidateRect.c)
 *     MNGetpItem @ 0x1C02164F0 (MNGetpItem.c)
 */

void __fastcall xxxMNSetGapState(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rax
  unsigned int v7; // r10d
  __int64 v8; // r14
  _DWORD *v9; // rax
  int v10; // r10d
  char v11; // r11
  __int64 v12; // rax
  __int64 v13; // r8
  int v14; // r9d
  unsigned __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // ecx
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // ecx
  _DWORD *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // r8
  int v25; // r9d
  unsigned __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  int v29; // ecx
  __int64 v30; // rcx
  __int64 v31; // rcx
  int v32; // ecx
  _DWORD *v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rax
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  _QWORD v39[3]; // [rsp+20h] [rbp-30h] BYREF
  int v40; // [rsp+38h] [rbp-18h] BYREF
  int v41; // [rsp+3Ch] [rbp-14h]
  int v42; // [rsp+40h] [rbp-10h]
  int v43; // [rsp+44h] [rbp-Ch]

  if ( (a3 & 3) == 0 )
    return;
  v5 = 0LL;
  if ( !IsMFMWFPWindow(a1) )
    return;
  v6 = safe_cast_fnid_to_PMENUWND(v4);
  if ( !v6 )
    return;
  v8 = *(_QWORD *)(v6 + 376);
  if ( !v8 )
    return;
  v9 = (_DWORD *)MNGetpItem(*(_QWORD *)(v6 + 376), v7);
  if ( !v9 )
    return;
  v40 = v9[18];
  v42 = v9[18] + v9[20];
  v41 = v9[19];
  v43 = v9[19] + v9[21];
  if ( (v11 & 1) == 0 )
  {
    v23 = MNGetpItem(v8, v10 + 1);
    if ( v25 )
    {
      *(_DWORD *)(v24 + 4) |= 0x40000000u;
      if ( !v23 )
        goto LABEL_57;
      *(_DWORD *)(v23 + 4) |= 0x80000000;
    }
    else
    {
      *(_DWORD *)(v24 + 4) &= ~0x40000000u;
      if ( !v23 )
        goto LABEL_57;
      *(_DWORD *)(v23 + 4) &= ~0x80000000;
    }
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x45uLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v26) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v27) + 776) & 0x4000) != 0 )
      {
        goto LABEL_40;
      }
    }
    else if ( !IsDPIDWMSysMet(v26)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v30) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v31) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
             ? (v32 = 0)
             : (v32 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                            + 8LL)
                                + 244LL) & 1),
               !v32) )
    {
LABEL_40:
      if ( IsDPIDWMSysMet(0x45uLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v28) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          ? (v29 = 0)
          : (v29 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v29) )
      {
        v33 = (_DWORD *)(gpsi + 2932LL);
      }
      else
      {
        v33 = (_DWORD *)(gpsi + 2156LL);
      }
      goto LABEL_56;
    }
    v33 = (_DWORD *)(gpsi + 2544LL);
LABEL_56:
    v43 += *v33;
    goto LABEL_57;
  }
  v12 = MNGetpItem(v8, v10 - 1);
  if ( v14 )
  {
    *(_DWORD *)(v13 + 4) |= 0x80000000;
    if ( v12 )
    {
      *(_DWORD *)(v12 + 4) |= 0x40000000u;
      goto LABEL_12;
    }
  }
  else
  {
    *(_DWORD *)(v13 + 4) &= ~0x80000000;
    if ( v12 )
    {
      *(_DWORD *)(v12 + 4) &= ~0x40000000u;
LABEL_12:
      if ( (unsigned int)IsDPIAbsoluteSysMet(0x45uLL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v15) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v16) + 776) & 0x4000) != 0 )
        {
          goto LABEL_15;
        }
      }
      else if ( !IsDPIDWMSysMet(v15)
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v19) + 776) & 0x2000) != 0
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v20) + 776) & 0x4000) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
               ? (v21 = 0)
               : (v21 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                 !v21) )
      {
LABEL_15:
        if ( IsDPIDWMSysMet(0x45uLL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v17) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
            ? (v18 = 0)
            : (v18 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                           + 8LL)
                               + 244LL) & 1),
              v18) )
        {
          v22 = (_DWORD *)(gpsi + 2932LL);
        }
        else
        {
          v22 = (_DWORD *)(gpsi + 2156LL);
        }
        goto LABEL_31;
      }
      v22 = (_DWORD *)(gpsi + 2544LL);
LABEL_31:
      v41 -= *v22;
    }
  }
LABEL_57:
  v34 = *(_QWORD *)(v8 + 40);
  v35 = *(unsigned int *)(v34 + 120);
  if ( (_DWORD)v35 != -1 && (unsigned int)v35 < *(_DWORD *)(v34 + 52) )
    v5 = *(_QWORD *)(v34 + 80) + 152 * v35;
  v36 = *(_DWORD *)(v5 + 76);
  v41 -= v36;
  v43 -= v36;
  v39[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v39;
  ++*(_DWORD *)(a1 + 8);
  v39[1] = a1;
  xxxInvalidateRect((struct tagWND *)a1, &v40, 1);
  ThreadUnlock1(v38, v37);
}
