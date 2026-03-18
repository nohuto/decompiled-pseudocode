/*
 * XREFs of BmfdQueryFontData @ 0x1C0018508
 * Callers:
 *     BmfdQueryFontDataTE @ 0x1C0018460 (BmfdQueryFontDataTE.c)
 * Callees:
 *     cjBmfdDeviceMetrics @ 0x1C0018140 (cjBmfdDeviceMetrics.c)
 *     BmfdOpenFontContext @ 0x1C0018290 (BmfdOpenFontContext.c)
 *     bReconnectBmfdFont @ 0x1C0018740 (bReconnectBmfdFont.c)
 *     vComputeSimulatedGLYPHDATA @ 0x1C0018784 (vComputeSimulatedGLYPHDATA.c)
 *     cjGlyphDataSimulated @ 0x1C0018938 (cjGlyphDataSimulated.c)
 *     pjRawBitmap @ 0x1C0018988 (pjRawBitmap.c)
 *     vBmfdScrubGLYPHBITS @ 0x1C0018A34 (vBmfdScrubGLYPHBITS.c)
 *     vCvtToBmp @ 0x1C0018A80 (vCvtToBmp.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     vBmfdMarkFontGone @ 0x1C02441D0 (vBmfdMarkFontGone.c)
 *     vFill_RotateGLYPHDATA @ 0x1C024421C (vFill_RotateGLYPHDATA.c)
 *     vCvtToBoldBmp @ 0x1C02445F4 (vCvtToBoldBmp.c)
 *     vCvtToBoldItalicBmp @ 0x1C02446C8 (vCvtToBoldItalicBmp.c)
 *     vCvtToItalicBmp @ 0x1C0244838 (vCvtToItalicBmp.c)
 *     vStretchCvtToBitmap @ 0x1C0244A14 (vStretchCvtToBitmap.c)
 */

