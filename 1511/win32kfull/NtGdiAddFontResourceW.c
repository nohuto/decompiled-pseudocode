/*
 * XREFs of NtGdiAddFontResourceW @ 0x1C000DB80
 * Callers:
 *     <none>
 * Callees:
 *     GreAddFontResourceWInternal @ 0x1C000DD2C (GreAddFontResourceWInternal.c)
 *     bCheckAndCapThePath @ 0x1C000E8C8 (bCheckAndCapThePath.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ProbeAndReadDesignVector @ 0x1C02A7E64 (ProbeAndReadDesignVector.c)
 */

__int64 __fastcall NtGdiAddFontResourceW(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        struct tagDESIGNVECTOR *a6)
{
  struct tagDESIGNVECTOR *v9; // rsi
  unsigned __int16 *v10; // rdi
  unsigned int v11; // ebx
  int v12; // r15d
  size_t v14; // [rsp+30h] [rbp-188h]
  _BYTE v16[4]; // [rsp+80h] [rbp-138h] BYREF
  int v17; // [rsp+84h] [rbp-134h]
  _BYTE v18[160]; // [rsp+D0h] [rbp-E8h] BYREF

  v9 = a6;
  v10 = 0LL;
  v11 = 0;
  v12 = 0;
  if ( a4 == 0x80000000 && PsGetCurrentProcessId() != (HANDLE)gpidLogon )
    return 0LL;
  if ( a2 > 1 )
  {
    if ( a2 > 0x50 )
    {
      if ( a2 > 0x414 )
        v11 = 0;
      else
        v10 = (unsigned __int16 *)AllocFreeTmpBuffer(2 * a2);
    }
    else
    {
      v10 = (unsigned __int16 *)v18;
    }
    if ( v10 )
      v11 = bCheckAndCapThePath(v10, a1, a2, a3);
  }
  if ( v11 && a6 )
  {
    if ( (unsigned int)ProbeAndReadDesignVector(v16, a6) )
    {
      if ( v17 )
      {
        v9 = (struct tagDESIGNVECTOR *)v16;
        v12 = 4 * v17 + 8;
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
  {
    LODWORD(v14) = v12;
    v11 = GreAddFontResourceWInternal(v10, a2, a3, a4, a5, v9, v14);
  }
  if ( v10 )
  {
    if ( v10 != (unsigned __int16 *)v18 )
      FreeTmpBuffer(v10);
  }
  return v11;
}
