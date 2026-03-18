/*
 * XREFs of NtGdiAddFontResourceW @ 0x1C013E030
 * Callers:
 *     <none>
 * Callees:
 *     GreAddFontResourceWInternal @ 0x1C013E1DC (GreAddFontResourceWInternal.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ?ProbeAndReadDesignVector@@YAKPEAUtagDESIGNVECTOR@@0@Z @ 0x1C02A5F28 (-ProbeAndReadDesignVector@@YAKPEAUtagDESIGNVECTOR@@0@Z.c)
 *     ?bCheckAndCapThePath@@YAHPEAG0KK@Z @ 0x1C02A6050 (-bCheckAndCapThePath@@YAHPEAG0KK@Z.c)
 */

__int64 __fastcall NtGdiAddFontResourceW(
        unsigned __int16 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        struct tagDESIGNVECTOR *a6)
{
  unsigned int v6; // r13d
  unsigned int v7; // r12d
  unsigned int v8; // r14d
  struct tagDESIGNVECTOR *v9; // rsi
  unsigned __int16 *v10; // rdi
  unsigned int v11; // ebx
  int v12; // r15d
  size_t v14; // [rsp+30h] [rbp-188h]
  _BYTE v16[4]; // [rsp+80h] [rbp-138h] BYREF
  int v17; // [rsp+84h] [rbp-134h]
  unsigned __int16 v18[80]; // [rsp+D0h] [rbp-E8h] BYREF

  v6 = a4;
  v7 = a3;
  v8 = a2;
  v9 = a6;
  v10 = 0LL;
  v11 = 0;
  v12 = 0;
  if ( (_DWORD)a4 == 0x80000000 && PsGetCurrentProcessId() != (HANDLE)gpidLogon )
    return 0LL;
  if ( v8 > 1 )
  {
    if ( v8 > 0x50 )
    {
      if ( v8 > 0x414 )
        v11 = 0;
      else
        v10 = (unsigned __int16 *)AllocFreeTmpBuffer(2 * v8);
    }
    else
    {
      v10 = v18;
    }
    if ( v10 )
      v11 = bCheckAndCapThePath(v10, a1, v8, v7);
  }
  if ( v11 && a6 )
  {
    if ( ProbeAndReadDesignVector((struct tagDESIGNVECTOR *)v16, a6) )
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
    v11 = GreAddFontResourceWInternal(v10, v8, v7, v6, a5, v9, v14);
  }
  if ( v10 )
  {
    if ( v10 != v18 )
      FreeTmpBuffer(v10, a2, a3, a4);
  }
  return v11;
}
