/*
 * XREFs of NtGdiGetBitmapBits @ 0x1C000EB00
 * Callers:
 *     <none>
 * Callees:
 *     GreGetBitmapBits @ 0x1C000EBCC (GreGetBitmapBits.c)
 */

__int64 __fastcall NtGdiGetBitmapBits(HSURF a1, unsigned int a2, volatile void *a3)
{
  unsigned int v6; // edi
  HANDLE v7; // rbx
  unsigned int BitmapBits; // eax

  v6 = 1;
  v7 = 0LL;
  BitmapBits = GreGetBitmapBits(a1);
  if ( a2 > BitmapBits )
    a2 = BitmapBits;
  if ( a3 )
  {
    ProbeForWrite(a3, a2, 1u);
    v7 = MmSecureVirtualMemory((PVOID)a3, a2, 4u);
    v6 = v7 != 0LL;
  }
  if ( v6 )
    v6 = GreGetBitmapBits(a1);
  if ( v7 )
    MmUnsecureVirtualMemory(v7);
  return v6;
}
