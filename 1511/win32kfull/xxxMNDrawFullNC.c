/*
 * XREFs of xxxMNDrawFullNC @ 0x1C02418A0
 * Callers:
 *     xxxMenuWindowProc @ 0x1C0135770 (xxxMenuWindowProc.c)
 *     xxxMNSetTop @ 0x1C021738C (xxxMNSetTop.c)
 * Callees:
 *     xxxSendUAHMenuMessage @ 0x1C000FF8C (xxxSendUAHMenuMessage.c)
 *     NtGdiPatBlt @ 0x1C00412C0 (NtGdiPatBlt.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     MNIsUAHMenu @ 0x1C00707A8 (MNIsUAHMenu.c)
 *     DrawEdge @ 0x1C0071B9C (DrawEdge.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     DrawFrame @ 0x1C00CC21C (DrawFrame.c)
 *     GreSetBrushOrg @ 0x1C00E7AF0 (GreSetBrushOrg.c)
 *     ?GetDPIMETRICS@@YAPEAUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C010834C (-GetDPIMETRICS@@YAPEAUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 *     GreGetBrushOrg @ 0x1C014DA6C (GreGetBrushOrg.c)
 *     MNDrawArrow @ 0x1C023F0C4 (MNDrawArrow.c)
 *     MNDrawEdge @ 0x1C023F94C (MNDrawEdge.c)
 */

