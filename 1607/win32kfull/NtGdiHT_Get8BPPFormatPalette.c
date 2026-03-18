/*
 * XREFs of NtGdiHT_Get8BPPFormatPalette @ 0x1C02B0A10
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C0060508 (PALLOCMEM2.c)
 *     HT_Get8BPPFormatPalette @ 0x1C024A230 (HT_Get8BPPFormatPalette.c)
 *     ?bSafeCopyBits@@YAHPEAX0K@Z @ 0x1C02ABF28 (-bSafeCopyBits@@YAHPEAX0K@Z.c)
 */

__int64 __fastcall NtGdiHT_Get8BPPFormatPalette(char *a1, USHORT a2, USHORT a3, USHORT a4)
{
  unsigned int v4; // ebx
  struct tagPALETTEENTRY *v9; // rax
  struct tagPALETTEENTRY *v10; // rdi
  LONG v11; // ebx
  __int64 v12; // rdx

  v4 = 0;
  if ( !a1 )
    return 216LL;
  v9 = (struct tagPALETTEENTRY *)PALLOCMEM2(0x360uLL, 1886221639LL, 0);
  v10 = v9;
  if ( v9 )
  {
    v11 = HT_Get8BPPFormatPalette(v9, a2, a3, a4);
    v4 = (unsigned int)bSafeCopyBits(a1, v10, 0x360u) != 0 ? v11 : 0;
    Win32FreePool(v10, v12);
  }
  return v4;
}
