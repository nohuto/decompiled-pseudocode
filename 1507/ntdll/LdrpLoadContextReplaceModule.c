/*
 * XREFs of LdrpLoadContextReplaceModule @ 0x1800452D4
 * Callers:
 *     LdrpLoadKnownDll @ 0x18003FE98 (LdrpLoadKnownDll.c)
 *     LdrpMapDllWithSectionHandle @ 0x180040678 (LdrpMapDllWithSectionHandle.c)
 *     LdrpMapDllSearchPath @ 0x180042A04 (LdrpMapDllSearchPath.c)
 *     LdrpMapDllFullPath @ 0x180042CB4 (LdrpMapDllFullPath.c)
 * Callees:
 *     LdrpDereferenceModule @ 0x18001651C (LdrpDereferenceModule.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     LdrpQueueWork @ 0x1800390B0 (LdrpQueueWork.c)
 *     LdrpDependencyExist @ 0x180045524 (LdrpDependencyExist.c)
 */

signed __int64 __fastcall LdrpLoadContextReplaceModule(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r8
  __int64 v7; // rbx
  int v8; // eax
  _QWORD **v9; // rcx
  _QWORD *v10; // rdi
  unsigned __int64 v11; // rdi
  __int64 v12; // rsi
  _QWORD *v13; // r8
  _QWORD *i; // rcx
  int v15; // eax
  _QWORD *v18; // rcx
  _QWORD *v19; // rdx

  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock, (char *)a2, a3, a4);
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 152LL);
  *(_QWORD *)(a1 + 48) = a2;
  v7 = *(_QWORD *)(a2 + 152);
  v8 = *(_DWORD *)(v7 + 24);
  if ( v8 != -1 )
    *(_DWORD *)(v7 + 24) = v8 + 1;
  *(_DWORD *)(v6 + 24) = 0;
  if ( *(_QWORD *)(v6 + 48) )
  {
    v9 = *(_QWORD ***)(v6 + 48);
    if ( v9 )
    {
      v10 = *v9;
      if ( *v9 == v9 )
        *(_QWORD *)(v6 + 48) = 0LL;
      else
        *v9 = (_QWORD *)*v10;
    }
    else
    {
      v10 = 0LL;
    }
    LdrpDereferenceModule(a2);
    v11 = v10[1] & 0xFFFFFFFFFFFFFFF8uLL;
    v12 = *(_QWORD *)(*(_QWORD *)v11 + 16LL);
    if ( (unsigned __int8)LdrpDependencyExist(v11, v7) )
    {
      for ( i = *(_QWORD **)(v11 + 40); (_QWORD *)*i != v13; i = (_QWORD *)*i )
        ;
      *i = *v13;
      if ( *(_QWORD **)(v11 + 40) == v13 )
      {
        if ( i == v13 )
          i = 0LL;
        *(_QWORD *)(v11 + 40) = i;
      }
      v15 = *(_DWORD *)(v7 + 24);
      if ( v15 != -1 )
        *(_DWORD *)(v7 + 24) = v15 - 1;
      RtlFreeHeap(LdrpHeap, 0, (unsigned __int64)v13);
      v13 = 0LL;
    }
    else
    {
      v13[1] = v7;
      v18 = v13 + 2;
      v19 = *(_QWORD **)(v7 + 48);
      if ( v19 )
      {
        *v18 = *v19;
        *v19 = v18;
      }
      else
      {
        *v18 = v18;
      }
      *(_QWORD *)(v7 + 48) = v18;
    }
    if ( v12 && (*(int *)(v7 + 56) >= 2 || !v13) && (*(_DWORD *)(v12 + 92))-- == 1 )
    {
      *(_DWORD *)(v11 + 56) = 4;
      LdrpQueueWork((_QWORD *)v12);
    }
  }
  return RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
}
