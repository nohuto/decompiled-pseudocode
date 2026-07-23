/*
 * XREFs of MiReplacePageOfProtoPool @ 0x1400A7F4C
 * Callers:
 *     MiStealPage @ 0x140105C04 (MiStealPage.c)
 * Callees:
 *     MiLockLeafPage @ 0x14002E5D0 (MiLockLeafPage.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     MiLockNestedPageAtDpcInline @ 0x14009DAE0 (MiLockNestedPageAtDpcInline.c)
 *     MiIsPoolHeader @ 0x1400A83B8 (MiIsPoolHeader.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x1401F239C (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiReplacePageOfProtoPool(char *Src, __int64 a2, __int64 a3, char *a4)
{
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // r15
  int v7; // r13d
  unsigned __int64 v8; // rdi
  char *v9; // r12
  _QWORD *v10; // r14
  int v11; // eax
  __int64 v12; // rbx
  __int64 v13; // rax
  char v14; // r9
  __int64 v15; // rax
  unsigned __int64 v16; // r15
  int v17; // eax
  __int64 v18; // rbx
  int v19; // ebx
  __int64 v20; // r12
  __int64 v21; // rax
  char v22; // r9
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // rbx
  unsigned int v25; // r10d
  unsigned int v26; // r11d
  unsigned int v27; // r8d
  unsigned int v28; // ecx
  __int64 v29; // rax
  int v30; // ebx
  signed __int32 *v31; // rsi
  unsigned int v32; // r14d
  unsigned int v33; // edx
  unsigned int v34; // r9d
  char *v35; // r9
  __int64 i; // rdx
  unsigned __int64 v37; // rax
  unsigned int v38; // ecx
  __int64 v39; // rcx
  int v40; // r9d
  __int64 v41; // rcx
  __int64 v44; // [rsp+28h] [rbp-71h] BYREF
  char *v45; // [rsp+30h] [rbp-69h]
  __int64 v46; // [rsp+38h] [rbp-61h]
  __int64 v47; // [rsp+40h] [rbp-59h]
  unsigned int v48; // [rsp+48h] [rbp-51h]
  signed __int32 *v49; // [rsp+50h] [rbp-49h]
  signed __int32 v50[16]; // [rsp+60h] [rbp-39h] BYREF

  v4 = (__int64)Src;
  v45 = a4;
  v47 = a3;
  v5 = 48 * a2 - 0x58000000000LL;
  v6 = 48 * a3 - 0x58000000000LL;
  v48 = 512;
  v46 = v6;
  v7 = 0;
  v49 = v50;
  v8 = (unsigned __int64)Src;
  v9 = Src + 4080;
  v10 = a4;
  memset(v50, 0, sizeof(v50));
  v11 = *(_DWORD *)(v4 + 4);
  if ( v11 != 1951624525 && v11 != 1816358221 && v11 != 1701147206 || !(unsigned int)MiIsPoolHeader(v4) )
  {
    v12 = -v4;
    do
    {
      if ( v8 <= (unsigned __int64)v9
        && (v8 & 0xF) == 0
        && *(_DWORD *)&Src[v12 + 4 + v8] == 1734439494
        && (unsigned int)MiIsPoolHeader(v8) == 1 )
      {
        break;
      }
      v13 = MiLockLeafPage(v8, v7);
      if ( v13 )
      {
        ++v7;
        _bittestandset(v50, (__int64)(v12 + v8) >> 3);
        if ( (*(_BYTE *)(v13 + 34) & 8) != 0 )
          goto LABEL_39;
        v44 = MI_READ_PTE_LOCK_FREE(v8);
        if ( (v44 & 1) == 0 && (v14 & 0x20) != 0 )
          goto LABEL_39;
      }
      v15 = *(_QWORD *)v8;
      v8 += 8LL;
      *v10++ = v15;
    }
    while ( (v8 & 0xFFF) != 0 );
    v4 = (__int64)Src;
  }
  if ( v8 != v4 + 4096 )
  {
    v16 = v8;
    while ( 1 )
    {
      v17 = *(_DWORD *)(v16 + 4);
      v18 = 16 * (unsigned int)(unsigned __int8)*(_WORD *)(v16 + 2);
      if ( v17 != 1734439494 && v17 != 1816358221 && (*(_BYTE *)(v16 + 3) & 2) != 0 )
        break;
      memmove(v10, (const void *)v8, 16 * (unsigned int)(unsigned __int8)*(_WORD *)(v16 + 2));
      v23 = v18 & 0xFFFFFFFFFFFFFFF8uLL;
      v8 += v23;
      v10 = (_QWORD *)((char *)v10 + v23);
LABEL_29:
      v16 += 16LL * (unsigned __int8)*(_WORD *)(v16 + 2);
      if ( (v16 & 0xFFF) == 0 )
      {
        v6 = v46;
        goto LABEL_31;
      }
    }
    v8 += 16LL;
    v19 = v18 - 16;
    *(_OWORD *)v10 = *(_OWORD *)v16;
    v10 += 2;
    v20 = (char *)v10 - v45;
    while ( 1 )
    {
      v21 = MiLockLeafPage(v8, v7);
      if ( v21 )
      {
        ++v7;
        _bittestandset(v50, v20 >> 3);
        if ( (*(_BYTE *)(v21 + 34) & 8) != 0 )
          goto LABEL_39;
        v44 = MI_READ_PTE_LOCK_FREE(v8);
        if ( (v44 & 1) == 0 && (v22 & 0x20) != 0 )
          goto LABEL_39;
      }
      v20 += 8LL;
      *v10 = *(_QWORD *)v8;
      v8 += 8LL;
      ++v10;
      v19 -= 8;
      if ( !v19 )
        goto LABEL_29;
    }
  }
LABEL_31:
  if ( v7 )
    MiLockNestedPageAtDpcInline(v5);
  else
    MiLockPageAtDpcInline(v5);
  if ( *(_WORD *)(v5 + 32) != 2
    || (v24 = *(_QWORD *)(v5 + 24) & 0x3FFFFFFFFFFFFFFFLL,
        *(unsigned __int16 *)(v5 + 24) != (unsigned __int64)(unsigned int)(v7 + 1))
    || v24 >= 0x10000 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_39:
    v25 = 0;
    goto LABEL_40;
  }
  MiLockNestedPageAtDpcInline(v6);
  *(_QWORD *)(v6 + 24) ^= (*(_QWORD *)(v6 + 24) ^ v24) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v25 = 1;
LABEL_40:
  v26 = 0;
  while ( v7 )
  {
    v27 = v26 < v48 ? v26 : 0;
    v28 = v48 - 1;
    if ( ((unsigned __int8)v50 & 4) != 0 )
    {
      v29 = 1LL;
      v30 = 32;
    }
    else
    {
      v29 = 0LL;
      v30 = 0;
    }
    v31 = &v50[-v29];
    while ( 1 )
    {
      v32 = v30 + v28;
      v33 = v30 + v27;
      if ( v28 - v27 == -1 )
        goto LABEL_47;
      v35 = (char *)&v31[2 * ((unsigned __int64)v33 >> 6)];
      for ( i = ~*(_QWORD *)v35 | ((1LL << (v33 & 0x3F)) - 1); i == -1; i = ~*(_QWORD *)v35 )
      {
        v35 += 8;
        if ( v35 > (char *)&v31[2 * ((unsigned __int64)v32 >> 6)] )
          goto LABEL_47;
      }
      _BitScanForward64(&v37, ~i);
      v34 = v37 + ((unsigned int)((v35 - (char *)v31) >> 3) << 6);
      LODWORD(v45) = v37;
      if ( v34 > v32 )
      {
LABEL_47:
        v34 = -1;
        goto LABEL_54;
      }
      if ( v34 != -1 )
        break;
LABEL_54:
      if ( !v27 )
        goto LABEL_60;
      v38 = v26 + 1;
      if ( v26 + 1 > v48 )
        v38 = v48;
      v28 = v38 - 1;
      v27 = 0;
    }
    v34 -= v30;
LABEL_60:
    v44 = MI_READ_PTE_LOCK_FREE(&Src[8 * v34]);
    if ( (v44 & 1) != 0 )
      v39 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v44) >> 12) & 0xFFFFFFFFFLL);
    else
      v39 = 48 * MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v44);
    v41 = v39 - 0x58000000000LL;
    if ( v25 == 1 )
      *(_QWORD *)(v41 + 40) ^= (v47 ^ *(_QWORD *)(v41 + 40)) & 0xFFFFFFFFFLL;
    --v7;
    _InterlockedAnd64((volatile signed __int64 *)(v41 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v26 = v40 + 1;
  }
  return v25;
}
