/*
 * XREFs of RtlpConvertToAutoInheritSecurityObject @ 0x1800CF858
 * Callers:
 *     RtlConvertToAutoInheritSecurityObject @ 0x1800C2F50 (RtlConvertToAutoInheritSecurityObject.c)
 * Callees:
 *     RtlValidSecurityDescriptor @ 0x180020220 (RtlValidSecurityDescriptor.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     memmove @ 0x180098200 (memmove.c)
 *     RtlpConvertAclToAutoInherit @ 0x1800CF04C (RtlpConvertAclToAutoInherit.c)
 */

__int64 __fastcall RtlpConvertToAutoInheritSecurityObject(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        char a5,
        GENERIC_MAPPING *GenericMapping)
{
  _QWORD *v6; // rsi
  int v10; // edi
  __int16 v11; // r14
  __int16 v12; // ax
  void *v13; // rcx
  void *v14; // rcx
  __int64 v15; // r12
  __int64 v16; // r9
  __int64 v17; // r8
  ACL *v18; // rdx
  ACL *v19; // rcx
  __int16 v20; // r14
  __int64 v21; // rax
  __int16 v22; // di
  __int16 v23; // cx
  unsigned __int16 *v24; // r15
  __int64 v25; // r8
  __int64 v26; // rax
  ACL *v27; // rdx
  ACL *v28; // rcx
  __int16 v29; // di
  unsigned int v30; // r8d
  unsigned int v31; // ecx
  unsigned int v32; // r12d
  unsigned int v33; // r13d
  PVOID v34; // rbx
  _QWORD *Heap; // rax
  void *v36; // r14
  char *v37; // rbx
  unsigned __int8 *v38; // rcx
  char *v39; // rbx
  char v41; // [rsp+58h] [rbp-29h]
  _DWORD v42[3]; // [rsp+5Ch] [rbp-25h] BYREF
  __int64 v43; // [rsp+68h] [rbp-19h] BYREF
  void *v44; // [rsp+70h] [rbp-11h]
  __int64 v45; // [rsp+78h] [rbp-9h] BYREF
  void *v46; // [rsp+80h] [rbp-1h]
  PVOID HeapHandle; // [rsp+88h] [rbp+7h]
  char v48; // [rsp+E0h] [rbp+5Fh]

  v6 = 0LL;
  v43 = 0LL;
  v41 = 0;
  v45 = 0LL;
  HeapHandle = NtCurrentPeb()->ProcessHeap;
  v48 = 0;
  if ( !RtlValidSecurityDescriptor((PSECURITY_DESCRIPTOR)a2) )
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
  v46 = v13;
  if ( !v13 )
    goto LABEL_2;
  if ( v12 )
  {
    if ( !*(_DWORD *)(a2 + 8) )
    {
      v44 = 0LL;
      goto LABEL_14;
    }
    v14 = (void *)(a2 + *(unsigned int *)(a2 + 8));
  }
  else
  {
    v14 = *(void **)(a2 + 16);
  }
  v44 = v14;
LABEL_14:
  if ( (v11 & 0x10) == 0 )
    goto LABEL_47;
  if ( v12 )
  {
    if ( !*(_DWORD *)(a2 + 12) )
      goto LABEL_47;
    v15 = a2 + *(unsigned int *)(a2 + 12);
  }
  else
  {
    v15 = *(_QWORD *)(a2 + 24);
  }
  *(_QWORD *)&v42[1] = v15;
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
        v16 = a2 + *(unsigned int *)(a2 + 8);
      else
        v16 = 0LL;
    }
    else
    {
      v16 = *(_QWORD *)(a2 + 16);
    }
    if ( v12 )
    {
      if ( *(_DWORD *)(a2 + 4) )
        v17 = a2 + *(unsigned int *)(a2 + 4);
      else
        v17 = 0LL;
    }
    else
    {
      v17 = *(_QWORD *)(a2 + 8);
    }
    if ( v12 )
    {
      if ( *(_DWORD *)(a2 + 12) )
        v18 = (ACL *)(a2 + *(unsigned int *)(a2 + 12));
      else
        v18 = 0LL;
    }
    else
    {
      v18 = *(ACL **)(a2 + 24);
    }
    if ( (*(_BYTE *)(a1 + 2) & 0x10) == 0 )
      goto LABEL_39;
    if ( (*(_WORD *)(a1 + 2) & 0x8000) == 0 )
    {
      v19 = *(ACL **)(a1 + 24);
      goto LABEL_44;
    }
    if ( *(_DWORD *)(a1 + 12) )
      v19 = (ACL *)(a1 + *(unsigned int *)(a1 + 12));
    else
LABEL_39:
      v19 = 0LL;
