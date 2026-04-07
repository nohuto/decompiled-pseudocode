/*
 * XREFs of ??0CWindowList@@QEAA@XZ @ 0x18004601C
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z @ 0x180044F5C (-Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z.c)
 * Callees:
 *     ??0?$CGenericSet@PEAVCWindowData@@@@QEAA@XZ @ 0x180046C68 (--0-$CGenericSet@PEAVCWindowData@@@@QEAA@XZ.c)
 */

CWindowList *__fastcall CWindowList::CWindowList(CWindowList *this)
{
  CWindowList *result; // rax

  *(_QWORD *)this = &CWindowList::`vftable';
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)((char *)this + 8),
    (PRTL_GENERIC_COMPARE_ROUTINE)CGenericTableMap<unsigned __int64,CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY>::CompareTableData,
    CGenericTableMap<HWND__ *,CMagnifierControl::MagnifierTableElement>::AllocTableData,
    CGenericTableMap<unsigned __int64,CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY>::FreeTableData,
    0LL);
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_DWORD *)this + 68) = 0;
  CGenericSet<CWindowData *>::CGenericSet<CWindowData *>((char *)this + 280);
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  *((_DWORD *)this + 94) = 0;
  CGenericSet<CWindowData *>::CGenericSet<CWindowData *>((char *)this + 400);
  *((_QWORD *)this + 59) = 0LL;
  result = this;
  *((_QWORD *)this + 60) = 0LL;
  *((_QWORD *)this + 61) = 0LL;
  *((_DWORD *)this + 124) = 0;
  *((_QWORD *)this + 68) = 0LL;
  *((_QWORD *)this + 69) = 0LL;
  *((_QWORD *)this + 70) = 0LL;
  *((_DWORD *)this + 142) = 0;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 63) = 0LL;
  *((_QWORD *)this + 64) = 0LL;
  *((_QWORD *)this + 65) = 0LL;
  *((_QWORD *)this + 66) = 0LL;
  *((_QWORD *)this + 67) = 0LL;
  return result;
}
