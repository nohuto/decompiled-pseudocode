/*
 * XREFs of XFORMOBJ_bApplyXform @ 0x1400D9680
 * Callers:
 *     NtGdiXFORMOBJ_bApplyXform @ 0x1400D8E90 (NtGdiXFORMOBJ_bApplyXform.c)
 * Callees:
 *     ?bXform@EXFORMOBJ@@QEBA_NPEAU_POINTL@@_K@Z @ 0x1400781A0 (-bXform@EXFORMOBJ@@QEBA_NPEAU_POINTL@@_K@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

BOOL __stdcall XFORMOBJ_bApplyXform(XFORMOBJ *pxo, ULONG iMode, ULONG cPoints, PVOID pvIn, PVOID pvOut)
{
  _DWORD *v5; // rdi
  const struct _POINTFIX *v6; // rbx
  unsigned __int64 v7; // rbp
  const struct MATRIX *v9; // rdx
  const struct _POINTFIX *v10; // rsi
  const struct _POINTFIX *i; // rax
  BOOL result; // eax
  struct _POINTL *v13; // rdx
  _OWORD *v14; // [rsp+20h] [rbp-58h] BYREF
  _OWORD v15[2]; // [rsp+28h] [rbp-50h] BYREF
  int v16; // [rsp+48h] [rbp-30h]

  v5 = pvOut;
  v6 = (const struct _POINTFIX *)pvIn;
  v7 = cPoints;
  if ( !pxo || !pvIn || !pvOut )
    return 0;
  if ( !iMode )
  {
    v13 = (struct _POINTL *)pvIn;
    if ( pvIn == pvOut )
      goto LABEL_27;
    if ( EXFORMOBJ::bXform((EXFORMOBJ *)pxo, (const struct _POINTL *)pvIn, (struct _POINTFIX *)pvOut, cPoints) )
    {
      while ( v5 < (_DWORD *)((char *)pvOut + 8 * v7) )
      {
        *v5 = (*v5 + 8) >> 4;
        v5[1] = (v5[1] + 8) >> 4;
        v5 += 2;
      }
      return 1;
    }
    return 0;
  }
  if ( iMode == 2 )
  {
    LOBYTE(result) = EXFORMOBJ::bXform(
                       (EXFORMOBJ *)pxo,
                       (const struct _POINTL *)pvIn,
                       (struct _POINTFIX *)pvOut,
                       cPoints);
    return result;
  }
  v9 = *(const struct MATRIX **)&pxo->ulReserved;
  v16 = 0;
  v14 = v15;
  memset(v15, 0, sizeof(v15));
  if ( !EXFORMOBJ::bInverse((EXFORMOBJ *)&v14, v9) )
    return 0;
  if ( iMode != 1 )
  {
    if ( iMode == 3 )
    {
      LOBYTE(result) = EXFORMOBJ::bXform((EXFORMOBJ *)&v14, v6, (struct _POINTL *)pvOut, v7);
      return result;
    }
    return 0;
  }
  if ( v6 == pvOut )
  {
    pxo = (XFORMOBJ *)&v14;
    v13 = (struct _POINTL *)v6;
LABEL_27:
    LOBYTE(result) = EXFORMOBJ::bXform((EXFORMOBJ *)pxo, v13);
    return result;
  }
  v10 = &v6[v7];
  for ( i = v6; i < v10; ++i )
  {
    i->x *= 16;
    i->y *= 16;
  }
  result = EXFORMOBJ::bXform((EXFORMOBJ *)&v14, v6, (struct _POINTL *)pvOut, (unsigned int)v7);
  while ( v6 < v10 )
  {
    v6->x >>= 4;
    v6->y >>= 4;
    ++v6;
  }
  return result;
}
