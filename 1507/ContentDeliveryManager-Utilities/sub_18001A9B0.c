/*
 * XREFs of sub_18001A9B0 @ 0x18001A9B0
 * Callers:
 *     sub_18001FC40 @ 0x18001FC40 (sub_18001FC40.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18001A9B0(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  _OWORD *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = CoTaskMemAlloc(0x40uLL);
  if ( v6 )
  {
    *v6 = unk_18002C3D0;
    v6[1] = unk_18002BFC8;
    v6[2] = xmmword_18002C1E8;
    v6[3] = xmmword_18002F960;
    *a2 = 4;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
