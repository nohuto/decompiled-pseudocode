/*
 * XREFs of DbgkpWerUpdateTriageDumpHeader @ 0x14061C5D4
 * Callers:
 *     DbgkpWerWriteTriageDump @ 0x14061C7B0 (DbgkpWerWriteTriageDump.c)
 * Callees:
 *     DbgPrintEx @ 0x140084C90 (DbgPrintEx.c)
 */

__int64 __fastcall DbgkpWerUpdateTriageDumpHeader(__int64 a1)
{
  int v1; // r8d
  unsigned int v3; // r9d
  unsigned int v4; // edx
  unsigned int v5; // r9d
  unsigned __int64 v6; // rcx
  unsigned int v8; // edx

  v1 = *(_DWORD *)(a1 + 96);
  v3 = *(_DWORD *)(a1 + 152);
  if ( v1 )
  {
    v4 = *(_DWORD *)(a1 + 176);
    v5 = v3 + 16;
    v6 = 32LL * v4;
    if ( v6 > 0xFFFFFFFF )
    {
      DbgPrintEx(5u, 0, "DBGK: Overflow calculating total blocks. Block count %i\n", v4);
      return 3221225621LL;
    }
    v8 = v6 + v5;
    if ( (unsigned int)v6 + v5 < v5 )
      return 3221225621LL;
    v3 = v1 + v8;
    if ( v1 + v8 < v8 )
      return 3221225621LL;
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 144) + 4000LL) = v3;
  DbgPrintEx(5u, 3u, "DBGK: Required total aize: 0x%X\n", v3);
  return 0LL;
}