__int64 __fastcall BmfdQueryFontData(__int64 a1, int a2, unsigned int a3, __int64 a4, _DWORD *pv, size_t Size)
{
  _DWORD *v9; // rbx
  __int64 v10; // rsi
  int v11; // r15d
  __int64 v12; // r8
  __int64 v13; // r15
  __int16 v14; // r13
  int v15; // r8d
  unsigned int v16; // r15d
  ULONG v17; // eax
  int v18; // edx
  int v19; // r9d
  int v20; // r10d
  ULONG v21; // r11d
  int v22; // ecx
  int v23; // eax
  int v24; // eax
  void *v26; // r14
  __int64 v27; // [rsp+50h] [rbp-178h]
  ULONG v28; // [rsp+58h] [rbp-170h]
  __int64 v29; // [rsp+60h] [rbp-168h]
  unsigned int v31; // [rsp+6Ch] [rbp-15Ch] BYREF
  PVOID v32; // [rsp+70h] [rbp-158h]
  void *v33; // [rsp+78h] [rbp-150h]
  __int64 v34; // [rsp+80h] [rbp-148h]
  __int64 v35; // [rsp+88h] [rbp-140h]
  char v36[256]; // [rsp+90h] [rbp-138h] BYREF

  v35 = a4;
  v9 = pv;
  v32 = pv;
  v28 = 0;
  v33 = 0LL;
  if ( !(unsigned int)bReconnectBmfdFont(*(_QWORD *)(a1 + 24)) )
    return 0xFFFFFFFFLL;
  if ( !*(_QWORD *)(a1 + 56) )
    *(_QWORD *)(a1 + 56) = BmfdOpenFontContext(a1);
  v10 = *(_QWORD *)(a1 + 56);
  v34 = v10;
  if ( !v10 )
    return 0xFFFFFFFFLL;
  v11 = a2 - 1;
  if ( v11 )
  {
    if ( v11 == 2 )
    {
      if ( pv )
        return cjBmfdDeviceMetrics(v10, (__int64)pv);
      else
        return 124LL;
    }
    return 0xFFFFFFFFLL;
  }
  v12 = *(_QWORD *)(v10 + 24);
  v13 = v12 + 36;
  v27 = v12 + 36;
  v14 = *(_WORD *)(*(_QWORD *)(v12 + 80) + 60LL);
  v29 = pjRawBitmap(a3, v12 + 36, v12, &v31);
  v15 = *(_DWORD *)(v10 + 40) * *(unsigned __int16 *)(v13 + 8);
  v16 = v31;
  v17 = cjGlyphDataSimulated(a1, *(_DWORD *)(v10 + 36) * v31, v15, 0, 0);
  v21 = v17;
  v22 = *(_DWORD *)(v10 + 16);
  if ( !v22 )
    goto LABEL_7;
  if ( v22 == 900 )
    goto LABEL_29;
  if ( v22 != 1800 )
  {
    if ( v22 != 2700 )
      goto LABEL_8;
LABEL_29:
    v17 = cjGlyphDataSimulated(
            a1,
            *(_DWORD *)(v10 + 36) * v16,
            *(_DWORD *)(v10 + 40) * (unsigned int)*(unsigned __int16 *)(v27 + 8),
            v19,
            v22);
  }
LABEL_7:
  v28 = v17;
LABEL_8:
  if ( !*(_DWORD *)(v10 + 16) || !pv )
    goto LABEL_9;
  v33 = pv;
  v9 = EngAllocMem(0, v21, 0x64666D42u);
  v32 = v9;
  if ( !v9 )
    return 0xFFFFFFFFLL;
  v20 = v29;
LABEL_9:
  if ( a4 )
  {
    vComputeSimulatedGLYPHDATA(
      a4,
      v20,
      v16,
      *(unsigned __int16 *)(v27 + 8),
      v14,
      *(_DWORD *)(v10 + 36),
      *(_DWORD *)(v10 + 40),
      a1);
    *(_DWORD *)(a4 + 8) = a3;
  }
  if ( v9 )
  {
    if ( v16 )
    {
      v23 = *(_DWORD *)(v10 + 52);
      if ( (v23 & 1) != 0 )
      {
        if ( (v23 & 2) != 0 )
        {
          EngAcquireSemaphore(ghsemBMFD);
          vStretchCvtToBitmap(
            v9,
            v29,
            v16,
            *(unsigned __int16 *)(v27 + 8),
            v14,
            v10 + 56,
            *(_DWORD *)(v10 + 36),
            *(_DWORD *)(v10 + 40),
            *(_DWORD *)(a1 + 12) & 0x6000);
          EngReleaseSemaphore(ghsemBMFD);
        }
        else
        {
          vStretchCvtToBitmap(
            v9,
            v29,
            v16,
            *(unsigned __int16 *)(v27 + 8),
            v14,
            v36,
            *(_DWORD *)(v10 + 36),
            *(_DWORD *)(v10 + 40),
            *(_DWORD *)(a1 + 12) & 0x6000);
        }
      }
      else
      {
        v24 = *(_DWORD *)(a1 + 12) & 0x6000;
        if ( v24 )
        {
          switch ( v24 )
          {
            case 8192:
              vCvtToBoldBmp((_DWORD)v9, v18, v29, v16, *(unsigned __int16 *)(v27 + 8), v14);
              break;
            case 16384:
              vCvtToItalicBmp((_DWORD)v9, v18, v29, v16, *(unsigned __int16 *)(v27 + 8), v14);
              break;
            case 24576:
              vCvtToBoldItalicBmp((_DWORD)v9, v18, v29, v16, *(unsigned __int16 *)(v27 + 8), v14);
              break;
          }
        }
        else
        {
          vCvtToBmp((_DWORD)v9, v18, v29, v16, *(unsigned __int16 *)(v27 + 8), v14);
        }
      }
    }
    else
    {
      *v9 = 0;
      v9[1] = -v14;
      v9[2] = 1;
      v9[3] = 1;
      v9[4] = 0;
    }
    if ( a4 )
      *(_QWORD *)a4 = v9;
    vBmfdScrubGLYPHBITS(v9);
  }
  if ( *(_DWORD *)(v10 + 16) )
  {
    v26 = v33;
    if ( v33 )
      memset(v33, 0, (unsigned int)Size);
    vFill_RotateGLYPHDATA(a4, v9, v26, *(unsigned int *)(v10 + 16));
    if ( v9 )
      EngFreeMem(v9);
  }
  return v28;
}
