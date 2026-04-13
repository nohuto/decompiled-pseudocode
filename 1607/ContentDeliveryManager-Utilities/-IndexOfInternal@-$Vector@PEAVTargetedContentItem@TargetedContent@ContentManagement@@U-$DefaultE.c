/*
 * XREFs of ?IndexOfInternal@?$Vector@PEAVTargetedContentItem@TargetedContent@ContentManagement@@U?$DefaultEqualityPredicate@PEAVTargetedContentItem@TargetedContent@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVTargetedContentItem@TargetedContent@ContentManagement@@@5678@U?$VectorOptions@PEAVTargetedContentItem@TargetedContent@ContentManagement@@$0A@$00$0A@@5678@@Internal@Collections@Foundation@Windows@@AEAAJPEAV?$GitStorageType@UITargetedContentItem@TargetedContent@ContentManagement@@@detail@XWinRT@@IPEAUITargetedContentItem@TargetedContent@ContentManagement@@PEAIPEAE@Z @ 0x18004F6C8
 * Callers:
 *     ?IndexOf@?$Vector@PEAVTargetedContentItem@TargetedContent@ContentManagement@@U?$DefaultEqualityPredicate@PEAVTargetedContentItem@TargetedContent@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVTargetedContentItem@TargetedContent@ContentManagement@@@5678@U?$VectorOptions@PEAVTargetedContentItem@TargetedContent@ContentManagement@@$0A@$00$0A@@5678@@Internal@Collections@Foundation@Windows@@UEAAJPEAUITargetedContentItem@TargetedContent@ContentManagement@@PEAIPEAE@Z @ 0x18004C6D0 (-IndexOf@-$Vector@PEAVTargetedContentItem@TargetedContent@ContentManagement@@U-$DefaultEqualityP.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<ContentManagement::TargetedContent::TargetedContentItem *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::TargetedContent::TargetedContentItem *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::TargetedContent::TargetedContentItem *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::TargetedContent::TargetedContentItem *,0,1,0>>::IndexOfInternal(
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
             &GUID_3a48f6a2_4e17_4a86_aca9_a93a958ecafb,
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
