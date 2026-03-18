/*
 * XREFs of ReferenceClass @ 0x1C00F3070
 * Callers:
 *     xxxCreateWindowEx @ 0x1C004C640 (xxxCreateWindowEx.c)
 * Callees:
 *     ?ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z @ 0x1C011D40C (-ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z.c)
 *     ?ClassFree@@YAXPEAUtagDESKTOP@@PEAX@Z @ 0x1C011E17C (-ClassFree@@YAXPEAUtagDESKTOP@@PEAX@Z.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 */

__int64 __fastcall ReferenceClass(int *Src, __int64 a2, unsigned int a3)
{
  struct tagDESKTOP *v3; // rbx
  unsigned int v6; // r15d
  struct tagDESKTOP *v8; // rsi
  struct tagDESKTOP *v9; // rax
  unsigned int v10; // r8d
  __int64 v11; // r14
  __int64 v12; // rdi
  unsigned int v13; // edi
  void *v14; // rax
  __int64 v15; // rax
  const void *v16; // rdx
  unsigned __int64 v17; // rcx
  __int64 v18; // rax

  v3 = *(struct tagDESKTOP **)(a2 + 24);
  v6 = 0;
  if ( *((struct tagDESKTOP **)Src + 2) == v3 )
  {
    ++Src[20];
    return 1LL;
  }
  v8 = (struct tagDESKTOP *)*((_QWORD *)Src + 9);
  if ( v8 )
  {
    do
    {
      if ( *((struct tagDESKTOP **)v8 + 2) == v3 )
        break;
      v8 = *(struct tagDESKTOP **)v8;
    }
    while ( v8 );
    if ( v8 )
    {
LABEL_13:
      ++Src[20];
      ++*((_DWORD *)v8 + 20);
      *(_QWORD *)(a2 + 152) = v8;
      return 1LL;
    }
  }
  v9 = (struct tagDESKTOP *)ClassAlloc(v3, (*((_BYTE *)Src + 34) & 8u) + 160 + Src[24], a3);
  v8 = v9;
  if ( v9 )
  {
    memmove(v9, Src, (*((_BYTE *)Src + 34) & 8) + Src[24] + 160LL);
    v11 = -1LL;
    v12 = -1LL;
    do
      ++v12;
    while ( *(_BYTE *)(*((_QWORD *)Src + 18) + v12) );
    v13 = v12 + 1;
    v14 = ClassAlloc(v3, v13, v10);
    *((_QWORD *)v8 + 18) = v14;
    if ( v14 )
    {
      v15 = *((_QWORD *)Src + 17);
      if ( (v15 & 0xFFFFFFFFFFFF0000uLL) == 0 )
        goto LABEL_10;
      do
        ++v11;
      while ( *(_WORD *)(v15 + 2 * v11) );
      v6 = 2 * v11 + 2;
      v18 = Win32AllocPoolWithQuota(v6, 2020897621LL);
      *((_QWORD *)v8 + 17) = v18;
      if ( v18 )
      {
LABEL_10:
        *((_QWORD *)v8 + 2) = 0LL;
        LockObjectAssignment((char *)v8 + 16, v3);
        *(_QWORD *)v8 = *((_QWORD *)Src + 9);
        *((_QWORD *)v8 + 9) = 0LL;
        v16 = (const void *)*((_QWORD *)Src + 18);
        *((_QWORD *)Src + 9) = v8;
        memmove(*((void **)v8 + 18), v16, v13);
        v17 = *((_QWORD *)v8 + 17);
        if ( (v17 & 0xFFFFFFFFFFFF0000uLL) != 0 )
          memmove((void *)v17, *((const void **)Src + 17), v6);
        *((_QWORD *)v8 + 15) = 0LL;
        *((_QWORD *)v8 + 14) = 0LL;
        *((_QWORD *)v8 + 19) = 0LL;
        HMAssignmentLock((char *)v8 + 112, *((_QWORD *)Src + 14));
        HMAssignmentLock((char *)v8 + 152, *((_QWORD *)Src + 19));
        HMAssignmentLock((char *)v8 + 120, *((_QWORD *)Src + 15));
        *((_QWORD *)v8 + 7) = 0LL;
        *((_DWORD *)v8 + 20) = 0;
        goto LABEL_13;
      }
      ClassFree(v3, *((void **)v8 + 18));
    }
    ClassFree(v3, v8);
  }
  return 0LL;
}
