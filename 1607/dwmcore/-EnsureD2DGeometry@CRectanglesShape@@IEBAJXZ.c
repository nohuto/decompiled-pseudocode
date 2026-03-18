/*
 * XREFs of ?EnsureD2DGeometry@CRectanglesShape@@IEBAJXZ @ 0x1800976B4
 * Callers:
 *     ?GetD2DGeometry@CRectanglesShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180097C30 (-GetD2DGeometry@CRectanglesShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CD2DFactory@@SAJW4D2D1_FACTORY_TYPE@@UD2D1_FACTORY_OPTIONS@@PEAPEAV1@@Z @ 0x1800AAD78 (-Create@CD2DFactory@@SAJW4D2D1_FACTORY_TYPE@@UD2D1_FACTORY_OPTIONS@@PEAPEAV1@@Z.c)
 *     ?Register@CMesh2DEffect@@SAJPEAVCD2DFactory@@@Z @ 0x1800B75F0 (-Register@CMesh2DEffect@@SAJPEAVCD2DFactory@@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRectanglesShape::EnsureD2DGeometry(CRectanglesShape *this)
{
  int v1; // ebx
  struct CD2DFactory *v4; // r14
  enum D2D1_FACTORY_TYPE v5; // ecx
  struct CD2DFactory *v6; // rax
  __int64 *v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  signed __int64 v10; // rcx
  unsigned int i; // r14d
  int v12; // eax
  int v13; // eax
  int v14; // r9d
  unsigned int v15; // [rsp+20h] [rbp-50h]
  __int64 v16; // [rsp+30h] [rbp-40h] BYREF
  signed __int64 v17; // [rsp+38h] [rbp-38h] BYREF
  signed __int64 v18; // [rsp+40h] [rbp-30h] BYREF
  __int128 v19; // [rsp+48h] [rbp-28h]
  __int128 v20; // [rsp+58h] [rbp-18h] BYREF

  v1 = 0;
  v18 = 0LL;
  v17 = 0LL;
  v16 = 0LL;
  if ( *((_QWORD *)this + 7) )
    return (unsigned int)v1;
  v4 = 0LL;
  EnterCriticalSection(&stru_1801F0028);
  v6 = qword_1801F0068;
  if ( qword_1801F0068 )
    goto LABEL_4;
  v12 = CD2DFactory::Create(v5, 0, &qword_1801F0068);
  v1 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x1A6u);
  }
  else
  {
    v13 = CMesh2DEffect::Register(qword_1801F0068);
    v1 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x1C8u);
    if ( v1 >= 0 )
    {
      v6 = qword_1801F0068;
LABEL_4:
      v4 = v6;
      goto LABEL_5;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v1, 0x1A8u);
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v1, 0x619u);
LABEL_5:
  LeaveCriticalSection(&stru_1801F0028);
  if ( v1 < 0 )
  {
    v15 = 232;
    v14 = v1;
  }
  else
  {
    v7 = (__int64 *)*((_QWORD *)v4 + 3);
    if ( *((_DWORD *)this + 8) == 1 )
    {
      v20 = *(_OWORD *)*((_QWORD *)this + 1);
      v8 = *v7;
      v19 = v20;
      v9 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, signed __int64 *))(v8 + 40))(v7, &v20, &v18);
      v1 = v9;
      if ( v9 >= 0 )
      {
        v10 = v18;
        v18 = 0LL;
LABEL_9:
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)this + 7, v10, 0LL) && v10 )
          (*(void (__fastcall **)(signed __int64))(*(_QWORD *)v10 + 16LL))(v10);
        goto LABEL_10;
      }
      v15 = 237;
    }
    else
    {
      v9 = (*(__int64 (__fastcall **)(__int64 *, signed __int64 *))(*v7 + 80))(v7, &v17);
      v1 = v9;
      if ( v9 < 0 )
      {
        v15 = 244;
      }
      else
      {
        v9 = (*(__int64 (__fastcall **)(signed __int64, __int64 *))(*(_QWORD *)v17 + 136LL))(v17, &v16);
        v1 = v9;
        if ( v9 < 0 )
        {
          v15 = 246;
        }
        else
        {
          for ( i = 0; i < *((_DWORD *)this + 8); ++i )
          {
            (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v16 + 40LL))(
              v16,
              _mm_unpacklo_ps(
                (__m128)*(unsigned int *)(*((_QWORD *)this + 1) + 16LL * i),
                (__m128)*(unsigned int *)(*((_QWORD *)this + 1) + 16LL * i + 4)).m128_u64[0],
              0LL);
            (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v16 + 80LL))(
              v16,
              _mm_unpacklo_ps(
                (__m128)*(unsigned int *)(*((_QWORD *)this + 1) + 16LL * i + 8),
                (__m128)*(unsigned int *)(*((_QWORD *)this + 1) + 16LL * i + 4)).m128_u64[0]);
            (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v16 + 80LL))(
              v16,
              _mm_unpacklo_ps(
                (__m128)*(unsigned int *)(*((_QWORD *)this + 1) + 16LL * i + 8),
                (__m128)*(unsigned int *)(*((_QWORD *)this + 1) + 16LL * i + 12)).m128_u64[0]);
            (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v16 + 80LL))(
              v16,
              _mm_unpacklo_ps(
                (__m128)*(unsigned int *)(*((_QWORD *)this + 1) + 16LL * i),
                (__m128)*(unsigned int *)(*((_QWORD *)this + 1) + 16LL * i + 12)).m128_u64[0]);
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 64LL))(v16, 1LL);
          }
          v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 72LL))(v16);
          v1 = v9;
          if ( v9 >= 0 )
          {
            v10 = v17;
            v17 = 0LL;
            goto LABEL_9;
          }
          v15 = 260;
        }
      }
    }
    v14 = v9;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, v15);
LABEL_10:
  if ( v18 )
    (*(void (__fastcall **)(signed __int64))(*(_QWORD *)v18 + 16LL))(v18);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  if ( v17 )
    (*(void (**)(void))(*(_QWORD *)v17 + 16LL))();
  return (unsigned int)v1;
}
