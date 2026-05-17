/*
 * XREFs of LdrpHandleTlsData @ 0x180055754
 * Callers:
 *     LdrpDoPostSnapWork @ 0x1800556CC (LdrpDoPostSnapWork.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x180016860 (RtlImageDirectoryEntryToData.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     LdrpReleaseTlsEntry @ 0x1800451C8 (LdrpReleaseTlsEntry.c)
 *     LdrpComputeTlsSizeAndAlignment @ 0x180055D34 (LdrpComputeTlsSizeAndAlignment.c)
 *     LdrpGetNewTlsVector @ 0x180055D74 (LdrpGetNewTlsVector.c)
 *     LdrpAllocateTlsEntry @ 0x180055DE4 (LdrpAllocateTlsEntry.c)
 *     LdrpQueueDeferredTlsData @ 0x1800565E4 (LdrpQueueDeferredTlsData.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtSetInformationProcess @ 0x180093AC0 (NtSetInformationProcess.c)
 *     memmove @ 0x180098200 (memmove.c)
 *     LdrpGenericExceptionFilter @ 0x1800C0F28 (LdrpGenericExceptionFilter.c)
 */

__int64 __fastcall LdrpHandleTlsData(unsigned __int64 *a1)
{
  unsigned int v1; // ebx
  char *v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // r14
  void *ProcessHeap; // r15
  _BYTE *Heap; // rdi
  unsigned __int64 v9; // rax
  int v10; // esi
  __int64 v11; // r8
  int v12; // r13d
  int TlsEntry; // esi
  __int64 v14; // r8
  __int64 v15; // r14
  unsigned int v16; // r13d
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // r13
  _BYTE *v21; // rax
  __int64 NewTlsVector; // rax
  __int64 v23; // rdx
  char v24; // r12
  int v25; // esi
  unsigned __int64 v26; // r8
  unsigned __int64 *v27; // r14
  __int64 v28; // r13
  __int64 v29; // r8
  char v30; // [rsp+30h] [rbp-C8h] BYREF
  int v31; // [rsp+34h] [rbp-C4h]
  unsigned int v32; // [rsp+38h] [rbp-C0h] BYREF
  int v33; // [rsp+3Ch] [rbp-BCh]
  unsigned int v34; // [rsp+40h] [rbp-B8h]
  unsigned __int64 *v35; // [rsp+48h] [rbp-B0h]
  int v36; // [rsp+50h] [rbp-A8h]
  unsigned __int64 v37; // [rsp+58h] [rbp-A0h]
  _BYTE *v38; // [rsp+60h] [rbp-98h]
  unsigned int v39; // [rsp+6Ch] [rbp-8Ch] BYREF
  unsigned __int64 v40; // [rsp+70h] [rbp-88h]
  __int64 v41; // [rsp+78h] [rbp-80h] BYREF
  unsigned __int64 v42; // [rsp+80h] [rbp-78h] BYREF
  size_t Size; // [rsp+88h] [rbp-70h]
  void *v44; // [rsp+90h] [rbp-68h]
  unsigned __int64 *v45; // [rsp+98h] [rbp-60h]
  _BYTE v46[40]; // [rsp+A0h] [rbp-58h] BYREF

  v35 = a1;
  v45 = a1;
  v1 = 0;
  if ( !LdrpActiveThreadCount )
    return 0LL;
  v5 = RtlImageDirectoryEntryToData(a1[6], 1, 9u, &v32);
  if ( !v5 )
    return 0LL;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v44 = ProcessHeap;
  v33 = 0;
  v42 = 0LL;
  Heap = 0LL;
  v38 = 0LL;
  RtlAcquireSRWLockExclusive(&LdrpTlsLock, v2, v3, v4);
  if ( LdrpActiveThreadCount == 1 )
  {
    Heap = v46;
    v38 = v46;
  }
  else
  {
    v9 = 24LL * (unsigned int)LdrpActiveThreadCount;
    if ( is_mul_ok((unsigned int)LdrpActiveThreadCount, 0x18uLL) )
    {
      v10 = 0;
    }
    else
    {
      v9 = -1LL;
      v10 = -1073741675;
    }
    if ( v10 >= 0 )
    {
      v11 = v9 + 16;
      if ( v9 + 16 < v9 )
      {
        v11 = -1LL;
        v10 = -1073741675;
      }
      else
      {
        v10 = 0;
      }
      if ( v10 >= 0 )
      {
        Heap = (_BYTE *)RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 786432, v11);
        v38 = Heap;
        if ( !Heap )
          v10 = -1073741801;
      }
    }
    if ( v10 < 0 )
    {
      RtlReleaseSRWLockExclusive(&LdrpTlsLock);
      return (unsigned int)v10;
    }
  }
  v12 = LdrpTlsBitmap;
  v34 = LdrpTlsBitmap;
  TlsEntry = LdrpAllocateTlsEntry(v5, (_DWORD)v35, (unsigned int)&v32, (unsigned int)&v30, (__int64)&v41);
  v31 = TlsEntry;
  if ( TlsEntry < 0 )
  {
    v27 = v35;
    goto LABEL_36;
  }
  *((_DWORD *)Heap + 2) = LdrpActiveThreadCount;
  if ( v30 )
  {
    *((_DWORD *)Heap + 1) = 1;
    *((_DWORD *)Heap + 3) = v12;
    v34 = LdrpTlsBitmap;
  }
  else
  {
    *((_DWORD *)Heap + 1) = 0;
    *((_DWORD *)Heap + 3) = v32;
  }
  v14 = LdrpComputeTlsSizeAndAlignment(v41, &v39);
  Size = v14;
  LODWORD(v15) = 0;
  while ( 1 )
  {
    v36 = v15;
    if ( (unsigned int)v15 >= *((_DWORD *)Heap + 2) )
    {
      *(_DWORD *)Heap = 0;
      v31 = NtSetInformationProcess(-1LL, 35LL, Heap);
      goto LABEL_26;
    }
    v16 = v39;
    v37 = v39;
    v17 = RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 786432, v39 + 1LL + v14);
    v40 = v17;
    if ( !v17 )
      break;
    v20 = (_QWORD *)(~v37 & (v17 + v16 + 1));
    v37 = (unsigned __int64)v20;
    *(v20 - 1) = v17;
    memmove(v20, *(const void **)(v41 + 16), Size);
    if ( v30 )
    {
      NewTlsVector = LdrpGetNewTlsVector(v34);
      v23 = NewTlsVector;
      if ( !NewTlsVector )
      {
        RtlFreeHeap((__int64)ProcessHeap, 0, v40);
        break;
      }
      *(_QWORD *)(NewTlsVector + 8LL * v32) = v20;
      v21 = &Heap[24 * (unsigned int)v15];
      *((_QWORD *)v21 + 3) = v23;
    }
    else
    {
      v21 = &Heap[24 * (unsigned int)v15];
      *((_QWORD *)v21 + 3) = v20;
    }
    *((_DWORD *)v21 + 4) = 0;
    LODWORD(v15) = v15 + 1;
    v14 = Size;
  }
  v31 = -1073741801;
