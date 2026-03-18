/*
 * XREFs of ?bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C00148F0
 * Callers:
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0014BC0 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     NtGdiFrameRgn @ 0x1C0139550 (NtGdiFrameRgn.c)
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1C014944C (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     EngStrokeAndFillPath @ 0x1C027B650 (EngStrokeAndFillPath.c)
 *     NtGdiWidenPath @ 0x1C02A68B0 (NtGdiWidenPath.c)
 * Callees:
 *     bFToL @ 0x1C0018BF4 (bFToL.c)
 *     LongLongToLong @ 0x1C0125324 (LongLongToLong.c)
 */

__int64 __fastcall EPATHOBJ::bComputeWidenedBounds(
        EPATHOBJ *this,
        struct EPATHOBJ *a2,
        struct _XFORMOBJ *a3,
        struct _LINEATTRS *a4)
{
  int v7; // r8d
  int v8; // eax
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // eax
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  __int64 v16; // rcx
  LONG v17; // ebx
  LONG v18; // edi
  __int64 v19; // rcx
  __int64 v20; // r8
  LONG v21; // r11d
  LONG v22; // edi
  int *v23; // rax
  __int64 v24; // rcx
  LONG v25; // r10d
  __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 v28; // r10
  int v29; // r11d
  __int64 v30; // r10
  _DWORD *v31; // r9
  LONG v32; // r8d
  LONG v33; // r10d
  LONG v34; // r11d
  __int64 result; // rax
  LONG v36; // [rsp+30h] [rbp-20h] BYREF
  LONG v37; // [rsp+34h] [rbp-1Ch] BYREF
  LONG v38; // [rsp+38h] [rbp-18h] BYREF
  LONG v39; // [rsp+40h] [rbp-10h] BYREF
  LONG v40; // [rsp+44h] [rbp-Ch]
  LONG v41; // [rsp+48h] [rbp-8h]
  int v42; // [rsp+4Ch] [rbp-4h]
  LONG plResult; // [rsp+88h] [rbp+38h] BYREF

  plResult = 0;
  bFToL(this, &plResult, 6LL);
  v39 = plResult;
  v40 = plResult;
  v41 = plResult;
  v42 = -plResult;
  if ( !EXFORMOBJ::bXform((EXFORMOBJ *)a3, (struct _VECTORL *)&v39, (struct _VECTORFX *)&v39, (unsigned int)(v7 - 4), 0) )
    return 0LL;
  v8 = v39;
  v9 = v39;
  if ( v39 < 0 )
    v9 = -v39;
  v10 = v41;
  v11 = v41;
  if ( v41 < 0 )
    v11 = -v41;
  if ( v9 > v11 )
  {
    if ( v39 < 0 )
      v8 = -v39;
  }
  else
  {
    if ( v41 < 0 )
      v10 = -v41;
    v8 = v10;
  }
  if ( LongLongToLong(((__int64)v8 >> 1) + 16, &plResult) < 0 )
    return 0LL;
  v12 = v40;
  v13 = v40;
  if ( v40 < 0 )
    v13 = -v40;
  v14 = v42;
  v15 = v42;
  if ( v42 < 0 )
    v15 = -v42;
  if ( v13 > v15 )
  {
    if ( v40 < 0 )
      v12 = -v40;
  }
  else
  {
    if ( v42 < 0 )
      v14 = -v42;
    v12 = v14;
  }
  if ( LongLongToLong(((__int64)v12 >> 1) + 16, &v36) < 0 )
    return 0LL;
  if ( a4->iEndCap == 1 )
  {
    if ( LongLongToLong(plResult + (__int64)(plResult >> 1), &plResult) < 0 )
      return 0LL;
    if ( LongLongToLong(v36 + (__int64)(v36 >> 1), &v36) < 0 )
      return 0LL;
    v17 = plResult;
    if ( (unsigned int)(plResult + 0x3FFFFFFF) > 0x7FFFFFFD || (unsigned int)(v36 + 0x3FFFFFFF) > 0x7FFFFFFD )
      return 0LL;
  }
  else
  {
    v17 = plResult;
  }
  if ( a4->iJoin != 2
    || (v18 = v17, (unsigned int)bFToL(v16, &plResult, 6LL))
    && (v17 = plResult, plResult >= v18)
    && (v22 = v21, (unsigned int)bFToL(v19, &v36, v20))
    && v36 >= v22
    && (unsigned int)(v17 + 0x3FFFFFFF) <= 0x7FFFFFFD
    && (unsigned int)(v36 + 0x3FFFFFFF) <= 0x7FFFFFFD )
  {
    v23 = (int *)*((_QWORD *)a2 + 1);
    v24 = v23[12];
    v25 = v23[14];
    v26 = v23[13];
    v27 = v23[15];
    plResult = v24;
    v36 = v25;
    v37 = v26;
    v38 = v27;
    if ( (unsigned int)(v24 + 0x3FFFFFFF) <= 0x7FFFFFFD
      && (unsigned int)(v25 + 0x3FFFFFFF) <= 0x7FFFFFFD
      && (unsigned int)(v26 + 0x3FFFFFFF) <= 0x7FFFFFFD
      && (unsigned int)(v27 + 0x3FFFFFFF) <= 0x7FFFFFFD
      && LongLongToLong(v24 - v17, &plResult) >= 0
      && LongLongToLong(v17 + v28, &v36) >= 0
      && LongLongToLong(v26 - v29, &v37) >= 0
      && LongLongToLong(v30 + v27, &v38) >= 0
      && (unsigned int)(plResult + 0x3FFFFFFF) <= 0x7FFFFFFD )
    {
      v32 = v36;
      if ( (unsigned int)(v36 + 0x3FFFFFFF) <= 0x7FFFFFFD )
      {
        v33 = v37;
        if ( (unsigned int)(v37 + 0x3FFFFFFF) <= 0x7FFFFFFD )
        {
          v34 = v38;
          if ( (unsigned int)(v38 + 0x3FFFFFFF) <= 0x7FFFFFFD )
          {
            v31[12] = plResult;
            result = 1LL;
            v31[14] = v32;
            v31[13] = v33;
            v31[15] = v34;
            return result;
          }
        }
      }
    }
  }
  return 0LL;
}
