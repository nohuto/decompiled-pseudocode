/*
 * XREFs of ?Acquire@Git@Details@Internal@Windows@@QEAAJXZ @ 0x180003D68
 * Callers:
 *     ??$Construct@UIAppInstallInfoRecord@ContentManagement@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAV?$GitStorageType@UIAppInstallInfoRecord@ContentManagement@@@detail@1@PEAUIAppInstallInfoRecord@ContentManagement@@@Z @ 0x1800131FC (--$Construct@UIAppInstallInfoRecord@ContentManagement@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAV-.c)
 *     ??$Construct@UITargetedContentItem@TargetedContent@ContentManagement@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAV?$GitStorageType@UITargetedContentItem@TargetedContent@ContentManagement@@@detail@1@PEAUITargetedContentItem@TargetedContent@ContentManagement@@@Z @ 0x18004FFBC (--$Construct@UITargetedContentItem@TargetedContent@ContentManagement@@@InterfaceLifetimeTraits@X.c)
 *     ??$?0PEAUITargetedContentValue@TargetedContent@ContentManagement@@@?$AutoValue@V?$GitStorageType@UITargetedContentValue@TargetedContent@ContentManagement@@@detail@XWinRT@@U?$DefaultLifetimeTraits@PEAVTargetedContentValue@TargetedContent@ContentManagement@@@Internal@Collections@Foundation@Windows@@@XWinRT@@QEAA@AEBQEAUITargetedContentValue@TargetedContent@ContentManagement@@PEAJ@Z @ 0x180050248 (--$-0PEAUITargetedContentValue@TargetedContent@ContentManagement@@@-$AutoValue@V-$GitStorageType.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::Details::Git::Acquire(Windows::Internal::Details::Git *this)
{
  HRESULT v1; // ebx
  void *v2; // rcx
  LPVOID v3; // rcx
  LPVOID ppv; // [rsp+40h] [rbp+8h] BYREF

  ppv = this;
  v1 = qword_18008C0B0 == 0 ? 0x8000FFFF : 0;
  if ( qword_18008C0B0 )
  {
    _InterlockedIncrement(&Windows::Internal::Details::_git);
  }
  else
  {
    ppv = 0LL;
    v1 = CoCreateInstance(&CLSID_StdGlobalInterfaceTable, 0LL, 1u, &GUID_00000146_0000_0000_c000_000000000046, &ppv);
    if ( v1 >= 0 )
    {
      v2 = ppv;
      if ( !_InterlockedCompareExchange64(&qword_18008C0B0, (signed __int64)ppv, 0LL) )
        v2 = 0LL;
      ppv = v2;
      _InterlockedIncrement(&Windows::Internal::Details::_git);
    }
    v3 = ppv;
    if ( ppv )
    {
      ppv = 0LL;
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v3 + 16LL))(v3);
    }
  }
  return (unsigned int)v1;
}
