/*
 * XREFs of LdrpMapAndSnapDependency @ 0x180021DC4
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x180040678 (LdrpMapDllWithSectionHandle.c)
 *     LdrpInitializeProcess @ 0x1800BEA44 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpSnapModule @ 0x1800156C0 (LdrpSnapModule.c)
 *     RtlImageDirectoryEntryToData @ 0x180016860 (RtlImageDirectoryEntryToData.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x180018438 (LdrpPrepareImportAddressTableForSnap.c)
 *     LdrpLoadDependentModule @ 0x180022010 (LdrpLoadDependentModule.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     LdrpQueueWork @ 0x1800390B0 (LdrpQueueWork.c)
 *     LdrpFindDllActivationContext @ 0x18006A538 (LdrpFindDllActivationContext.c)
 */

unsigned __int64 __fastcall LdrpMapAndSnapDependency(__int64 a1)
{
  __int64 v1; // rsi
  int DllActivationContext; // edi
  int v4; // ebp
  __int64 v5; // rax
  __int64 v6; // r13
  unsigned int v7; // r15d
  unsigned int *v8; // r14
  _DWORD *v9; // rdx
  unsigned __int64 result; // rax
  unsigned int v11; // r15d
  __int64 v12; // rdx
  __int64 v13; // rcx
  bool v14; // zf
  char *v15; // rcx
  STRING SourceString; // [rsp+30h] [rbp-48h] BYREF
  int v17; // [rsp+80h] [rbp+8h] BYREF
  __int64 v18; // [rsp+88h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  DllActivationContext = LdrpFindDllActivationContext(v1);
  if ( DllActivationContext < 0 )
    goto LABEL_34;
  DllActivationContext = LdrpPrepareImportAddressTableForSnap((_QWORD *)a1);
  if ( DllActivationContext < 0 )
    goto LABEL_34;
  v4 = 0;
  if ( !*(_QWORD *)(a1 + 96) )
    goto LABEL_33;
  v5 = RtlImageDirectoryEntryToData(*(_QWORD *)(v1 + 48), 1, 1u, &v17);
  v6 = v5;
  v7 = 0;
  v8 = (unsigned int *)(v5 + 12);
  if ( !*(_DWORD *)(v5 + 12) )
    goto LABEL_39;
  v9 = (_DWORD *)(v5 + 16);
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
  result = RtlAllocateHeap(LdrpHeap, (NtdllBaseTag + 1572864) | 8u, 8LL * v7);
  *(_QWORD *)(a1 + 80) = result;
  if ( result )
  {
    *(_DWORD *)(a1 + 88) = v7;
    result = (unsigned int)(v4 + 1);
    *(_DWORD *)(a1 + 92) = result;
    v11 = 0;
    *(_QWORD *)(a1 + 120) = v6;
    v18 = 0LL;
    if ( *v8 )
    {
      while ( v8[1] )
      {
        v12 = *(_QWORD *)(v1 + 48);
        result = v8[1];
        if ( *(_QWORD *)(result + v12) )
        {
          v13 = *v8;
          v14 = v12 + v13 == 0;
          v15 = (char *)(v12 + v13);
          *(_DWORD *)&SourceString.Length = 0;
          SourceString.Buffer = v15;
          if ( !v14 )
          {
            result = -1LL;
            do
              ++result;
            while ( v15[result] );
            if ( result > 0xFFFE )
            {
              DllActivationContext = -1073741562;
              break;
            }
            SourceString.Length = result;
            SourceString.MaximumLength = result + 1;
          }
          result = LdrpLoadDependentModule(&SourceString, *(_QWORD *)(a1 + 80) + 8LL * v11, (__int64)&v18);
          DllActivationContext = result;
          if ( (result & 0x80000000) != 0LL )
            break;
        }
        v8 += 5;
        ++v11;
        if ( !*v8 )
          break;
      }
      if ( v18 )
        result = RtlFreeHeap(LdrpHeap, 0LL, v18);
    }
    if ( DllActivationContext >= 0 )
    {
      RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
      v4 = --*(_DWORD *)(a1 + 92);
      result = RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
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
      {
        result = LdrpQueueWork(a1);
      }
      else
      {
        result = LdrpSnapModule(a1);
        DllActivationContext = result;
      }
      goto LABEL_30;
    }
LABEL_33:
    result = *(_QWORD *)(v1 + 152);
    *(_DWORD *)(result + 56) = 5;
  }
LABEL_30:
  if ( DllActivationContext < 0 )
  {
LABEL_34:
    result = *(_QWORD *)(a1 + 32);
    *(_DWORD *)result = DllActivationContext;
  }
  return result;
}
