/*
 * XREFs of ?IsScreenReaderProcess@CProcess@@UEAA_NXZ @ 0x18000F610
 * Callers:
 *     <none>
 * Callees:
 *     ?TsSessionIdIsAScreenReaderProcess@@YAHKKPEAM@Z @ 0x18001B190 (-TsSessionIdIsAScreenReaderProcess@@YAHKKPEAM@Z.c)
 */

bool __fastcall CProcess::IsScreenReaderProcess(CProcess *this)
{
  return (unsigned int)TsSessionIdIsAScreenReaderProcess(*((_DWORD *)this + 39), *((_DWORD *)this + 38), 0LL) != 0;
}
