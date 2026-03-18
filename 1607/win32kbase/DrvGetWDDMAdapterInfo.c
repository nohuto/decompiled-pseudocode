/*
 * XREFs of DrvGetWDDMAdapterInfo @ 0x1C00086F0
 * Callers:
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C0007F84 (rimFindMonitorForDigitizerWithQDCData.c)
 * Callees:
 *     ?bLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C0031A08 (-bLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     ?pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ @ 0x1C0031A80 (-pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ.c)
 */

__int64 __fastcall DrvGetWDDMAdapterInfo(__int64 a1, struct _LUID *a2, _DWORD *a3)
{
  __int64 v3; // r9
  struct _LUID *v7; // rax
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  LODWORD(v3) = 0;
  v9 = a1;
  if ( a1
    && (*(_DWORD *)(a1 + 56) & 0x20400) == 0
    && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v9)
    && *(_QWORD *)(a1 + 2600) != v3 )
  {
    v7 = PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v9);
    LODWORD(v3) = 1;
    *a2 = *v7;
    *a3 = *(_DWORD *)(*(_QWORD *)(a1 + 2600) + 272LL);
  }
  return (unsigned int)v3;
}
