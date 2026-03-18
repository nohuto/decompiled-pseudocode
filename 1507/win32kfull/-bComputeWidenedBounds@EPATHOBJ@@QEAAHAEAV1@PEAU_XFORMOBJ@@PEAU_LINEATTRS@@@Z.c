/*
 * XREFs of ?bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C00CC580
 * Callers:
 *     EngStrokeAndFillPath @ 0x1C0006A30 (EngStrokeAndFillPath.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C00CC880 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1C00D0604 (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     NtGdiFrameRgn @ 0x1C0104C30 (NtGdiFrameRgn.c)
 *     NtGdiWidenPath @ 0x1C02A5C90 (NtGdiWidenPath.c)
 * Callees:
 *     bFToL @ 0x1C00A95A4 (bFToL.c)
 *     LongAdd @ 0x1C0265408 (LongAdd.c)
 *     LongSub @ 0x1C026541C (LongSub.c)
 */

__int64 __fastcall EPATHOBJ::bComputeWidenedBounds(
        EPATHOBJ *this,
        struct EPATHOBJ *a2,
        struct _XFORMOBJ *a3,
        struct _LINEATTRS *a4)
{
  int v7; // r8d
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  int v11; // r8d
  unsigned int v12; // r9d
  int v13; // ecx
  int v14; // edx
  int v15; // eax
  int v16; // r8d
  unsigned int v17; // ebx
  __int64 result; // rax
  float eMiterLimit; // xmm1_4
  signed int v20; // edi
  char v21; // r8
  int v22; // r11d
  int v23; // edi
  unsigned int *v24; // rax
  __int64 v25; // rcx
  unsigned int v26; // edi
  unsigned int v27; // r10d
  unsigned int v28; // esi
  unsigned int v29; // r10d
  unsigned int v30; // r11d
  unsigned int v31; // r11d
  _DWORD *v32; // r9
  int v33; // r8d
  unsigned int v34; // r10d
  unsigned int v35; // r11d
  int v36; // [rsp+20h] [rbp-20h] BYREF
  unsigned int v37; // [rsp+24h] [rbp-1Ch] BYREF
  unsigned int v38; // [rsp+28h] [rbp-18h] BYREF
  int v39; // [rsp+30h] [rbp-10h] BYREF
  int v40; // [rsp+34h] [rbp-Ch]
  int v41; // [rsp+38h] [rbp-8h]
  int v42; // [rsp+3Ch] [rbp-4h]
  int v43; // [rsp+78h] [rbp+38h] BYREF

  bFToL(a4->elWidth.e, &v43, 6);
  v39 = v43;
  v40 = v43;
  v41 = v43;
  v42 = -v43;
  if ( !EXFORMOBJ::bXform((EXFORMOBJ *)a3, (struct _VECTORL *)&v39, (struct _VECTORFX *)&v39, (unsigned int)(v7 - 4)) )
    return 0LL;
  v8 = v39;
  v9 = v39;
  if ( v39 < 0 )
    v9 = -v39;
  v10 = v41;
  v11 = v41;
  if ( v41 < 0 )
    v11 = -v41;
  if ( v9 <= v11 )
  {
    if ( v41 < 0 )
      v10 = -v41;
    v8 = v10;
  }
  else if ( v39 < 0 )
  {
    v8 = -v39;
  }
  if ( (int)LongAdd((unsigned int)(v8 >> 1), 16LL, &v43) < 0 )
    return 0LL;
  v13 = v40;
  v14 = v40;
  if ( v40 < 0 )
    v14 = -v40;
  v15 = v42;
  v16 = v42;
  if ( v42 < 0 )
    v16 = -v42;
  if ( v14 <= v16 )
  {
    if ( v42 < 0 )
      v15 = -v42;
    v13 = v15;
  }
  else if ( v40 < 0 )
  {
    v13 = -v40;
  }
  if ( (int)LongAdd((unsigned int)(v13 >> 1), v12, &v36) < 0 )
    return 0LL;
  if ( a4->iEndCap == 1 )
  {
    if ( (int)LongAdd((unsigned int)v43, (unsigned int)(v43 >> 1), &v43) < 0 )
      return 0LL;
    if ( (int)LongAdd((unsigned int)v36, (unsigned int)(v36 >> 1), &v36) < 0 )
      return 0LL;
    v17 = v43;
    if ( (unsigned int)(v43 + 0x3FFFFFFF) > 0x7FFFFFFD || (unsigned int)(v36 + 0x3FFFFFFF) > 0x7FFFFFFD )
      return 0LL;
  }
  else
  {
    v17 = v43;
  }
  if ( a4->iJoin == 2 )
  {
    eMiterLimit = a4->eMiterLimit;
    v20 = v17;
    if ( !(unsigned int)bFToL((float)(int)v17 * eMiterLimit, &v43, 6) )
      return 0LL;
    v17 = v43;
    if ( v43 < v20 )
      return 0LL;
    v23 = v22;
    if ( !(unsigned int)bFToL((float)v22 * eMiterLimit, &v36, v21)
      || v36 < v23
      || v17 + 0x3FFFFFFF > 0x7FFFFFFD
      || (unsigned int)(v36 + 0x3FFFFFFF) > 0x7FFFFFFD )
    {
      return 0LL;
    }
  }
  v24 = (unsigned int *)*((_QWORD *)a2 + 1);
  v25 = v24[12];
  v26 = v24[14];
  v27 = v24[13];
  v28 = v24[15];
  v43 = v25;
  v36 = v26;
  v37 = v27;
  v38 = v28;
  if ( (unsigned int)(v25 + 0x3FFFFFFF) > 0x7FFFFFFD )
    return 0LL;
  if ( v26 + 0x3FFFFFFF > 0x7FFFFFFD )
    return 0LL;
  if ( v27 + 0x3FFFFFFF > 0x7FFFFFFD )
    return 0LL;
  if ( v28 + 0x3FFFFFFF > 0x7FFFFFFD )
    return 0LL;
  if ( (int)LongSub(v25, v17, &v43) < 0 )
    return 0LL;
  if ( (int)LongAdd(v26, v17, &v36) < 0 )
    return 0LL;
  if ( (int)LongSub(v29, v30, &v37) < 0 )
    return 0LL;
  if ( (int)LongAdd(v28, v31, &v38) < 0 )
    return 0LL;
  if ( (unsigned int)(v43 + 0x3FFFFFFF) > 0x7FFFFFFD )
    return 0LL;
  v33 = v36;
  if ( (unsigned int)(v36 + 0x3FFFFFFF) > 0x7FFFFFFD )
    return 0LL;
  v34 = v37;
  if ( v37 + 0x3FFFFFFF > 0x7FFFFFFD )
    return 0LL;
  v35 = v38;
  if ( v38 + 0x3FFFFFFF > 0x7FFFFFFD )
    return 0LL;
  v32[12] = v43;
  result = 1LL;
  v32[14] = v33;
  v32[13] = v34;
  v32[15] = v35;
  return result;
}
