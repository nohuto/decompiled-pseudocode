/*
 * XREFs of GreGetDIBitsInternal @ 0x1C0042840
 * Callers:
 *     GreExtGetObjectW @ 0x1C0042130 (GreExtGetObjectW.c)
 *     NtGdiGetDIBitsInternal @ 0x1C00423A0 (NtGdiGetDIBitsInternal.c)
 *     ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x1C011BF70 (-ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z.c)
 *     ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x1C014B1C0 (-xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z.c)
 *     ?GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z @ 0x1C02AF670 (-GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z.c)
 * Callees:
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C002DAD0 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C002DBD0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@PEAUHBITMAP__@@IIPEAEPEAUtagBITMAPINFO@@III@Z @ 0x1C0042BD0 (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@P.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 */

__int64 __fastcall GreGetDIBitsInternal(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int8 *a5,
        struct tagBITMAPINFO *a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9)
{
  __int64 v11; // rdi
  int v13; // r12d
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rbx
  DWORD biSize; // r12d
  WORD v19; // cx
  int v20; // eax
  DWORD v21; // eax
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // rbx
  int DIBitsInternalWorker; // ebx
  unsigned __int16 v27; // ax
  HDC v28; // [rsp+30h] [rbp-89h]
  HBITMAP v29; // [rsp+38h] [rbp-81h]
  __int64 v30; // [rsp+78h] [rbp-41h] BYREF
  __int64 v31; // [rsp+80h] [rbp-39h] BYREF
  __int64 v32; // [rsp+88h] [rbp-31h] BYREF
  char v33[8]; // [rsp+90h] [rbp-29h] BYREF
  _QWORD v34[2]; // [rsp+98h] [rbp-21h] BYREF
  _QWORD v35[2]; // [rsp+A8h] [rbp-11h] BYREF
  int v39; // [rsp+120h] [rbp+67h]

  if ( !a6 || a7 > 2 || a9 < 0xC )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  v11 = 0LL;
  v13 = 1;
  if ( !a4 )
    a5 = 0LL;
  v39 = 1;
  v35[1] = 0LL;
  v35[0] = HmgLockEx(a1, 1LL, 0LL);
  if ( !v35[0] )
    goto LABEL_12;
  if ( !(unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)v35) )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v35[0] + 12LL));
LABEL_12:
    GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    goto LABEL_13;
  }
  if ( !v35[0] )
    goto LABEL_12;
  if ( (*(_DWORD *)(*(_QWORD *)(v35[0] + 48LL) + 56LL) & 0x8000) != 0 )
  {
    v13 = 0;
    v39 = 0;
  }
  XDCOBJ::RestoreAttributes((XDCOBJ *)v35);
  _InterlockedDecrement((volatile signed __int32 *)(v35[0] + 12LL));
  if ( v13 )
    goto LABEL_12;