void __fastcall xxxMNDrawFullNC(struct tagWND *a1, HDC a2, __int64 a3)
{
  int v6; // edi
  HDC DCEx; // rbx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r10
  LONG v12; // ecx
  LONG top; // eax
  LONG bottom; // edi
  LONG right; // r14d
  LONG left; // r13d
  unsigned __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // ecx
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // ecx
  _DWORD *v24; // rdi
  unsigned __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  int v28; // ecx
  __int64 v29; // rcx
  __int64 v30; // rcx
  int v31; // ecx
  _DWORD *v32; // rdx
  int v33; // edi
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rdx
  int v38; // r14d
  struct tagDPIMETRICS *DPIMETRICS; // rax
  struct tagDPIMETRICS *v40; // rax
  RECT v41; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v42[4]; // [rsp+40h] [rbp-20h] BYREF
  int v43; // [rsp+B0h] [rbp+50h]
  __int64 v44; // [rsp+B8h] [rbp+58h] BYREF

  v6 = 0;
  if ( !*(_QWORD *)(a3 + 40) )
    return;
  if ( a2 )
    DCEx = a2;
  else
    DCEx = (HDC)_GetDCEx(a1, 0LL, 66561LL);
  if ( (unsigned int)MNIsUAHMenu(*(_QWORD *)(a3 + 40)) )
  {
    v8 = *(_QWORD *)(a3 + 16);
    if ( v8 )
    {
      v42[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v42;
      v42[1] = v8;
      ++*(_DWORD *)(v8 + 8);
      v6 = xxxSendUAHMenuMessage(*(_QWORD *)(a3 + 16), 149LL, *(_QWORD *)(a3 + 40), (__int64)DCEx);
      ThreadUnlock1(v10, v9);
    }
  }
  v11 = *(_QWORD *)(a3 + 40);
  if ( v11 )
  {
    if ( v6 )
    {
      MNDrawArrow(DCEx, a3, -3);
      MNDrawArrow(DCEx, a3, -4);
      goto LABEL_63;
    }
    v12 = *((_DWORD *)a1 + 30) - *((_DWORD *)a1 + 28);
    v41.bottom = *((_DWORD *)a1 + 31) - *((_DWORD *)a1 + 29);
    *(_QWORD *)&v41.left = 0LL;
    v41.right = v12;
    if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80020000) == 0x80020000 )
    {
      MNDrawEdge(v11, a2, &v41, 0x2000);
      top = v41.top;
      bottom = v41.bottom;
      right = v41.right;
      left = v41.left;
LABEL_54:
      v43 = top;
      v33 = bottom - *((_DWORD *)GetDPIMETRICS(a1) + 17);
      GreGetBrushOrg(DCEx, &v44);
      v34 = *(_QWORD *)(a3 + 40);
      if ( *(_QWORD *)(v34 + 112) )
      {
        v35 = *(unsigned int *)(v34 + 120);
        if ( (_DWORD)v35 == -1 || (unsigned int)v35 >= *(_DWORD *)(v34 + 52) )
          v36 = 0LL;
        else
          v36 = *(_QWORD *)(v34 + 80) + 152 * v35;
        GreSetBrushOrg(DCEx, 0, -*(_DWORD *)(v36 + 76), 0LL);
        v37 = *(_QWORD *)(*(_QWORD *)(a3 + 40) + 112LL);
      }
      else
      {
        v37 = *(_QWORD *)(gpsi + 3728LL);
      }
      *(_QWORD *)&v41.left = GreSelectBrush(DCEx, v37);
      v38 = right - left;
      DPIMETRICS = GetDPIMETRICS(a1);
      NtGdiPatBlt(DCEx, left, v43, v38, *((_DWORD *)DPIMETRICS + 17), 15728673);
      MNDrawArrow(DCEx, a3, -3);
      v40 = GetDPIMETRICS(a1);
      NtGdiPatBlt(DCEx, left, v33, v38, *((_DWORD *)v40 + 17), 15728673);
      MNDrawArrow(DCEx, a3, -4);
      GreSetBrushOrg(DCEx, v44, SHIDWORD(v44), 0LL);
      GreSelectBrush(DCEx, *(_QWORD *)&v41.left);
LABEL_63:
      if ( a2 )
        return;
      goto LABEL_64;
    }
    DrawEdge(DCEx, &v41, 5u, 0x200Fu);
    DrawFrame(DCEx, &v41.left, 1, 120);
    if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v17) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v18) + 776) & 0x4000) != 0 )
      {
        goto LABEL_18;
      }
    }
    else if ( !IsDPIDWMSysMet(v17)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v21) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v22) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
             ? (v23 = 0)
             : (v23 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                            + 8LL)
                                + 244LL) & 1),
               !v23) )
    {
LABEL_18:
      if ( IsDPIDWMSysMet(6uLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v19) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          ? (v20 = 0)
          : (v20 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v20) )
      {
        v24 = (_DWORD *)(gpsi + 2680LL);
      }
      else
      {
        v24 = (_DWORD *)(gpsi + 1904LL);
      }
LABEL_34:
      if ( (unsigned int)IsDPIAbsoluteSysMet(5uLL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v25) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v26) + 776) & 0x4000) != 0 )
        {
          goto LABEL_37;
        }
      }
      else if ( !IsDPIDWMSysMet(v25)
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v29) + 776) & 0x2000) != 0
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v30) + 776) & 0x4000) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
               ? (v31 = 0)
               : (v31 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                 !v31) )
      {
LABEL_37:
        if ( IsDPIDWMSysMet(5uLL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v27) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
            ? (v28 = 0)
            : (v28 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                           + 8LL)
                               + 244LL) & 1),
              v28) )
        {
          v32 = (_DWORD *)(gpsi + 2676LL);
        }
        else
        {
          v32 = (_DWORD *)(gpsi + 1900LL);
        }
        goto LABEL_53;
      }
      v32 = (_DWORD *)(gpsi + 2288LL);
LABEL_53:
      left = v41.left + *v32;
      right = v41.right - *v32;
      top = v41.top + *v24;
      bottom = v41.bottom - *v24;
      goto LABEL_54;
    }
    v24 = (_DWORD *)(gpsi + 2292LL);
    goto LABEL_34;
  }
  if ( !a2 && DCEx )
LABEL_64:
    _ReleaseDC(DCEx);
}
