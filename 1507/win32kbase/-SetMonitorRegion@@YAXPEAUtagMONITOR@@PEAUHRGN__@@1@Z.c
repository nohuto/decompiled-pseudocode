/*
 * XREFs of ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C0056A9C
 * Callers:
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C00433D0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GetMonitorDC @ 0x1C0053E98 (GetMonitorDC.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00384E0 (W32GetThreadWin32Thread.c)
 *     GreCombineRgn @ 0x1C0040310 (GreCombineRgn.c)
 *     GreSetRectRgn @ 0x1C0042B20 (GreSetRectRgn.c)
 *     GreOffsetRgn @ 0x1C0054700 (GreOffsetRgn.c)
 */

void __fastcall SetMonitorRegion(struct tagMONITOR *a1, HRGN a2, HRGN a3, __int64 a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  HRGN v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  char *v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  char *v25; // rbx
  int v26; // ecx
  int v27; // ecx
  __int64 v28; // [rsp+20h] [rbp-18h]
  __int64 v29; // [rsp+20h] [rbp-18h]
  __int64 v30; // [rsp+20h] [rbp-18h]
  __int64 v31; // [rsp+20h] [rbp-18h]
  __int64 v32; // [rsp+28h] [rbp-10h]
  __int64 v33; // [rsp+28h] [rbp-10h]
  __int64 v34; // [rsp+28h] [rbp-10h]
  __int64 v35; // [rsp+28h] [rbp-10h]

  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(a1, a2, a3, a4, v28, v32) + 776) & 0x2000) != 0
    || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v8, v7, v9, v10, v29, v33) + 776) & 0x4000) != 0
    || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
      ? (v8 = 0LL)
      : (v8 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                        + 260LL) & 1),
        !(_DWORD)v8) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v8, v7, v9, v10, v29, v33) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
        ? (v26 = 0)
        : (v26 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                           + 260LL) & 1),
          v26) )
    {
      v11 = (HRGN)*((_QWORD *)a1 + 18);
    }
    else
    {
      v11 = (HRGN)*((_QWORD *)a1 + 16);
    }
  }
  else
  {
    v11 = (HRGN)*((_QWORD *)a1 + 17);
  }
  if ( (unsigned int)GreCombineRgn(a2, a3, v11, 1) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13, v12, v14, v15, v29, v33) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v17, v16, v18, v19, v30, v34) + 776) & 0x4000) != 0
      || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
        ? (v17 = 0LL)
        : (v17 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                           + 260LL) & 1),
          !(_DWORD)v17) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v17, v16, v18, v19, v30, v34) + 776) & 0x2000) == 0
        || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v17 = 0LL)
          : (v17 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
            v20 = (char *)a1 + 60,
            !(_DWORD)v17) )
      {
        v20 = (char *)a1 + 28;
      }
    }
    else
    {
      v20 = (char *)a1 + 44;
    }
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v17, v16, v18, v19, v30, v34) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v22, v21, v23, v24, v31, v35) + 776) & 0x4000) != 0
      || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
        ? (v22 = 0LL)
        : (v22 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                           + 260LL) & 1),
          !(_DWORD)v22) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v22, v21, v23, v24, v31, v35) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v27 = 0)
          : (v27 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
            v27) )
      {
        v25 = (char *)a1 + 60;
      }
      else
      {
        v25 = (char *)a1 + 28;
      }
    }
    else
    {
      v25 = (char *)a1 + 44;
    }
    GreOffsetRgn(a2, -*(_DWORD *)v25, -*((_DWORD *)v20 + 1));
  }
  else
  {
    GreSetRectRgn(a2, 0, 0, 0, 0);
  }
}
