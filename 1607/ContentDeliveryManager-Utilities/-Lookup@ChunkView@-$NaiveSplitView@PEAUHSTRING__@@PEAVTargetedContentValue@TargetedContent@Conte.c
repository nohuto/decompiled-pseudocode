/*
 * XREFs of ?Lookup@ChunkView@?$NaiveSplitView@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@6789@U?$DefaultLifetimeTraits@PEAVTargetedContentValue@TargetedContent@ContentManagement@@@6789@U?$HashMapOptions@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@6789@@Internal@Collections@Foundation@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUITargetedContentValue@TargetedContent@ContentManagement@@@Z @ 0x180051060
 * Callers:
 *     ?Lookup@?$NaiveSplitView@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@6789@U?$DefaultLifetimeTraits@PEAVTargetedContentValue@TargetedContent@ContentManagement@@@6789@U?$HashMapOptions@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@6789@@Internal@Collections@Foundation@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUITargetedContentValue@TargetedContent@ContentManagement@@@Z @ 0x1800509D0 (-Lookup@-$NaiveSplitView@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManageme.c)
 * Callees:
 *     memcmp_0 @ 0x180058FF2 (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,ContentManagement::TargetedContent::TargetedContentValue *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::TargetedContent::TargetedContentValue *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,ContentManagement::TargetedContent::TargetedContentValue *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::ChunkView::Lookup(
        __int64 a1,
        HSTRING a2,
        _QWORD *a3)
{
  int v3; // ebx
  bool v4; // si
  __int64 v8; // rdi
  unsigned int v9; // r12d
  __int64 v10; // r14
  HSTRING v11; // rbx
  PCWSTR StringRawBuffer; // rsi
  PCWSTR v13; // rax
  int v14; // eax
  HSTRING string[9]; // [rsp+20h] [rbp-48h] BYREF
  UINT32 v17; // [rsp+70h] [rbp+8h] BYREF
  UINT32 length; // [rsp+88h] [rbp+20h] BYREF

  v3 = 0;
  v4 = 0;
  v8 = 0LL;
  v9 = *(_DWORD *)(*(_QWORD *)(a1 + 64) + 12LL);
  while ( (unsigned int)v8 < v9 )
  {
    v10 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8 * v8 + 16);
    string[0] = 0LL;
    v3 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v10 + 48LL))(v10, string);
    if ( v3 >= 0 )
    {
      v11 = string[0];
      StringRawBuffer = WindowsGetStringRawBuffer(a2, &length);
      v13 = WindowsGetStringRawBuffer(v11, &v17);
      if ( length == v17 )
      {
        v14 = memcmp_0(StringRawBuffer, v13, 2LL * v17);
        v4 = v14 == 0;
        v3 = 0;
        if ( !v14 )
        {
          v3 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v10 + 56LL))(v10, a3);
          WindowsDeleteString(string[0]);
          break;
        }
      }
      else
      {
        v4 = 0;
        v3 = 0;
      }
    }
    WindowsDeleteString(string[0]);
    string[0] = 0LL;
    v8 = (unsigned int)(v8 + 1);
    if ( v3 < 0 )
      goto LABEL_14;
  }
  if ( v3 < 0 )
    goto LABEL_14;
  if ( !v4 )
    v3 = -2147483637;
  if ( v3 < 0 )
LABEL_14:
    *a3 = 0LL;
  return (unsigned int)v3;
}
