/*
 * XREFs of ?TryReleaseNonResidentVideoMemoryResources@CD3DDeviceManager@@QEAAXXZ @ 0x180013F6C
 * Callers:
 *     ?OnBeginComposition@CCrossThreadComposition@@MEAAJXZ @ 0x180039150 (-OnBeginComposition@CCrossThreadComposition@@MEAAJXZ.c)
 * Callees:
 *     ?TryReleaseNonResidentVideoMemoryResources@CD3DResourceManager@@QEAAXXZ @ 0x180016E7C (-TryReleaseNonResidentVideoMemoryResources@CD3DResourceManager@@QEAAXXZ.c)
 */

void __fastcall CD3DDeviceManager::TryReleaseNonResidentVideoMemoryResources(CD3DDeviceManager *this)
{
  __int64 i; // rbx
  __int64 v3; // rsi

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 64); i = (unsigned int)(i + 1) )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 18) + 40 * i);
    if ( !*(_BYTE *)(v3 + 1075) )
    {
      CD3DResourceManager::TryReleaseNonResidentVideoMemoryResources((CD3DResourceManager *)(v3 + 880));
      *(_BYTE *)(v3 + 1075) = 1;
    }
  }
}
