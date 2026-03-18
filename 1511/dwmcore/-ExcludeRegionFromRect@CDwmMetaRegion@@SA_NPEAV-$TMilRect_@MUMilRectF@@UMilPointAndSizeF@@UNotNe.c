/*
 * XREFs of ?ExcludeRegionFromRect@CDwmMetaRegion@@SA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCRegion@@@Z @ 0x1801173E8
 * Callers:
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180063FA0 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?BeginIterator@CRegion@FastRegion@@QEBA?AVIterator@12@XZ @ 0x1800194EC (-BeginIterator@CRegion@FastRegion@@QEBA-AVIterator@12@XZ.c)
 *     ?SetRectangle@CRegion@FastRegion@@QEAAXHHHH@Z @ 0x18006D960 (-SetRectangle@CRegion@FastRegion@@QEAAXHHHH@Z.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18006DA6C (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18006DF1C (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18006E840 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

char __fastcall CDwmMetaRegion::ExcludeRegionFromRect(float *a1, const struct FastRegion::Internal::CRgnData **a2)
{
  int v2; // r9d
  char v5; // di
  int v6; // eax
  int v8; // r8d
  int v9; // r9d
  FastRegion::Internal::CRgnData *v10; // rcx
  __m128 v11; // [rsp+30h] [rbp-69h]
  _BYTE v12[8]; // [rsp+40h] [rbp-59h] BYREF
  unsigned __int64 v13; // [rsp+48h] [rbp-51h]
  int *v14; // [rsp+50h] [rbp-49h]
  __int64 v15; // [rsp+58h] [rbp-41h]
  int v16; // [rsp+60h] [rbp-39h]
  __int128 v17; // [rsp+70h] [rbp-29h]
  int *v18; // [rsp+80h] [rbp-19h] BYREF
  int v19; // [rsp+88h] [rbp-11h] BYREF

  v2 = (int)a1[2];
  v19 = 0;
  v18 = &v19;
  v5 = 0;
  FastRegion::CRegion::SetRectangle((FastRegion::CRegion *)&v18, (int)*a1, (int)a1[1], v2, (int)a1[3]);
  v6 = FastRegion::CRegion::Subtract((const struct FastRegion::Internal::CRgnData **)&v18, a2);
  if ( v6 >= 0 )
  {
    FastRegion::CRegion::BeginIterator(&v18, (__int64)v12);
    while ( (unsigned __int64)v14 < v13 )
    {
      v8 = v14[2];
      v9 = *(_DWORD *)(v15 + 8LL * v16);
      v10 = (FastRegion::Internal::CRgnData *)(unsigned int)((*(_DWORD *)(v15 + 8LL * v16 + 4) - v9) * (v8 - *v14));
      if ( (int)v10 > 0 )
      {
        v5 = 1;
        v11.m128_f32[0] = (float)v9;
        v11.m128_f32[1] = (float)*v14;
        v11.m128_f32[2] = (float)*(int *)(v15 + 8LL * v16 + 4);
        v11.m128_f32[3] = (float)v8;
        *(float *)&v17 = (float)v9;
        *((float *)&v17 + 3) = (float)v8;
        DWORD1(v17) = _mm_shuffle_ps(v11, v11, 85).m128_u32[0];
        DWORD2(v17) = _mm_shuffle_ps(v11, v11, 170).m128_u32[0];
        *(_OWORD *)a1 = v17;
      }
      FastRegion::Internal::CRgnData::StepIterator(v10, (struct FastRegion::CRegion::Iterator *)v12);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x31Cu);
  }
  FastRegion::CRegion::FreeMemory((void **)&v18);
  return v5;
}
