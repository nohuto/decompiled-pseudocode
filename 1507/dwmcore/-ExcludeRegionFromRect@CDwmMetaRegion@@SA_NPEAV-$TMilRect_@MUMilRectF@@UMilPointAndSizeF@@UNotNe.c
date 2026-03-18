/*
 * XREFs of ?ExcludeRegionFromRect@CDwmMetaRegion@@SA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCRegion@@@Z @ 0x1800FE324
 * Callers:
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007D8C0 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?BeginIterator@CRegion@FastRegion@@QEBA?AVIterator@12@XZ @ 0x18000D3FC (-BeginIterator@CRegion@FastRegion@@QEBA-AVIterator@12@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800881A0 (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800884B4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x180088DA4 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 */

char __fastcall CDwmMetaRegion::ExcludeRegionFromRect(float *a1, const struct FastRegion::Internal::CRgnData **a2)
{
  int v2; // r8d
  char v3; // di
  int v5; // r9d
  int v6; // eax
  int v8; // r8d
  int v9; // r9d
  FastRegion::Internal::CRgnData *v10; // rcx
  __m128 v11; // [rsp+30h] [rbp-59h]
  int v12; // [rsp+3Ch] [rbp-4Dh]
  _BYTE v13[8]; // [rsp+40h] [rbp-49h] BYREF
  unsigned __int64 v14; // [rsp+48h] [rbp-41h]
  int *v15; // [rsp+50h] [rbp-39h]
  __int64 v16; // [rsp+58h] [rbp-31h]
  int v17; // [rsp+60h] [rbp-29h]
  __int128 v18; // [rsp+70h] [rbp-19h]
  _DWORD *v19; // [rsp+80h] [rbp-9h] BYREF
  _DWORD v20[3]; // [rsp+88h] [rbp-1h] BYREF
  _DWORD v21[2]; // [rsp+94h] [rbp+Bh] BYREF
  _DWORD v22[13]; // [rsp+9Ch] [rbp+13h] BYREF

  v2 = (int)*a1;
  v19 = v20;
  v3 = 0;
  v5 = (int)a1[2];
  v12 = (int)a1[3];
  if ( v2 >= v5 || (int)a1[1] >= v12 )
  {
    v20[0] = 0;
  }
  else
  {
    v21[0] = (int)a1[1];
    v20[0] = 2;
    v20[1] = v2;
    v20[2] = v5;
    v21[1] = (unsigned int)v20 + 1 + 27 - (unsigned int)v21;
    v22[2] = v2;
    v22[3] = v5;
    v22[1] = (unsigned int)v20 + 1 + 27 - (unsigned int)v22 + 8;
    v22[0] = v12;
  }
  v6 = FastRegion::CRegion::Subtract((const struct FastRegion::Internal::CRgnData **)&v19, a2);
  if ( v6 >= 0 )
  {
    FastRegion::CRegion::BeginIterator(&v19, (__int64)v13);
    while ( (unsigned __int64)v15 < v14 )
    {
      v8 = v15[2];
      v9 = *(_DWORD *)(v16 + 8LL * v17);
      v10 = (FastRegion::Internal::CRgnData *)(unsigned int)((*(_DWORD *)(v16 + 8LL * v17 + 4) - v9) * (v8 - *v15));
      if ( (int)v10 > 0 )
      {
        v3 = 1;
        v11.m128_f32[0] = (float)v9;
        v11.m128_f32[1] = (float)*v15;
        v11.m128_f32[2] = (float)*(int *)(v16 + 8LL * v17 + 4);
        v11.m128_f32[3] = (float)v8;
        *(float *)&v18 = (float)v9;
        *((float *)&v18 + 3) = (float)v8;
        DWORD1(v18) = _mm_shuffle_ps(v11, v11, 85).m128_u32[0];
        DWORD2(v18) = _mm_shuffle_ps(v11, v11, 170).m128_u32[0];
        *(_OWORD *)a1 = v18;
      }
      FastRegion::Internal::CRgnData::StepIterator(v10, (struct FastRegion::CRegion::Iterator *)v13);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x31Cu);
  }
  FastRegion::CRegion::FreeMemory((void **)&v19);
  return v3;
}
