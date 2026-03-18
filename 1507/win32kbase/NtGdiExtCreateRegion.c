/*
 * XREFs of NtGdiExtCreateRegion @ 0x1C0053100
 * Callers:
 *     <none>
 * Callees:
 *     FreeTmpBuffer @ 0x1C00534E0 (FreeTmpBuffer.c)
 *     AllocFreeTmpBuffer @ 0x1C0053560 (AllocFreeTmpBuffer.c)
 *     GreExtCreateRegion @ 0x1C0055450 (GreExtCreateRegion.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     memmove @ 0x1C0085B00 (memmove.c)
 *     ?ProbeAndConvertXFORM@@YAHPEAU_XFORML@@0@Z @ 0x1C00B2B90 (-ProbeAndConvertXFORM@@YAHPEAU_XFORML@@0@Z.c)
 */

__int64 __fastcall NtGdiExtCreateRegion(struct _XFORML *a1, size_t Size, char *Src)
{
  size_t v4; // rsi
  __int64 Region; // rbx
  void *v7; // rdi
  int v8; // eax
  _XFORML v10; // [rsp+40h] [rbp-48h] BYREF

  v4 = (unsigned int)Size;
  Region = 0LL;
  if ( (unsigned int)(Size - 32) <= 0x270FFE0 )
  {
    v7 = (void *)AllocFreeTmpBuffer((unsigned int)Size);
    if ( v7 )
    {
      v8 = 1;
      if ( a1 )
      {
        v8 = ProbeAndConvertXFORM(a1, &v10);
        a1 = &v10;
      }
      if ( v8 )
      {
        if ( &Src[v4] < Src || &Src[v4] > W32UserProbeAddress )
          *(_BYTE *)W32UserProbeAddress = 0;
        memmove(v7, Src, v4);
        Region = 1LL;
      }
      if ( Region )
        Region = GreExtCreateRegion(a1, (unsigned int)v4, v7);
      FreeTmpBuffer(v7);
    }
  }
  return Region;
}