LABEL_26:
  v24 = v30;
  v25 = v33;
  while ( (_DWORD)v15 )
  {
    v15 = (unsigned int)(v15 - 1);
    if ( (Heap[24 * v15 + 16] & 2) != 0 )
    {
      v18 = *(_QWORD *)&Heap[24 * v15 + 24];
      if ( v18 )
      {
        if ( !v24 )
        {
          v26 = *(_QWORD *)(v18 - 8);
          goto LABEL_32;
        }
        LdrpQueueDeferredTlsData(v18, *(_QWORD *)&Heap[24 * v15 + 32]);
      }
    }
    else if ( (Heap[24 * v15 + 16] & 1) != 0 )
    {
      ++LdrpPotentialTlsLeaks;
    }
    else
    {
      ++v25;
      if ( v24 )
      {
        v29 = *(_QWORD *)&Heap[24 * v15 + 24];
        v28 = *(_QWORD *)(v29 + 8LL * v32);
        RtlFreeHeap((__int64)ProcessHeap, 0, v29 - 16);
      }
      else
      {
        v28 = *(_QWORD *)&Heap[24 * v15 + 24];
      }
      v26 = *(_QWORD *)(v28 - 8);
LABEL_32:
      RtlFreeHeap((__int64)ProcessHeap, 0, v26);
    }
  }
  v33 = v25;
  TlsEntry = v31;
  v27 = v35;
  if ( v31 < 0 )
  {
    LdrpReleaseTlsEntry(v35, &v42, v18, v19);
    if ( v24 )
      LdrpTlsBitmap -= 8;
  }
  else if ( v33 )
  {
    LdrpActiveThreadCount -= v33;
  }
LABEL_36:
  if ( TlsEntry >= 0 )
    *((_WORD *)v27 + 55) = -1;
  RtlReleaseSRWLockExclusive(&LdrpTlsLock);
  if ( Heap != v46 )
    RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)Heap);
  if ( v42 )
    RtlFreeHeap((__int64)ProcessHeap, 0, v42);
  if ( TlsEntry < 0 )
    return (unsigned int)TlsEntry;
  return v1;
}
