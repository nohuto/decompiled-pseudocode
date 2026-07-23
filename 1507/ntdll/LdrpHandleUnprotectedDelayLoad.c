/*
 * XREFs of LdrpHandleUnprotectedDelayLoad @ 0x180079C94
 * Callers:
 *     LdrResolveDelayLoadedAPI @ 0x180016DF0 (LdrResolveDelayLoadedAPI.c)
 * Callees:
 *     LdrpDereferenceModule @ 0x18001651C (LdrpDereferenceModule.c)
 *     LdrpResolveDelayloadAddress @ 0x180016A40 (LdrpResolveDelayloadAddress.c)
 *     LdrpRedirectDelayloadFailure @ 0x180077574 (LdrpRedirectDelayloadFailure.c)
 *     LdrpGetDelayloadExportDll @ 0x18007A108 (LdrpGetDelayloadExportDll.c)
 */

char *__fastcall LdrpHandleUnprotectedDelayLoad(
        __int64 a1,
        __int64 a2,
        __int64 (__fastcall *a3)(__int64, _QWORD *),
        _RTL_DYNAMIC_HASH_TABLE *a4,
        char **a5,
        unsigned int a6)
{
  NTSTATUS DelayloadExportDll; // ebx
  _RTL_DYNAMIC_HASH_TABLE *HashTable; // r8
  char *v12; // rdi
  __int64 v14; // rax
  __int64 v15; // [rsp+40h] [rbp-28h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp-20h] BYREF

  DelayloadExportDll = LdrpGetDelayloadExportDll(a1, a2, &BaseAddress, a6);
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
    || (v14 = LdrpRedirectDelayloadFailure(a1, (__int64)BaseAddress, a2, a3, a4, (__int64)a5, DelayloadExportDll),
        v12 = (char *)v14,
        DelayloadExportDll >= 0)
    || v14 && ((unsigned int)(DelayloadExportDll + 1073741512) <= 1 || DelayloadExportDll == -1073740671) )
  {
    *a5 = v12;
  }
  return v12;
}
