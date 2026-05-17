/*
 * XREFs of LdrpHandleTlsData @ 0x180040964
 * Callers:
 *     LdrpDoPostSnapWork @ 0x1800408DC (LdrpDoPostSnapWork.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     RtlImageDirectoryEntryToData @ 0x180032000 (RtlImageDirectoryEntryToData.c)
 *     LdrpComputeTlsSizeAndAlignment @ 0x180040F44 (LdrpComputeTlsSizeAndAlignment.c)
 *     LdrpGetNewTlsVector @ 0x180040F84 (LdrpGetNewTlsVector.c)
 *     LdrpAllocateTlsEntry @ 0x180040FF4 (LdrpAllocateTlsEntry.c)
 *     LdrpQueueDeferredTlsData @ 0x180041B14 (LdrpQueueDeferredTlsData.c)
 *     LdrpReleaseTlsEntry @ 0x18007F9B0 (LdrpReleaseTlsEntry.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtSetInformationProcess @ 0x1800A5440 (NtSetInformationProcess.c)
 *     memmove @ 0x1800AB5C0 (memmove.c)
 *     LdrpGenericExceptionFilter @ 0x1800CB5E8 (LdrpGenericExceptionFilter.c)
 */

__int64 __fastcall LdrpHandleTlsData(__int64 a1)
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
  _QWORD *v18; // r13
  _BYTE *v19; // rax
  __int64 NewTlsVector; // rax
  __int64 v21; // rdx
  char v22; // r12
  int v23; // esi
  __int64 v24; // r8
  unsigned __int64 v25; // r8
  __int64 v26; // r14
  __int64 v27; // r13
  __int64 v28; // r8
  char v29; // [rsp+30h] [rbp-C8h] BYREF
  int v30; // [rsp+34h] [rbp-C4h]
  unsigned int v31; // [rsp+38h] [rbp-C0h] BYREF
  int v32; // [rsp+3Ch] [rbp-BCh]
  unsigned int v33; // [rsp+40h] [rbp-B8h]
  __int64 v34; // [rsp+48h] [rbp-B0h]
  int v35; // [rsp+50h] [rbp-A8h]
  unsigned __int64 v36; // [rsp+58h] [rbp-A0h]
  _BYTE *v37; // [rsp+60h] [rbp-98h]
  unsigned int v38; // [rsp+6Ch] [rbp-8Ch] BYREF
  unsigned __int64 v39; // [rsp+70h] [rbp-88h]
  __int64 v40; // [rsp+78h] [rbp-80h] BYREF
  unsigned __int64 v41; // [rsp+80h] [rbp-78h] BYREF
  size_t Size; // [rsp+88h] [rbp-70h]
  void *v43; // [rsp+90h] [rbp-68h]
  __int64 v44; // [rsp+98h] [rbp-60h]
  _BYTE v45[40]; // [rsp+A0h] [rbp-58h] BYREF

  v34 = a1;
  v44 = a1;
  v1 = 0;
  if ( !LdrpActiveThreadCount )
    return 0LL;
  v5 = RtlImageDirectoryEntryToData(*(_QWORD *)(a1 + 48), 1, 9u, &v31);
  if ( !v5 )
    return 0LL;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v43 = ProcessHeap;
  v32 = 0;
  v41 = 0LL;
  Heap = 0LL;
  v37 = 0LL;
  RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpTlsLock, v2, v3, v4);
  if ( LdrpActiveThreadCount == 1 )
  {
    Heap = v45;
    v37 = v45;
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
        v37 = Heap;
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
  v33 = LdrpTlsBitmap;
  TlsEntry = LdrpAllocateTlsEntry(v5, v34, (unsigned int)&v31, (unsigned int)&v29, (__int64)&v40);
  v30 = TlsEntry;
  if ( TlsEntry < 0 )
  {
    v26 = v34;
    goto LABEL_36;
  }
  *((_DWORD *)Heap + 2) = LdrpActiveThreadCount;
  if ( v29 )
  {
    *((_DWORD *)Heap + 1) = 1;
    *((_DWORD *)Heap + 3) = v12;
    v33 = LdrpTlsBitmap;
  }
  else
  {
    *((_DWORD *)Heap + 1) = 0;
    *((_DWORD *)Heap + 3) = v31;
  }
  v14 = LdrpComputeTlsSizeAndAlignment(v40, &v38);
  Size = v14;
  LODWORD(v15) = 0;
  while ( 1 )
  {
    v35 = v15;
    if ( (unsigned int)v15 >= *((_DWORD *)Heap + 2) )
    {
      *(_DWORD *)Heap = 0;
      v30 = NtSetInformationProcess(-1LL, 35LL, Heap, (unsigned int)(24 * *((_DWORD *)Heap + 2) + 16));
      goto LABEL_26;
    }
    v16 = v38;
    v36 = v38;
    v17 = RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 786432, v38 + 1LL + v14);
    v39 = v17;
    if ( !v17 )
      break;
    v18 = (_QWORD *)(~v36 & (v17 + v16 + 1));
    v36 = (unsigned __int64)v18;
    *(v18 - 1) = v17;
    memmove(v18, *(const void **)(v40 + 16), Size);
    if ( v29 )
    {
      NewTlsVector = LdrpGetNewTlsVector(v33);
      v21 = NewTlsVector;
      if ( !NewTlsVector )
      {
        RtlFreeHeap((__int64)ProcessHeap, 0, v39);
        break;
      }
      *(_QWORD *)(NewTlsVector + 8LL * v31) = v18;
      v19 = &Heap[24 * (unsigned int)v15];
      *((_QWORD *)v19 + 3) = v21;
    }
    else
    {
      v19 = &Heap[24 * (unsigned int)v15];
      *((_QWORD *)v19 + 3) = v18;
    }
    *((_DWORD *)v19 + 4) = 0;
    LODWORD(v15) = v15 + 1;
    v14 = Size;
  }
  v30 = -1073741801;
