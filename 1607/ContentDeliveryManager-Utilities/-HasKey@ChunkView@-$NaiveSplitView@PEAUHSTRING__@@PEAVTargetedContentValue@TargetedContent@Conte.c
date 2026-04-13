/*
 * XREFs of ?HasKey@ChunkView@?$NaiveSplitView@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@6789@U?$DefaultLifetimeTraits@PEAVTargetedContentValue@TargetedContent@ContentManagement@@@6789@U?$HashMapOptions@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@6789@@Internal@Collections@Foundation@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z @ 0x180050F50
 * Callers:
 *     ?HasKey@?$NaiveSplitView@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@6789@U?$DefaultLifetimeTraits@PEAVTargetedContentValue@TargetedContent@ContentManagement@@@6789@U?$HashMapOptions@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@6789@@Internal@Collections@Foundation@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z @ 0x1800508E0 (-HasKey@-$NaiveSplitView@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManageme.c)
 * Callees:
 *     memcmp_0 @ 0x180058FF2 (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,ContentManagement::TargetedContent::TargetedContentValue *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::TargetedContent::TargetedContentValue *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,ContentManagement::TargetedContent::TargetedContentValue *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::ChunkView::HasKey(
        __int64 a1,
        HSTRING a2,
        _BYTE *a3)
{
  int v3; // ebx
  __int64 v7; // rdi
  unsigned int v8; // r14d
  __int64 v9; // rcx
  HSTRING v10; // rbx
  PCWSTR StringRawBuffer; // r15
  PCWSTR v12; // rax
  HSTRING v13; // rcx
  UINT32 v15; // [rsp+60h] [rbp+8h] BYREF
  UINT32 length; // [rsp+70h] [rbp+18h] BYREF
  HSTRING string; // [rsp+78h] [rbp+20h] BYREF

  *a3 = 0;
  v3 = 0;
  v7 = 0LL;
  v8 = *(_DWORD *)(*(_QWORD *)(a1 + 64) + 12LL);
  while ( (unsigned int)v7 < v8 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8 * v7 + 16);
    string = 0LL;
    v3 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v9 + 48LL))(v9, &string);
    if ( v3 >= 0 )
    {
      v10 = string;
      StringRawBuffer = WindowsGetStringRawBuffer(a2, &length);
      v12 = WindowsGetStringRawBuffer(v10, &v15);
      if ( length == v15 )
      {
        v3 = 0;
        if ( !memcmp_0(StringRawBuffer, v12, 2LL * v15) )
        {
          v13 = string;
          *a3 = 1;
          WindowsDeleteString(v13);
          return (unsigned int)v3;
        }
      }
      else
      {
        v3 = 0;
      }
    }
    WindowsDeleteString(string);
    string = 0LL;
    v7 = (unsigned int)(v7 + 1);
    if ( v3 < 0 )
      return (unsigned int)v3;
  }
  return (unsigned int)v3;
}
