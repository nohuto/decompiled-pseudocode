/*
 * XREFs of ?xxxDrawItemUnderline@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C023EBC4
 * Callers:
 *     xxxDrawMenuBarUnderlines @ 0x1C010E45C (xxxDrawMenuBarUnderlines.c)
 *     ?xxxDrawMenuItemText@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C023EEA4 (-xxxDrawMenuItemText@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 * Callees:
 *     NtGdiPatBlt @ 0x1C00412C0 (NtGdiPatBlt.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     MNGetpItemIndex @ 0x1C006EE50 (MNGetpItemIndex.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     xxxClientGetTextExtentPointW @ 0x1C00CCAFC (xxxClientGetTextExtentPointW.c)
 *     CALL_LPK @ 0x1C00CD148 (CALL_LPK.c)
 *     GreGetTextExtentW @ 0x1C01027C0 (GreGetTextExtentW.c)
 */

void __fastcall xxxDrawItemUnderline(
        struct tagMENU *a1,
        struct tagITEM *a2,
        HDC a3,
        int a4,
        int a5,
        unsigned __int16 *a6,
        unsigned int a7)
{
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 ThreadWin32Thread; // rbp
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 DPIMetrics; // rax
  int v19; // r12d
  int v20; // eax
  WCHAR *v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  int v26; // edi
  unsigned __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  int v30; // ecx
  __int64 v31; // rcx
  __int64 v32; // rcx
  int v33; // ecx
  int *v34; // rcx
  struct tagSIZE v35; // [rsp+30h] [rbp-28h] BYREF
  struct tagSIZE v36; // [rsp+38h] [rbp-20h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( a7 != 0xFFFF )
  {
    if ( *((_DWORD *)a2 + 23) == 0x7FFFFFFF
      || (v12 = *(unsigned int *)(PsGetCurrentProcessWin32Process(v12) + 720), (v12 & 0xF) != 0) )
    {
      if ( a7 )
      {
        v35.cx = 0;
        v35.cy = 0;
        if ( (unsigned int)CALL_LPK(ThreadWin32Thread) )
        {
          xxxClientGetTextExtentPointW(a3, a6, a7, &v35);
          if ( (unsigned int)MNGetpItemIndex((__int64)a1, (__int64)a2) == -1 )
            return;
        }
        else
        {
          GreGetTextExtentW(a3, a6, a7, &v35, 1);
        }
        DPIMetrics = GetDPIMetrics(v16, v15, v17);
        v12 = (unsigned int)(v35.cx - *(_DWORD *)(DPIMetrics + 56));
        *((_DWORD *)a2 + 23) = v12;
      }
      else
      {
        *((_DWORD *)a2 + 23) = 0;
      }
    }
    v19 = *((_DWORD *)a2 + 23) + a4;
    if ( !*((_DWORD *)a2 + 24) )
    {
      v36 = 0LL;
      v20 = CALL_LPK(ThreadWin32Thread);
      v21 = &a6[a7];
      if ( v20 )
      {
        xxxClientGetTextExtentPointW(a3, v21, 1u, &v36);
        if ( (unsigned int)MNGetpItemIndex((__int64)a1, (__int64)a2) == -1 )
          return;
      }
      else
      {
        GreGetTextExtentW(a3, v21, 1u, &v36, 1);
      }
      v25 = GetDPIMetrics(v23, v22, v24);
      v12 = (unsigned int)(v36.cx - *(_DWORD *)(v25 + 56));
      *((_DWORD *)a2 + 24) = v12;
    }
    v26 = *(_DWORD *)(GetDPIMetrics(v12, v11, v14) + 64) + a5;
    if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v27) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v28) + 776) & 0x4000) != 0 )
      {
        goto LABEL_20;
      }
    }
    else if ( !IsDPIDWMSysMet(v27)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v31) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v32) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
             ? (v33 = 0)
             : (v33 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                            + 8LL)
                                + 244LL) & 1),
               !v33) )
    {
LABEL_20:
      if ( IsDPIDWMSysMet(6uLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v29) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          ? (v30 = 0)
          : (v30 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v30) )
      {
        v34 = (int *)(gpsi + 2680LL);
      }
      else
      {
        v34 = (int *)(gpsi + 1904LL);
      }
      goto LABEL_36;
    }
    v34 = (int *)(gpsi + 2292LL);
LABEL_36:
    NtGdiPatBlt(a3, v19, v26, *((_DWORD *)a2 + 24), *v34, 15728673);
  }
}