LABEL_13:
  LOBYTE(v14) = 5;
  v15 = HmgShareLockCheck(a2, v14);
  v30 = v15;
  v17 = v15;
  if ( v15 )
  {
    biSize = a6->bmiHeader.biSize;
    if ( !a5 )
    {
      if ( biSize == 12 )
      {
        if ( !HIWORD(a6->bmiHeader.biHeight) )
        {
          LOWORD(a6->bmiHeader.biWidth) = *(_WORD *)(v15 + 56);
          HIWORD(a6->bmiHeader.biWidth) = *(_WORD *)(v15 + 60);
          LOWORD(a6->bmiHeader.biHeight) = 1;
          v27 = *((_WORD *)&galBitsPerPixel + 2 * *(unsigned int *)(v15 + 96));
          HIWORD(a6->bmiHeader.biHeight) = v27;
          if ( v27 >= 0x10u )
            HIWORD(a6->bmiHeader.biHeight) = 24;
          LODWORD(v11) = 1;
          goto LABEL_23;
        }
      }
      else
      {
        if ( a9 < 0x28 )
          goto LABEL_23;
        if ( !a6->bmiHeader.biBitCount )
        {
          if ( biSize > 0x28 )
            memset(a6, 0, a6->bmiHeader.biSize);
          a6->bmiHeader.biSize = 40;
          a6->bmiHeader.biWidth = *(_DWORD *)(v17 + 56);
          a6->bmiHeader.biHeight = *(_DWORD *)(v17 + 60);
          a6->bmiHeader.biPlanes = 1;
          a6->bmiHeader.biCompression = 0;
          v19 = *((_WORD *)&galBitsPerPixel + 2 * *(unsigned int *)(v17 + 96));
          a6->bmiHeader.biBitCount = v19;
          if ( ((v19 - 16) & 0xFFEF) == 0 )
            a6->bmiHeader.biCompression = 3;
          v20 = a6->bmiHeader.biWidth * a6->bmiHeader.biBitCount;
          *(_QWORD *)&a6->bmiHeader.biXPelsPerMeter = 0LL;
          LODWORD(v11) = 1;
          a6->bmiHeader.biSizeImage = a6->bmiHeader.biHeight * (((v20 + 31) >> 3) & 0xFFFFFFFC);
          v21 = *((_DWORD *)&gacPalEntries + *(unsigned int *)(v17 + 96));
          a6->bmiHeader.biClrImportant = v21;
          a6->bmiHeader.biClrUsed = v21;
          goto LABEL_23;
        }
      }
    }
    if ( biSize >= 0x28 && a6->bmiHeader.biCompression - 4 <= 1 )
    {
      EngSetLastError(0x57u);
    }
    else
    {
      LOBYTE(v16) = 1;
      v34[1] = 0LL;
      v34[0] = HmgLockEx(a1, v16, 0LL);
      v23 = v34[0];
      if ( !v34[0] )
        goto LABEL_42;
      if ( !(unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)v34) )
      {
        v23 = 0LL;
        _InterlockedDecrement((volatile signed __int32 *)(v34[0] + 12LL));
        v34[0] = 0LL;
LABEL_41:
        v17 = v30;
LABEL_42:
        if ( v23 )
        {
          XDCOBJ::RestoreAttributes((XDCOBJ *)v34);
          _InterlockedDecrement((volatile signed __int32 *)(v34[0] + 12LL));
          v17 = v30;
        }
        goto LABEL_23;
      }
      if ( v34[0] )
      {
        v24 = *(_QWORD *)(v34[0] + 96LL);
        v32 = *(_QWORD *)(v34[0] + 48LL);
        v31 = v24;
        if ( (*(_DWORD *)(v32 + 56) & 0x8000) != 0 )
        {
          LODWORD(v11) = GreGetDIBitsInternalWorker(
                           biSize,
                           (struct DCOBJ *)v34,
                           (struct PDEVOBJ *)&v32,
                           (struct SURFREF *)&v30,
                           (struct XEPALOBJ *)&v31,
                           v28,
                           v29,
                           a3,
                           a4,
                           a5,
                           a6,
                           a7,
                           a8,
                           a9);
        }
        else
        {
          NEEDGRELOCK::vLock((NEEDGRELOCK *)v33, (struct XDCOBJ *)v34);
          v25 = v17 + 24;
          if ( v25
            && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v25) + 112) & 0x4000) != 0
             || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v25) + 112) < 0)
            && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v25) + 112) & 0x200) == 0 )
          {
            v11 = SURFOBJ_TO_SURFACE_NOT_NULL(v25);
            GreLockDisplayDevice(*(_QWORD *)(v11 + 48));
          }
          DIBitsInternalWorker = GreGetDIBitsInternalWorker(
                                   biSize,
                                   (struct DCOBJ *)v34,
                                   (struct PDEVOBJ *)&v32,
                                   (struct SURFREF *)&v30,
                                   (struct XEPALOBJ *)&v31,
                                   v28,
                                   v29,
                                   a3,
                                   a4,
                                   a5,
                                   a6,
                                   a7,
                                   a8,
                                   a9);
          if ( v11 )
            GreUnlockDisplayDevice(*(_QWORD *)(v11 + 48));
          NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v33);
          LODWORD(v11) = DIBitsInternalWorker;
        }
        v23 = v34[0];
        goto LABEL_41;
      }
    }
  }
LABEL_23:
  if ( v17 )
    DEC_SHARE_REF_CNT(v17);
  if ( v39 )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  }
  return (unsigned int)v11;
}
