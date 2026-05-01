/*
 * XREFs of ?ForceReleaseExternalResources@ResourceManager@ExecutionModel@@QEAAXK@Z @ 0x18002B298
 * Callers:
 *     ?RunWatchdog@ExternalResourceSet@ExecutionModel@@AEAAXXZ @ 0x180034D20 (-RunWatchdog@ExternalResourceSet@ExecutionModel@@AEAAXXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ @ 0x180019204 (-ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ExecutionModel::ResourceManager::ForceReleaseExternalResources(
        ExecutionModel::ResourceManager *this,
        int a2)
{
  char *v2; // rsi
  char *v4; // rbx
  __int64 v5; // rdi
  const struct _TlgProvider_t *v6; // rcx
  const GUID *v7; // r8
  const GUID *v8; // r9
  int v9; // [rsp+30h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-50h] BYREF
  int *v11; // [rsp+58h] [rbp-30h]
  int v12; // [rsp+60h] [rbp-28h]
  int v13; // [rsp+64h] [rbp-24h]

  v2 = (char *)this + 168;
  v4 = (char *)*((_QWORD *)this + 21);
  while ( v2 != v4 )
  {
    v5 = *((_QWORD *)v4 + 4);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    v4 = *(char **)v4;
    if ( *(_DWORD *)(v5 + 8) == a2 )
      ExecutionModel::ExternalResourceSet::ReleaseResourcesWithoutNotify((HANDLE *)v5);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(this, 9uLL) )
  {
    v13 = 0;
    v11 = &v9;
    v9 = a2;
    v12 = 4;
    TlgWrite(v6, &unk_18003FE41, v7, v8, 3u, &pData);
  }
}
