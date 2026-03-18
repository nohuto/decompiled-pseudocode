/*
 * XREFs of ?bAddPvtData@PFFOBJ@@QEAAHK@Z @ 0x1C02B61D4
 * Callers:
 *     ?chpfeIncrPFF@PFTOBJ@@QEAAKPEAVPFF@@PEAHKPEAU_EUDCLOAD@@@Z @ 0x1C0022988 (-chpfeIncrPFF@PFTOBJ@@QEAAKPEAVPFF@@PEAHKPEAU_EUDCLOAD@@@Z.c)
 *     ??0PFFMEMOBJ@@QEAA@IPEAGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTCHECKSUM@@PEAPEAU_FONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C00645D8 (--0PFFMEMOBJ@@QEAA@IPEAGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTC.c)
 *     ??0PFFMEMOBJ@@QEAA@PEAVPFF@@KKPEAVPFT@@@Z @ 0x1C00649FC (--0PFFMEMOBJ@@QEAA@PEAVPFF@@KKPEAVPFT@@@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0060508 (PALLOCMEM2.c)
 *     ?pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ @ 0x1C02B68F8 (-pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ.c)
 */

__int64 __fastcall PFFOBJ::bAddPvtData(PFFOBJ *this, char a2)
{
  struct tagPvtData *v4; // rax
  __int64 result; // rax
  __int64 v6; // rdi
  int v7; // esi
  unsigned int CurrentThreadId; // eax

  v4 = PFFOBJ::pPvtDataMatch(this);
  if ( v4 )
  {
    if ( (a2 & 0x2C) != 0 )
      ++*((_DWORD *)v4 + 1);
    else
      ++*(_DWORD *)v4;
    *((_DWORD *)v4 + 2) |= a2 & 0x3C;
LABEL_6:
    *((_DWORD *)this + 2) = 1;
    return 1LL;
  }
  result = (__int64)PALLOCMEM2(0x38uLL, 1886811207LL, 1);
  v6 = result;
  if ( result )
  {
    *(_DWORD *)(result + 8) = a2 & 0x3C;
    if ( (a2 & 0x2C) != 0 )
    {
      *(_DWORD *)result = 0;
      *(_DWORD *)(result + 4) = 1;
    }
    else
    {
      *(_DWORD *)(result + 4) = 0;
      *(_DWORD *)result = 1;
    }
    v7 = a2 & 4;
    if ( v7 )
      CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
    else
      CurrentThreadId = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
    *(_DWORD *)(v6 + 12) = CurrentThreadId;
    if ( v7 )
      PushThreadGuardedObject(v6 + 24, *(_QWORD *)this, CleanupPvtData);
    *(_QWORD *)(v6 + 16) = *(_QWORD *)(*(_QWORD *)this + 160LL);
    *(_QWORD *)(*(_QWORD *)this + 160LL) = v6;
    goto LABEL_6;
  }
  return result;
}
