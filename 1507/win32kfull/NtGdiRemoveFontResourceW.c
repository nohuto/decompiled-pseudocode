/*
 * XREFs of NtGdiRemoveFontResourceW @ 0x1C02A8110
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     GreRemoveFontResourceW @ 0x1C027FF24 (GreRemoveFontResourceW.c)
 *     ?ProbeAndReadDesignVector@@YAKPEAUtagDESIGNVECTOR@@0@Z @ 0x1C02A5F28 (-ProbeAndReadDesignVector@@YAKPEAUtagDESIGNVECTOR@@0@Z.c)
 *     ?bCheckAndCapThePath@@YAHPEAG0KK@Z @ 0x1C02A6050 (-bCheckAndCapThePath@@YAHPEAG0KK@Z.c)
 */

__int64 __fastcall NtGdiRemoveFontResourceW(
        unsigned __int16 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        struct tagDESIGNVECTOR *a6)
{
  int v6; // r12d
  unsigned int v7; // r14d
  struct tagDESIGNVECTOR *v9; // rsi
  unsigned __int16 *v10; // rbx
  unsigned int v11; // edi
  unsigned int v12; // r15d
  _BYTE v14[4]; // [rsp+70h] [rbp-138h] BYREF
  int v15; // [rsp+74h] [rbp-134h]
  unsigned __int16 v16[80]; // [rsp+C0h] [rbp-E8h] BYREF
  unsigned int v17; // [rsp+1C8h] [rbp+20h]

  v17 = a4;
  v6 = a3;
  v7 = a2;
  v9 = a6;
  v10 = 0LL;
  v11 = 0;
  v12 = 0;
  if ( (unsigned int)a2 > 1 )
  {
    if ( (unsigned int)a2 > 0x50 )
    {
      if ( (unsigned int)a2 <= 0x1388000 )
        v10 = (unsigned __int16 *)AllocFreeTmpBuffer((unsigned int)(2 * a2));
    }
    else
    {
      v10 = v16;
    }
    if ( v10 )
      v11 = bCheckAndCapThePath(v10, a1, v7, v6);
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
    v11 = GreRemoveFontResourceW(v10, v7, v6, v17, a5, v9, v12);
  if ( v10 && v10 != v16 )
    FreeTmpBuffer(v10, a2, a3, a4);
  return v11;
}
