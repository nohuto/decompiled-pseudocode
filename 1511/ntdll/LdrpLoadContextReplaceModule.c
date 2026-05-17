/*
 * XREFs of LdrpLoadContextReplaceModule @ 0x18007665C
 * Callers:
 *     LdrpMapDllFullPath @ 0x18000946C (LdrpMapDllFullPath.c)
 *     LdrpMapDllSearchPath @ 0x18000A018 (LdrpMapDllSearchPath.c)
 *     LdrpMapDllWithSectionHandle @ 0x18000E5C0 (LdrpMapDllWithSectionHandle.c)
 *     LdrpLoadKnownDll @ 0x1800105C0 (LdrpLoadKnownDll.c)
 * Callees:
 *     LdrpDependencyExist @ 0x180010DB8 (LdrpDependencyExist.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     LdrpDereferenceModule @ 0x180032630 (LdrpDereferenceModule.c)
 *     LdrpQueueWork @ 0x1800767BC (LdrpQueueWork.c)
 */

signed __int64 __fastcall LdrpLoadContextReplaceModule(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  char *v6; // rdx
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // rbx
  int v10; // eax
  _QWORD **v11; // rcx
  _QWORD *v12; // rdi
  unsigned __int64 v13; // rdi
  __int64 v14; // rsi
  _QWORD *v15; // r8
  _QWORD *i; // rcx
  int v17; // eax
  _QWORD *v20; // rcx
  _QWORD *v21; // rdx

  RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpModuleDatatableLock, (char *)a2, a3, a4);
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 152LL);
  *(_QWORD *)(a1 + 48) = a2;
  v9 = *(_QWORD *)(a2 + 152);
  v10 = *(_DWORD *)(v9 + 24);
  if ( v10 != -1 )
    *(_DWORD *)(v9 + 24) = v10 + 1;
  *(_DWORD *)(v8 + 24) = 0;
  if ( *(_QWORD *)(v8 + 48) )
  {
    v11 = *(_QWORD ***)(v8 + 48);
    if ( v11 )
    {
      v12 = *v11;
      if ( *v11 == v11 )
        *(_QWORD *)(v8 + 48) = 0LL;
      else
        *v11 = (_QWORD *)*v12;
    }
    else
    {
      v12 = 0LL;
    }
    LdrpDereferenceModule(a2, v6, v8, v7);
    v13 = v12[1] & 0xFFFFFFFFFFFFFFF8uLL;
    v14 = *(_QWORD *)(*(_QWORD *)v13 + 16LL);
    if ( LdrpDependencyExist(v13, v9) )
    {
      for ( i = *(_QWORD **)(v13 + 40); (_QWORD *)*i != v15; i = (_QWORD *)*i )
        ;
      *i = *v15;
      if ( *(_QWORD **)(v13 + 40) == v15 )
      {
        if ( i == v15 )
          i = 0LL;
        *(_QWORD *)(v13 + 40) = i;
      }
      v17 = *(_DWORD *)(v9 + 24);
      if ( v17 != -1 )
        *(_DWORD *)(v9 + 24) = v17 - 1;
      RtlFreeHeap(LdrpHeap, 0, (unsigned __int64)v15);
      v15 = 0LL;
    }
    else
    {
      v15[1] = v9;
      v20 = v15 + 2;
      v21 = *(_QWORD **)(v9 + 48);
      if ( v21 )
      {
        *v20 = *v21;
        *v21 = v20;
      }
      else
      {
        *v20 = v20;
      }
      *(_QWORD *)(v9 + 48) = v20;
    }
    if ( v14 && (*(int *)(v9 + 56) >= 2 || !v15) && (*(_DWORD *)(v14 + 92))-- == 1 )
    {
      *(_DWORD *)(v13 + 56) = 4;
      LdrpQueueWork(v14);
    }
  }
  return RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
}
