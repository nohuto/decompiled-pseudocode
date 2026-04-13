/*
 * XREFs of ?GetNode@?$XHashMap@PEAUHSTRING__@@V?$GitStorageType@UITargetedContentValue@TargetedContent@ContentManagement@@@detail@XWinRT@@UKeyTraits@?$HashMap@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@6789@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@6789@U?$DefaultLifetimeTraits@PEAVTargetedContentValue@TargetedContent@ContentManagement@@@6789@U?$HashMapOptions@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@6789@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@V?$GitStorageType@UITargetedContentValue@TargetedContent@ContentManagement@@@detail@XWinRT@@@4@@XWinRT@@AEBAJAEBQEAUHSTRING__@@AEAI1AEAPEAVCNode@12@PEAPEAV412@@Z @ 0x180051B04
 * Callers:
 *     ?Lookup@?$XHashMap@PEAUHSTRING__@@V?$GitStorageType@UITargetedContentValue@TargetedContent@ContentManagement@@@detail@XWinRT@@UKeyTraits@?$HashMap@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@6789@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@6789@U?$DefaultLifetimeTraits@PEAVTargetedContentValue@TargetedContent@ContentManagement@@@6789@U?$HashMapOptions@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@6789@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@V?$GitStorageType@UITargetedContentValue@TargetedContent@ContentManagement@@@detail@XWinRT@@@4@@XWinRT@@QEAAJAEBQEAUHSTRING__@@PEAPEAVCPair@12@@Z @ 0x18004FCF4 (-Lookup@-$XHashMap@PEAUHSTRING__@@V-$GitStorageType@UITargetedContentValue@TargetedContent@Conte.c)
 *     ?SetAt@?$XHashMap@PEAUHSTRING__@@V?$GitStorageType@UITargetedContentValue@TargetedContent@ContentManagement@@@detail@XWinRT@@UKeyTraits@?$HashMap@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@6789@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@6789@U?$DefaultLifetimeTraits@PEAVTargetedContentValue@TargetedContent@ContentManagement@@@6789@U?$HashMapOptions@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@6789@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@V?$GitStorageType@UITargetedContentValue@TargetedContent@ContentManagement@@@detail@XWinRT@@@4@@XWinRT@@QEAAJAEBQEAUHSTRING__@@AEBV?$GitStorageType@UITargetedContentValue@TargetedContent@ContentManagement@@@detail@2@PEAPEAUTXPOSITION@2@@Z @ 0x18004FD38 (-SetAt@-$XHashMap@PEAUHSTRING__@@V-$GitStorageType@UITargetedContentValue@TargetedContent@Conten.c)
 * Callees:
 *     memcmp_0 @ 0x180058FF2 (memcmp_0.c)
 */

__int64 __fastcall XWinRT::XHashMap<HSTRING__ *,XWinRT::detail::GitStorageType<ContentManagement::TargetedContent::ITargetedContentValue>,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,ContentManagement::TargetedContent::TargetedContentValue *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::TargetedContent::TargetedContentValue *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,ContentManagement::TargetedContent::TargetedContentValue *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::KeyTraits,XWinRT::CElementTraits<XWinRT::detail::GitStorageType<ContentManagement::TargetedContent::ITargetedContentValue>>>::GetNode(
        __int64 a1,
        HSTRING *a2,
        _DWORD *a3,
        unsigned int *a4,
        _QWORD *a5,
        _QWORD *a6)
{
  PCWSTR StringRawBuffer; // rax
  unsigned __int64 v11; // r9
  PCWSTR v12; // r11
  unsigned int i; // eax
  int v14; // ecx
  __int64 v15; // rdx
  __int64 v16; // rdi
  _QWORD *v17; // r14
  __int64 v18; // rsi
  __int64 v19; // rdi
  HSTRING v20; // rbx
  PCWSTR v21; // rbp
  PCWSTR v22; // rax
  _QWORD *v23; // rax
  UINT32 length; // [rsp+50h] [rbp+8h] BYREF
  UINT32 v26; // [rsp+58h] [rbp+10h] BYREF

  StringRawBuffer = WindowsGetStringRawBuffer(*a2, &length);
  v11 = 0LL;
  v12 = StringRawBuffer;
  for ( i = -2128831035; v11 < 2 * (unsigned __int64)length; i = 16777619 * (i ^ v14) )
    v14 = *((unsigned __int8 *)v12 + v11++);
  HIDWORD(v15) = 0;
  *a4 = i;
  LODWORD(v15) = i % *(_DWORD *)(a1 + 24);
  v16 = *(_QWORD *)(a1 + 8);
  *a3 = v15;
  if ( v16 )
  {
    v17 = a5;
    v18 = 0LL;
    v19 = *(_QWORD *)(v16 + 8 * v15);
    *a5 = 0LL;
    while ( v19 )
    {
      if ( *(_DWORD *)(v19 + 32) == *a4 )
      {
        v20 = *a2;
        v21 = WindowsGetStringRawBuffer(*(HSTRING *)v19, &v26);
        v22 = WindowsGetStringRawBuffer(v20, &length);
        if ( v26 == length && !memcmp_0(v21, v22, 2LL * length) )
        {
          v23 = a6;
          *v17 = v18;
          *v23 = v19;
          return 0LL;
        }
      }
      v18 = v19;
      v19 = *(_QWORD *)(v19 + 24);
    }
  }
  *a6 = 0LL;
  return 0LL;
}
