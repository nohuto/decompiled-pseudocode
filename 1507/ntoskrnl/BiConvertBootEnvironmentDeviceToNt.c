/*
 * XREFs of BiConvertBootEnvironmentDeviceToNt @ 0x14056E654
 * Callers:
 *     BiConvertBootEnvironmentDeviceToNt @ 0x14056E654 (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiConvertRegistryDataToElement @ 0x140570730 (BiConvertRegistryDataToElement.c)
 *     BiVerifyBootPartition @ 0x14057129C (BiVerifyBootPartition.c)
 * Callees:
 *     wcscpy_s @ 0x140177D84 (wcscpy_s.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x14056E654 (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiGetNtPartitionPath @ 0x14056EC30 (BiGetNtPartitionPath.c)
 *     BiVerifyBootPartition @ 0x14057129C (BiVerifyBootPartition.c)
 *     BiConvertBootEnvironmentDeviceToUnknown @ 0x14070DFDC (BiConvertBootEnvironmentDeviceToUnknown.c)
 */

__int64 __fastcall BiConvertBootEnvironmentDeviceToNt(_DWORD *a1, int a2, __int64 a3, size_t *a4, unsigned int *a5)
{
  int v5; // r10d
  _DWORD *v6; // rdi
  int v7; // ecx
  size_t PoolWithTag; // rbx
  unsigned int v9; // esi
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  size_t v13; // rax
  __int64 v14; // rsi
  bool v15; // zf
  __int64 v16; // rax
  unsigned int v17; // ecx
  int NtPartitionPath; // eax
  __int64 v19; // rax
  PVOID v20; // rax
  int v21; // edi
  size_t v22; // r8
  void *v23; // rdx
  PVOID v24; // rax
  const wchar_t *v25; // r8
  __int64 v26; // rax
  __int64 v27; // r8
  unsigned int v28; // esi
  PVOID v29; // rax
  int v30; // eax
  const void *v31; // rdi
  __int64 v32; // rsi
  unsigned int v33; // eax
  PVOID v34; // rax
  int v35; // ecx
  size_t v36; // rax
  void *v37; // rdi
  __int64 v38; // rsi
  unsigned int v39; // ecx
  PVOID v40; // rax
  __int64 v41; // rax
  int v42; // eax
  char v44; // [rsp+30h] [rbp-48h]
  unsigned int Size; // [rsp+34h] [rbp-44h] BYREF
  unsigned int Size_4; // [rsp+38h] [rbp-40h] BYREF
  int v47; // [rsp+3Ch] [rbp-3Ch]
  PVOID P; // [rsp+40h] [rbp-38h] BYREF
  size_t v49; // [rsp+48h] [rbp-30h]
  size_t v50; // [rsp+50h] [rbp-28h] BYREF
  void *Src; // [rsp+58h] [rbp-20h]
  size_t v52; // [rsp+60h] [rbp-18h]
  size_t v54; // [rsp+A0h] [rbp+28h]
  unsigned int v55; // [rsp+A0h] [rbp+28h]
  char v57; // [rsp+B0h] [rbp+38h]

  v57 = a3;
  v5 = a2;
  P = 0LL;
  v6 = a1;
  Src = 0LL;
  v7 = *a1;
  PoolWithTag = 0LL;
  v50 = 0LL;
  v9 = 0;
  v52 = 0LL;
  v44 = 0;
  v47 = 0;
  if ( v7 )
  {
    v10 = v7 - 2;
    if ( v10 )
    {
      v11 = v10 - 3;
      if ( !v11 )
      {
        v9 = 20;
        PoolWithTag = (size_t)ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x4B444342u);
        if ( !PoolWithTag )
          goto LABEL_25;
        *(_QWORD *)PoolWithTag = 0LL;
        *(_QWORD *)(PoolWithTag + 8) = 0LL;
        *(_DWORD *)(PoolWithTag + 16) = 0;
        *(_DWORD *)PoolWithTag = 1;
        goto LABEL_36;
      }
      v12 = v11 - 1;
      if ( v12 )
      {
        if ( v12 != 2 )
          goto LABEL_74;
        v13 = 34LL;
        v14 = -1LL;
        v15 = v6[4] == 1;
        v49 = 34LL;
        v47 = 34;
        if ( v15 )
        {
          v16 = -1LL;
          do
            ++v16;
          while ( *((_WORD *)v6 + v16 + 14) );
          v13 = (unsigned int)(2 * v16 + 34);
          v49 = v13;
          v47 = v13;
        }
        v17 = v6[6];
        Size = 0;
        Size_4 = v17;
        if ( !v17 )
          goto LABEL_24;
        if ( (a3 & 0x20) == 0 )
        {
          NtPartitionPath = BiGetNtPartitionPath(v6, &v50, a3, 0LL);
          Src = (void *)v50;
          if ( NtPartitionPath >= 0 )
          {
            v44 = 1;
            v19 = -1LL;
            do
              ++v19;
            while ( *(_WORD *)(v50 + 2 * v19) );
            LODWORD(v50) = 2 * v19 + 2;
            Size = 2 * v19 + 22;
            v20 = ExAllocatePoolWithTag(PagedPool, Size, 0x4B444342u);
            P = v20;
            if ( !v20 )
            {
              v21 = -1073741670;
LABEL_80:
              ExFreePoolWithTag(Src, 0);
              return (unsigned int)v21;
            }
            memset(v20, 0, Size);
            v22 = (unsigned int)v50;
            v23 = Src;
            *(_DWORD *)P = 2;
            memmove((char *)P + 20, v23, v22);
          }
          if ( P )
            goto LABEL_23;
          v17 = Size_4;
          v5 = a2;
        }
        if ( v6[2] - v17 < 0x4C )
          goto LABEL_74;
        v21 = BiConvertBootEnvironmentDeviceToNt(v17 + (_DWORD)v6 + 40, v5, 0, (unsigned int)&P, (__int64)&Size);
        if ( v21 >= 0 )
        {
          v6 = a1;
LABEL_23:
          Size_4 = v49;
          v13 = Size + (unsigned int)v49;
          v49 = v13;
LABEL_24:
          v54 = v13;
          v24 = ExAllocatePoolWithTag(PagedPool, v13, 0x4B444342u);
          PoolWithTag = (size_t)v24;
          if ( !v24 )
          {
LABEL_25:
            v21 = -1073741670;
            goto LABEL_77;
          }
          memset(v24, 0, v54);
          *(_DWORD *)PoolWithTag = 8;
          if ( v6[4] )
          {
            *(_DWORD *)(PoolWithTag + 20) = 1;
            v25 = (const wchar_t *)(v6 + 7);
            do
              ++v14;
            while ( v25[v14] );
            wcscpy_s((wchar_t *)(PoolWithTag + 32), v14 + 1, v25);
          }
          else
          {
            *(_DWORD *)(PoolWithTag + 20) = 0;
            *(_DWORD *)(PoolWithTag + 28) = v6[5];
          }
          if ( P )
          {
            v26 = Size_4;
            *(_DWORD *)(PoolWithTag + 24) = Size_4;
            memmove((void *)(PoolWithTag + v26), P, Size);
          }
          v9 = v49;
          v21 = 0;
          goto LABEL_76;
        }
        v9 = v49;
        goto LABEL_70;
      }
    }
    v21 = BiVerifyBootPartition((_DWORD)v6, 0, 0, 0, 0LL, (__int64)&Size_4);
    if ( v21 < 0 )
      goto LABEL_70;
    if ( (v57 & 0x20) != 0 && Size_4 )
    {
      v21 = -1073741823;
      goto LABEL_43;
    }
    v21 = BiGetNtPartitionPath(a1, &v50, v27, 0LL);
    if ( v21 < 0 )
    {
      Src = (void *)v50;
LABEL_43:
      if ( !Size_4 )
        goto LABEL_67;
      v21 = BiConvertBootEnvironmentDeviceToNt((unsigned int)a1 + Size_4, a2, 0, (unsigned int)&P, (__int64)&Size);
      if ( v21 >= 0 )
      {
        v28 = Size + 34;
        v49 = Size + 34;
        v47 = Size + 34;
        v29 = ExAllocatePoolWithTag(PagedPool, v49, 0x4B444342u);
        v52 = (size_t)v29;
        PoolWithTag = (size_t)v29;
        if ( !v29 )
          goto LABEL_25;
        memset(v29, 0, v28);
        *(_DWORD *)PoolWithTag = 8;
        v30 = 301989890;
        *(_DWORD *)(PoolWithTag + 20) = 0;
        if ( a2 )
        {
          if ( a2 == 553648129 )
          {
            v30 = 570425346;
          }
          else if ( a2 == 285212739 )
          {
            v30 = 301989956;
          }
        }
        *(_DWORD *)(PoolWithTag + 28) = v30;
        *(_DWORD *)(PoolWithTag + 24) = 34;
        memmove((void *)(PoolWithTag + 34), P, Size);
        v9 = v49;
        goto LABEL_67;
      }
LABEL_70:
      if ( v21 == -1073741670 )
        goto LABEL_75;
      if ( PoolWithTag )
        ExFreePoolWithTag((PVOID)PoolWithTag, 0);
      goto LABEL_73;
    }
    v31 = (const void *)v50;
    v32 = -1LL;
    Src = (void *)v50;
    v44 = 1;
    do
      ++v32;
    while ( *(_WORD *)(v50 + 2 * v32) );
    v33 = 2 * v32 + 2;
    v9 = 2 * v32 + 22;
    v55 = v33;
    v52 = v9;
    v34 = ExAllocatePoolWithTag(PagedPool, v9, 0x4B444342u);
    PoolWithTag = (size_t)v34;
    if ( !v34 )
      goto LABEL_25;
    memset(v34, 0, v52);
    *(_DWORD *)PoolWithTag = 2;
    memmove((void *)(PoolWithTag + 20), v31, v55);
LABEL_36:
    v21 = 0;
    goto LABEL_76;
  }
  v35 = v6[4];
  if ( ((v35 - 3) & 0xFFFFFFFD) != 0 )
  {
LABEL_74:
    v42 = BiConvertBootEnvironmentDeviceToUnknown(v6);
    PoolWithTag = v52;
    v21 = v42;
    v9 = v47;
LABEL_75:
    if ( v21 < 0 )
      goto LABEL_77;
    goto LABEL_76;
  }
  v36 = (size_t)(v6 + 13);
  if ( v35 != 3 )
    v36 = (size_t)(v6 + 8);
  v49 = v36;
  v21 = BiConvertBootEnvironmentDeviceToNt(v36, a2, 0, (unsigned int)&P, (__int64)&Size);
  if ( v21 < 0 )
    goto LABEL_70;
  if ( *(_DWORD *)P == 3 )
    goto LABEL_73;
  v37 = (void *)(v49 + *(unsigned int *)(v49 + 8));
  Src = v37;
  v38 = -1LL;
  do
    ++v38;
  while ( *((_WORD *)v37 + v38) );
  v39 = 2 * v38 + 34;
  LODWORD(v50) = 2 * v38 + 2;
  if ( v39 < 0x20 || v39 + Size < v39 )
  {
LABEL_73:
    v6 = a1;
    goto LABEL_74;
  }
  Size_4 = (2 * v38 + 33) & 0xFFFFFFF8;
  v9 = Size_4 + Size;
  v49 = Size_4 + Size;
  v47 = Size_4 + Size;
  v40 = ExAllocatePoolWithTag(PagedPool, v49, 0x4B444342u);
  v52 = (size_t)v40;
  PoolWithTag = (size_t)v40;
  if ( !v40 )
    goto LABEL_25;
  memset(v40, 0, v49);
  memmove((void *)(PoolWithTag + 24), v37, (unsigned int)v50);
  v41 = Size_4;
  *(_DWORD *)(PoolWithTag + 20) = Size_4;
  memmove((void *)(PoolWithTag + v41), P, Size);
  *(_DWORD *)PoolWithTag = 4 - (a1[4] != 3);
  v21 = 0;
LABEL_67:
  if ( v21 < 0 )
    goto LABEL_70;
LABEL_76:
  *a4 = PoolWithTag;
  *a5 = v9;
LABEL_77:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v44 )
    goto LABEL_80;
  return (unsigned int)v21;
}
