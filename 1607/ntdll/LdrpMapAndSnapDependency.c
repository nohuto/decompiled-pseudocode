/*
 * XREFs of LdrpMapAndSnapDependency @ 0x180016424
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x18002F25C (LdrpMapDllWithSectionHandle.c)
 *     LdrpInitializeProcess @ 0x180091E24 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpLoadDependentModule @ 0x180016670 (LdrpLoadDependentModule.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x1800310D8 (LdrpPrepareImportAddressTableForSnap.c)
 *     RtlImageDirectoryEntryToData @ 0x180031AF0 (RtlImageDirectoryEntryToData.c)
 *     LdrpSnapModule @ 0x180033F90 (LdrpSnapModule.c)
 *     LdrpQueueWork @ 0x18003C7E0 (LdrpQueueWork.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     LdrpFindDllActivationContext @ 0x180076FA8 (LdrpFindDllActivationContext.c)
 */

void __fastcall LdrpMapAndSnapDependency(__int64 a1)
{
  __int64 v1; // rsi
  int DllActivationContext; // edi
  int v4; // ebp
  _DWORD *v5; // rax
  _DWORD *v6; // r13
  unsigned int v7; // r15d
  unsigned int *v8; // r14
  _DWORD *v9; // rdx
  PVOID Heap; // rax
  unsigned int v11; // r15d
  __int64 v12; // rdx
  __int64 v13; // rcx
  bool v14; // zf
  char *v15; // rcx
  unsigned __int64 v16; // rax
  ANSI_STRING SourceString; // [rsp+30h] [rbp-48h] BYREF
  ULONG Size; // [rsp+80h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+88h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  DllActivationContext = LdrpFindDllActivationContext(v1);
  if ( DllActivationContext < 0 )
    goto LABEL_34;
  DllActivationContext = LdrpPrepareImportAddressTableForSnap(a1);
  if ( DllActivationContext < 0 )
    goto LABEL_34;
  v4 = 0;
  if ( !*(_QWORD *)(a1 + 96) )
    goto LABEL_33;
  v5 = RtlImageDirectoryEntryToData(*(PVOID *)(v1 + 48), 1u, 1u, &Size);
  v6 = v5;
  v7 = 0;
  v8 = v5 + 3;
  if ( !v5[3] )
    goto LABEL_39;
  v9 = v5 + 4;
  do
  {
    if ( !*v9 )
      break;
    ++v7;
    if ( *(_QWORD *)((unsigned int)*v9 + *(_QWORD *)(v1 + 48)) )
      ++v4;
    v9 += 5;
  }
  while ( *(v9 - 1) );
  if ( !v4 )
    goto LABEL_39;
  Heap = RtlAllocateHeap(LdrpHeap, (NtdllBaseTag + 1572864) | 8, 8LL * v7);
  *(_QWORD *)(a1 + 80) = Heap;
  if ( Heap )
  {
    *(_DWORD *)(a1 + 88) = v7;
    *(_DWORD *)(a1 + 92) = v4 + 1;
    v11 = 0;
    *(_QWORD *)(a1 + 120) = v6;
    BaseAddress = 0LL;
    if ( *v8 )
    {
      while ( v8[1] )
      {
        v12 = *(_QWORD *)(v1 + 48);
        if ( *(_QWORD *)(v8[1] + v12) )
        {
          v13 = *v8;
          v14 = v12 + v13 == 0;
          v15 = (char *)(v12 + v13);
          *(_DWORD *)&SourceString.Length = 0;
          SourceString.Buffer = v15;
          if ( !v14 )
          {
            v16 = -1LL;
            do
              ++v16;
            while ( v15[v16] );
            if ( v16 > 0xFFFE )
            {
              DllActivationContext = -1073741562;
              break;
            }
            SourceString.Length = v16;
            SourceString.MaximumLength = v16 + 1;
          }
          DllActivationContext = LdrpLoadDependentModule(
                                   &SourceString,
                                   *(_QWORD *)(a1 + 80) + 8LL * v11,
                                   (__int64)&BaseAddress);
          if ( DllActivationContext < 0 )
            break;
        }
        v8 += 5;
        ++v11;
        if ( !*v8 )
          break;
      }
      if ( BaseAddress )
        RtlFreeHeap(LdrpHeap, 0, BaseAddress);
    }
    if ( DllActivationContext >= 0 )
    {
      RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
      v4 = --*(_DWORD *)(a1 + 92);
      RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
    }
  }
  else
  {
    DllActivationContext = -1073741801;
  }
  if ( !v4 )
  {
LABEL_39:
    if ( *(_QWORD *)(a1 + 96) )
    {
      *(_DWORD *)(*(_QWORD *)(v1 + 152) + 56LL) = 4;
      if ( *(_QWORD *)(a1 + 40) )
        LdrpQueueWork(a1);
      else
        DllActivationContext = LdrpSnapModule(a1);
      goto LABEL_30;
    }
LABEL_33:
    *(_DWORD *)(*(_QWORD *)(v1 + 152) + 56LL) = 5;
  }
LABEL_30:
  if ( DllActivationContext < 0 )
LABEL_34:
    **(_DWORD **)(a1 + 32) = DllActivationContext;
}
