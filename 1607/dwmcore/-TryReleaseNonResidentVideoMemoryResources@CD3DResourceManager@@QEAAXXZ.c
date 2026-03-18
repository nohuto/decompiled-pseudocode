/*
 * XREFs of ?TryReleaseNonResidentVideoMemoryResources@CD3DResourceManager@@QEAAXXZ @ 0x180016E7C
 * Callers:
 *     ?TryReleaseNonResidentVideoMemoryResources@CD3DDeviceManager@@QEAAXXZ @ 0x180013F6C (-TryReleaseNonResidentVideoMemoryResources@CD3DDeviceManager@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD3DResourceManager::TryReleaseNonResidentVideoMemoryResources(CD3DResourceManager *this)
{
  char *v1; // rsi
  char *v3; // rbx
  volatile signed __int32 *v4; // rdi

  v1 = (char *)this + 48;
  v3 = (char *)*((_QWORD *)this + 6);
  while ( v3 != v1 )
  {
    v4 = (volatile signed __int32 *)(v3 - 32);
    v3 = *(char **)v3;
    if ( _InterlockedIncrement(v4 + 2) == 1 )
    {
      *((_DWORD *)v4 + 2) = 0;
    }
    else
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 40LL))(v4);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  CD3DResourceManager::DestroyAndDeleteDelayedResources(this);
}
