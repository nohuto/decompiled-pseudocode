/*
 * XREFs of LdrpMapAndSnapDependency @ 0x180012FB8
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x18000E5C0 (LdrpMapDllWithSectionHandle.c)
 *     LdrpInitializeProcess @ 0x18008E534 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpFindDllActivationContext @ 0x18000F8A0 (LdrpFindDllActivationContext.c)
 *     LdrpLoadDependentModule @ 0x180013200 (LdrpLoadDependentModule.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x18003052C (LdrpPrepareImportAddressTableForSnap.c)
 *     RtlImageDirectoryEntryToData @ 0x180032000 (RtlImageDirectoryEntryToData.c)
 *     LdrpSnapModule @ 0x180033FC0 (LdrpSnapModule.c)
 *     LdrpQueueWork @ 0x1800767BC (LdrpQueueWork.c)
 */

unsigned __int64 __fastcall LdrpMapAndSnapDependency(__int64 a1)
{
  _QWORD *v1; // rsi
  int DllActivationContext; // edi
  __int64 v4; // rdx
  int v5; // ebp
  __int64 v6; // rax
  __int64 v7; // r13
  unsigned int v8; // r15d
  unsigned int *v9; // r14
  _DWORD *v10; // rdx
  unsigned __int64 result; // rax
  unsigned int v12; // r15d
  __int64 v13; // rdx
  __int64 v14; // rcx
  bool v15; // zf
  char *v16; // rcx
  STRING SourceString; // [rsp+30h] [rbp-48h] BYREF
  char v18; // [rsp+80h] [rbp+8h] BYREF
  __int64 v19; // [rsp+88h] [rbp+10h] BYREF

  v1 = *(_QWORD **)(a1 + 48);
  DllActivationContext = LdrpFindDllActivationContext(v1);
  if ( DllActivationContext < 0 )
    goto LABEL_34;
  DllActivationContext = LdrpPrepareImportAddressTableForSnap(a1);
  if ( DllActivationContext < 0 )
    goto LABEL_34;
  v5 = 0;
  if ( !*(_QWORD *)(a1 + 96) )
    goto LABEL_33;
  LOBYTE(v4) = 1;
  v6 = RtlImageDirectoryEntryToData(v1[6], v4, 1LL, &v18);
  v7 = v6;
  v8 = 0;
  v9 = (unsigned int *)(v6 + 12);
  if ( !*(_DWORD *)(v6 + 12) )
    goto LABEL_39;
  v10 = (_DWORD *)(v6 + 16);
  do
  {
    if ( !*v10 )
      break;
    ++v8;
    if ( *(_QWORD *)((unsigned int)*v10 + v1[6]) )
      ++v5;
    v10 += 5;
  }
  while ( *(v10 - 1) );
  if ( !v5 )
    goto LABEL_39;
  result = RtlAllocateHeap(LdrpHeap, (NtdllBaseTag + 1572864) | 8u, 8LL * v8);
  *(_QWORD *)(a1 + 80) = result;
  if ( result )
  {
    *(_DWORD *)(a1 + 88) = v8;
    result = (unsigned int)(v5 + 1);
    *(_DWORD *)(a1 + 92) = result;
    v12 = 0;
    *(_QWORD *)(a1 + 120) = v7;
    v19 = 0LL;
    if ( *v9 )
    {
      while ( v9[1] )
      {
        v13 = v1[6];
        result = v9[1];
        if ( *(_QWORD *)(result + v13) )
        {
          v14 = *v9;
          v15 = v13 + v14 == 0;
          v16 = (char *)(v13 + v14);
          *(_DWORD *)&SourceString.Length = 0;
          SourceString.Buffer = v16;
          if ( !v15 )
          {
            result = -1LL;
            do
              ++result;
            while ( v16[result] );
            if ( result > 0xFFFE )
            {
              DllActivationContext = -1073741562;
              break;
            }
            SourceString.Length = result;
            SourceString.MaximumLength = result + 1;
          }
          result = LdrpLoadDependentModule(&SourceString, *(_QWORD *)(a1 + 80) + 8LL * v12, (__int64)&v19);
          DllActivationContext = result;
          if ( (result & 0x80000000) != 0LL )
            break;
        }
        v9 += 5;
        ++v12;
        if ( !*v9 )
          break;
      }
      if ( v19 )
        result = RtlFreeHeap(LdrpHeap, 0LL, v19);
    }
    if ( DllActivationContext >= 0 )
    {
      RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
      v5 = --*(_DWORD *)(a1 + 92);
      result = RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
    }
  }
  else
  {
    DllActivationContext = -1073741801;
  }
  if ( !v5 )
  {
LABEL_39:
    if ( *(_QWORD *)(a1 + 96) )
    {
      *(_DWORD *)(v1[19] + 56LL) = 4;
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
    result = v1[19];
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
