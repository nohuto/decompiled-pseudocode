/*
 * XREFs of LdrpHandleUnprotectedDelayLoad @ 0x18007B424
 * Callers:
 *     LdrResolveDelayLoadedAPI @ 0x1800319D0 (LdrResolveDelayLoadedAPI.c)
 * Callees:
 *     LdrpGetDelayloadExportDll @ 0x18001135C (LdrpGetDelayloadExportDll.c)
 *     LdrpDereferenceModule @ 0x180032228 (LdrpDereferenceModule.c)
 *     LdrpResolveDelayloadAddress @ 0x18007B514 (LdrpResolveDelayloadAddress.c)
 *     LdrpRedirectDelayloadFailure @ 0x18007B718 (LdrpRedirectDelayloadFailure.c)
 */

__int64 __fastcall LdrpHandleUnprotectedDelayLoad(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 *a5,
        unsigned int a6)
{
  int v8; // ebp
  int v9; // r14d
  NTSTATUS Status; // ebx
  __int64 v11; // r8
  __int64 v12; // rdi
  __int64 v14; // rax
  int DelayloadExportDll; // [rsp+40h] [rbp-28h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp-20h] BYREF

  v8 = a2;
  v9 = a1;
  DelayloadExportDll = LdrpGetDelayloadExportDll(a1, a2, (__int64 *)&BaseAddress, a6, (__int64)a5);
  Status = DelayloadExportDll;
  if ( DelayloadExportDll >= 0
    && (g_ShimsEnabled
      ? (v11 = MEMORY[0x7FFE0330] ^ __ROR8__(g_pfnSE_GetProcAddressForCaller, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)))
      : (v11 = 0LL),
        v12 = LdrpResolveDelayloadAddress(v9, (_DWORD)BaseAddress, v8, (_DWORD)a5, v11, (__int64)&DelayloadExportDll),
        LdrpDereferenceModule((char *)BaseAddress),
        Status = DelayloadExportDll,
        DelayloadExportDll >= 0)
    || (v14 = LdrpRedirectDelayloadFailure(v9, (int)BaseAddress, v8, a3, a4, (__int64)a5, Status), v12 = v14,
                                                                                                   Status >= 0)
    || v14 && ((unsigned int)(Status + 1073741512) <= 1 || Status == -1073740671) )
  {
    *a5 = v12;
  }
  return v12;
}
