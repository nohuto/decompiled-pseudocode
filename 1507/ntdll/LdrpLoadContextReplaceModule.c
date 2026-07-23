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

void __fastcall LdrpLoadContextReplaceModule(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // rbx
  int v6; // eax
  _QWORD **v7; // rcx
  _QWORD *v8; // rdi
  unsigned __int64 v9; // rdi
  __int64 v10; // rsi
  _QWORD *v11; // r8
  _QWORD *i; // rcx
  int v13; // eax
  _QWORD *v15; // rcx
  _QWORD *v16; // rdx

  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 152LL);
  *(_QWORD *)(a1 + 48) = a2;
  v5 = *(_QWORD *)(a2 + 152);
  v6 = *(_DWORD *)(v5 + 24);
  if ( v6 != -1 )
    *(_DWORD *)(v5 + 24) = v6 + 1;
  *(_DWORD *)(v4 + 24) = 0;
  if ( *(_QWORD *)(v4 + 48) )
  {
    v7 = *(_QWORD ***)(v4 + 48);
    if ( v7 )
    {
      v8 = *v7;
      if ( *v7 == v7 )
        *(_QWORD *)(v4 + 48) = 0LL;
      else
        *v7 = (_QWORD *)*v8;
    }
    else
    {
      v8 = 0LL;
    }
    LdrpDereferenceModule((char *)a2);
    v9 = v8[1] & 0xFFFFFFFFFFFFFFF8uLL;
    v10 = *(_QWORD *)(*(_QWORD *)v9 + 16LL);
    if ( (unsigned __int8)LdrpDependencyExist(v9, v5) )
    {
      for ( i = *(_QWORD **)(v9 + 40); (_QWORD *)*i != v11; i = (_QWORD *)*i )
        ;
      *i = *v11;
      if ( *(_QWORD **)(v9 + 40) == v11 )
      {
        if ( i == v11 )
          i = 0LL;
        *(_QWORD *)(v9 + 40) = i;
      }
      v13 = *(_DWORD *)(v5 + 24);
      if ( v13 != -1 )
        *(_DWORD *)(v5 + 24) = v13 - 1;
      RtlFreeHeap(LdrpHeap, 0, v11);
      v11 = 0LL;
    }
    else
    {
      v11[1] = v5;
      v15 = v11 + 2;
      v16 = *(_QWORD **)(v5 + 48);
      if ( v16 )
      {
        *v15 = *v16;
        *v16 = v15;
      }
      else
      {
        *v15 = v15;
      }
      *(_QWORD *)(v5 + 48) = v15;
    }
    if ( v10 && (*(int *)(v5 + 56) >= 2 || !v11) && (*(_DWORD *)(v10 + 92))-- == 1 )
    {
      *(_DWORD *)(v9 + 56) = 4;
      LdrpQueueWork(v10);
    }
  }
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
}
