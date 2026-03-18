/*
 * XREFs of LocalpConvertStringSidToSid @ 0x140686C0C
 * Callers:
 *     LocalGetSidForString @ 0x140686904 (LocalGetSidForString.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     wcschr @ 0x140145B68 (wcschr.c)
 *     wcstoul @ 0x1401460B0 (wcstoul.c)
 *     wcstoxq @ 0x1401464F8 (wcstoxq.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     SddlpAlloc @ 0x140687AFC (SddlpAlloc.c)
 *     SddlpFree @ 0x140687B40 (SddlpFree.c)
 */

__int64 __fastcall LocalpConvertStringSidToSid(_WORD *a1, __int64 *a2, wchar_t **a3)
{
  char v3; // r15
  unsigned int v5; // edi
  int v6; // esi
  const wchar_t *v7; // rbx
  wchar_t *v8; // rbx
  wchar_t *v9; // rax
  int v10; // r9d
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  wchar_t *v13; // r14
  wchar_t *v14; // rsi
  wchar_t v15; // cx
  wchar_t *v16; // r13
  __int64 v17; // rbx
  __int64 v18; // rcx
  _BYTE *v19; // r12
  __int64 v20; // rax
  size_t v21; // rbx
  unsigned __int8 v22; // r15
  wchar_t *v23; // r14
  void *v24; // rax
  unsigned int v25; // ebx
  unsigned int *v26; // rsi
  int v27; // r8d
  unsigned __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rcx
  void *v31; // rdx
  __int64 v32; // rdx
  int v34; // [rsp+30h] [rbp-D0h]
  __int16 v35; // [rsp+34h] [rbp-CCh]
  wchar_t *EndPtr; // [rsp+38h] [rbp-C8h] BYREF
  int Radix; // [rsp+40h] [rbp-C0h]
  void *Src; // [rsp+48h] [rbp-B8h]
  int v39; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v40; // [rsp+54h] [rbp-ACh]
  __int64 v41; // [rsp+58h] [rbp-A8h]
  __int64 *v42; // [rsp+60h] [rbp-A0h]
  wchar_t **v43; // [rsp+68h] [rbp-98h]
  _BYTE v44[512]; // [rsp+70h] [rbp-90h] BYREF

  v3 = 0;
  v43 = a3;
  v42 = a2;
  Src = 0LL;
  v41 = 0LL;
  v5 = 0;
  v6 = 10;
  Radix = 10;
  if ( !a1 || !a2 || !a3 )
    return 3221225485LL;
  if ( ((*a1 - 83) & 0xFFDF) != 0 || a1[1] != 45 )
    return 3221225592LL;
  v7 = a1 + 2;
  if ( a1[2] == 48 )
  {
    if ( ((a1[3] - 88) & 0xFFDF) == 0 )
      v6 = 16;
    Radix = v6;
  }
  v40 = wcstoul(v7, &EndPtr, v6);
  if ( v40 > 0xFF )
    return 3221225592LL;
  if ( EndPtr == v7 )
    return 3221225592LL;
  if ( *EndPtr != 45 )
    return 3221225592LL;
  v8 = EndPtr + 1;
  if ( !EndPtr[1] )
    return 3221225592LL;
  v9 = wcschr(EndPtr + 1, 0x2Du);
  if ( !v9 || v9 == v8 )
    return 3221225592LL;
  if ( *v8 != 48 || (v10 = 16, ((v8[1] - 88) & 0xFFDF) != 0) )
    v10 = v6;
  v39 = 0;
  v12 = wcstoxq(0LL, v8, &EndPtr, v10, 1, &v39);
  if ( v12 > 0xFFFFFFFFFFFFLL )
    return 3221225592LL;
  v13 = EndPtr;
  if ( EndPtr == v8 || *EndPtr != 45 || !EndPtr[1] )
    return 3221225592LL;
  HIBYTE(v35) = v12;
  v14 = EndPtr;
  LOBYTE(v35) = BYTE1(v12);
  HIBYTE(v34) = BYTE2(v12);
  BYTE2(v34) = BYTE3(v12);
  LOBYTE(v34) = BYTE5(v12);
  BYTE1(v34) = BYTE4(v12);
  while ( 1 )
  {
    if ( v3 == -1 )
    {
      v5 = -1073741675;
      goto LABEL_74;
    }
    v15 = *v14;
    if ( *v14 == 45 && *(v14 - 1) != 45 )
    {
      ++v3;
      if ( v14[1] == 48 && ((v14[2] - 88) & 0xFFDF) == 0 )
        v14 += 2;
      goto LABEL_41;
    }
    if ( v15 <= 0x3Bu )
    {
      v11 = 0x800120100000001LL;
      if ( _bittest64(&v11, v15) )
        break;
    }
    v11 = v14[1];
    if ( (_WORD)v11 == 58 && (((v15 - 71) & 0xFFF7) == 0 || v15 == 83) )
      break;
    if ( (unsigned __int16)(v15 - 48) > 9u && (unsigned __int16)(v15 - 97) > 5u && (v15 < 0x41u || v15 > 0x46u) )
    {
      v5 = -1073741704;
LABEL_74:
      *a3 = v14;
      goto LABEL_75;
    }
    if ( v15 == 68 && (_WORD)v11 == 58 )
    {
      v16 = EndPtr;
      v17 = (char *)v14 - (char *)EndPtr;
      v18 = v14 - EndPtr;
      if ( v18 < 256 )
      {
        v13 = (wchar_t *)v44;
        v19 = v44;
LABEL_53:
        v21 = 2 * (v17 >> 1);
        memmove(v19, v16, v21);
        *(_WORD *)&v19[v21] = 0;
        ++v3;
        *v43 = v14;
        goto LABEL_54;
      }
      v20 = SddlpAlloc(2 * v18 + 2);
      v41 = v20;
      if ( v20 )
      {
        v13 = (wchar_t *)v20;
        v19 = (_BYTE *)v20;
        goto LABEL_53;
      }
LABEL_69:
      v5 = -1073741801;
      goto LABEL_75;
    }
LABEL_41:
    if ( !++v14 )
      goto LABEL_54;
  }
  if ( *(v14 - 1) == 45 )
  {
    v5 = -1073741704;
    --v14;
  }
  else
  {
    ++v3;
  }
  *a3 = v14;
  if ( v5 )
    goto LABEL_75;
LABEL_54:
  if ( !v3 || (v22 = v3 - 1) == 0 )
  {
    v5 = -1073741704;
    goto LABEL_75;
  }
  v23 = v13 + 1;
  v24 = (void *)SddlpAlloc(4LL * v22);
  Src = v24;
  if ( !v24 )
    goto LABEL_69;
  v25 = 0;
  v26 = (unsigned int *)v24;
  do
  {
    if ( *v23 != 48 || (v27 = 16, ((v23[1] - 88) & 0xFFDF) != 0) )
      v27 = Radix;
    *v26 = wcstoul(v23, &EndPtr, v27);
    if ( EndPtr )
    {
      v28 = *EndPtr;
      if ( (unsigned __int16)v28 > 0x3Bu || (v11 = 0x800320000000001LL, !_bittest64(&v11, v28)) )
      {
        if ( EndPtr[1] != 58
          || (LOWORD(v28) = v28 - 68, (unsigned __int16)v28 > 0xFu)
          || (v29 = 34825, !_bittest(&v29, v28)) )
        {
          v5 = 1337;
          goto LABEL_75;
        }
      }
    }
    v23 = EndPtr + 1;
    ++v25;
    ++v26;
  }
  while ( v25 < v22 );
  v30 = SddlpAlloc(4LL * v22 + 12);
  *v42 = v30;
  if ( !v30 )
    goto LABEL_69;
  v31 = Src;
  *(_BYTE *)v30 = v40;
  *(_DWORD *)(v30 + 2) = v34;
  *(_WORD *)(v30 + 6) = v35;
  *(_BYTE *)(v30 + 1) = v22;
  memmove((void *)(v30 + 8), v31, 4LL * v22);
LABEL_75:
  SddlpFree(Src, v11);
  if ( v41 )
    SddlpFree(v41, v32);
  return v5;
}
