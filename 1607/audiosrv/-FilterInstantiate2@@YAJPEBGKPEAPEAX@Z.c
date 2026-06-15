/*
 * XREFs of ?FilterInstantiate2@@YAJPEBGKPEAPEAX@Z @ 0x180083E84
 * Callers:
 *     s_midiOpenPort @ 0x180074340 (s_midiOpenPort.c)
 * Callees:
 *     <none>
 */

signed int __fastcall FilterInstantiate2(const unsigned __int16 *a1, __int64 a2, void **a3)
{
  HANDLE FileW; // rax
  signed int result; // eax

  FileW = CreateFileW(a1, 0xC0000000, 0, 0LL, 3u, 0x40800080u, 0LL);
  if ( FileW == (HANDLE)-1LL )
  {
    result = GetLastError();
    if ( result > 0 )
      return (unsigned __int16)result | 0x80070000;
  }
  else
  {
    *a3 = FileW;
    return 0;
  }
  return result;
}
