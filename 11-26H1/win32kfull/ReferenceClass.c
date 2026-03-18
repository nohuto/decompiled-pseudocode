/*
 * XREFs of ReferenceClass @ 0x140151720
 * Callers:
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 * Callees:
 *     ?ClassFree@@YAXPEAUtagDESKTOP@@PEAUtagCLS@@@Z @ 0x14014FC0C (-ClassFree@@YAXPEAUtagDESKTOP@@PEAUtagCLS@@@Z.c)
 *     ?ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z @ 0x140150318 (-ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z.c)
 *     ?ClassAllocString@@YAPEAXQEAUtagDESKTOP@@KK@Z @ 0x1401503F0 (-ClassAllocString@@YAPEAXQEAUtagDESKTOP@@KK@Z.c)
 *     ??$InitLookAsideRef@UtagCLS@@@@YAEPEAUtagCLS@@@Z @ 0x14015053C (--$InitLookAsideRef@UtagCLS@@@@YAEPEAUtagCLS@@@Z.c)
 *     ??4?$SharedPointerFieldlpszAnsiClassName@D@tagCLS@@QEAAPEADPEAD@Z @ 0x1401507C0 (--4-$SharedPointerFieldlpszAnsiClassName@D@tagCLS@@QEAAPEADPEAD@Z.c)
 *     ??4?$SharedMixedObjectPointerFieldpcls@UtagCLS@@@tagWND@@QEAAPEAUtagCLS@@PEAU2@@Z @ 0x140151A04 (--4-$SharedMixedObjectPointerFieldpcls@UtagCLS@@@tagWND@@QEAAPEAUtagCLS@@PEAU2@@Z.c)
 *     ?ClassFree@@YAXPEAUtagDESKTOP@@PEAD@Z @ 0x1401F5F90 (-ClassFree@@YAXPEAUtagDESKTOP@@PEAD@Z.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall ReferenceClass(__int64 a1, __int64 a2)
{
  struct tagDESKTOP *v2; // rsi
  size_t v5; // rbp
  struct tagDESKTOP *i; // rbx
  struct tagDESKTOP *v8; // rax
  void *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  size_t v13; // r12
  __int64 v14; // rax
  void **v15; // r14
  __int64 v16; // rcx
  const void *v17; // rdx
  unsigned __int64 v18; // rcx
  _QWORD *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  char *v24; // [rsp+20h] [rbp-38h] BYREF
  _QWORD *v25; // [rsp+28h] [rbp-30h]

  v2 = *(struct tagDESKTOP **)(a2 + 24);
  v5 = 0LL;
  if ( *(struct tagDESKTOP **)(a1 + 32) == v2 )
  {
    ++*(_DWORD *)(a1 + 72);
    return 1LL;
  }
  else
  {
    for ( i = *(struct tagDESKTOP **)(a1 + 64); i; i = *(struct tagDESKTOP **)i )
    {
      if ( *((struct tagDESKTOP **)i + 4) == v2 )
        goto LABEL_21;
    }
    v8 = (struct tagDESKTOP *)ClassAlloc(*(struct tagDESKTOP **)(a2 + 24), *(_DWORD *)(*(_QWORD *)(a1 + 8) + 12LL) + 88);
    i = v8;
    if ( v8 )
    {
      v9 = (void *)*((_QWORD *)v8 + 1);
      *((_OWORD *)v8 + 2) = *(_OWORD *)(a1 + 32);
      *((_OWORD *)v8 + 3) = *(_OWORD *)(a1 + 48);
      *((_OWORD *)v8 + 4) = *(_OWORD *)(a1 + 64);
      *((_OWORD *)v8 + 5) = *(_OWORD *)(a1 + 80);
      *((_QWORD *)v8 + 12) = *(_QWORD *)(a1 + 96);
      memmove(v9, *(const void **)(a1 + 8), *(int *)(*(_QWORD *)(a1 + 8) + 12LL) + 88LL);
      v12 = -1LL;
      do
        ++v12;
      while ( *(_BYTE *)(*(_QWORD *)(a1 + 104) + v12) );
      v13 = v12 + 1;
      v14 = ClassAllocString(v2, (unsigned int)(v12 + 1), v10, v11);
      if ( v14 )
      {
        v15 = (void **)((char *)i + 104);
        if ( v2 )
        {
          tagCLS::SharedPointerFieldlpszAnsiClassName<char>::operator=((_QWORD *)i + 13, v14);
        }
        else
        {
          *v15 = (void *)v14;
          *(_QWORD *)(*((_QWORD *)i + 1) + 48LL) = 0LL;
        }
        v16 = *(_QWORD *)(a1 + 96);
        if ( (v16 & 0xFFFFFFFFFFFF0000uLL) == 0 )
          goto LABEL_36;
        v21 = -1LL;
        do
          ++v21;
        while ( *(_WORD *)(v16 + 2 * v21) );
        v5 = 2 * v21 + 2;
        v22 = Win32AllocPoolWithQuotaZInit(v5, 2020897621LL);
        v23 = v22;
        if ( (v22 & 0xFFFFFFFFFFFF0000uLL) != 0 )
          v23 = -1LL;
        *(_QWORD *)(*((_QWORD *)i + 1) + 40LL) = v23;
        *((_QWORD *)i + 12) = v22;
        if ( v22 )
        {
LABEL_36:
          if ( InitLookAsideRef<tagCLS>((__int64)i) )
          {
            *((_QWORD *)i + 4) = 0LL;
            LockObjectAssignment((char *)i + 32, v2);
            *(_QWORD *)i = *(_QWORD *)(a1 + 64);
            *((_QWORD *)i + 8) = 0LL;
            v17 = *(const void **)(a1 + 104);
            *(_QWORD *)(a1 + 64) = i;
            memmove(*v15, v17, v13);
            v18 = *((_QWORD *)i + 12);
            if ( (v18 & 0xFFFFFFFFFFFF0000uLL) != 0 )
              memmove((void *)v18, *(const void **)(a1 + 96), v5);
            *((_QWORD *)i + 11) = 0LL;
            *(_QWORD *)(*((_QWORD *)i + 1) + 56LL) = 0LL;
            *((_QWORD *)i + 14) = 0LL;
            *((_QWORD *)i + 10) = 0LL;
            v24 = (char *)i + 80;
            v25 = *(_QWORD **)(a1 + 80);
            HMAssignmentLock(&v24, 0LL);
            v19 = *(_QWORD **)(a1 + 112);
            if ( v19 )
              v20 = *v19;
            else
              v20 = 0LL;
            *(_QWORD *)(*((_QWORD *)i + 1) + 56LL) = v20;
            v24 = (char *)i + 112;
            v25 = v19;
            HMAssignmentLock(&v24, 0LL);
            v25 = *(_QWORD **)(a1 + 88);
            v24 = (char *)i + 88;
            HMAssignmentLock(&v24, 0LL);
            *((_QWORD *)i + 6) = 0LL;
            *((_DWORD *)i + 18) = 0;
LABEL_21:
            ++*(_DWORD *)(a1 + 72);
            ++*((_DWORD *)i + 18);
            tagWND::SharedMixedObjectPointerFieldpcls<tagCLS>::operator=(a2 + 136, i);
            return 1LL;
          }
          Win32FreePool(*((void **)i + 12));
        }
        ClassFree(v2, (char *)*v15);
      }
      ClassFree((PVOID *)v2, (PVOID *)i);
    }
    return 0LL;
  }
}
