/*
 * XREFs of ?bCreateHTPalette@PALMEMOBJ@@QEAAHJPEAU_GDIINFO@@@Z @ 0x1C00BA8A4
 * Callers:
 *     ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x1C001C078 (-bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z.c)
 *     EngHTBlt @ 0x1C00BAC98 (EngHTBlt.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C001A9C0 (PALLOCMEM2.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     HT_Get8BPPMaskPalette @ 0x1C024DB10 (HT_Get8BPPMaskPalette.c)
 */

_BOOL8 __fastcall PALMEMOBJ::bCreateHTPalette(PALMEMOBJ *this, int a2, struct _GDIINFO *a3)
{
  __int64 v3; // r10
  ULONG ulPrimaryOrder; // r9d
  unsigned int v7; // ecx
  unsigned int v8; // edx
  unsigned int v9; // r8d
  int v11; // r12d
  unsigned int *p_peRed; // rdi
  LONG v13; // r15d
  unsigned int v14; // eax
  int v15; // edx
  int v16; // edx
  struct tagPALETTEENTRY *v17; // rax
  ULONG v18; // r8d
  __int64 i; // rdx
  char v20; // cl
  __int64 j; // rdx
  char v22; // cl
  __int64 k; // rdx
  char v24; // cl
  __m128i *v25; // rax
  unsigned int v26; // eax
  unsigned int v27; // eax
  _OWORD v28[2]; // [rsp+40h] [rbp-30h] BYREF

  v3 = 2LL;
  if ( (unsigned int)(a2 - 5) <= 2 )
  {
    ulPrimaryOrder = a3->ulPrimaryOrder;
    if ( a2 == 5 )
    {
      v7 = 31744;
      v8 = 992;
      v9 = 31;
    }
    else
    {
      v7 = 16711680;
      v8 = 65280;
      v9 = 255;
    }
    if ( (ulPrimaryOrder & 1) != 0 )
    {
      v26 = v8;
      v8 = v9;
      v9 = v26;
    }
    if ( (ulPrimaryOrder & 2) != 0 )
    {
      v27 = v7;
      v7 = v8;
      v8 = v27;
    }
    else if ( (ulPrimaryOrder & 4) != 0 )
    {
      v14 = v7;
      v7 = v9;
      v9 = v14;
    }
    return PALMEMOBJ::bCreatePalette(this, 2u, 0, 0LL, v7, v8, v9, 0x100200u) != 0;
  }
  v11 = 0;
  if ( !a2 )
  {
    p_peRed = (unsigned int *)&apalMono;
    v13 = 2;
    if ( (a3->flHTFlags & 0x100) != 0 )
    {
      p_peRed = (unsigned int *)v28;
      *(_QWORD *)&v28[0] = 0xFFFFFFLL;
    }
    goto LABEL_14;
  }
  v15 = a2 - 2;
  if ( !v15 )
  {
LABEL_26:
    v18 = a3->ulPrimaryOrder;
    v13 = 8;
    p_peRed = (unsigned int *)v28;
    v28[0] = *(_OWORD *)&apal3BPP;
    v28[1] = xmmword_1C0320E30;
    if ( (v18 & 1) != 0 )
    {
      for ( i = 1LL; i < 7; ++i )
      {
        v20 = *((_BYTE *)v28 + 4 * i + 1);
        *((_BYTE *)v28 + 4 * i + 1) = *((_BYTE *)v28 + 4 * i + 2);
        *((_BYTE *)v28 + 4 * i + 2) = v20;
      }
    }
    if ( (v18 & 2) != 0 )
    {
      for ( j = 1LL; j < 7; ++j )
      {
        v22 = *((_BYTE *)v28 + 4 * j);
        *((_BYTE *)v28 + 4 * j) = *((_BYTE *)v28 + 4 * j + 1);
        *((_BYTE *)v28 + 4 * j + 1) = v22;
      }
    }
    else if ( (v18 & 4) != 0 )
    {
      for ( k = 1LL; k < 7; ++k )
      {
        v24 = *((_BYTE *)v28 + 4 * k);
        *((_BYTE *)v28 + 4 * k) = *((_BYTE *)v28 + 4 * k + 2);
        *((_BYTE *)v28 + 4 * k + 2) = v24;
      }
    }
    if ( (a3->flHTFlags & 0x100) != 0 )
    {
      v25 = (__m128i *)v28;
      do
      {
        *v25 = _mm_xor_si128(_mm_loadu_si128(v25), (__m128i)_xmm);
        ++v25;
        --v3;
      }
      while ( v3 );
    }
    goto LABEL_14;
  }
  v16 = v15 - 1;
  if ( v16 )
  {
    if ( v16 == 1 )
    {
      v13 = HT_Get8BPPMaskPalette(
              0LL,
              a3->flHTFlags & 8,
              HIBYTE(a3->flHTFlags),
              a3->ciDevice.RedGamma,
              a3->ciDevice.GreenGamma,
              a3->ciDevice.BlueGamma);
      v17 = (struct tagPALETTEENTRY *)PALLOCMEM2((unsigned int)(4 * v13), 1818316871LL, 0);
      p_peRed = (unsigned int *)&v17->peRed;
      if ( !v17 )
        return 0LL;
      if ( (a3->flHTFlags & 0x400) != 0 )
        *v17 = (struct tagPALETTEENTRY)809650002;
      else
        *v17 = 0;
      HT_Get8BPPMaskPalette(
        v17,
        a3->flHTFlags & 8,
        HIBYTE(a3->flHTFlags),
        a3->ciDevice.RedGamma,
        a3->ciDevice.GreenGamma,
        a3->ciDevice.BlueGamma);
      v11 = 1;
      goto LABEL_14;
    }
    goto LABEL_26;
  }
  v13 = 16;
  p_peRed = (unsigned int *)&apalVGA;
LABEL_14:
  if ( PALMEMOBJ::bCreatePalette(this, 1u, v13, p_peRed, 0, 0, 0, 0x100400u) )
  {
    if ( v11 )
      Win32FreePool(p_peRed);
    return 1LL;
  }
  if ( v11 )
    Win32FreePool(p_peRed);
  return 0LL;
}
