/*
 * XREFs of ReferenceClass @ 0x1C0112A60
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 * Callees:
 *     ?ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z @ 0x1C0070A84 (-ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z.c)
 *     ?ClassFree@@YAXPEAUtagDESKTOP@@PEAX@Z @ 0x1C008FCBC (-ClassFree@@YAXPEAUtagDESKTOP@@PEAX@Z.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 */

__int64 __fastcall ReferenceClass(int *Src, __int64 a2)
{
  PVOID *v2; // rbx
  unsigned int v5; // r15d
  PVOID *v7; // rsi
  PVOID *v8; // rax
  __int64 v9; // r14
  __int64 v10; // rdi
  unsigned int v11; // edi
  PVOID v12; // rax
  __int64 v13; // r8
  __int64 v14; // rax
  const void *v15; // rdx
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r8

  v2 = *(PVOID **)(a2 + 24);
  v5 = 0;
  if ( *((PVOID **)Src + 2) == v2 )
  {
    ++Src[20];
    return 1LL;
  }
  v7 = (PVOID *)*((_QWORD *)Src + 9);
  if ( v7 )
  {
    do
    {
      if ( v7[2] == v2 )
        break;
      v7 = (PVOID *)*v7;
    }
    while ( v7 );
    if ( v7 )
    {
LABEL_13:
      ++Src[20];
      ++*((_DWORD *)v7 + 20);
      *(_QWORD *)(a2 + 152) = v7;
      return 1LL;
    }
  }
  v8 = (PVOID *)ClassAlloc(v2, Src[24] + 160 + (*((_BYTE *)Src + 34) & 8u));
  v7 = v8;
  if ( v8 )
  {
    memmove(v8, Src, (*((_BYTE *)Src + 34) & 8) + Src[24] + 160LL);
    v9 = -1LL;
    v10 = -1LL;
    do
      ++v10;
    while ( *(_BYTE *)(*((_QWORD *)Src + 18) + v10) );
    v11 = v10 + 1;
    v12 = ClassAlloc(v2, v11);
    v7[18] = v12;
    if ( v12 )
    {
      v14 = *((_QWORD *)Src + 17);
      if ( (v14 & 0xFFFFFFFFFFFF0000uLL) == 0 )
        goto LABEL_10;
      do
        ++v9;
      while ( *(_WORD *)(v14 + 2 * v9) );
      v5 = 2 * v9 + 2;
      v17 = Win32AllocPoolWithQuota(v5, 2020897621LL);
      v7[17] = (PVOID)v17;
      if ( v17 )
      {
LABEL_10:
        v7[2] = 0LL;
        LockObjectAssignment(v7 + 2, v2);
        *v7 = (PVOID)*((_QWORD *)Src + 9);
        v7[9] = 0LL;
        v15 = (const void *)*((_QWORD *)Src + 18);
        *((_QWORD *)Src + 9) = v7;
        memmove(v7[18], v15, v11);
        v16 = (unsigned __int64)v7[17];
        if ( (v16 & 0xFFFFFFFFFFFF0000uLL) != 0 )
          memmove((void *)v16, *((const void **)Src + 17), v5);
        v7[15] = 0LL;
        v7[14] = 0LL;
        v7[19] = 0LL;
        HMAssignmentLock(v7 + 14, *((_QWORD *)Src + 14));
        HMAssignmentLock(v7 + 19, *((_QWORD *)Src + 19));
        HMAssignmentLock(v7 + 15, *((_QWORD *)Src + 15));
        v7[7] = 0LL;
        *((_DWORD *)v7 + 20) = 0;
        goto LABEL_13;
      }
      ClassFree((struct tagDESKTOP *)v2, v7[18], v18);
    }
    ClassFree((struct tagDESKTOP *)v2, v7, v13);
  }
  return 0LL;
}
