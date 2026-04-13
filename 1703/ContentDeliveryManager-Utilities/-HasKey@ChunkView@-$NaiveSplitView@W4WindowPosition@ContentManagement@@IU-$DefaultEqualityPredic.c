/*
 * XREFs of ?HasKey@ChunkView@?$NaiveSplitView@W4WindowPosition@ContentManagement@@IU?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJW4WindowPosition@ContentManagement@@PEAE@Z @ 0x18005E8A0
 * Callers:
 *     ?HasKey@?$NaiveSplitView@W4WindowPosition@ContentManagement@@IU?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJW4WindowPosition@ContentManagement@@PEAE@Z @ 0x18005E370 (-HasKey@-$NaiveSplitView@W4WindowPosition@ContentManagement@@IU-$DefaultEqualityPredicate@W4Wind.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::NaiveSplitView<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::HashMapOptions<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,0,1,0>>::ChunkView::HasKey(
        __int64 a1,
        int a2,
        _BYTE *a3)
{
  __int64 v3; // r9
  __int64 v7; // rbx
  unsigned int v8; // ebp
  __int64 v9; // rcx
  int v10; // eax
  int v12; // [rsp+40h] [rbp+8h] BYREF

  *a3 = 0;
  v3 = 0LL;
  v7 = 0LL;
  v8 = *(_DWORD *)(*(_QWORD *)(a1 + 64) + 12LL);
  while ( (unsigned int)v7 < v8 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8 * v7 + 16);
    v12 = 0;
    v10 = (*(__int64 (__fastcall **)(__int64, int *, _BYTE *, __int64))(*(_QWORD *)v9 + 48LL))(v9, &v12, a3, v3);
    v3 = (unsigned int)v10;
    if ( v10 >= 0 )
    {
      v3 = 0LL;
      if ( a2 == v12 )
      {
        *a3 = 1;
        return (unsigned int)v3;
      }
    }
    v7 = (unsigned int)(v7 + 1);
    if ( (int)v3 < 0 )
      return (unsigned int)v3;
  }
  return (unsigned int)v3;
}
