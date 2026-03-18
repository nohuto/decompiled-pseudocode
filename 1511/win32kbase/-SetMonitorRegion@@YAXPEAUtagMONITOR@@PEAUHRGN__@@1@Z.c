/*
 * XREFs of ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C0075658
 * Callers:
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C0024220 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GetMonitorDC @ 0x1C0043A70 (GetMonitorDC.c)
 * Callees:
 *     GreSetRectRgn @ 0x1C0025020 (GreSetRectRgn.c)
 *     GreCombineRgn @ 0x1C0026E40 (GreCombineRgn.c)
 *     W32GetThreadWin32Thread @ 0x1C0034410 (W32GetThreadWin32Thread.c)
 *     GreOffsetRgn @ 0x1C00441E0 (GreOffsetRgn.c)
 */

void __fastcall SetMonitorRegion(struct tagMONITOR *a1, HRGN a2, HRGN a3)
{
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // r8
  HRGN v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // r8
  char *v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // r8
  char *v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // r8
  int v33; // ecx
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // r8
  int v38; // ecx

  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(a1) + 776) & 0x2000) != 0
    || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v6) + 776) & 0x4000) != 0
    || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v7, v8) + 408)
      ? (v6 = 0LL)
      : (v6 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v25, v26) + 408)
                                    + 8LL)
                        + 244LL) & 1),
        !(_DWORD)v6) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v6) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9, v10) + 408)
        ? (v33 = 0)
        : (v33 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v31, v32)
                                                   + 408)
                                       + 8LL)
                           + 244LL) & 1),
          v33) )
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
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v12) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x4000) != 0
      || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14, v15) + 408)
        ? (v13 = 0LL)
        : (v13 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v27, v28)
                                                   + 408)
                                       + 8LL)
                           + 244LL) & 1),
          !(_DWORD)v13) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x2000) == 0
        || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16, v17) + 408)
          ? (v13 = 0LL)
          : (v13 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v34, v35)
                                                     + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v18 = (char *)a1 + 60,
            !(_DWORD)v13) )
      {
        v18 = (char *)a1 + 28;
      }
    }
    else
    {
      v18 = (char *)a1 + 44;
    }
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v19) + 776) & 0x4000) != 0
      || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20, v21) + 408)
        ? (v19 = 0LL)
        : (v19 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v29, v30)
                                                   + 408)
                                       + 8LL)
                           + 244LL) & 1),
          !(_DWORD)v19) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v19) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22, v23) + 408)
          ? (v38 = 0)
          : (v38 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v36, v37)
                                                     + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v38) )
      {
        v24 = (char *)a1 + 60;
      }
      else
      {
        v24 = (char *)a1 + 28;
      }
    }
    else
    {
      v24 = (char *)a1 + 44;
    }
    GreOffsetRgn(a2, -*(_DWORD *)v24, -*((_DWORD *)v18 + 1));
  }
  else
  {
    GreSetRectRgn(a2, 0, 0, 0, 0);
  }
}
