/*
 * XREFs of ?bScanTheList@@YAHPEAVFHOBJ@@KPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@PEBG@Z @ 0x1C0118814
 * Callers:
 *     ?bScanFamily@@YAHPEAVFHOBJ@@K0K0KPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@PEBG@Z @ 0x1C0118764 (-bScanFamily@@YAHPEAVFHOBJ@@K0K0KPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@PEBG@Z.c)
 * Callees:
 *     ?bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@PEBGKPEAU_EFFILTER_INFO@@@Z @ 0x1C0026E2C (-bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@PEBGKPEAU_EFFILTER_INFO@@@Z.c)
 *     ?bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@@Z @ 0x1C0026F48 (-bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@@Z.c)
 */

__int64 __fastcall bScanTheList(
        struct FHOBJ *a1,
        int a2,
        struct EFSOBJ *a3,
        int a4,
        struct _EFFILTER_INFO *a5,
        unsigned __int16 *a6)
{
  int v7; // esi
  __int64 result; // rax

  if ( a6 )
    return FHOBJ::bScanLists(a1, a3, a6, a4, a5);
  v7 = 0;
  if ( a2 == 1 )
  {
    v7 = *((_DWORD *)a5 + 4);
    *((_DWORD *)a5 + 4) = 1;
  }
  else if ( a2 == 2 )
  {
    *((_DWORD *)a5 + 3) = 1;
  }
  result = FHOBJ::bScanLists(a1, a3, a4, a5);
  if ( a2 == 1 )
  {
    *((_DWORD *)a5 + 4) = v7;
  }
  else if ( a2 == 2 )
  {
    *((_DWORD *)a5 + 3) = 0;
  }
  return result;
}
