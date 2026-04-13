/*
 * XREFs of ?Acquire@Git@Details@Internal@Windows@@QEAAJXZ @ 0x180003FEC
 * Callers:
 *     ??$Construct@UIAppInstallInfoRecord@ContentManagement@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAV?$GitStorageType@UIAppInstallInfoRecord@ContentManagement@@@detail@1@PEAUIAppInstallInfoRecord@ContentManagement@@@Z @ 0x180019274 (--$Construct@UIAppInstallInfoRecord@ContentManagement@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAV-.c)
 *     ??$Construct@UITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAV?$GitStorageType@UITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@detail@1@PEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Z @ 0x180050584 (--$Construct@UITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Interf.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::Details::Git::Acquire(Windows::Internal::Details::Git *this)
{
  HRESULT v1; // ebx
  void *v2; // rcx
  LPVOID v3; // rcx
  LPVOID ppv; // [rsp+40h] [rbp+8h] BYREF

  ppv = this;
  v1 = qword_1800F4758 == 0 ? 0x8000FFFF : 0;
  if ( qword_1800F4758 )
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
      if ( !_InterlockedCompareExchange64(&qword_1800F4758, (signed __int64)ppv, 0LL) )
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
