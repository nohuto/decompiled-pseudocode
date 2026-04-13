/*
 * XREFs of ?get_Value@?$SimpleKeyValuePair@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVTargetedContentValue@TargetedContent@ContentManagement@@@6789@$00@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAUITargetedContentValue@TargetedContent@ContentManagement@@@Z @ 0x18004EF10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleKeyValuePair<HSTRING__ *,ContentManagement::TargetedContent::TargetedContentValue *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::TargetedContent::TargetedContentValue *>,1>::get_Value(
        __m128i *a1,
        _QWORD *a2)
{
  unsigned int v2; // ebx
  __m128i v4; // [rsp+30h] [rbp-18h]

  v2 = 0;
  v4 = a1[4];
  if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(v4, 8)) )
  {
    *a2 = 0LL;
    return (*(unsigned int (__fastcall **)(__int64, _QWORD, GUID *, _QWORD *))(*(_QWORD *)qword_18008C0B0 + 40LL))(
             qword_18008C0B0,
             *(unsigned int *)(v4.m128i_i64[0] + 4),
             &GUID_175437d0_ab0a_4cfd_aa42_d32e2ae5d0dc,
             a2);
  }
  else
  {
    *a2 = v4.m128i_i64[0];
    if ( v4.m128i_i64[0] )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4.m128i_i64[0] + 8LL))(v4.m128i_i64[0]);
  }
  return v2;
}
