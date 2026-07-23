/*
 * XREFs of MmMapSecureViewOfSection @ 0x14040C068
 * Callers:
 *     AlpcpCreateView @ 0x14040C0E0 (AlpcpCreateView.c)
 *     MiMapCfgBitMapSection @ 0x1404C16AC (MiMapCfgBitMapSection.c)
 * Callees:
 *     MiMapViewOfSection @ 0x140431EE0 (MiMapViewOfSection.c)
 */

__int64 __fastcall MmMapSecureViewOfSection(
        int a1,
        int a2,
        _QWORD *a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9,
        int a10,
        int a11,
        __int64 a12)
{
  __int64 result; // rax

  result = MiMapViewOfSection(a1, a2, (_DWORD)a3, a4, 0LL, a6, a7, a8, a9, a10, a11, a12);
  if ( (int)result < 0 )
  {
    if ( *a3 )
      ++dword_140327178;
    else
      ++dword_140327174;
  }
  return result;
}
