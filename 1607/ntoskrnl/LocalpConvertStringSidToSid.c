/*
 * XREFs of LocalpConvertStringSidToSid @ 0x1406CBA30
 * Callers:
 *     LocalGetSidForString @ 0x1404BA830 (LocalGetSidForString.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     wcschr @ 0x14014F504 (wcschr.c)
 *     wcstoul @ 0x14014FA4C (wcstoul.c)
 *     wcstoxq @ 0x14014FE94 (wcstoxq.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     SddlpFree @ 0x1404BA0C0 (SddlpFree.c)
 *     SddlpAlloc @ 0x1404BAB78 (SddlpAlloc.c)
 */

__int64 __fastcall LocalpConvertStringSidToSid(_WORD *a1, _QWORD *a2, wchar_t **a3)
{
  int v4; // edi
  int v5; // r13d
  const wchar_t *v6; // rbx
  wchar_t *v7; // rbx
  wchar_t *v8; // rax
  int v9; // r9d
  unsigned __int64 v10; // rcx
  wchar_t *v11; // r14
  unsigned __int8 v12; // r15
  wchar_t *v13; // rsi
  wchar_t v14; // cx
  __int64 v15; // rdx
  wchar_t v16; // dx
  bool v17; // sf
  wchar_t *v18; // r13
  __int64 v19; // rbx
  __int64 v20; // rcx
  _BYTE *v21; // r12
  PVOID v22; // rax
  size_t v23; // rbx
  wchar_t *v24; // r14
  _DWORD *v25; // rsi
  unsigned int v26; // ebx
  int v27; // r8d
  unsigned __int64 v28; // rcx
  __int64 v29; // rdx
  int v30; // eax
  const void *v31; // rsi
  char *v32; // rcx
  int v34; // [rsp+30h] [rbp-D0h]
  __int16 v35; // [rsp+34h] [rbp-CCh]
  int v36; // [rsp+38h] [rbp-C8h]
  wchar_t *EndPtr; // [rsp+40h] [rbp-C0h] BYREF
  void *v38; // [rsp+48h] [rbp-B8h]
  int v39; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v40; // [rsp+54h] [rbp-ACh]
  void *v41; // [rsp+58h] [rbp-A8h]
  wchar_t **v42; // [rsp+60h] [rbp-A0h]
  _QWORD *v43; // [rsp+68h] [rbp-98h]
  _BYTE v44[512]; // [rsp+70h] [rbp-90h] BYREF

  v42 = a3;
  v43 = a2;
  v38 = 0LL;
  v41 = 0LL;
  v4 = 0;
  v5 = 10;
  v36 = 10;
  if ( !a1 || !a2 || !a3 )
    return 3221225485LL;
  if ( ((*a1 - 83) & 0xFFDF) != 0 || a1[1] != 45 )
    return 3221225592LL;
  v6 = a1 + 2;
  if ( a1[2] == 48 )
  {
    if ( ((a1[3] - 88) & 0xFFDF) == 0 )
      v5 = 16;
    v36 = v5;
  }
  v40 = wcstoul(v6, &EndPtr, v5);
  if ( v40 > 0xFF )
    return 3221225592LL;
  if ( EndPtr == v6 )
    return 3221225592LL;
  if ( *EndPtr != 45 )
    return 3221225592LL;
  v7 = EndPtr + 1;
  if ( !EndPtr[1] )
    return 3221225592LL;
  v8 = wcschr(EndPtr + 1, 0x2Du);
  if ( !v8 || v8 == v7 )
    return 3221225592LL;
  if ( *v7 != 48 || (v9 = 16, ((v7[1] - 88) & 0xFFDF) != 0) )
    v9 = v5;
  v39 = 0;
  v10 = wcstoxq(0LL, v7, &EndPtr, v9, 1, &v39);
  if ( v10 > 0xFFFFFFFFFFFFLL )
    return 3221225592LL;
  v11 = EndPtr;
  if ( EndPtr == v7 || *EndPtr != 45 || !EndPtr[1] )
    return 3221225592LL;
  HIBYTE(v35) = v10;
  v12 = 0;
  LOBYTE(v35) = BYTE1(v10);
  v13 = EndPtr;
  HIBYTE(v34) = BYTE2(v10);
  BYTE2(v34) = BYTE3(v10);
  LOBYTE(v34) = BYTE5(v10);
  BYTE1(v34) = BYTE4(v10);
  while ( 1 )
  {
    if ( v12 == 0xFF )
    {
      v4 = -1073741675;
      goto LABEL_76;
    }
    v14 = *v13;
    if ( *v13 == 45 && *(v13 - 1) != 45 )
    {
      ++v12;
      if ( v13[1] == 48 && ((v13[2] - 88) & 0xFFDF) == 0 )
        v13 += 2;
      goto LABEL_41;
    }
    if ( v14 <= 0x3Bu )
    {
      v15 = 0x800120100000001LL;
      if ( _bittest64(&v15, v14) )
        break;
    }
    v16 = v13[1];
    if ( v16 == 58 && (((v14 - 71) & 0xFFF7) == 0 || v14 == 83) )
      break;
    if ( (unsigned __int16)(v14 - 48) > 9u && (unsigned __int16)(v14 - 97) > 5u && (v14 < 0x41u || v14 > 0x46u) )
    {
      v4 = -1073741704;
LABEL_76:
      *a3 = v13;
      goto LABEL_77;
    }
    if ( v14 == 68 && v16 == 58 )
    {
      v18 = EndPtr;
      v19 = (char *)v13 - (char *)EndPtr;
      v20 = v13 - EndPtr;
      if ( v20 < 256 )
      {
        v11 = (wchar_t *)v44;
        v21 = v44;
LABEL_53:
        v23 = 2 * (v19 >> 1);
        memmove(v21, v18, v23);
        v5 = v36;
        *(_WORD *)&v21[v23] = 0;
        ++v12;
        *v42 = v13;
        goto LABEL_54;
      }
      v22 = SddlpAlloc(2 * v20 + 2);
      v41 = v22;
      if ( v22 )
      {
        v11 = (wchar_t *)v22;
        v21 = v22;
        goto LABEL_53;
      }
LABEL_73:
      v4 = -1073741801;
      goto LABEL_77;
    }
LABEL_41:
    if ( !++v13 )
      goto LABEL_54;
  }
  if ( *(v13 - 1) == 45 )
  {
    v4 = -1073741704;
    --v13;
  }
  else
  {
    ++v12;
  }
  *a3 = v13;
  v17 = v4 < 0;
  if ( v4 )
  {
LABEL_71:
    if ( v17 )
      goto LABEL_77;
LABEL_72:
    v31 = v38;
    v32 = (char *)SddlpAlloc(4LL * v12 + 12);
    *v43 = v32;
    if ( v32 )
    {
      *v32 = v40;
      *(_DWORD *)(v32 + 2) = v34;
      *((_WORD *)v32 + 3) = v35;
      v32[1] = v12;
      memmove(v32 + 8, v31, 4LL * v12);
      goto LABEL_77;
    }
    goto LABEL_73;
  }
LABEL_54:
  if ( !v12 || (--v12, !v12) )
  {
    v4 = -1073741704;
    v17 = 1;
    goto LABEL_71;
  }
  v24 = v11 + 1;
  v25 = SddlpAlloc(4LL * v12);
  v38 = v25;
  if ( !v25 )
    goto LABEL_73;
  v26 = 0;
  while ( 1 )
  {
    if ( *v24 != 48 || (v27 = 16, ((v24[1] - 88) & 0xFFDF) != 0) )
      v27 = v5;
    *v25 = wcstoul(v24, &EndPtr, v27);
    if ( EndPtr )
    {
      v28 = *EndPtr;
      if ( (unsigned __int16)v28 > 0x3Bu || (v29 = 0x800320000000001LL, !_bittest64(&v29, v28)) )
      {
        if ( EndPtr[1] != 58 )
          break;
        LOWORD(v28) = v28 - 68;
        if ( (unsigned __int16)v28 > 0xFu )
          break;
        v30 = 34825;
        if ( !_bittest(&v30, v28) )
          break;
      }
    }
    v24 = EndPtr + 1;
    ++v26;
    ++v25;
    if ( v26 >= v12 )
      goto LABEL_72;
  }
  v4 = -1073741704;
LABEL_77:
  SddlpFree(v38);
  if ( v41 )
    SddlpFree(v41);
  return (unsigned int)v4;
}
