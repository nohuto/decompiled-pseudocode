/*
 * XREFs of ?TryReleaseNonResidentVideoMemoryResourcesInList@CD3DResourceManager@@AEAAXPEAU_LIST_ENTRY@@@Z @ 0x180027E98
 * Callers:
 *     ?TryReleaseNonResidentVideoMemoryResources@CD3DDeviceManager@@QEAAXXZ @ 0x1800728B4 (-TryReleaseNonResidentVideoMemoryResources@CD3DDeviceManager@@QEAAXXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CD3DResourceManager::TryReleaseNonResidentVideoMemoryResourcesInList(
        CD3DResourceManager *this,
        struct _LIST_ENTRY *a2)
{
  struct _LIST_ENTRY *Flink; // rdi
  volatile signed __int32 *v4; // rsi

  Flink = a2->Flink;
  while ( Flink != a2 )
  {
    v4 = (volatile signed __int32 *)&Flink[-2];
    Flink = Flink->Flink;
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
}
