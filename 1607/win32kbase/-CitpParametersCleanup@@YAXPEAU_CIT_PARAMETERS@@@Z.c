/*
 * XREFs of ?CitpParametersCleanup@@YAXPEAU_CIT_PARAMETERS@@@Z @ 0x1C004EFFC
 * Callers:
 *     ?CitpCleanup@@YAXXZ @ 0x1C004EFD4 (-CitpCleanup@@YAXXZ.c)
 *     ?CitpResetTracking@@YAJXZ @ 0x1C00F6BB4 (-CitpResetTracking@@YAJXZ.c)
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
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
  *((_WORD *)a1 + 42) = 0;
  *((_BYTE *)a1 + 88) = 0;
}
