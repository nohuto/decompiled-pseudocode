/*
 * XREFs of ?CitpParametersCleanup@@YAXPEAU_CIT_PARAMETERS@@@Z @ 0x1C0065DC4
 * Callers:
 *     ?CitpResetTracking@@YAJXZ @ 0x1C00050F4 (-CitpResetTracking@@YAJXZ.c)
 *     ?CitpCleanup@@YAXXZ @ 0x1C0064E48 (-CitpCleanup@@YAXXZ.c)
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 */

void __fastcall CitpParametersCleanup(struct _CIT_PARAMETERS *a1)
{
  wchar_t *v2; // rcx

  v2 = (wchar_t *)*((_QWORD *)a1 + 8);
  if ( v2 && v2 != L":RUNDLL32.EXE:DLLHOST.EXE:MMC.EXE:" )
  {
    Win32FreePool();
    *((_QWORD *)a1 + 8) = L":RUNDLL32.EXE:DLLHOST.EXE:MMC.EXE:";
  }
  *((_BYTE *)a1 + 84) = 0;
  *((_BYTE *)a1 + 86) = 0;
  *((_BYTE *)a1 + 89) = 0;
}
