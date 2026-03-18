/*
 * XREFs of ?ExcludeRegionFromRect@CDwmMetaRegion@@SA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCRegion@@@Z @ 0x180131604
 * Callers:
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180029DD0 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18001D198 (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?BeginIterator@CRegion@FastRegion@@QEBA?AVIterator@12@XZ @ 0x18001D254 (-BeginIterator@CRegion@FastRegion@@QEBA-AVIterator@12@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18009A9F4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?SetRectangle@CRegion@FastRegion@@QEAAXHHHH@Z @ 0x18009AA50 (-SetRectangle@CRegion@FastRegion@@QEAAXHHHH@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18009B6C0 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

char __fastcall CDwmMetaRegion::ExcludeRegionFromRect(float *a1, const struct FastRegion::Internal::CRgnData **a2)
{
  int v2; // r9d
  char v5; // di
  int v6; // eax
  int v7; // r10d
  FastRegion::Internal::CRgnData *v8; // rcx
  __m128 v10; // [rsp+30h] [rbp-69h]
  _BYTE v11[8]; // [rsp+40h] [rbp-59h] BYREF
  unsigned __int64 v12; // [rsp+48h] [rbp-51h]
  int *v13; // [rsp+50h] [rbp-49h]
  __int64 v14; // [rsp+58h] [rbp-41h]
  int v15; // [rsp+60h] [rbp-39h]
  __int128 v16; // [rsp+70h] [rbp-29h]
  int *v17; // [rsp+80h] [rbp-19h] BYREF
  int v18; // [rsp+88h] [rbp-11h] BYREF

  v2 = (int)a1[2];
  v18 = 0;
  v17 = &v18;
  v5 = 0;
  FastRegion::CRegion::SetRectangle((FastRegion::CRegion *)&v17, (int)*a1, (int)a1[1], v2, (int)a1[3]);
  v6 = FastRegion::CRegion::Subtract((const struct FastRegion::Internal::CRgnData **)&v17, a2);
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x31Cu);
  }
  else
  {
    FastRegion::CRegion::BeginIterator(&v17, (__int64)v11);
    while ( (unsigned __int64)v13 < v12 )
    {
      v7 = *(_DWORD *)(v14 + 8LL * v15);
      v8 = (FastRegion::Internal::CRgnData *)(unsigned int)((*(_DWORD *)(v14 + 4LL * (2 * v15 + 1)) - v7)
                                                          * (v13[2] - *v13));
      if ( (int)v8 > 0 )
      {
        v5 = 1;
        v10.m128_f32[0] = (float)v7;
        v10.m128_f32[1] = (float)*v13;
        v10.m128_f32[2] = (float)*(int *)(v14 + 4LL * (2 * v15 + 1));
        v10.m128_f32[3] = (float)v13[2];
        *(float *)&v16 = (float)v7;
        HIDWORD(v16) = _mm_shuffle_ps(v10, v10, 255).m128_u32[0];
        DWORD1(v16) = _mm_shuffle_ps(v10, v10, 85).m128_u32[0];
        DWORD2(v16) = _mm_shuffle_ps(v10, v10, 170).m128_u32[0];
        *(_OWORD *)a1 = v16;
      }
      FastRegion::Internal::CRgnData::StepIterator(v8, (struct FastRegion::CRegion::Iterator *)v11);
    }
  }
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion **)&v17);
  return v5;
}