LABEL_44:
    v10 = RtlpConvertAclToAutoInherit(v19, v18, a4, a5, v17, v16, GenericMapping, (PVOID *)&v43, v42);
    if ( v10 < 0 )
      goto LABEL_117;
    v41 = 1;
    v20 = (4 * (v42[0] & 4)) | (4 * (v42[0] & 8)) | (2 * (v42[0] & 0x400)) | (2 * (v42[0] & 0x1000)) | 0x10;
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
  v15 = v43;
  *(_QWORD *)&v42[1] = v43;
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
    v30 = (4 * *((unsigned __int8 *)v46 + 1) + 11) & 0xFFFFFFFC;
    v42[0] = v30;
    if ( v44 )
      v31 = (4 * *((unsigned __int8 *)v44 + 1) + 11) & 0xFFFFFFFC;
    else
      v31 = 0;
    if ( v15 )
      v32 = (*(unsigned __int16 *)(v15 + 2) + 3) & 0xFFFFFFFC;
    else
      v32 = 0;
    if ( v24 )
      v33 = (v24[1] + 3) & 0xFFFFFFFC;
    else
      v33 = 0;
    v34 = HeapHandle;
    Heap = RtlAllocateHeap(HeapHandle, NtdllBaseTag + 1310720, v31 + v32 + v33 + v30 + 20);
    v6 = Heap;
    if ( Heap )
    {
      v37 = (char *)Heap + 20;
      *Heap = 0LL;
      Heap[1] = 0LL;
      *((_DWORD *)Heap + 4) = 0;
      *(_BYTE *)Heap = 1;
      *((_WORD *)Heap + 1) |= v20 | 0x8000;
      v36 = *(void **)&v42[1];
      if ( *(_QWORD *)&v42[1] )
      {
        memmove((char *)Heap + 20, *(const void **)&v42[1], *(unsigned __int16 *)(*(_QWORD *)&v42[1] + 2LL));
        *((_DWORD *)v6 + 3) = 20;
        v37 += v32;
      }
      else
      {
        *((_DWORD *)Heap + 3) = 0;
      }
      *((_WORD *)v6 + 1) |= v29;
      if ( v24 )
      {
        memmove(v37, v24, v24[1]);
        *((_DWORD *)v6 + 4) = (_DWORD)v37 - (_DWORD)v6;
        v37 += v33;
      }
      else
      {
        *((_DWORD *)v6 + 4) = 0;
      }
      memmove(v37, v46, 4 * *((unsigned __int8 *)v46 + 1) + 8);
      v38 = (unsigned __int8 *)v44;
      *((_DWORD *)v6 + 1) = (_DWORD)v37 - (_DWORD)v6;
      v39 = &v37[v42[0]];
      if ( v38 )
      {
        memmove(v39, v38, 4 * v38[1] + 8);
        *((_DWORD *)v6 + 2) = (_DWORD)v39 - (_DWORD)v6;
      }
      v34 = HeapHandle;
      v10 = 0;
    }
    else
    {
      v36 = *(void **)&v42[1];
      v10 = -1073741801;
    }
    if ( v48 )
      RtlFreeHeap(v34, 0, v24);
    goto LABEL_115;
  }
  if ( v23 )
  {
    if ( *(_DWORD *)(a2 + 8) )
      v25 = a2 + *(unsigned int *)(a2 + 8);
    else
      v25 = 0LL;
  }
  else
  {
    v25 = *(_QWORD *)(a2 + 16);
  }
  if ( v23 )
  {
    if ( *(_DWORD *)(a2 + 4) )
      v26 = a2 + *(unsigned int *)(a2 + 4);
    else
      v26 = 0LL;
  }
  else
  {
    v26 = *(_QWORD *)(a2 + 8);
  }
  if ( v23 )
  {
    if ( *(_DWORD *)(a2 + 16) )
      v27 = (ACL *)(a2 + *(unsigned int *)(a2 + 16));
    else
      v27 = 0LL;
  }
  else
  {
    v27 = *(ACL **)(a2 + 32);
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
    v28 = (ACL *)(a1 + *(unsigned int *)(a1 + 16));
  }
  else
  {
    v28 = *(ACL **)(a1 + 32);
  }
LABEL_87:
  v10 = RtlpConvertAclToAutoInherit(v28, v27, a4, a5, v26, v25, GenericMapping, (PVOID *)&v45, v42);
  if ( v10 >= 0 )
  {
    v48 = 1;
    v29 = v42[0] & 0x1408 | 4;
LABEL_91:
    v24 = (unsigned __int16 *)v45;
    goto LABEL_92;
  }
  v36 = *(void **)&v42[1];
LABEL_115:
  if ( v41 )
    RtlFreeHeap(HeapHandle, 0, v36);
LABEL_117:
  *a3 = v6;
  return (unsigned int)v10;
}
