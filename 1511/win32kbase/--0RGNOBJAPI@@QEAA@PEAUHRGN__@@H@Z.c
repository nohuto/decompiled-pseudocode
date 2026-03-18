/*
 * XREFs of ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C0028350
 * Callers:
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C0024220 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GreSetRectRgn @ 0x1C0025020 (GreSetRectRgn.c)
 *     GreRectInRegion @ 0x1C0025120 (GreRectInRegion.c)
 *     GreGetRgnBox @ 0x1C00251A0 (GreGetRgnBox.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0025350 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x1C0026470 (SetOrCreateRectRgnIndirectPublic.c)
 *     NtGdiDeleteObjectApp @ 0x1C00266A0 (NtGdiDeleteObjectApp.c)
 *     SetRectRgnIndirect @ 0x1C0026D20 (SetRectRgnIndirect.c)
 *     GreCombineRgn @ 0x1C0026E40 (GreCombineRgn.c)
 *     bDeleteRegion @ 0x1C0037860 (bDeleteRegion.c)
 *     GreOffsetRgn @ 0x1C00441E0 (GreOffsetRgn.c)
 *     GreCopyVisRgn @ 0x1C0044310 (GreCopyVisRgn.c)
 *     GrePtInRegion @ 0x1C00726F0 (GrePtInRegion.c)
 *     GreGetRegionData @ 0x1C0074D10 (GreGetRegionData.c)
 *     EngDeleteRgn @ 0x1C0074EB0 (EngDeleteRgn.c)
 *     GreIsValidRegion @ 0x1C007A4D0 (GreIsValidRegion.c)
 *     NtGdiEqualRgn @ 0x1C007DF80 (NtGdiEqualRgn.c)
 *     EngEqualRgn @ 0x1C00BF3B0 (EngEqualRgn.c)
 *     InitializeGre @ 0x1C013A000 (InitializeGre.c)
 * Callees:
 *     HmgLockEx @ 0x1C0025B60 (HmgLockEx.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 */

RGNOBJAPI *__fastcall RGNOBJAPI::RGNOBJAPI(RGNOBJAPI *this, HRGN a2, int a3)
{
  __int64 v6; // rax
  int v7; // r10d
  __m128i *v8; // r11
  char v9; // cl
  _DWORD *v10; // rdx
  _DWORD *v11; // rdx
  _DWORD *v12; // rdx
  char *v13; // rcx
  _DWORD *v14; // rdx
  char *v15; // rdx
  _BYTE v17[24]; // [rsp+30h] [rbp-38h]

  v6 = HmgLockEx((int)a2, 4, 0);
  *(_QWORD *)this = v6;
  *((_QWORD *)this + 1) = a2;
  *((_DWORD *)this + 4) = a3;
  if ( !v6 )
    return this;
  v7 = 1;
  v8 = (__m128i *)*((_QWORD *)WPP_MAIN_CB.Dpc.SystemArgument2 + 3 * (unsigned __int16)*(_DWORD *)v6 + 2);
  if ( v8 )
  {
    *(__m128i *)v17 = *v8;
    *(_QWORD *)&v17[16] = v8[1].m128i_i64[0];
    v9 = _mm_cvtsi128_si32(*v8);
    if ( (v9 & 0x11) != 0x10 )
    {
LABEL_21:
      v7 = 0;
      goto LABEL_22;
    }
    if ( (v9 & 0x20) != 0 )
    {
      if ( *(_DWORD *)&v17[4] == 1 )
      {
        *(_DWORD *)(v6 + 80) = 120;
        *(_QWORD *)(v6 + 84) = 1LL;
        *(_QWORD *)(v6 + 92) = 0LL;
        *(_DWORD *)(v6 + 100) = 0;
        *(_DWORD *)(v6 + 104) = 0;
        *(_DWORD *)(v6 + 108) = 0x80000000;
        *(_QWORD *)(v6 + 112) = 0x7FFFFFFFLL;
        *(_QWORD *)(v6 + 40) = v6 + 120;
        v8->m128i_i32[0] &= ~0x20u;
        goto LABEL_22;
      }
      if ( *(_DWORD *)&v17[4] == 2 )
      {
        if ( (((*(_DWORD *)&v17[8] & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
          && (((*(_DWORD *)&v17[20] & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
          && (((*(_DWORD *)&v17[16] & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
          && (((*(_DWORD *)&v17[12] & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0 )
        {
          if ( *(_DWORD *)&v17[8] == *(_DWORD *)&v17[16] || *(_DWORD *)&v17[12] == *(_DWORD *)&v17[20] )
          {
            *(_DWORD *)(v6 + 80) = 120;
            *(_QWORD *)(v6 + 84) = 1LL;
            *(_QWORD *)(v6 + 92) = 0LL;
            *(_DWORD *)(v6 + 100) = 0;
            v15 = (char *)(v6 + 104);
            *(_DWORD *)(v6 + 104) = 0;
            *(_DWORD *)(v6 + 108) = 0x80000000;
          }
          else
          {
            *(_OWORD *)(v6 + 88) = *(_OWORD *)&v17[8];
            v10 = (_DWORD *)(v6 + 104);
            if ( *(_DWORD *)(v6 + 80) == 160 )
            {
              *(_DWORD *)(v6 + 112) = *(_DWORD *)&v17[12];
              v11 = (_DWORD *)((char *)v10 + (unsigned int)(4 * *v10 + 16));
              v11[1] = *(_DWORD *)&v17[12];
              v11[2] = *(_DWORD *)&v17[20];
              v11[3] = *(_DWORD *)&v17[8];
              v11[4] = *(_DWORD *)&v17[16];
              v12 = (_DWORD *)((char *)v11 + (unsigned int)(4 * *v11 + 16));
              v12[1] = *(_DWORD *)&v17[20];
              v13 = (char *)v12 + (unsigned int)(4 * *v12 + 16);
LABEL_19:
              *(_QWORD *)(v6 + 40) = v13;
              v8->m128i_i32[0] &= ~0x20u;
              goto LABEL_22;
            }
            *(_DWORD *)(v6 + 80) = 160;
            *(_DWORD *)(v6 + 84) = 3;
            *v10 = 0;
            *(_DWORD *)(v6 + 108) = 0x80000000;
            *(_DWORD *)(v6 + 112) = *(_DWORD *)&v17[12];
            *(_DWORD *)(v6 + 116) = 0;
            v14 = (_DWORD *)((char *)v10 + (unsigned int)(4 * *v10 + 16));
            *v14 = 2;
            v14[1] = *(_DWORD *)&v17[12];
            v14[2] = *(_DWORD *)&v17[20];
            v14[3] = *(_DWORD *)&v17[8];
            v14[4] = *(_DWORD *)&v17[16];
            v14[5] = 2;
            v15 = (char *)v14 + (unsigned int)(4 * *v14 + 16);
            *(_DWORD *)v15 = 0;
            *((_DWORD *)v15 + 1) = *(_DWORD *)&v17[20];
          }
          v13 = &v15[4 * *(_DWORD *)v15 + 16];
          *((_QWORD *)v15 + 1) = 0x7FFFFFFFLL;
          goto LABEL_19;
        }
        goto LABEL_21;
      }
    }
  }
LABEL_22:
  if ( !v7 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
    *(_QWORD *)this = 0LL;
    *((_QWORD *)this + 1) = 0LL;
  }
  return this;
}
