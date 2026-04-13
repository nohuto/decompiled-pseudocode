/*
 * XREFs of ?MoveNext@SplitIterator@?$NaiveSplitView@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@6789@U?$DefaultLifetimeTraits@PEAVTargetedContentValue@TargetedContent@ContentManagement@@@6789@U?$HashMapOptions@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@6789@@Internal@Collections@Foundation@Windows@@UEAAJPEAE@Z @ 0x180050D10
 * Callers:
 *     <none>
 * Callees:
 *     ?Write@ComLock@XWinRT@@QEAA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@XZ @ 0x180006E8C (-Write@ComLock@XWinRT@@QEAA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@XZ.c)
 *     ?EnsureForced@SplitIterator@?$NaiveSplitView@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@6789@U?$DefaultLifetimeTraits@PEAVTargetedContentValue@TargetedContent@ContentManagement@@@6789@U?$HashMapOptions@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@6789@@Internal@Collections@Foundation@Windows@@AEAAJXZ @ 0x180051468 (-EnsureForced@SplitIterator@-$NaiveSplitView@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedCon.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,ContentManagement::TargetedContent::TargetedContentValue *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::TargetedContent::TargetedContentValue *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,ContentManagement::TargetedContent::TargetedContentValue *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::SplitIterator::MoveNext(
        __int64 a1,
        bool *a2)
{
  int v4; // ebx
  __int64 v5; // rcx
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+28h] [rbp-10h]
  char v9; // [rsp+40h] [rbp+8h] BYREF

  *a2 = 0;
  XWinRT::ComLock::Write(a1 + 56, (__int64)&v7);
  v4 = v8;
  if ( v8 >= 0 )
  {
    v4 = Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,ContentManagement::TargetedContent::TargetedContentValue *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::TargetedContent::TargetedContentValue *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,ContentManagement::TargetedContent::TargetedContentValue *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::SplitIterator::EnsureForced(a1);
    if ( v4 >= 0 )
    {
      if ( !*(_QWORD *)(a1 + 80) )
      {
        v4 = -2147483637;
        RoOriginateError(2147483659LL, 0LL);
      }
      if ( v4 >= 0 )
      {
        v4 = (*(__int64 (__fastcall **)(_QWORD, char *))(**(_QWORD **)(a1 + 80) + 64LL))(*(_QWORD *)(a1 + 80), &v9);
        if ( v4 >= 0 )
        {
          if ( !v9 )
          {
            v5 = *(_QWORD *)(a1 + 80);
            if ( v5 )
            {
              *(_QWORD *)(a1 + 80) = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
            }
            v4 = Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,ContentManagement::TargetedContent::TargetedContentValue *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::TargetedContent::TargetedContentValue *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,ContentManagement::TargetedContent::TargetedContentValue *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::SplitIterator::EnsureForced(a1);
          }
          if ( v4 >= 0 )
            *a2 = *(_QWORD *)(a1 + 80) != 0LL;
        }
      }
    }
  }
  if ( v7 )
  {
    if ( *(_DWORD *)v7 == 1 )
      *(_DWORD *)(v7 + 8) += 0x10000000;
    else
      ReleaseSRWLockExclusive((PSRWLOCK)(v7 + 8));
  }
  return (unsigned int)v4;
}
