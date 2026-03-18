/*
 * XREFs of NtGdiExtCreateRegion @ 0x1C0073F60
 * Callers:
 *     <none>
 * Callees:
 *     FreeTmpBuffer @ 0x1C0042690 (FreeTmpBuffer.c)
 *     AllocFreeTmpBuffer @ 0x1C0042C00 (AllocFreeTmpBuffer.c)
 *     ProbeAndConvertXFORM @ 0x1C0071ED0 (ProbeAndConvertXFORM.c)
 *     GreExtCreateRegion @ 0x1C0074050 (GreExtCreateRegion.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     memmove @ 0x1C0088D80 (memmove.c)
 */

__int64 __fastcall NtGdiExtCreateRegion(unsigned int *a1, unsigned int a2, char *a3)
{
  size_t v4; // rsi
  __int64 Region; // rbx
  void *v7; // rdi
  int v8; // eax
  char v10; // [rsp+40h] [rbp-48h] BYREF

  v4 = a2;
  Region = 0LL;
  if ( a2 - 32 <= 0x270FFE0 )
  {
    v7 = (void *)AllocFreeTmpBuffer(a2);
    if ( v7 )
    {
      v8 = 1;
      if ( a1 )
      {
        v8 = ProbeAndConvertXFORM(a1);
        a1 = (unsigned int *)&v10;
      }
      if ( v8 )
      {
        if ( &a3[v4] < a3 || &a3[v4] > W32UserProbeAddress )
          *(_BYTE *)W32UserProbeAddress = 0;
        memmove(v7, a3, v4);
        Region = 1LL;
      }
      if ( Region )
        Region = GreExtCreateRegion(a1, (unsigned int)v4, v7);
      FreeTmpBuffer((char *)v7);
    }
  }
  return Region;
}
