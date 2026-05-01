/*
 * XREFs of RmpPsmAppFamilyIdInitialize @ 0x180006A18
 * Callers:
 *     RmpPsmAppFamilyIdFromPsmAppInstanceId @ 0x18000655C (RmpPsmAppFamilyIdFromPsmAppInstanceId.c)
 *     ?AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBGPEAT_RM_SID@@KK_KKPEA_NPEAUIResourceSet@2@PEAPEAU62@@Z @ 0x180011420 (-AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU.c)
 *     ?GenerateSharedResourceSetListAndAcquire@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetInfo@2@PEAVResourceSet@2@PEAV?$list@PEAVResourceSet@ExecutionModel@@V?$allocator@PEAVResourceSet@ExecutionModel@@@utl@@@utl@@KPEBGPEAT_RM_SID@@KPEAV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@6@PEA_K@Z @ 0x18003C504 (-GenerateSharedResourceSetListAndAcquire@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetIn.c)
 *     RmpActivityHostFindMixedHostForPsmId @ 0x180040E98 (RmpActivityHostFindMixedHostForPsmId.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180006CD0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     memset_0 @ 0x18002BC7E (memset_0.c)
 */

__int64 __fastcall RmpPsmAppFamilyIdInitialize(unsigned __int16 *a1, __int64 a2, int a3, __int64 a4)
{
  __int64 result; // rax

  memset_0((void *)a4, 0, 0x218uLL);
  StringCchCopyW((unsigned __int16 *)a4, 0xE8uLL, a1);
  *(_OWORD *)(a4 + 464) = *(_OWORD *)a2;
  *(_OWORD *)(a4 + 480) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(a4 + 496) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a4 + 512) = *(_OWORD *)(a2 + 48);
  result = *(unsigned int *)(a2 + 64);
  *(_DWORD *)(a4 + 532) = a3;
  *(_DWORD *)(a4 + 528) = result;
  return result;
}
