/*
 * XREFs of BiVerifyBootPartition @ 0x14053F474
 * Callers:
 *     BiConvertBootEnvironmentDeviceToNt @ 0x14053CE68 (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiGetNtPartitionPath @ 0x14053CFD0 (BiGetNtPartitionPath.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x14053CE68 (BiConvertBootEnvironmentDeviceToNt.c)
 */

__int64 __fastcall BiVerifyBootPartition(int *a1, _QWORD *a2, _QWORD *a3, _QWORD *a4, _QWORD *a5, unsigned int *a6)
{
  void *v7; // rcx
  _QWORD *v8; // r11
  _QWORD *v9; // r15
  unsigned int v10; // r12d
  char *v11; // rdi
  int v12; // r10d
  _DWORD *v13; // rbp
  _DWORD *v14; // r14
  _DWORD *v15; // rsi
  unsigned int v16; // edx
  unsigned int v17; // ebx
  int v19; // edx
  unsigned __int64 v20; // r8
  char *v21; // r10
  int v22; // eax
  __int64 v23; // rax
  size_t v24; // r13
  __int64 v25; // rax
  __int64 v26; // rbx
  size_t v27; // rbx
  unsigned int v28; // r15d
  char *PoolWithTag; // rax
  size_t v30[11]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v31; // [rsp+90h] [rbp+8h] BYREF
  _QWORD *v32; // [rsp+98h] [rbp+10h]
  _QWORD *v33; // [rsp+A0h] [rbp+18h]
  _QWORD *v34; // [rsp+A8h] [rbp+20h]

  v34 = a4;
  v33 = a3;
  v32 = a2;
  v7 = 0LL;
  v8 = a3;
  v9 = a2;
  v30[0] = 0LL;
  v10 = 0;
  v11 = 0LL;
  v12 = *a1;
  if ( *a1 == 2 )
  {
    v14 = a1 + 4;
    v16 = 32;
    v15 = a1 + 8;
  }
  else
  {
    if ( v12 == 6 )
    {
      v13 = a1 + 4;
      v14 = 0LL;
      v15 = a1 + 8;
      v16 = 32;
      goto LABEL_4;
    }
    if ( v12 != 8 )
      return (unsigned int)-1073741811;
    v19 = a1[6];
    if ( !v19 )
      return (unsigned int)-1073741811;
    v16 = v19 + 16;
    v14 = 0LL;
    v15 = (int *)((char *)a1 + v16);
  }
  v13 = 0LL;
LABEL_4:
  if ( !*v15 )
  {
LABEL_5:
    v17 = 0;
    if ( v9 )
      *v9 = v13;
    if ( v8 )
      *v8 = v14;
    if ( a4 )
      *a4 = v15;
    if ( a6 )
      *a6 = v10;
    if ( a5 )
    {
      *a5 = v11;
      v11 = 0LL;
    }
    goto LABEL_15;
  }
  if ( *v15 != 6 )
    return (unsigned int)-1073741811;
  v20 = (unsigned int)a1[2];
  v10 = v16 + 24;
  v21 = (char *)a1 + v16 + 24;
  if ( v20 < (unsigned __int64)(v16 + 44) + 16
    || (unsigned int)v20 < v10 + *((_DWORD *)v21 + 2)
    || *(_DWORD *)v21
    || *((_DWORD *)v21 + 4) != 5 )
  {
    return (unsigned int)-1073741811;
  }
  v22 = BiConvertBootEnvironmentDeviceToNt(v21, 0, 0, v30, (unsigned int *)&v31);
  v7 = (void *)v30[0];
  v17 = v22;
  if ( v22 >= 0 )
  {
    if ( (unsigned int)v31 >= 0x2E
      && *(_DWORD *)v30[0] == 3
      && (v23 = *(unsigned int *)(v30[0] + 20), *(_DWORD *)(v23 + v30[0]) == 2) )
    {
      v24 = v23 + v30[0];
      v25 = -1LL;
      v26 = -1LL;
      do
        ++v26;
      while ( *(_WORD *)(v24 + 2 * v26 + 20) );
      v27 = (unsigned int)(2 * v26);
      do
        ++v25;
      while ( *(_WORD *)(v30[0] + 2 * v25 + 24) );
      v28 = 2 * v25 + 2;
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v28 + (unsigned int)v27, 0x4B444342u);
      v11 = PoolWithTag;
      if ( PoolWithTag )
      {
        memmove(PoolWithTag, (const void *)(v24 + 20), v27);
        memmove(&v11[v27], (const void *)(v30[0] + 24), v28);
        v7 = (void *)v30[0];
        a4 = v34;
        v8 = v33;
        v9 = v32;
        goto LABEL_5;
      }
      v7 = (void *)v30[0];
      v17 = -1073741801;
    }
    else
    {
      v17 = -1073741811;
    }
  }
LABEL_15:
  if ( v7 )
    ExFreePoolWithTag(v7, 0x4B444342u);
  if ( v11 )
    ExFreePoolWithTag(v11, 0x4B444342u);
  return v17;
}
