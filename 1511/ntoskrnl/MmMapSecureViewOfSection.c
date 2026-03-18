/*
 * XREFs of MmMapSecureViewOfSection @ 0x14047CDA8
 * Callers:
 *     MiMapCfgBitMapSection @ 0x1404624A4 (MiMapCfgBitMapSection.c)
 *     AlpcpCreateView @ 0x14047C210 (AlpcpCreateView.c)
 * Callees:
 *     MiMapViewOfSection @ 0x140419680 (MiMapViewOfSection.c)
 */

__int64 __fastcall MmMapSecureViewOfSection(
        __int64 a1,
        struct _KPROCESS *a2,
        void **a3,
        unsigned __int64 a4,
        __int64 a5,
        _QWORD *a6,
        size_t *a7,
        int a8,
        unsigned int a9,
        unsigned int a10,
        int a11,
        _QWORD *a12)
{
  int v13; // ecx
  bool v15; // zf

  v13 = MiMapViewOfSection(a1, a2, a3, a4, 0LL, a6, a7, a8, a9, a10, a11, a12);
  if ( v13 < 0 )
  {
    if ( *a3 )
      ++dword_1402FED68;
    else
      ++dword_1402FED64;
    if ( *a3 )
      v15 = (MiAllocationDebug & 8) == 0;
    else
      v15 = (MiAllocationDebug & 4) == 0;
    if ( !v15 )
      __debugbreak();
  }
  return (unsigned int)v13;
}
