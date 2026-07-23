/*
 * XREFs of LdrpHandleUnprotectedDelayLoad @ 0x180081FEC
 * Callers:
 *     LdrResolveDelayLoadedAPI @ 0x180031DC0 (LdrResolveDelayLoadedAPI.c)
 * Callees:
 *     LdrpGetDelayloadExportDll @ 0x1800104CC (LdrpGetDelayloadExportDll.c)
 *     LdrpResolveDelayloadAddress @ 0x1800323F0 (LdrpResolveDelayloadAddress.c)
 *     LdrpDereferenceModule @ 0x180032630 (LdrpDereferenceModule.c)
 *     LdrpRedirectDelayloadFailure @ 0x1800823DC (LdrpRedirectDelayloadFailure.c)
 */

__int64 __fastcall LdrpHandleUnprotectedDelayLoad(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        unsigned int a6)
{
  int DelayloadExportDll; // ebx
  _RTL_DYNAMIC_HASH_TABLE *HashTable; // r8
  __int64 v12; // rdi
  __int64 v14; // rax
  __int64 v15; // [rsp+40h] [rbp-28h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp-20h] BYREF

  DelayloadExportDll = LdrpGetDelayloadExportDll(a1, a2, (__int64)&BaseAddress, a6);
  LODWORD(v15) = DelayloadExportDll;
  if ( DelayloadExportDll >= 0
    && (g_ShimsEnabled
      ? (HashTable = (_RTL_DYNAMIC_HASH_TABLE *)((unsigned int)MEMORY[0x7FFE0330] ^ __ROR8__(
                                                                                      g_pfnSE_GetProcAddressForCaller,
                                                                                      64
                                                                                    - ((unsigned __int8)MEMORY[0x7FFE0330] & 0x3Fu))))
      : (HashTable = 0LL),
        v12 = LdrpResolveDelayloadAddress(a1, BaseAddress, a2, (__int64)a5, HashTable, (int *)&v15),
        LdrpDereferenceModule((char *)BaseAddress),
        DelayloadExportDll = v15,
        (int)v15 >= 0)
    || (v14 = LdrpRedirectDelayloadFailure(a1, BaseAddress, a2, a3, a4, a5, DelayloadExportDll),
        v12 = v14,
        DelayloadExportDll >= 0)
    || v14 && ((unsigned int)(DelayloadExportDll + 1073741512) <= 1 || DelayloadExportDll == -1073740671) )
  {
    *a5 = v12;
  }
  return v12;
}