LABEL_26:
  v22 = v29;
  v23 = v32;
  while ( (_DWORD)v15 )
  {
    v15 = (unsigned int)(v15 - 1);
    if ( (Heap[24 * v15 + 16] & 2) != 0 )
    {
      v24 = *(_QWORD *)&Heap[24 * v15 + 24];
      if ( v24 )
      {
        if ( !v22 )
        {
          v25 = *(_QWORD *)(v24 - 8);
          goto LABEL_32;
        }
        LdrpQueueDeferredTlsData(v24, *(_QWORD *)&Heap[24 * v15 + 32]);
      }
    }
    else if ( (Heap[24 * v15 + 16] & 1) != 0 )
    {
      ++LdrpPotentialTlsLeaks;
    }
    else
    {
      ++v23;
      if ( v22 )
      {
        v28 = *(_QWORD *)&Heap[24 * v15 + 24];
        v27 = *(_QWORD *)(v28 + 8LL * v31);
        RtlFreeHeap((__int64)ProcessHeap, 0, v28 - 16);
      }
      else
      {
        v27 = *(_QWORD *)&Heap[24 * v15 + 24];
      }
      v25 = *(_QWORD *)(v27 - 8);
LABEL_32:
      RtlFreeHeap((__int64)ProcessHeap, 0, v25);
    }
  }
  v32 = v23;
  TlsEntry = v30;
  v26 = v34;
  if ( v30 < 0 )
  {
    LdrpReleaseTlsEntry(v34, &v41);
    if ( v22 )
      LdrpTlsBitmap -= 8;
  }
  else if ( v32 )
  {
    LdrpActiveThreadCount -= v32;
  }
LABEL_36:
  if ( TlsEntry >= 0 )
    *(_WORD *)(v26 + 110) = -1;
  RtlReleaseSRWLockExclusive(&LdrpTlsLock);
  if ( Heap != v45 )
    RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)Heap);
  if ( v41 )
    RtlFreeHeap((__int64)ProcessHeap, 0, v41);
  if ( TlsEntry < 0 )
    return (unsigned int)TlsEntry;
  return v1;
}
