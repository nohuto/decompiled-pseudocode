/*
 * XREFs of ?cInactive@PDEVOBJ@@QEAAIXZ @ 0x1C00294B8
 * Callers:
 *     prfntKillList @ 0x1C0021534 (prfntKillList.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C002D840 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 *     vDeactivateEudcRFONTsWorker @ 0x1C0289E44 (vDeactivateEudcRFONTsWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PDEVOBJ::cInactive(PDEVOBJ *this)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)this;
  if ( (*(_DWORD *)(*(_QWORD *)this + 56LL) & 0x800000) != 0 )
    return *(unsigned int *)(*(_QWORD *)(v1 + 3536) + 1568LL);
  else
    return *(unsigned int *)(v1 + 1568);
}
