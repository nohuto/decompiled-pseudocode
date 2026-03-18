/*
 * XREFs of ulGetRotate @ 0x1C0116EA8
 * Callers:
 *     BmfdOpenFontContext @ 0x1C0116624 (BmfdOpenFontContext.c)
 * Callees:
 *     bFToL @ 0x1C0116F84 (bFToL.c)
 *     vComputeRotatedXform @ 0x1C0116FF4 (vComputeRotatedXform.c)
 *     XFORMOBJ_iGetXform @ 0x1C01198B0 (XFORMOBJ_iGetXform.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall ulGetRotate(__int64 a1, XFORMOBJ *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // r8
  bool v10; // zf
  unsigned int v11; // r11d
  bool v13; // cc
  unsigned int v14; // r10d
  __int64 v15; // rdx
  __int64 v16; // r8
  int v17; // [rsp+20h] [rbp-30h] BYREF
  int v18; // [rsp+24h] [rbp-2Ch] BYREF
  int v19; // [rsp+28h] [rbp-28h] BYREF
  int v20; // [rsp+2Ch] [rbp-24h] BYREF
  XFORML pxform; // [rsp+30h] [rbp-20h] BYREF

  XFORMOBJ_iGetXform(a2, &pxform);
  if ( (unsigned int)bFToL(v3, &v19, 6LL)
    && (unsigned int)bFToL(v4, &v18, v5)
    && (unsigned int)bFToL(v6, &v20, v7)
    && (unsigned int)bFToL(v8, &v17, v9) )
  {
    v10 = v19 == 0;
    if ( v19 > 0 )
    {
      if ( !v18 && !v20 && v17 > 0 )
        goto LABEL_9;
      v10 = v19 == 0;
    }
    if ( v10 )
    {
      v13 = v18 <= 0;
      if ( v18 < 0 )
      {
        if ( v20 > 0 && !v17 )
          goto LABEL_19;
        v13 = v18 <= 0;
      }
      if ( !v13 && v20 < 0 && !v17 )
      {
LABEL_19:
        vComputeRotatedXform(a1, (unsigned int)v18, (unsigned int)v20);
        return v14;
      }
    }
    else if ( v19 < 0 && !v18 && !v20 && v17 < 0 )
    {
LABEL_9:
      vComputeRotatedXform(a1, (unsigned int)v19, (unsigned int)v17);
      return v11;
    }
    v15 = 1LL;
    v16 = 1LL;
  }
  else
  {
    v15 = 5LL;
    v16 = 255LL;
  }
  vComputeRotatedXform(a1, v15, v16);
  return 0LL;
}
