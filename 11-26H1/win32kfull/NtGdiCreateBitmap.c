/*
 * XREFs of NtGdiCreateBitmap @ 0x1401BBA40
 * Callers:
 *     <none>
 * Callees:
 *     ?init_probe@?$umptr_r@E@@SA?AV1@PEAE_K1@Z @ 0x140079040 (-init_probe@-$umptr_r@E@@SA-AV1@PEAE_K1@Z.c)
 */

__int64 __fastcall NtGdiCreateBitmap(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        volatile void *a5)
{
  __int64 v8; // rbx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  __int64 inited; // rax
  __int64 v14; // [rsp+30h] [rbp-58h] BYREF
  __int64 v15; // [rsp+38h] [rbp-50h]
  __int64 v16; // [rsp+40h] [rbp-48h]
  __int16 v17; // [rsp+48h] [rbp-40h]
  _BYTE v18[32]; // [rsp+50h] [rbp-38h] BYREF

  v8 = 1LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0;
  if ( a5 )
  {
    v11 = ((a1 * (unsigned __int16)a4 * (unsigned __int64)(unsigned __int16)a3 + 15) >> 3) & 0x1FFFFFFFFFFFFFFELL;
    if ( v11 <= 0xFFFFFFFF && (v12 = a2 * v11, v12 <= 0xFFFFFFFF) && (_DWORD)v12 )
    {
      inited = umptr_r<unsigned char>::init_probe((__int64)v18, a5, (int)v12, 1u);
      v14 = *(_QWORD *)inited;
      v15 = *(_QWORD *)(inited + 8);
      v16 = *(_QWORD *)(inited + 16);
      v17 = *(_WORD *)(inited + 24);
      if ( !v14 )
        return 0LL;
    }
    else
    {
      v8 = 0LL;
    }
    if ( !v8 )
      return v8;
  }
  return GreCreateBitmapInternal(a1, a2, a3, a4, &v14);
}
