/*
 * XREFs of bLoadFontFile @ 0x1C001058C
 * Callers:
 *     ttfdSemLoadFontFile @ 0x1C00104E0 (ttfdSemLoadFontFile.c)
 * Callees:
 *     bLoadTTF @ 0x1C0010AF4 (bLoadTTF.c)
 *     EngFntCacheLookUp @ 0x1C0010FD0 (EngFntCacheLookUp.c)
 *     ttfdUnloadFontFileTTC @ 0x1C00FB714 (ttfdUnloadFontFileTTC.c)
 *     ttfdUnloadFontFile @ 0x1C00FB78C (ttfdUnloadFontFile.c)
 *     bComputeGlyphAttrBits @ 0x1C014F920 (bComputeGlyphAttrBits.c)
 *     vFontFileCache @ 0x1C014FBB4 (vFontFileCache.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 */

__int64 __fastcall bLoadFontFile(__int64 a1, __int64 a2, unsigned int a3, __int16 a4, ULONG FastCheckSum, PVOID *a6)
{
  int v8; // r14d
  _DWORD *v9; // r13
  int v10; // eax
  _DWORD *v11; // rax
  unsigned int v12; // r14d
  PVOID *v13; // rax
  PVOID *v14; // rdi
  char *v15; // rax
  _DWORD *v16; // rcx
  __int64 v17; // rax
  unsigned int i; // r14d
  _QWORD *v19; // r15
  void *v20; // rcx
  void *v21; // rcx
  unsigned int v23; // r14d
  unsigned int v24; // edx
  __int64 v25; // rax
  unsigned int v26; // r8d
  unsigned int *v27; // rcx
  char *v28; // r9
  unsigned int v29; // r8d
  __int64 v30; // rax
  _DWORD *v31; // rdx
  unsigned int v32; // r9d
  __int64 v33; // rcx
  int v34; // eax
  int v35; // r14d
  unsigned int *v36; // r12
  PVOID v37; // rax
  PVOID *v38; // rdi
  __int64 v39; // r14
  int v40; // [rsp+20h] [rbp-98h]
  int v41; // [rsp+40h] [rbp-78h]
  ULONG v42; // [rsp+44h] [rbp-74h] BYREF
  unsigned int v43; // [rsp+48h] [rbp-70h]
  unsigned int v44; // [rsp+4Ch] [rbp-6Ch]
  unsigned int v45; // [rsp+50h] [rbp-68h]
  int v46; // [rsp+54h] [rbp-64h]
  unsigned int v47; // [rsp+58h] [rbp-60h]
  int v48; // [rsp+5Ch] [rbp-5Ch]
  unsigned int v49; // [rsp+60h] [rbp-58h]
  int v50; // [rsp+64h] [rbp-54h]
  PVOID *v51; // [rsp+68h] [rbp-50h]
  _DWORD *v52; // [rsp+70h] [rbp-48h]
  PVOID *v53; // [rsp+78h] [rbp-40h]

  v45 = 0;
  v8 = 0;
  v46 = 0;
  *a6 = 0LL;
  v9 = 0LL;
  v10 = 0;
  v41 = 0;
  if ( !FastCheckSum )
  {
LABEL_5:
    if ( !v10 )
    {
      if ( !a2 || a3 < 0x1C )
        return 0LL;
      if ( _byteswap_ulong(*(_DWORD *)a2) != 1953784678 || _byteswap_ulong(*(_DWORD *)(a2 + 4)) < 0x10000 )
      {
        v12 = 0;
        goto LABEL_8;
      }
      v8 = 1;
      v46 = 1;
      v10 = v41;
    }
    if ( v8 )
    {
      if ( v10 )
        v23 = v9[2];
      else
        v23 = *(unsigned __int8 *)(a2 + 11) | ((*(unsigned __int8 *)(a2 + 10) | ((*(unsigned __int8 *)(a2 + 9) | (*(unsigned __int8 *)(a2 + 8) << 8)) << 8)) << 8);
      if ( !v23 || a2 && (v23 >= 0x7FFFFFE || v23 > (a3 - 12) >> 2) )
        return 0LL;
      v14 = (PVOID *)EngAllocMem(1u, 32 * v23 + 40, 0x64667454u);
      *a6 = v14;
      v51 = v14;
      if ( !v14 )
        return 0LL;
      v24 = 0;
      v43 = 0;
      v47 = 0;
      v25 = v41;
      v44 = 1;
      v26 = 12;
      v48 = 12;
      v27 = v9 + 4;
      v52 = v9 + 4;
      while ( 1 )
      {
        if ( v25 )
        {
          v28 = (char *)v9 + *v27;
          v29 = *((_DWORD *)v28 + 41);
        }
        else
        {
          v28 = 0LL;
          v29 = *(unsigned __int8 *)(v26 + a2 + 3) | ((*(unsigned __int8 *)(v26 + a2 + 2) | (((*(unsigned __int8 *)(v26 + a2) << 8) | *(unsigned __int8 *)(v26 + a2 + 1)) << 8)) << 8);
        }
        v49 = v29;
        v30 = 2LL * v24;
        HIDWORD(v14[v30 + 5]) = 1;
        LODWORD(v14[v30 + 5]) = v29;
        v53 = &v14[2 * v24 + 6];
        LOWORD(v40) = a4;
        if ( !(unsigned int)bLoadTTF(a1, a2, a3, v29, v40, v53, v28, FastCheckSum) )
          break;
        v31 = *v53;
        *(_QWORD *)v31 = v14;
        if ( v31[71] == 2 )
        {
          v32 = v44;
          v33 = v44;
          v14[2 * v44 + 6] = v31;
          v33 *= 2LL;
          HIDWORD(v14[v33 + 5]) = 2;
          LODWORD(v14[v33 + 5]) = v49;
          v24 = v43 + 2;
          v44 = v32 + 2;
        }
        else
        {
          v24 = v43 + 1;
          ++v44;
        }
        v43 = v24;
        ++v47;
        v26 = v48 + 4;
        v48 += 4;
        v27 = ++v52;
        v25 = v41;
        if ( v47 >= v23 )
        {
          v34 = 1;
          goto LABEL_47;
        }
      }
      v34 = 0;
      v24 = v43;
LABEL_47:
      if ( v34 )
      {
        *((_DWORD *)v14 + 2) = v23;
        *((_DWORD *)v14 + 3) = v24;
        *v14 = 0LL;
        v14[4] = 0LL;
        v12 = v46;
LABEL_14:
        v42 = 1;
        v45 = 1;
        if ( v41 )
        {
          v17 = (unsigned int)v9[3];
          if ( (_DWORD)v17 )
          {
            v35 = 1;
            v36 = (_DWORD *)((char *)v9 + v17);
            v37 = EngAllocMem(0, *(_DWORD *)((char *)v9 + v17), 0x64667454u);
            v14[4] = v37;
            if ( v37 )
            {
              memmove(v37, v36, *v36);
            }
            else
            {
              v35 = 0;
              v50 = 0;
            }
            if ( !v35 )
              goto LABEL_64;
          }
        }
        else
        {
          if ( (*((_DWORD *)v14[6] + 75) & 0x100) != 0 && !(unsigned int)bComputeGlyphAttrBits(v14) )
          {
LABEL_64:
            ttfdUnloadFontFileTTC(*a6);
            *a6 = 0LL;
            return 0LL;
          }
          if ( FastCheckSum )
            vFontFileCache(v14, FastCheckSum, v12);
        }
        for ( i = 0; i < *((_DWORD *)v14 + 3); ++i )
        {
          v19 = v14[2 * i + 6];
          if ( HIDWORD(v14[2 * i + 5]) == 1 )
          {
            v20 = (void *)v19[11];
            if ( v20 )
            {
              EngFreeMem(v20);
              v19[11] = 0LL;
            }
            v21 = (void *)v19[12];
            if ( v21 )
            {
              EngFreeMem(v21);
              v19[12] = 0LL;
            }
          }
        }
        return v45;
      }
      if ( v24 )
      {
        v38 = v14 + 6;
        v39 = v24;
        do
        {
          if ( *((_DWORD *)v38 - 1) == 1 )
            ttfdUnloadFontFile(*v38);
          v38 += 2;
          --v39;
        }
        while ( v39 );
      }
LABEL_51:
      EngFreeMem(*a6);
      *a6 = 0LL;
      return v45;
    }
    v12 = v46;
LABEL_8:
    v13 = (PVOID *)EngAllocMem(1u, 0x48u, 0x64667454u);
    v14 = v13;
    *a6 = v13;
    v51 = v13;
    if ( !v13 )
      return v45;
    *((_DWORD *)v13 + 11) = 1;
    *((_DWORD *)v13 + 10) = 0;
    if ( v41 )
      v15 = (char *)v9 + (unsigned int)v9[4];
    else
      v15 = 0LL;
    if ( (unsigned int)bLoadTTF(a1, a2, a3, 0LL, a4, v14 + 6, v15, FastCheckSum) )
    {
      v16 = v14[6];
      *(_QWORD *)v16 = v14;
      *((_DWORD *)v14 + 2) = 1;
      *((_DWORD *)v14 + 3) = (v16[71] == 2) + 1;
      *v14 = 0LL;
      v14[4] = 0LL;
      if ( v16[71] == 2 )
      {
        v14[8] = v16;
        *((_DWORD *)v14 + 15) = 2;
        *((_DWORD *)v14 + 14) = 0;
      }
      goto LABEL_14;
    }
    goto LABEL_51;
  }
  v11 = EngFntCacheLookUp(FastCheckSum, &v42);
  v9 = v11;
  if ( !v11 )
  {
    v10 = 0;
    goto LABEL_5;
  }
  if ( *v11 == 1416914532 )
  {
    v8 = v11[1];
    v46 = v8;
    v10 = 1;
    v41 = 1;
    goto LABEL_5;
  }
  return 0LL;
}
