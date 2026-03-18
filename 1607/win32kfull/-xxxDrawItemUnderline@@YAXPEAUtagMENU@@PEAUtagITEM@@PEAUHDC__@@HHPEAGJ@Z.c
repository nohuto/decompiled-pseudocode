/*
 * XREFs of ?xxxDrawItemUnderline@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C0236574
 * Callers:
 *     xxxDrawMenuBarUnderlines @ 0x1C0131828 (xxxDrawMenuBarUnderlines.c)
 *     ?xxxDrawMenuItemText@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C0236810 (-xxxDrawMenuItemText@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     MNGetpItemIndex @ 0x1C006B8B4 (MNGetpItemIndex.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     NtGdiPatBlt @ 0x1C00942F0 (NtGdiPatBlt.c)
 *     xxxClientGetTextExtentPointW @ 0x1C00B9374 (xxxClientGetTextExtentPointW.c)
 *     CALL_LPK @ 0x1C00B98EC (CALL_LPK.c)
 *     GreGetTextExtentW @ 0x1C0123640 (GreGetTextExtentW.c)
 */

void __fastcall xxxDrawItemUnderline(
        struct tagMENU *a1,
        struct tagITEM *a2,
        HDC a3,
        __int64 a4,
        int a5,
        unsigned __int16 *a6,
        unsigned int a7)
{
  int v8; // r15d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 ThreadWin32Thread; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 DPIMetrics; // rax
  LONG v17; // r15d
  int v18; // eax
  WCHAR *v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  LONG v23; // edi
  __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  int v38; // ecx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  int v49; // ecx
  int *v50; // rcx
  struct tagSIZE v51; // [rsp+30h] [rbp-28h] BYREF
  struct tagSIZE v52; // [rsp+38h] [rbp-20h] BYREF

  v8 = a4;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2, (__int64)a3, a4);
  if ( a7 != 0xFFFF )
  {
    if ( *((_DWORD *)a2 + 23) == 0x7FFFFFFF
      || (v12 = *(unsigned int *)(PsGetCurrentProcessWin32Process(v12, v11) + 712), (v12 & 0xF) != 0) )
    {
      if ( a7 )
      {
        v51.cx = 0;
        v51.cy = 0;
        if ( (unsigned int)CALL_LPK(ThreadWin32Thread) )
        {
          xxxClientGetTextExtentPointW(a3, a6, a7, &v51);
          if ( (unsigned int)MNGetpItemIndex((__int64)a1, (__int64)a2) == -1 )
            return;
        }
        else
        {
          GreGetTextExtentW(a3, a6, a7, &v51, 1);
        }
        DPIMetrics = GetDPIMetrics(v15, v14);
        v12 = (unsigned int)(v51.cx - *(_DWORD *)(DPIMetrics + 56));
        *((_DWORD *)a2 + 23) = v12;
      }
      else
      {
        *((_DWORD *)a2 + 23) = 0;
      }
    }
    v17 = *((_DWORD *)a2 + 23) + v8;
    if ( !*((_DWORD *)a2 + 24) )
    {
      v52 = 0LL;
      v18 = CALL_LPK(ThreadWin32Thread);
      v19 = &a6[a7];
      if ( v18 )
      {
        xxxClientGetTextExtentPointW(a3, v19, 1u, &v52);
        if ( (unsigned int)MNGetpItemIndex((__int64)a1, (__int64)a2) == -1 )
          return;
      }
      else
      {
        GreGetTextExtentW(a3, v19, 1u, &v52, 1);
      }
      v22 = GetDPIMetrics(v21, v20);
      v12 = (unsigned int)(v52.cx - *(_DWORD *)(v22 + 56));
      *((_DWORD *)a2 + 24) = v12;
    }
    v23 = *(_DWORD *)(GetDPIMetrics(v12, v11) + 64) + a5;
    if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v25, v24, v26, v27) & 0xF) != 0 )
        goto LABEL_19;
    }
    else if ( !IsDPIDWMSysMet(v25)
           || (W32GetCurrentThreadDpiAwarenessContext(v40, v39, v41, v42) & 0xF) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v43, v44, v45) + 408)
             ? (v49 = 0)
             : (v49 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v46,
                                                            v47,
                                                            v48)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1),
               !v49) )
    {
LABEL_19:
      if ( IsDPIDWMSysMet(6uLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v29, v28, v30, v31) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v32, v33, v34) + 408)
          ? (v38 = 0)
          : (v38 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                         (__int64)KeGetCurrentThread(),
                                                         v35,
                                                         v36,
                                                         v37)
                                                     + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v38) )
      {
        v50 = (int *)(gpsi + 2680LL);
      }
      else
      {
        v50 = (int *)(gpsi + 1904LL);
      }
      goto LABEL_34;
    }
    v50 = (int *)(gpsi + 2292LL);
LABEL_34:
    NtGdiPatBlt(a3, v17, v23, *((_DWORD *)a2 + 24), *v50, 15728673);
  }
}
