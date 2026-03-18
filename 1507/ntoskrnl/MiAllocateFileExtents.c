/*
 * XREFs of MiAllocateFileExtents @ 0x1406AA2A0
 * Callers:
 *     MiInitializeFileExtents @ 0x140230AFC (MiInitializeFileExtents.c)
 * Callees:
 *     MI_REFERENCE_CONTROL_AREA_FILE @ 0x140088960 (MI_REFERENCE_CONTROL_AREA_FILE.c)
 *     MI_DEREFERENCE_CONTROL_AREA_FILE @ 0x140088A90 (MI_DEREFERENCE_CONTROL_AREA_FILE.c)
 *     FsRtlGetFileExtents @ 0x1401E1E44 (FsRtlGetFileExtents.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiAllocateFileExtents(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 v5; // rbp
  ULONG_PTR v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int FileExtents; // esi
  unsigned __int64 v11; // rdx
  __int64 result; // rax
  _QWORD *PoolWithTag; // rax
  _QWORD *v14; // rbx
  unsigned int *v15; // r8
  _QWORD *v16; // rdx
  unsigned __int64 v17; // rbp
  unsigned int i; // r9d
  unsigned int v19; // r11d
  unsigned __int64 v20; // rsi
  __int64 v21; // rcx
  unsigned __int64 v22; // rax
  PVOID P; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0LL;
  v5 = (unsigned int)(*(_DWORD *)(a1 + 44) + *(_DWORD *)(a1 + 52));
  v3 = *(_QWORD *)a1;
  *a2 = 0LL;
  P = 0LL;
  v6 = MI_REFERENCE_CONTROL_AREA_FILE(v3);
  FileExtents = FsRtlGetFileExtents(v7, v6, v8, v9, &P);
  MI_DEREFERENCE_CONTROL_AREA_FILE(v3, v11);
  if ( FileExtents < 0 )
    return (unsigned int)FileExtents;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8 * v5 + 8, 0x6546694Du);
  v14 = PoolWithTag;
  if ( PoolWithTag )
  {
    v15 = (unsigned int *)P;
    v16 = PoolWithTag + 1;
    *PoolWithTag = 0LL;
    v17 = (unsigned __int64)&PoolWithTag[v5 + 1];
    for ( i = 0; i < *v15; ++i )
    {
      v19 = 0;
      v20 = *(_QWORD *)&v15[4 * i + 6];
      if ( v20 )
      {
        v21 = 0LL;
        do
        {
          ++v19;
          *v16++ = *(_QWORD *)&v15[4 * i + 4] + v21;
          v21 = v19;
        }
        while ( v19 < v20 );
      }
    }
    v22 = (v17 - (unsigned __int64)v16 + 7) >> 3;
    if ( (unsigned __int64)v16 > v17 )
      v22 = 0LL;
    if ( v22 )
    {
      do
      {
        *v16 = -1LL;
        ++v2;
        ++v16;
      }
      while ( v2 < v22 );
    }
    ExFreePoolWithTag(v15, 0);
    result = 0LL;
    *a2 = v14;
  }
  else
  {
    ExFreePoolWithTag(P, 0);
    return 3221225626LL;
  }
  return result;
}
