/*
 * XREFs of LdrpHandleUnprotectedDelayLoad @ 0x18007B434
 * Callers:
 *     LdrResolveDelayLoadedAPI @ 0x1800319E0 (LdrResolveDelayLoadedAPI.c)
 * Callees:
 *     LdrpGetDelayloadExportDll @ 0x18001136C (LdrpGetDelayloadExportDll.c)
 *     LdrpDereferenceModule @ 0x180032238 (LdrpDereferenceModule.c)
 *     LdrpResolveDelayloadAddress @ 0x18007B524 (LdrpResolveDelayloadAddress.c)
 *     LdrpRedirectDelayloadFailure @ 0x18007B728 (LdrpRedirectDelayloadFailure.c)
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
  int v10; // ebx
  __int64 v11; // r8
  __int64 v12; // rdi
  char *v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v17; // rax
  int DelayloadExportDll; // [rsp+40h] [rbp-28h] BYREF
  __int64 v19; // [rsp+48h] [rbp-20h] BYREF

  v8 = a2;
  v9 = a1;
  DelayloadExportDll = LdrpGetDelayloadExportDll(a1, a2, &v19, a6, (__int64)a5);
  v10 = DelayloadExportDll;
  if ( DelayloadExportDll >= 0
    && (g_ShimsEnabled
      ? (v11 = MEMORY[0x7FFE0330] ^ __ROR8__(g_pfnSE_GetProcAddressForCaller, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)))
      : (v11 = 0LL),
        v12 = LdrpResolveDelayloadAddress(v9, v19, v8, (_DWORD)a5, v11, (__int64)&DelayloadExportDll),
        LdrpDereferenceModule(v19, v13, v14, v15),
        v10 = DelayloadExportDll,
        DelayloadExportDll >= 0)
    || (v17 = LdrpRedirectDelayloadFailure(v9, v19, v8, a3, a4, (__int64)a5, v10), v12 = v17, v10 >= 0)
    || v17 && ((unsigned int)(v10 + 1073741512) <= 1 || v10 == -1073740671) )
  {
    *a5 = v12;
  }
  return v12;
}
