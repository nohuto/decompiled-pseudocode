/*
 * XREFs of ?TryReleaseNonResidentVideoMemoryResourcesInList@CD3DResourceManager@@AEAAXPEAU_LIST_ENTRY@@@Z @ 0x1800159D4
 * Callers:
 *     ?TryReleaseNonResidentVideoMemoryResources@CD3DDeviceManager@@QEAAXXZ @ 0x180056120 (-TryReleaseNonResidentVideoMemoryResources@CD3DDeviceManager@@QEAAXXZ.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
