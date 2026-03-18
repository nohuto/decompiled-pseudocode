/*
 * XREFs of ulGetRotate @ 0x1C0018B18
 * Callers:
 *     BmfdOpenFontContext @ 0x1C0018290 (BmfdOpenFontContext.c)
 * Callees:
 *     bFToL @ 0x1C0018BF4 (bFToL.c)
 *     vComputeRotatedXform @ 0x1C0018C64 (vComputeRotatedXform.c)
 *     XFORMOBJ_iGetXform @ 0x1C001A780 (XFORMOBJ_iGetXform.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
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
  if ( (unsigned int)bFToL(v3, &v20, 6LL)
    && (unsigned int)bFToL(v4, &v17, v5)
    && (unsigned int)bFToL(v6, &v18, v7)
    && (unsigned int)bFToL(v8, &v19, v9) )
  {
    v10 = v20 == 0;
    if ( v20 > 0 )
    {
      if ( !v17 && !v18 && v19 > 0 )
        goto LABEL_9;
      v10 = v20 == 0;
    }
    if ( v10 )
    {
      v13 = v17 <= 0;
      if ( v17 < 0 )
      {
        if ( v18 > 0 && !v19 )
          goto LABEL_19;
        v13 = v17 <= 0;
      }
      if ( !v13 && v18 < 0 && !v19 )
      {
LABEL_19:
        vComputeRotatedXform(a1, (unsigned int)v17, (unsigned int)v18);
        return v14;
      }
    }
    else if ( v20 < 0 && !v17 && !v18 && v19 < 0 )
    {
LABEL_9:
      vComputeRotatedXform(a1, (unsigned int)v20, (unsigned int)v19);
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
