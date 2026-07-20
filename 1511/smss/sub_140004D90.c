/*
 * XREFs of sub_140004D90 @ 0x140004D90
 * Callers:
 *     sub_140003500 @ 0x140003500 (sub_140003500.c)
 *     sub_1400038D0 @ 0x1400038D0 (sub_1400038D0.c)
 * Callees:
 *     sub_1400043D0 @ 0x1400043D0 (sub_1400043D0.c)
 *     sub_140004800 @ 0x140004800 (sub_140004800.c)
 *     sub_140004890 @ 0x140004890 (sub_140004890.c)
 *     sub_140004C90 @ 0x140004C90 (sub_140004C90.c)
 */

__int64 __fastcall sub_140004D90(__int64 a1)
{
  unsigned int v1; // ebx
  HANDLE *v2; // rax
  char *v3; // rdi
  unsigned int v4; // ebx

  v1 = *(_DWORD *)(a1 + 48);
  v2 = (HANDLE *)sub_1400043D0(v1);
  v3 = (char *)v2;
  if ( v2 )
  {
    v4 = sub_140004800(v2, 1);
    sub_140004890(v3);
  }
  else
  {
    return (unsigned int)sub_140004C90(v1);
  }
  return v4;
}
