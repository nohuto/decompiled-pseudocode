/*
 * XREFs of NtGdiEnumFonts @ 0x1C00E5DD0
 * Callers:
 *     <none>
 * Callees:
 *     GreEnumFonts @ 0x1C00E5F4C (GreEnumFonts.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 */

__int64 __fastcall NtGdiEnumFonts(
        HDC a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        char *Src,
        int a6,
        unsigned __int64 a7,
        volatile void *Address)
{
  unsigned int v8; // r14d
  void *v9; // rdi
  unsigned int v10; // esi
  size_t v11; // r8
  unsigned int *v12; // r8
  unsigned int v13; // eax
  unsigned int v15; // [rsp+40h] [rbp-38h] BYREF
  void *v16; // [rsp+48h] [rbp-30h]
  unsigned int v18; // [rsp+88h] [rbp+10h]

  v18 = a2;
  v8 = a4;
  v9 = 0LL;
  v16 = 0LL;
  v10 = 1;
  v15 = 0;
  if ( Src )
  {
    if ( (unsigned int)(a4 - 1) > 0x1F )
      return 0LL;
    v9 = (void *)AllocFreeTmpBuffer((unsigned int)(2 * a4));
    v16 = v9;
    if ( v9 )
    {
      v11 = 2LL * v8;
      if ( &Src[v11] < Src || (unsigned __int64)&Src[v11] > W32UserProbeAddress )
        *W32UserProbeAddress = 0;
      memmove(v9, Src, v11);
      *((_WORD *)v9 + v8 - 1) = 0;
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
    v15 = *v12;
    if ( Address )
      ProbeForWrite(Address, v13, 4u);
    v10 = GreEnumFonts(a1, v18, a6, &v15, (void *)Address);
    a3 = (_DWORD *)a7;
    if ( a7 >= W32UserProbeAddress )
      a3 = (_DWORD *)W32UserProbeAddress;
    *a3 = v15;
  }
  if ( v9 )
    FreeTmpBuffer(v9, a2, a3, a4);
  return v10;
}
