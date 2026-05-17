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
        int a3,
        __int64 a4,
        __int64 *a5,
        unsigned int a6)
{
  int DelayloadExportDll; // ebx
  void (__fastcall *v11)(__int64 *, __int64, __int64, _QWORD, _QWORD); // r8
  __int64 v12; // rdi
  char *v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v17; // rax
  int v18; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int64 v19; // [rsp+48h] [rbp-20h] BYREF

  DelayloadExportDll = LdrpGetDelayloadExportDll(a1, a2, (__int64)&v19, a6);
  v18 = DelayloadExportDll;
  if ( DelayloadExportDll >= 0
    && (g_ShimsEnabled
      ? (v11 = (void (__fastcall *)(__int64 *, __int64, __int64, _QWORD, _QWORD))(MEMORY[0x7FFE0330] ^ __ROR8__(g_pfnSE_GetProcAddressForCaller, 64 - (MEMORY[0x7FFE0330] & 0x3Fu))))
      : (v11 = 0LL),
        v12 = LdrpResolveDelayloadAddress(a1, v19, a2, (__int64)a5, v11, &v18),
        LdrpDereferenceModule(v19, v13, v14, v15),
        DelayloadExportDll = v18,
        v18 >= 0)
    || (v17 = LdrpRedirectDelayloadFailure(a1, v19, a2, a3, a4, (__int64)a5, DelayloadExportDll),
        v12 = v17,
        DelayloadExportDll >= 0)
    || v17 && ((unsigned int)(DelayloadExportDll + 1073741512) <= 1 || DelayloadExportDll == -1073740671) )
  {
    *a5 = v12;
  }
  return v12;
}
