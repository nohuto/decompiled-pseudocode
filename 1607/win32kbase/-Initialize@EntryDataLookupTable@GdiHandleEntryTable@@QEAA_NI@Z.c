/*
 * XREFs of ?Initialize@EntryDataLookupTable@GdiHandleEntryTable@@QEAA_NI@Z @ 0x1C002B3DC
 * Callers:
 *     ?AcquireEntryIndex@GdiHandleEntryTable@@QEAA_NPEAI@Z @ 0x1C002B1E0 (-AcquireEntryIndex@GdiHandleEntryTable@@QEAA_NPEAI@Z.c)
 * Callees:
 *     Win32AllocPool @ 0x1C0034690 (Win32AllocPool.c)
 */

bool __fastcall GdiHandleEntryTable::EntryDataLookupTable::Initialize(
        GdiHandleEntryTable::EntryDataLookupTable *this,
        unsigned int a2)
{
  __int64 v2; // rdi
  unsigned __int8 v4; // si
  _QWORD *v5; // rcx
  bool result; // al

  v2 = a2 >> 8;
  v4 = a2;
  if ( !*(_QWORD *)(*(_QWORD *)this + 8 * v2) )
  {
    *(_QWORD *)(*(_QWORD *)this + 8 * v2) = Win32AllocPool(4096LL, 1668048199LL);
    if ( !*(_QWORD *)(*(_QWORD *)this + 8 * v2) )
      return 0;
  }
  v5 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 8 * v2) + 16LL * v4);
  result = 1;
  *v5 = 0LL;
  v5[1] = 0LL;
  return result;
}
