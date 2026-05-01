/*
 * XREFs of RmpPsmAppFamilyIdInitialize @ 0x180005CF8
 * Callers:
 *     RmpPsmAppFamilyTableFindByActivityHost @ 0x180005870 (RmpPsmAppFamilyTableFindByActivityHost.c)
 *     RmpPsmAppFamilyIdFromPsmAppInstanceId @ 0x180005C74 (RmpPsmAppFamilyIdFromPsmAppInstanceId.c)
 *     ?FinalizeSharedResourceList@ResourceManager@ExecutionModel@@QEAAXPEAV?$list@PEAVResourceSet@ExecutionModel@@V?$allocator@PEAVResourceSet@ExecutionModel@@@utl@@@utl@@_KPEAVResourceSet@2@PEAV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@4@@Z @ 0x18000FAEC (-FinalizeSharedResourceList@ResourceManager@ExecutionModel@@QEAAXPEAV-$list@PEAVResourceSet@Exec.c)
 *     ?GenerateSharedResourceSetListAndAcquire@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetInfo@2@PEAVResourceSet@2@PEAV?$list@PEAVResourceSet@ExecutionModel@@V?$allocator@PEAVResourceSet@ExecutionModel@@@utl@@@utl@@KPEBGPEAT_RM_SID@@KPEAV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@6@PEA_K@Z @ 0x18002C298 (-GenerateSharedResourceSetListAndAcquire@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetIn.c)
 *     RmpActivityHostFindMixedHostForPsmId @ 0x18002F058 (RmpActivityHostFindMixedHostForPsmId.c)
 * Callees:
 *     memset_0 @ 0x180020A42 (memset_0.c)
 */

__int64 __fastcall RmpPsmAppFamilyIdInitialize(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v8; // rsi
  __int64 v9; // r9
  _WORD *v10; // r10
  __int16 v11; // ax
  __int64 result; // rax

  memset_0((void *)a4, 0, 0x218uLL);
  v8 = a1 - a4;
  v9 = 232LL;
  v10 = (_WORD *)a4;
  do
  {
    if ( v9 == -2147483414 )
      break;
    v11 = *(_WORD *)((char *)v10 + v8);
    if ( !v11 )
      break;
    *v10++ = v11;
    --v9;
  }
  while ( v9 );
  if ( !v9 )
    --v10;
  *v10 = 0;
  *(_OWORD *)(a4 + 464) = *(_OWORD *)a2;
  *(_OWORD *)(a4 + 480) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(a4 + 496) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a4 + 512) = *(_OWORD *)(a2 + 48);
  result = *(unsigned int *)(a2 + 64);
  *(_DWORD *)(a4 + 532) = a3;
  *(_DWORD *)(a4 + 528) = result;
  return result;
}
