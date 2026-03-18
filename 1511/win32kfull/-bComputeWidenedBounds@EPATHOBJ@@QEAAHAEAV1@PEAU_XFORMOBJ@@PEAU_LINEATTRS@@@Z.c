/*
 * XREFs of ?bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C01308C4
 * Callers:
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C00161E0 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     NtGdiFrameRgn @ 0x1C012FC30 (NtGdiFrameRgn.c)
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1C01327EC (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     EngStrokeAndFillPath @ 0x1C027D410 (EngStrokeAndFillPath.c)
 *     NtGdiWidenPath @ 0x1C02A56F0 (NtGdiWidenPath.c)
 * Callees:
 *     bFToL @ 0x1C0116F84 (bFToL.c)
 *     LongAdd @ 0x1C0263C00 (LongAdd.c)
 *     LongSub @ 0x1C0263C14 (LongSub.c)
 */

__int64 __fastcall EPATHOBJ::bComputeWidenedBounds(
        EPATHOBJ *this,
        struct EPATHOBJ *a2,
        struct _XFORMOBJ *a3,
        struct _LINEATTRS *a4)
{
  int v8; // r8d
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // r8d
  unsigned int v13; // r9d
  int v14; // ecx
  int v15; // edx
  int v16; // eax
  int v17; // r8d
  unsigned int v18; // ebx
  __int64 result; // rax
  float eMiterLimit; // xmm1_4
  signed int v21; // edi
  char v22; // r8
  int v23; // r11d
  int v24; // edi
  unsigned int *v25; // rax
  __int64 v26; // r9
  __int64 v27; // rcx
  unsigned int v28; // edi
  unsigned int v29; // r10d
  unsigned int v30; // esi
  __int64 v31; // r9
  unsigned int v32; // r10d
  unsigned int v33; // r11d
  unsigned int v34; // r11d
  _DWORD *v35; // r9
  int v36; // r8d
  unsigned int v37; // r10d
  unsigned int v38; // r11d
  int v39; // [rsp+20h] [rbp-20h] BYREF
  unsigned int v40; // [rsp+24h] [rbp-1Ch] BYREF
  unsigned int v41; // [rsp+28h] [rbp-18h] BYREF
  int v42; // [rsp+30h] [rbp-10h] BYREF
  int v43; // [rsp+34h] [rbp-Ch]
  int v44; // [rsp+38h] [rbp-8h]
  int v45; // [rsp+3Ch] [rbp-4h]
  int v46; // [rsp+78h] [rbp+38h] BYREF

  bFToL(a4->elWidth.e, &v46, 6);
  v42 = v46;
  v43 = v46;
  v44 = v46;
  v45 = -v46;
  if ( !EXFORMOBJ::bXform((EXFORMOBJ *)a3, (struct _VECTORL *)&v42, (struct _VECTORFX *)&v42, (unsigned int)(v8 - 4)) )
    return 0LL;
  v9 = v42;
  v10 = v42;
  if ( v42 < 0 )
    v10 = -v42;
  v11 = v44;
  v12 = v44;
  if ( v44 < 0 )
    v12 = -v44;
  if ( v10 <= v12 )
  {
    if ( v44 < 0 )
      v11 = -v44;
    v9 = v11;
  }
  else if ( v42 < 0 )
  {
    v9 = -v42;
  }
  if ( (int)LongAdd((unsigned int)(v9 >> 1), 16LL, &v46) < 0 )
    return 0LL;
  v14 = v43;
  v15 = v43;
  if ( v43 < 0 )
    v15 = -v43;
  v16 = v45;
  v17 = v45;
  if ( v45 < 0 )
    v17 = -v45;
  if ( v15 <= v17 )
  {
    if ( v45 < 0 )
      v16 = -v45;
    v14 = v16;
  }
  else if ( v43 < 0 )
  {
    v14 = -v43;
  }
  if ( (int)LongAdd((unsigned int)(v14 >> 1), v13, &v39) < 0 )
    return 0LL;
  if ( a4->iEndCap == 1 )
  {
    if ( (int)LongAdd((unsigned int)v46, (unsigned int)(v46 >> 1), &v46) < 0 )
      return 0LL;
    if ( (int)LongAdd((unsigned int)v39, (unsigned int)(v39 >> 1), &v39) < 0 )
      return 0LL;
    v18 = v46;
    if ( (unsigned int)(v46 + 0x3FFFFFFF) > 0x7FFFFFFD || (unsigned int)(v39 + 0x3FFFFFFF) > 0x7FFFFFFD )
      return 0LL;
  }
  else
  {
    v18 = v46;
  }
  if ( a4->iJoin == 2 )
  {
    eMiterLimit = a4->eMiterLimit;
    v21 = v18;
    if ( !(unsigned int)bFToL((float)(int)v18 * eMiterLimit, &v46, 6) )
      return 0LL;
    v18 = v46;
    if ( v46 < v21 )
      return 0LL;
    v24 = v23;
    if ( !(unsigned int)bFToL((float)v23 * eMiterLimit, &v39, v22)
      || v39 < v24
      || v18 + 0x3FFFFFFF > 0x7FFFFFFD
      || (unsigned int)(v39 + 0x3FFFFFFF) > 0x7FFFFFFD )
    {
      return 0LL;
    }
  }
  v25 = (unsigned int *)*((_QWORD *)a2 + 1);
  v26 = *((_QWORD *)this + 1);
  v27 = v25[12];
  v28 = v25[14];
  v29 = v25[13];
  v30 = v25[15];
  v46 = v27;
  v39 = v28;
  v40 = v29;
  v41 = v30;
  if ( (unsigned int)(v27 + 0x3FFFFFFF) > 0x7FFFFFFD )
    return 0LL;
  if ( v28 + 0x3FFFFFFF > 0x7FFFFFFD )
    return 0LL;
  if ( v29 + 0x3FFFFFFF > 0x7FFFFFFD )
    return 0LL;
  if ( v30 + 0x3FFFFFFF > 0x7FFFFFFD )
    return 0LL;
  if ( (int)LongSub(v27, v18, &v46, v26) < 0 )
    return 0LL;
  if ( (int)LongAdd(v28, v18, &v39) < 0 )
    return 0LL;
  if ( (int)LongSub(v32, v33, &v40, v31) < 0 )
    return 0LL;
  if ( (int)LongAdd(v30, v34, &v41) < 0 )
    return 0LL;
  if ( (unsigned int)(v46 + 0x3FFFFFFF) > 0x7FFFFFFD )
    return 0LL;
  v36 = v39;
  if ( (unsigned int)(v39 + 0x3FFFFFFF) > 0x7FFFFFFD )
    return 0LL;
  v37 = v40;
  if ( v40 + 0x3FFFFFFF > 0x7FFFFFFD )
    return 0LL;
  v38 = v41;
  if ( v41 + 0x3FFFFFFF > 0x7FFFFFFD )
    return 0LL;
  v35[12] = v46;
  result = 1LL;
  v35[14] = v36;
  v35[13] = v37;
  v35[15] = v38;
  return result;
}
