/*
 * XREFs of NtGdiIcmBrushInfo @ 0x1C02B2EE0
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C0060508 (PALLOCMEM2.c)
 *     GreGetBitmapBitsSize @ 0x1C0110F1C (GreGetBitmapBitsSize.c)
 *     ?GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z @ 0x1C02B2040 (-GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z.c)
 *     ?GreIcmSetBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z @ 0x1C02B222C (-GreIcmSetBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z.c)
 */

struct tagBITMAPINFO *__fastcall NtGdiIcmBrushInfo(
        HDC a1,
        HBRUSH a2,
        unsigned __int64 a3,
        char *a4,
        unsigned int *a5,
        unsigned int *a6,
        int *a7,
        int a8)
{
  struct tagBITMAPINFO *result; // rax
  struct tagBITMAPINFO *v11; // r14
  unsigned int *v12; // rdx
  unsigned int v13; // edi
  struct tagBITMAPINFO *v14; // rcx
  __int64 v15; // r8
  unsigned int *v16; // rcx
  unsigned int BitmapBitsSize; // eax
  unsigned int v18; // r11d
  char *v19; // rcx
  unsigned int *v20; // rdx
  struct tagBITMAPINFO *v21; // rax
  __int64 v22; // r8
  int *v23; // rcx
  unsigned int *v24; // rcx
  unsigned int v25; // [rsp+40h] [rbp-48h] BYREF
  int v26; // [rsp+44h] [rbp-44h] BYREF
  unsigned int v27; // [rsp+48h] [rbp-40h] BYREF
  struct tagBITMAPINFO *v28; // [rsp+50h] [rbp-38h]

  v25 = 0;
  result = (struct tagBITMAPINFO *)PALLOCMEM2(0x428uLL, 1835231559LL, 0);
  v11 = result;
  v28 = result;
  if ( result )
  {
    if ( !a8 )
    {
      v26 = 0;
      v27 = 0;
      if ( a4 )
      {
        v20 = a5;
        if ( (unsigned __int64)a5 >= W32UserProbeAddress )
          v20 = (unsigned int *)W32UserProbeAddress;
        v25 = *v20;
        ProbeForWrite(a4, v25, 4u);
      }
      v13 = GreIcmQueryBrushBitmap(a1, a2, v11, (unsigned __int8 *)a4, &v25, &v27, &v26);
      if ( v13 )
      {
        ProbeForWrite((volatile void *)a3, 0x428uLL, 4u);
        v21 = v11;
        v22 = 8LL;
        do
        {
          *(_OWORD *)a3 = *(_OWORD *)&v21->bmiHeader.biSize;
          *(_OWORD *)(a3 + 16) = *(_OWORD *)&v21->bmiHeader.biCompression;
          *(_OWORD *)(a3 + 32) = *(_OWORD *)&v21->bmiHeader.biClrUsed;
          *(_OWORD *)(a3 + 48) = *(_OWORD *)&v21[1].bmiHeader.biWidth;
          *(_OWORD *)(a3 + 64) = *(_OWORD *)&v21[1].bmiHeader.biSizeImage;
          *(_OWORD *)(a3 + 80) = *(_OWORD *)&v21[1].bmiHeader.biClrImportant;
          *(_OWORD *)(a3 + 96) = *(_OWORD *)&v21[2].bmiHeader.biHeight;
          a3 += 128LL;
          *(_OWORD *)(a3 - 16) = *(_OWORD *)&v21[2].bmiHeader.biXPelsPerMeter;
          v21 = (struct tagBITMAPINFO *)((char *)v21 + 128);
          --v22;
        }
        while ( v22 );
        *(_OWORD *)a3 = *(_OWORD *)&v21->bmiHeader.biSize;
        *(_OWORD *)(a3 + 16) = *(_OWORD *)&v21->bmiHeader.biCompression;
        *(_QWORD *)(a3 + 32) = *(_QWORD *)&v21->bmiHeader.biClrUsed;
        v12 = a5;
        if ( (unsigned __int64)a5 >= W32UserProbeAddress )
          v12 = (unsigned int *)W32UserProbeAddress;
        *v12 = v25;
        v23 = a7;
        if ( a7 )
        {
          if ( (unsigned __int64)a7 >= W32UserProbeAddress )
            v23 = (int *)W32UserProbeAddress;
          *v23 = v26;
        }
        v24 = a6;
        if ( a6 )
        {
          if ( (unsigned __int64)a6 >= W32UserProbeAddress )
            v24 = (unsigned int *)W32UserProbeAddress;
          *v24 = v27;
        }
      }
      goto LABEL_40;
    }
    if ( a8 == 1 )
    {
      if ( (a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a3 + 1064 > W32UserProbeAddress || a3 + 1064 < a3 )
        *W32UserProbeAddress = 0;
      v14 = result;
      v15 = 8LL;
      do
      {
        *(_OWORD *)&v14->bmiHeader.biSize = *(_OWORD *)a3;
        *(_OWORD *)&v14->bmiHeader.biCompression = *(_OWORD *)(a3 + 16);
        *(_OWORD *)&v14->bmiHeader.biClrUsed = *(_OWORD *)(a3 + 32);
        *(_OWORD *)&v14[1].bmiHeader.biWidth = *(_OWORD *)(a3 + 48);
        *(_OWORD *)&v14[1].bmiHeader.biSizeImage = *(_OWORD *)(a3 + 64);
        *(_OWORD *)&v14[1].bmiHeader.biClrImportant = *(_OWORD *)(a3 + 80);
        *(_OWORD *)&v14[2].bmiHeader.biHeight = *(_OWORD *)(a3 + 96);
        v14 = (struct tagBITMAPINFO *)((char *)v14 + 128);
        *(_OWORD *)&v14[-1].bmiHeader.biYPelsPerMeter = *(_OWORD *)(a3 + 112);
        a3 += 128LL;
        --v15;
      }
      while ( v15 );
      *(_OWORD *)&v14->bmiHeader.biSize = *(_OWORD *)a3;
      *(_OWORD *)&v14->bmiHeader.biCompression = *(_OWORD *)(a3 + 16);
      *(_QWORD *)&v14->bmiHeader.biClrUsed = *(_QWORD *)(a3 + 32);
      v16 = a5;
      if ( (unsigned __int64)a5 >= W32UserProbeAddress )
        v16 = (unsigned int *)W32UserProbeAddress;
      v25 = *v16;
      BitmapBitsSize = GreGetBitmapBitsSize((__int64)result);
      if ( BitmapBitsSize && BitmapBitsSize <= v18 )
      {
        if ( ((unsigned __int8)a4 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v19 = &a4[BitmapBitsSize];
        if ( (unsigned __int64)v19 > W32UserProbeAddress || v19 < a4 )
          *W32UserProbeAddress = 0;
        v13 = GreIcmSetBrushBitmap(a1, a2, v11, a4);
        goto LABEL_40;
      }
    }
    else
    {
      EngSetLastError(0x57u);
    }
    v13 = 0;
LABEL_40:
    Win32FreePool(v11, v12);
    return (struct tagBITMAPINFO *)v13;
  }
  return result;
}
