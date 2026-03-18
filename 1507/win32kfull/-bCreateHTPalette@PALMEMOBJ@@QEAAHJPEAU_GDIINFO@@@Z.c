/*
 * XREFs of ?bCreateHTPalette@PALMEMOBJ@@QEAAHJPEAU_GDIINFO@@@Z @ 0x1C00FED38
 * Callers:
 *     ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x1C00307F0 (-bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z.c)
 *     EngHTBlt @ 0x1C00A30B4 (EngHTBlt.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0033FC4 (PALLOCMEM2.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     HT_Get8BPPMaskPalette @ 0x1C024DB80 (HT_Get8BPPMaskPalette.c)
 */

_BOOL8 __fastcall PALMEMOBJ::bCreateHTPalette(PALMEMOBJ *this, int a2, struct _GDIINFO *a3)
{
  __int64 v3; // r10
  ULONG ulPrimaryOrder; // r9d
  unsigned int v7; // ecx
  unsigned int v8; // edx
  unsigned int v9; // r8d
  int v11; // r12d
  unsigned int *p_peRed; // rsi
  LONG v13; // r15d
  int v14; // edx
  int v15; // edx
  struct tagPALETTEENTRY *v16; // rax
  ULONG v17; // r8d
  __int64 i; // rdx
  char v19; // cl
  __int64 j; // rdx
  char v21; // cl
  __int64 k; // rdx
  char v23; // cl
  __m128i *v24; // rax
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // eax
  _OWORD v28[2]; // [rsp+50h] [rbp-30h] BYREF

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
      v25 = v8;
      v8 = v9;
      v9 = v25;
    }
    if ( (ulPrimaryOrder & 2) != 0 )
    {
      v26 = v7;
      v7 = v8;
      v8 = v26;
    }
    else if ( (ulPrimaryOrder & 4) != 0 )
    {
      v27 = v7;
      v7 = v9;
      v9 = v27;
    }
    return PALMEMOBJ::bCreatePalette(this, 2u, 0, 0LL, v7, v8, v9, 0x100200u, 1) != 0;
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
  v14 = a2 - 2;
  if ( !v14 )
  {
LABEL_26:
    v17 = a3->ulPrimaryOrder;
    v13 = 8;
    p_peRed = (unsigned int *)v28;
    v28[0] = *(_OWORD *)&apal3BPP;
    v28[1] = xmmword_1C0320E30;
    if ( (v17 & 1) != 0 )
    {
      for ( i = 1LL; i < 7; ++i )
      {
        v19 = *((_BYTE *)v28 + 4 * i + 1);
        *((_BYTE *)v28 + 4 * i + 1) = *((_BYTE *)v28 + 4 * i + 2);
        *((_BYTE *)v28 + 4 * i + 2) = v19;
      }
    }
    if ( (v17 & 2) != 0 )
    {
      for ( j = 1LL; j < 7; ++j )
      {
        v21 = *((_BYTE *)v28 + 4 * j);
        *((_BYTE *)v28 + 4 * j) = *((_BYTE *)v28 + 4 * j + 1);
        *((_BYTE *)v28 + 4 * j + 1) = v21;
      }
    }
    else if ( (v17 & 4) != 0 )
    {
      for ( k = 1LL; k < 7; ++k )
      {
        v23 = *((_BYTE *)v28 + 4 * k);
        *((_BYTE *)v28 + 4 * k) = *((_BYTE *)v28 + 4 * k + 2);
        *((_BYTE *)v28 + 4 * k + 2) = v23;
      }
    }
    if ( (a3->flHTFlags & 0x100) != 0 )
    {
      v24 = (__m128i *)v28;
      do
      {
        *v24 = _mm_xor_si128(_mm_loadu_si128(v24), (__m128i)_xmm);
        ++v24;
        --v3;
      }
      while ( v3 );
    }
    goto LABEL_14;
  }
  v15 = v14 - 1;
  if ( v15 )
  {
    if ( v15 == 1 )
    {
      v13 = HT_Get8BPPMaskPalette(
              0LL,
              a3->flHTFlags & 8,
              HIBYTE(a3->flHTFlags),
              a3->ciDevice.RedGamma,
              a3->ciDevice.GreenGamma,
              a3->ciDevice.BlueGamma);
      v16 = (struct tagPALETTEENTRY *)PALLOCMEM2((unsigned int)(4 * v13), 1818316871LL, 0);
      p_peRed = (unsigned int *)&v16->peRed;
      if ( !v16 )
        return 0LL;
      if ( (a3->flHTFlags & 0x400) != 0 )
        *v16 = (struct tagPALETTEENTRY)809650002;
      else
        *v16 = 0;
      HT_Get8BPPMaskPalette(
        v16,
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
  if ( PALMEMOBJ::bCreatePalette(this, 1u, v13, p_peRed, 0, 0, 0, 0x100400u, 1) )
  {
    if ( v11 )
      Win32FreePool(p_peRed);
    return 1LL;
  }
  if ( v11 )
    Win32FreePool(p_peRed);
  return 0LL;
}
