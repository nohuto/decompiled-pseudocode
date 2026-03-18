/*
 * XREFs of GreGetDIBitsInternal @ 0x1C0049A50
 * Callers:
 *     GreExtGetObjectW @ 0x1C004BBB8 (GreExtGetObjectW.c)
 *     NtGdiGetDIBitsInternal @ 0x1C004C070 (NtGdiGetDIBitsInternal.c)
 *     ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x1C00A04F0 (-ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z.c)
 *     ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x1C01506E0 (-xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z.c)
 *     ?GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z @ 0x1C02B2040 (-GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z.c)
 * Callees:
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@PEAUHBITMAP__@@IIPEAEPEAUtagBITMAPINFO@@III@Z @ 0x1C0036410 (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@P.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C004998C (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00499C0 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0049EA0 (--1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     ??1NEEDGRELOCK@@QEAA@XZ @ 0x1C01BF574 (--1NEEDGRELOCK@@QEAA@XZ.c)
 *     ??1NEEDDDILOCK@@QEAA@XZ @ 0x1C01BF5FC (--1NEEDDDILOCK@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetDIBitsInternal(
        HDC a1,
        HSURF a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int8 *a5,
        struct tagBITMAPINFO *a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9)
{
  struct tagBITMAPINFO *v9; // rdi
  unsigned int v12; // r13d
  unsigned int v13; // r12d
  unsigned int DIBitsInternalWorker; // ebx
  BOOL v16; // esi
  _DWORD *v17; // rsi
  unsigned int biSize; // r14d
  unsigned __int16 v19; // ax
  LONG v20; // edx
  __int64 v21; // rax
  int v22; // ecx
  int v23; // eax
  DWORD v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rsi
  HDC v27; // [rsp+28h] [rbp-D8h]
  HBITMAP v28; // [rsp+30h] [rbp-D0h]
  __int64 v29; // [rsp+70h] [rbp-90h] BYREF
  __int64 v30; // [rsp+78h] [rbp-88h] BYREF
  __int64 v31; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v32[8]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v33[32]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v34; // [rsp+B0h] [rbp-50h]
  DC *v35[6]; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v36[7]; // [rsp+E8h] [rbp-18h] BYREF

  v9 = a6;
  if ( !a6 || (v12 = a7, a7 > 2) || (v13 = a9, a9 < 0xC) )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  DIBitsInternalWorker = 0;
  if ( !a4 )
    a5 = 0LL;
  v16 = 1;
  DCOBJ::DCOBJ((DCOBJ *)v36, a1);
  if ( v36[0] )
    v16 = (*(_DWORD *)(*(_QWORD *)(v36[0] + 48LL) + 56LL) & 0x8000) == 0;
  DCOBJ::~DCOBJ((DCOBJ *)v36);
  LODWORD(a6) = v16;
  if ( v16 )
  {
    GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  }
  SURFREF::SURFREF((SURFREF *)v33, a2);
  v17 = (_DWORD *)v34;
  if ( v34 )
  {
    biSize = v9->bmiHeader.biSize;
    if ( a5 )
      goto LABEL_25;
    if ( biSize == 12 )
    {
      if ( !HIWORD(v9->bmiHeader.biHeight) )
      {
        LOWORD(v9->bmiHeader.biWidth) = *(_WORD *)(v34 + 56);
        HIWORD(v9->bmiHeader.biWidth) = *((_WORD *)v17 + 30);
        LOWORD(v9->bmiHeader.biHeight) = 1;
        v19 = *((_WORD *)&galBitsPerPixel + 2 * (unsigned int)v17[24]);
        HIWORD(v9->bmiHeader.biHeight) = v19;
        if ( v19 >= 0x10u )
          HIWORD(v9->bmiHeader.biHeight) = 24;
        DIBitsInternalWorker = 1;
        goto LABEL_39;
      }
LABEL_25:
      if ( biSize < 0x28 || v9->bmiHeader.biCompression - 4 > 1 )
      {
        DCOBJ::DCOBJ((DCOBJ *)v35, a1);
        if ( v35[0] )
        {
          v25 = *((_QWORD *)v35[0] + 12);
          v31 = *((_QWORD *)v35[0] + 6);
          v30 = v25;
          if ( (*(_DWORD *)(v31 + 56) & 0x8000) != 0 )
          {
            DIBitsInternalWorker = GreGetDIBitsInternalWorker(
                                     biSize,
                                     v35,
                                     (struct PDEVOBJ *)&v31,
                                     (struct SURFREF *)v33,
                                     (struct XEPALOBJ *)&v30,
                                     v27,
                                     v28,
                                     a3,
                                     a4,
                                     a5,
                                     v9,
                                     v12,
                                     a8,
                                     v13);
          }
          else
          {
            NEEDGRELOCK::vLock((NEEDGRELOCK *)v32, (struct XDCOBJ *)v35);
            v29 = 0LL;
            if ( v34 )
            {
              v26 = v34 + 24;
              if ( v34 != -24
                && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v26) + 112) & 0x4000) != 0
                 || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v26) + 112) < 0)
                && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v26) + 112) & 0x200) == 0 )
              {
                v29 = SURFOBJ_TO_SURFACE_NOT_NULL(v26);
                GreLockDisplayDevice(*(_QWORD *)(v29 + 48));
              }
            }
            DIBitsInternalWorker = GreGetDIBitsInternalWorker(
                                     biSize,
                                     v35,
                                     (struct PDEVOBJ *)&v31,
                                     (struct SURFREF *)v33,
                                     (struct XEPALOBJ *)&v30,
                                     v27,
                                     v28,
                                     a3,
                                     a4,
                                     a5,
                                     v9,
                                     v12,
                                     a8,
                                     v13);
            NEEDDDILOCK::~NEEDDDILOCK((NEEDDDILOCK *)&v29);
            NEEDGRELOCK::~NEEDGRELOCK((NEEDGRELOCK *)v32);
          }
        }
        DCOBJ::~DCOBJ((DCOBJ *)v35);
      }
      else
      {
        EngSetLastError(0x57u);
      }
      goto LABEL_39;
    }
    if ( v13 >= 0x28 )
    {
      if ( !v9->bmiHeader.biBitCount )
      {
        if ( biSize > 0x28 )
          memset(v9, 0, v9->bmiHeader.biSize);
        v9->bmiHeader.biSize = 40;
        v20 = v17[14];
        v9->bmiHeader.biWidth = v20;
        v9->bmiHeader.biHeight = v17[15];
        v9->bmiHeader.biCompression = 0;
        v9->bmiHeader.biPlanes = 1;
        v21 = (unsigned int)v17[24];
        *(_QWORD *)&v9->bmiHeader.biXPelsPerMeter = 0LL;
        v22 = *((unsigned __int16 *)&galBitsPerPixel + 2 * v21);
        v9->bmiHeader.biBitCount = v22;
        v23 = 0;
        DIBitsInternalWorker = 1;
        if ( (((_WORD)v22 - 16) & 0xFFEF) == 0 )
          v23 = 3;
        v9->bmiHeader.biCompression = v23;
        v9->bmiHeader.biSizeImage = v9->bmiHeader.biHeight * (((v20 * v22 + 31) >> 3) & 0xFFFFFFFC);
        v24 = *((_DWORD *)&gacPalEntries + (unsigned int)v17[24]);
        v9->bmiHeader.biClrImportant = v24;
        v9->bmiHeader.biClrUsed = v24;
        goto LABEL_39;
      }
      goto LABEL_25;
    }
  }
LABEL_39:
  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v33);
  NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)&a6);
  return DIBitsInternalWorker;
}
