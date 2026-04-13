/*
 * XREFs of ?IndexOfInternal@?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@AEAAJPEAV?$GitStorageType@UIAppInstallInfoRecord@ContentManagement@@@detail@XWinRT@@IPEAUIAppInstallInfoRecord@ContentManagement@@PEAIPEAE@Z @ 0x180011DF4
 * Callers:
 *     ?IndexOf@?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJPEAUIAppInstallInfoRecord@ContentManagement@@PEAIPEAE@Z @ 0x18000F4D0 (-IndexOf@-$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U-$DefaultEqualityPredicate@PEAVAp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>::IndexOfInternal(
        __int64 a1,
        __m128i *a2,
        unsigned int a3,
        __int64 (__fastcall ***a4)(_QWORD, GUID *, __m128i *),
        unsigned int *a5,
        _BYTE *a6)
{
  int v9; // edi
  unsigned int i; // r14d
  __int64 (__fastcall ***v11)(_QWORD, GUID *, __m128i *); // rbx
  __int64 v12; // rcx
  bool v13; // si
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __m128i v18; // [rsp+30h] [rbp-30h] BYREF
  __int64 v19; // [rsp+40h] [rbp-20h] BYREF
  __int64 v20; // [rsp+48h] [rbp-18h]
  __int64 v21; // [rsp+50h] [rbp-10h]
  __int64 v22; // [rsp+90h] [rbp+30h] BYREF

  v22 = a1;
  v21 = -2LL;
  v9 = 0;
  for ( i = 0; i < a3; ++i )
  {
    if ( v9 < 0 )
      return (unsigned int)v9;
    v11 = 0LL;
    v20 = 0LL;
    v18 = *a2;
    v9 = 0;
    if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(v18, 8)) )
    {
      v19 = 0LL;
      v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)qword_18008C0B0 + 40LL))(
             qword_18008C0B0,
             *(unsigned int *)(v18.m128i_i64[0] + 4),
             &GUID_82929d2b_e4ba_49a3_af91_dadf7766d476,
             &v19);
    }
    else
    {
      v12 = v18.m128i_i64[0];
      v19 = v18.m128i_i64[0];
      if ( !v18.m128i_i64[0] )
        goto LABEL_9;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18.m128i_i64[0] + 8LL))(v18.m128i_i64[0]);
    }
    if ( v9 >= 0 )
    {
      v12 = v19;
LABEL_9:
      v11 = (__int64 (__fastcall ***)(_QWORD, GUID *, __m128i *))v12;
      v20 = v12;
    }
    if ( v9 >= 0 )
    {
      v13 = 0;
      v9 = 0;
      if ( a4 == v11 )
        goto LABEL_31;
      if ( a4 && v11 )
      {
        v18.m128i_i64[0] = 0LL;
        v22 = 0LL;
        v9 = (**a4)(a4, &GUID_00000000_0000_0000_c000_000000000046, &v18);
        if ( v9 < 0 )
          goto LABEL_19;
        v14 = v22;
        if ( v22 )
        {
          v22 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        }
        v9 = (**v11)(v11, &GUID_00000000_0000_0000_c000_000000000046, (__m128i *)&v22);
        if ( v9 < 0 )
        {
LABEL_19:
          v15 = v18.m128i_i64[0];
          v16 = v22;
        }
        else
        {
          v15 = v18.m128i_i64[0];
          v16 = v22;
          v13 = v18.m128i_i64[0] == v22;
        }
        if ( v16 )
        {
          v22 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
          v15 = v18.m128i_i64[0];
        }
        if ( v15 )
        {
          v18.m128i_i64[0] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        }
      }
      else
      {
        v13 = 0;
      }
      if ( v9 >= 0 && v13 )
      {
LABEL_31:
        *a6 = 1;
        *a5 = i;
        if ( v11 )
          ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __m128i *)))(*v11)[2])(v11);
        return (unsigned int)v9;
      }
    }
    if ( v11 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __m128i *)))(*v11)[2])(v11);
    ++a2;
  }
  return (unsigned int)v9;
}
