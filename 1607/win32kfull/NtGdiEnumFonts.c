/*
 * XREFs of NtGdiEnumFonts @ 0x1C0020F70
 * Callers:
 *     <none>
 * Callees:
 *     GreEnumFonts @ 0x1C0021B50 (GreEnumFonts.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 */

__int64 __fastcall NtGdiEnumFonts(
        HDC a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        char *Src,
        int a6,
        unsigned __int64 a7,
        volatile void *Address)
{
  void *v9; // rdi
  unsigned int v10; // esi
  size_t v11; // r8
  unsigned int *v12; // r8
  unsigned int v13; // eax
  _DWORD *v14; // r8
  unsigned int v16; // [rsp+40h] [rbp-38h] BYREF
  void *v17; // [rsp+48h] [rbp-30h]

  v9 = 0LL;
  v17 = 0LL;
  v10 = 1;
  v16 = 0;
  if ( Src )
  {
    if ( a4 - 1 > 0x1F )
      return 0LL;
    v9 = (void *)AllocFreeTmpBuffer(2 * a4);
    v17 = v9;
    if ( v9 )
    {
      v11 = 2LL * a4;
      if ( &Src[v11] < Src || (unsigned __int64)&Src[v11] > W32UserProbeAddress )
        *W32UserProbeAddress = 0;
      memmove(v9, Src, v11);
      *((_WORD *)v9 + a4 - 1) = 0;
    }
    else
    {
      v10 = 0;
    }
  }
  if ( v10 )
  {
    v12 = (unsigned int *)a7;
    if ( a7 >= W32UserProbeAddress )
      v12 = (unsigned int *)W32UserProbeAddress;
    v13 = *v12;
    v16 = *v12;
    if ( Address )
      ProbeForWrite(Address, v13, 4u);
    v10 = GreEnumFonts(a1, a2, a6, &v16, (void *)Address);
    v14 = (_DWORD *)a7;
    if ( a7 >= W32UserProbeAddress )
      v14 = (_DWORD *)W32UserProbeAddress;
    *v14 = v16;
  }
  if ( v9 )
    FreeTmpBuffer(v9);
  return v10;
}
