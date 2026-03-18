/*
 * XREFs of MiReplacePageOfProtoPool @ 0x1400A1EB0
 * Callers:
 *     MiStealPage @ 0x1400ABC50 (MiStealPage.c)
 * Callees:
 *     MiLockNestedPageAtDpcInline @ 0x1400A0F7C (MiLockNestedPageAtDpcInline.c)
 *     MiLockLeafPage @ 0x1400A2340 (MiLockLeafPage.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MiIsPoolHeader @ 0x1400F08BC (MiIsPoolHeader.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiReplacePageOfProtoPool(char *Src, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rbx
  char *v5; // rbp
  __int64 v6; // r12
  __int64 v7; // r15
  unsigned int v8; // r13d
  char *v9; // rdi
  _QWORD *v10; // rsi
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  char *v14; // r9
  __int64 v15; // r14
  __int64 v16; // rax
  char v17; // bl
  __int64 v18; // rax
  char *v19; // r15
  int v20; // eax
  unsigned int v21; // ebp
  unsigned int v22; // ebp
  __int64 v23; // rbx
  __int64 v24; // rax
  char v25; // r14
  __int64 v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // r8
  unsigned __int64 v29; // rbx
  unsigned int v30; // r14d
  unsigned int v31; // ebp
  __int64 v32; // r12
  unsigned int v33; // r9d
  unsigned int v34; // ecx
  __int64 v35; // rax
  int v36; // r11d
  char *v37; // rsi
  unsigned int v38; // r10d
  unsigned int v39; // edx
  __int64 v40; // rbx
  char *v41; // rbx
  __int64 v42; // rdx
  unsigned __int64 v43; // rax
  unsigned int v44; // ecx
  unsigned __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v50; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v51; // [rsp+38h] [rbp-C0h]
  __int64 v52; // [rsp+40h] [rbp-B8h]
  unsigned int v53; // [rsp+48h] [rbp-B0h]
  _QWORD *v54; // [rsp+50h] [rbp-A8h]
  _QWORD v55[8]; // [rsp+60h] [rbp-98h] BYREF

  v4 = (__int64)Src;
  v54 = v55;
  memset(v55, 0, sizeof(v55));
  v5 = Src + 4080;
  v6 = 48 * a2 - 0x58000000000LL;
  v7 = 48 * a3 - 0x58000000000LL;
  v8 = 0;
  v9 = Src;
  v10 = a4;
  v11 = *((_DWORD *)Src + 1);
  v52 = a3;
  v51 = v7;
  v53 = 512;
  if ( v11 != 1951624525 && v11 != 1816358221 && v11 != 1701147206 || !(unsigned int)MiIsPoolHeader(Src) )
  {
    v15 = -v4;
    do
    {
      if ( v9 <= v5
        && ((unsigned __int8)v9 & 0xF) == 0
        && *(_DWORD *)&v9[v15 + 4 + v4] == 1734439494
        && (unsigned int)MiIsPoolHeader(v9) == 1 )
      {
        break;
      }
      v16 = MiLockLeafPage(v9, v8);
      if ( v16 )
      {
        ++v8;
        _bittestandset((signed __int32 *)v55, (__int64)&v9[v15] >> 3);
        v17 = *(_BYTE *)(v16 + 34);
        if ( (v17 & 8) != 0 )
          goto LABEL_41;
        v50 = MI_READ_PTE_LOCK_FREE(v9);
        if ( (v50 & 1) == 0 && (v17 & 0x20) != 0 )
          goto LABEL_41;
        v4 = (__int64)Src;
      }
      v18 = *(_QWORD *)v9;
      v9 += 8;
      *v10++ = v18;
    }
    while ( ((unsigned __int16)v9 & 0xFFF) != 0 );
    v14 = (char *)a4;
  }
  if ( v9 != (char *)(v4 + 4096) )
  {
    v19 = v9;
    while ( 1 )
    {
      v20 = *((_DWORD *)v19 + 1);
      v21 = 16 * (unsigned __int8)*((_WORD *)v19 + 1);
      if ( v20 != 1734439494 && v20 != 1816358221 && (v19[3] & 2) != 0 )
        break;
      memmove(v10, v9, v21);
      v26 = v21 & 0xFFFFFFF8;
      v9 += v26;
      v10 = (_QWORD *)((char *)v10 + v26);
LABEL_30:
      v19 += 16 * (unsigned __int8)*((_WORD *)v19 + 1);
      if ( ((unsigned __int16)v19 & 0xFFF) == 0 )
      {
        v7 = v51;
        goto LABEL_33;
      }
      v14 = (char *)a4;
    }
    v9 += 16;
    v22 = v21 - 16;
    *(_OWORD *)v10 = *(_OWORD *)v19;
    v10 += 2;
    v23 = (char *)v10 - v14;
    while ( 1 )
    {
      v24 = MiLockLeafPage(v9, v8);
      if ( v24 )
      {
        ++v8;
        _bittestandset((signed __int32 *)v55, v23 >> 3);
        v25 = *(_BYTE *)(v24 + 34);
        if ( (v25 & 8) != 0 )
          goto LABEL_41;
        v50 = MI_READ_PTE_LOCK_FREE(v9);
        if ( (v50 & 1) == 0 && (v25 & 0x20) != 0 )
          goto LABEL_41;
      }
      v23 += 8LL;
      *v10 = *(_QWORD *)v9;
      v9 += 8;
      ++v10;
      v22 -= 8;
      if ( !v22 )
        goto LABEL_30;
    }
  }
LABEL_33:
  if ( v8 )
    MiLockNestedPageAtDpcInline(v6, v12, v13);
  else
    MiLockPageAtDpcInline(v6);
  if ( *(_WORD *)(v6 + 32) != 2
    || (v29 = *(_QWORD *)(v6 + 24) & 0x3FFFFFFFFFFFFFFFLL, *(unsigned __int16 *)(v6 + 24) != (unsigned __int64)(v8 + 1))
    || v29 >= 0x10000 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_41:
    v30 = 0;
    goto LABEL_42;
  }
  MiLockNestedPageAtDpcInline(v7, v27, v28);
  *(_QWORD *)(v7 + 24) ^= (*(_QWORD *)(v7 + 24) ^ v29) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v30 = 1;
LABEL_42:
  v31 = 0;
  v32 = v52;
  while ( v8 )
  {
    v33 = v31;
    if ( v31 >= v53 )
      v33 = 0;
    v34 = v53 - 1;
    if ( ((unsigned __int8)v55 & 4) != 0 )
    {
      v35 = 1LL;
      v36 = 32;
    }
    else
    {
      v35 = 0LL;
      v36 = 0;
    }
    v37 = (char *)v55 - 4 * v35;
    while ( 1 )
    {
      v38 = v36 + v34;
      v39 = v36 + v33;
      if ( v34 - v33 == -1 )
      {
        v40 = 0xFFFFFFFFLL;
        goto LABEL_58;
      }
      v41 = &v37[8 * ((unsigned __int64)v39 >> 6)];
      v42 = ~*(_QWORD *)v41 | ((1LL << (v39 & 0x3F)) - 1);
      if ( v42 == -1 )
      {
        while ( 1 )
        {
          v41 += 8;
          if ( v41 > &v37[8 * ((unsigned __int64)v38 >> 6)] )
            break;
          v42 = ~*(_QWORD *)v41;
          if ( *(_QWORD *)v41 )
            goto LABEL_55;
        }
LABEL_56:
        v40 = 0xFFFFFFFFLL;
        goto LABEL_58;
      }
LABEL_55:
      _BitScanForward64(&v43, ~v42);
      v40 = (unsigned int)v43 + ((unsigned int)((v41 - v37) >> 3) << 6);
      if ( (unsigned int)v40 > v38 )
        goto LABEL_56;
      if ( (_DWORD)v40 != -1 )
        break;
LABEL_58:
      if ( !v33 )
        goto LABEL_63;
      v44 = v31 + 1;
      v33 = 0;
      if ( v31 + 1 > v53 )
        v44 = v53;
      v34 = v44 - 1;
    }
    v40 = (unsigned int)(v40 - v36);
LABEL_63:
    v45 = MI_READ_PTE_LOCK_FREE(&Src[8 * v40]);
    v50 = v45;
    if ( (v45 & 1) != 0 )
      v45 = MI_READ_PTE_LOCK_FREE(&v50);
    v46 = 48 * ((v45 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    if ( v30 == 1 )
      *(_QWORD *)(v46 + 40) ^= (*(_QWORD *)(v46 + 40) ^ v32) & 0xFFFFFFFFFLL;
    --v8;
    _InterlockedAnd64((volatile signed __int64 *)(v46 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v31 = v40 + 1;
  }
  return v30;
}
