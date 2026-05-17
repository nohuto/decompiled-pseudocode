/*
 * XREFs of RtlpConvertToAutoInheritSecurityObject @ 0x1800E077C
 * Callers:
 *     RtlConvertToAutoInheritSecurityObject @ 0x1800D48E0 (RtlConvertToAutoInheritSecurityObject.c)
 * Callees:
 *     RtlValidSecurityDescriptor @ 0x180014E80 (RtlValidSecurityDescriptor.c)
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 *     RtlpConvertAclToAutoInherit @ 0x1800DFF70 (RtlpConvertAclToAutoInherit.c)
 */

__int64 __fastcall RtlpConvertToAutoInheritSecurityObject(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        char a5,
        _DWORD *a6)
{
  __int64 v6; // rsi
  int v10; // edi
  __int16 v11; // r14
  __int16 v12; // ax
  void *v13; // rcx
  void *v14; // rcx
  unsigned __int16 *v15; // r12
  _WORD *v16; // r9
  _WORD *v17; // r8
  unsigned __int16 *v18; // rdx
  _BYTE *v19; // rcx
  __int16 v20; // r14
  __int64 v21; // rax
  __int16 v22; // di
  __int16 v23; // cx
  unsigned __int16 *v24; // r15
  _WORD *v25; // r8
  _WORD *v26; // rax
  unsigned __int16 *v27; // rdx
  _BYTE *v28; // rcx
  __int16 v29; // di
  unsigned int v30; // r8d
  unsigned int v31; // ecx
  unsigned int v32; // r12d
  unsigned int v33; // r13d
  __int64 v34; // rbx
  __int64 Heap; // rax
  void *v36; // r14
  char *v37; // rbx
  unsigned __int8 *v38; // rcx
  char *v39; // rbx
  char v41; // [rsp+58h] [rbp-29h]
  unsigned int v42; // [rsp+5Ch] [rbp-25h] BYREF
  void *Src; // [rsp+60h] [rbp-21h]
  unsigned __int16 *v44; // [rsp+68h] [rbp-19h] BYREF
  void *v45; // [rsp+70h] [rbp-11h]
  unsigned __int16 *v46; // [rsp+78h] [rbp-9h] BYREF
  void *v47; // [rsp+80h] [rbp-1h]
  void *ProcessHeap; // [rsp+88h] [rbp+7h]
  char v49; // [rsp+E0h] [rbp+5Fh]

  v6 = 0LL;
  v44 = 0LL;
  v41 = 0;
  v46 = 0LL;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v49 = 0;
  if ( !RtlValidSecurityDescriptor(a2) )
    goto LABEL_2;
  v11 = *(_WORD *)(a2 + 2);
  v12 = v11 & 0x8000;
  if ( v11 >= 0 )
  {
    v13 = *(void **)(a2 + 8);
  }
  else
  {
    if ( !*(_DWORD *)(a2 + 4) )
    {
LABEL_2:
      v10 = -1073741703;
      goto LABEL_117;
    }
    v13 = (void *)(a2 + *(unsigned int *)(a2 + 4));
  }
  v47 = v13;
  if ( !v13 )
    goto LABEL_2;
  if ( v12 )
  {
    if ( !*(_DWORD *)(a2 + 8) )
    {
      v45 = 0LL;
      goto LABEL_14;
    }
    v14 = (void *)(a2 + *(unsigned int *)(a2 + 8));
  }
  else
  {
    v14 = *(void **)(a2 + 16);
  }
  v45 = v14;
LABEL_14:
  if ( (v11 & 0x10) == 0 )
    goto LABEL_47;
  if ( v12 )
  {
    if ( !*(_DWORD *)(a2 + 12) )
      goto LABEL_47;
    v15 = (unsigned __int16 *)(a2 + *(unsigned int *)(a2 + 12));
  }
  else
  {
    v15 = *(unsigned __int16 **)(a2 + 24);
  }
  Src = v15;
  if ( v15 )
  {
    if ( (v11 & 0x800) != 0 || (v11 & 0x2000) != 0 || !a1 )
    {
      v20 = v11 & 0x2010 | 0x800;
      goto LABEL_57;
    }
    if ( v12 )
    {
      if ( *(_DWORD *)(a2 + 8) )
        v16 = (_WORD *)(a2 + *(unsigned int *)(a2 + 8));
      else
        v16 = 0LL;
    }
    else
    {
      v16 = *(_WORD **)(a2 + 16);
    }
    if ( v12 )
    {
      if ( *(_DWORD *)(a2 + 4) )
        v17 = (_WORD *)(a2 + *(unsigned int *)(a2 + 4));
      else
        v17 = 0LL;
    }
    else
    {
      v17 = *(_WORD **)(a2 + 8);
    }
    if ( v12 )
    {
      if ( *(_DWORD *)(a2 + 12) )
        v18 = (unsigned __int16 *)(a2 + *(unsigned int *)(a2 + 12));
      else
        v18 = 0LL;
    }
    else
    {
      v18 = *(unsigned __int16 **)(a2 + 24);
    }
    if ( (*(_BYTE *)(a1 + 2) & 0x10) == 0 )
      goto LABEL_39;
    if ( (*(_WORD *)(a1 + 2) & 0x8000) == 0 )
    {
      v19 = *(_BYTE **)(a1 + 24);
      goto LABEL_44;
    }
    if ( *(_DWORD *)(a1 + 12) )
      v19 = (_BYTE *)(a1 + *(unsigned int *)(a1 + 12));
    else
LABEL_39:
      v19 = 0LL;
LABEL_44:
    v10 = RtlpConvertAclToAutoInherit(v19, v18, a4, a5, v17, v16, a6, (unsigned __int64 *)&v44, &v42);
    if ( v10 < 0 )
      goto LABEL_117;
    v41 = 1;
    v20 = (4 * (v42 & 4)) | (4 * (v42 & 8)) | (2 * (v42 & 0x400)) | (2 * (v42 & 0x1000)) | 0x10;
    goto LABEL_56;
  }
LABEL_47:
  v20 = v11 & 0x2010 | 0x800;
  if ( !a1 )
  {
    v21 = 0LL;
LABEL_54:
    if ( v21 )
      v20 |= 0x2000u;
    goto LABEL_56;
  }
  if ( (*(_BYTE *)(a1 + 2) & 0x10) == 0 )
    goto LABEL_56;
  if ( (*(_WORD *)(a1 + 2) & 0x8000) == 0 )
  {
    v21 = *(_QWORD *)(a1 + 24);
    goto LABEL_54;
  }
  if ( *(_DWORD *)(a1 + 12) )
  {
    v21 = a1 + *(unsigned int *)(a1 + 12);
    goto LABEL_54;
  }
LABEL_56:
  v15 = v44;
  Src = v44;
LABEL_57:
  v22 = *(_WORD *)(a2 + 2);
  if ( (v22 & 4) == 0 )
    goto LABEL_90;
  v23 = v22 & 0x8000;
  if ( v22 < 0 )
  {
    if ( *(_DWORD *)(a2 + 16) )
    {
      v24 = (unsigned __int16 *)(a2 + *(unsigned int *)(a2 + 16));
      goto LABEL_62;
    }
LABEL_90:
    v29 = *(_WORD *)(a2 + 2) & 4 | 0x1400;
    goto LABEL_91;
  }
  v24 = *(unsigned __int16 **)(a2 + 32);
LABEL_62:
  if ( !v24 )
    goto LABEL_90;
  if ( (v22 & 0x400) != 0 || (v22 & 0x1000) != 0 || !a1 )
  {
    v29 = v22 & 0x1004 | 0x400;
LABEL_92:
    v30 = (4 * *((unsigned __int8 *)v47 + 1) + 11) & 0xFFFFFFFC;
    v42 = v30;
    if ( v45 )
      v31 = (4 * *((unsigned __int8 *)v45 + 1) + 11) & 0xFFFFFFFC;
    else
      v31 = 0;
    if ( v15 )
      v32 = (v15[1] + 3) & 0xFFFFFFFC;
    else
      v32 = 0;
    if ( v24 )
      v33 = (v24[1] + 3) & 0xFFFFFFFC;
    else
      v33 = 0;
    v34 = (__int64)ProcessHeap;
    Heap = RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 1310720, v31 + v32 + v33 + v30 + 20);
    v6 = Heap;
    if ( Heap )
    {
      v37 = (char *)(Heap + 20);
      *(_QWORD *)Heap = 0LL;
      *(_QWORD *)(Heap + 8) = 0LL;
      *(_DWORD *)(Heap + 16) = 0;
      *(_BYTE *)Heap = 1;
      *(_WORD *)(Heap + 2) |= v20 | 0x8000;
      v36 = Src;
      if ( Src )
      {
        memmove((void *)(Heap + 20), Src, *((unsigned __int16 *)Src + 1));
        *(_DWORD *)(v6 + 12) = 20;
        v37 += v32;
      }
      else
      {
        *(_DWORD *)(Heap + 12) = 0;
      }
      *(_WORD *)(v6 + 2) |= v29;
      if ( v24 )
      {
        memmove(v37, v24, v24[1]);
        *(_DWORD *)(v6 + 16) = (_DWORD)v37 - v6;
        v37 += v33;
      }
      else
      {
        *(_DWORD *)(v6 + 16) = 0;
      }
      memmove(v37, v47, 4 * *((unsigned __int8 *)v47 + 1) + 8);
      v38 = (unsigned __int8 *)v45;
      *(_DWORD *)(v6 + 4) = (_DWORD)v37 - v6;
      v39 = &v37[v42];
      if ( v38 )
      {
        memmove(v39, v38, 4 * v38[1] + 8);
        *(_DWORD *)(v6 + 8) = (_DWORD)v39 - v6;
      }
      v34 = (__int64)ProcessHeap;
      v10 = 0;
    }
    else
    {
      v36 = Src;
      v10 = -1073741801;
    }
    if ( v49 )
      RtlFreeHeap(v34, 0, (unsigned __int64)v24);
    goto LABEL_115;
  }
  if ( v23 )
  {
    if ( *(_DWORD *)(a2 + 8) )
      v25 = (_WORD *)(a2 + *(unsigned int *)(a2 + 8));
    else
      v25 = 0LL;
  }
  else
  {
    v25 = *(_WORD **)(a2 + 16);
  }
  if ( v23 )
  {
    if ( *(_DWORD *)(a2 + 4) )
      v26 = (_WORD *)(a2 + *(unsigned int *)(a2 + 4));
    else
      v26 = 0LL;
  }
  else
  {
    v26 = *(_WORD **)(a2 + 8);
  }
  if ( v23 )
  {
    if ( *(_DWORD *)(a2 + 16) )
      v27 = (unsigned __int16 *)(a2 + *(unsigned int *)(a2 + 16));
    else
      v27 = 0LL;
  }
  else
  {
    v27 = *(unsigned __int16 **)(a2 + 32);
  }
  if ( (*(_BYTE *)(a1 + 2) & 4) == 0 )
    goto LABEL_82;
  if ( (*(_WORD *)(a1 + 2) & 0x8000) != 0 )
  {
    if ( !*(_DWORD *)(a1 + 16) )
    {
LABEL_82:
      v28 = 0LL;
      goto LABEL_87;
    }
    v28 = (_BYTE *)(a1 + *(unsigned int *)(a1 + 16));
  }
  else
  {
    v28 = *(_BYTE **)(a1 + 32);
  }
LABEL_87:
  v10 = RtlpConvertAclToAutoInherit(v28, v27, a4, a5, v26, v25, a6, (unsigned __int64 *)&v46, &v42);
  if ( v10 >= 0 )
  {
    v49 = 1;
    v29 = v42 & 0x1408 | 4;
LABEL_91:
    v24 = v46;
    goto LABEL_92;
  }
  v36 = Src;
LABEL_115:
  if ( v41 )
    RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)v36);
LABEL_117:
  *a3 = v6;
  return (unsigned int)v10;
}
