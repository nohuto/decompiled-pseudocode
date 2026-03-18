/*
 * XREFs of NtGdiRemoveFontResourceW @ 0x1C02A93A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     GreRemoveFontResourceW @ 0x1C027DD80 (GreRemoveFontResourceW.c)
 *     ?ProbeAndReadDesignVector@@YAKPEAUtagDESIGNVECTOR@@0@Z @ 0x1C02A6B48 (-ProbeAndReadDesignVector@@YAKPEAUtagDESIGNVECTOR@@0@Z.c)
 *     ?bCheckAndCapThePath@@YAHPEAG0KK@Z @ 0x1C02A6C70 (-bCheckAndCapThePath@@YAHPEAG0KK@Z.c)
 */

__int64 __fastcall NtGdiRemoveFontResourceW(
        unsigned __int16 *a1,
        unsigned int a2,
        int a3,
        unsigned int a4,
        int a5,
        struct tagDESIGNVECTOR *a6)
{
  struct tagDESIGNVECTOR *v9; // rsi
  unsigned __int16 *v10; // rbx
  unsigned int v11; // edi
  unsigned int v12; // r15d
  _BYTE v14[4]; // [rsp+70h] [rbp-138h] BYREF
  int v15; // [rsp+74h] [rbp-134h]
  unsigned __int16 v16[80]; // [rsp+C0h] [rbp-E8h] BYREF

  v9 = a6;
  v10 = 0LL;
  v11 = 0;
  v12 = 0;
  if ( a2 > 1 )
  {
    if ( a2 > 0x50 )
    {
      if ( a2 <= 0x1388000 )
        v10 = (unsigned __int16 *)AllocFreeTmpBuffer(2 * a2);
    }
    else
    {
      v10 = v16;
    }
    if ( v10 )
      v11 = bCheckAndCapThePath(v10, a1, a2, a3);
  }
  if ( v11 && a6 )
  {
    if ( (unsigned int)ProbeAndReadDesignVector((struct tagDESIGNVECTOR *)v14, a6) )
    {
      if ( v15 )
      {
        v9 = (struct tagDESIGNVECTOR *)v14;
        v12 = 4 * v15 + 8;
      }
      else
      {
        v9 = 0LL;
      }
    }
    else
    {
      v11 = 0;
    }
  }
  if ( v11 )
    v11 = GreRemoveFontResourceW(v10, a2, a3, a4, a5, v9, v12);
  if ( v10 && v10 != v16 )
    FreeTmpBuffer(v10);
  return v11;
}
