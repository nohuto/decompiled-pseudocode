/*
 * XREFs of LdrpHandleTlsData @ 0x18002DEC4
 * Callers:
 *     LdrpDoPostSnapWork @ 0x18002DE3C (LdrpDoPostSnapWork.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     RtlImageDirectoryEntryToData @ 0x180031AF0 (RtlImageDirectoryEntryToData.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     LdrpAllocateTlsEntry @ 0x18004FF64 (LdrpAllocateTlsEntry.c)
 *     LdrpComputeTlsSizeAndAlignment @ 0x180051448 (LdrpComputeTlsSizeAndAlignment.c)
 *     LdrpGetNewTlsVector @ 0x180051488 (LdrpGetNewTlsVector.c)
 *     LdrpReleaseTlsEntry @ 0x1800840FC (LdrpReleaseTlsEntry.c)
 *     LdrpQueueDeferredTlsData @ 0x180085A30 (LdrpQueueDeferredTlsData.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     NtSetInformationProcess @ 0x1800A67A0 (NtSetInformationProcess.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 *     LdrpGenericExceptionFilter @ 0x1800D2DE4 (LdrpGenericExceptionFilter.c)
 */

__int64 __fastcall LdrpHandleTlsData(PVOID *a1)
{
  unsigned int v1; // ebx
  PVOID v2; // r14
  void *ProcessHeap; // r15
  _DWORD *Heap; // rdi
  unsigned __int64 v6; // rax
  int v7; // esi
  SIZE_T v8; // r8
  unsigned int SizeOfBitMap; // r13d
  int TlsEntry; // esi
  __int64 v11; // r8
  __int64 v12; // r14
  unsigned int v13; // r13d
  PVOID v14; // rax
  _QWORD *v15; // r13
  _DWORD *v16; // rax
  __int64 NewTlsVector; // rax
  __int64 v18; // rdx
  char v19; // r12
  int v20; // esi
  __int64 v21; // r8
  void *v22; // r8
  PVOID *v23; // r14
  __int64 v24; // r13
  __int64 v25; // r8
  char v26; // [rsp+30h] [rbp-C8h] BYREF
  NTSTATUS v27; // [rsp+34h] [rbp-C4h]
  ULONG Size; // [rsp+38h] [rbp-C0h] BYREF
  int v29; // [rsp+3Ch] [rbp-BCh]
  unsigned int v30; // [rsp+40h] [rbp-B8h]
  PVOID *v31; // [rsp+48h] [rbp-B0h]
  int v32; // [rsp+50h] [rbp-A8h]
  unsigned int v33[3]; // [rsp+54h] [rbp-A4h] BYREF
  _BYTE *v34; // [rsp+60h] [rbp-98h]
  unsigned __int64 v35; // [rsp+68h] [rbp-90h]
  __int64 v36; // [rsp+70h] [rbp-88h] BYREF
  PVOID BaseAddress; // [rsp+78h] [rbp-80h]
  size_t v38; // [rsp+80h] [rbp-78h]
  PVOID v39[3]; // [rsp+88h] [rbp-70h] BYREF
  _BYTE v40[40]; // [rsp+A0h] [rbp-58h] BYREF

  v31 = a1;
  v39[2] = a1;
  v1 = 0;
  if ( !LdrpActiveThreadCount )
    return 0LL;
  v2 = RtlImageDirectoryEntryToData(a1[6], 1u, 9u, &Size);
  if ( !v2 )
    return 0LL;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v39[1] = ProcessHeap;
  v29 = 0;
  v39[0] = 0LL;
  Heap = 0LL;
  v34 = 0LL;
  RtlAcquireSRWLockExclusive(&LdrpTlsLock);
  if ( LdrpActiveThreadCount == 1 )
  {
    Heap = v40;
    v34 = v40;
  }
  else
  {
    v6 = 24LL * (unsigned int)LdrpActiveThreadCount;
    if ( is_mul_ok((unsigned int)LdrpActiveThreadCount, 0x18uLL) )
    {
      v7 = 0;
    }
    else
    {
      v6 = -1LL;
      v7 = -1073741675;
    }
    if ( v7 >= 0 )
    {
      v8 = v6 + 16;
      if ( v6 + 16 < v6 )
      {
        v8 = -1LL;
        v7 = -1073741675;
      }
      else
      {
        v7 = 0;
      }
      if ( v7 >= 0 )
      {
        Heap = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 786432, v8);
        v34 = Heap;
        if ( !Heap )
          v7 = -1073741801;
      }
    }
    if ( v7 < 0 )
    {
      RtlReleaseSRWLockExclusive(&LdrpTlsLock);
      return (unsigned int)v7;
    }
  }
  SizeOfBitMap = LdrpTlsBitmap.SizeOfBitMap;
  v30 = LdrpTlsBitmap.SizeOfBitMap;
  TlsEntry = LdrpAllocateTlsEntry((_DWORD)v2, (_DWORD)v31, (unsigned int)&Size, (unsigned int)&v26, (__int64)&v36);
  v27 = TlsEntry;
  if ( TlsEntry < 0 )
  {
    v23 = v31;
    goto LABEL_36;
  }
  Heap[2] = LdrpActiveThreadCount;
  if ( v26 )
  {
    Heap[1] = 1;
    Heap[3] = SizeOfBitMap;
    v30 = LdrpTlsBitmap.SizeOfBitMap;
  }
  else
  {
    Heap[1] = 0;
    Heap[3] = Size;
  }
  v11 = LdrpComputeTlsSizeAndAlignment(v36, v33);
  v38 = v11;
  LODWORD(v12) = 0;
  while ( 1 )
  {
    v32 = v12;
    if ( (unsigned int)v12 >= Heap[2] )
    {
      *Heap = 0;
      v27 = NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessTlsInformation, Heap, 24 * Heap[2] + 16);
      goto LABEL_26;
    }
    v13 = v33[0];
    v35 = v33[0];
    v14 = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 786432, v33[0] + 1LL + v11);
    BaseAddress = v14;
    if ( !v14 )
      break;
    v15 = (_QWORD *)(~v35 & ((unsigned __int64)v14 + v13 + 1));
    v35 = (unsigned __int64)v15;
    *(v15 - 1) = v14;
    memmove(v15, *(const void **)(v36 + 16), v38);
    if ( v26 )
    {
      NewTlsVector = LdrpGetNewTlsVector(v30);
      v18 = NewTlsVector;
      if ( !NewTlsVector )
      {
        RtlFreeHeap(ProcessHeap, 0, BaseAddress);
        break;
      }
      *(_QWORD *)(NewTlsVector + 8LL * Size) = v15;
      v16 = &Heap[6 * (unsigned int)v12];
      *((_QWORD *)v16 + 3) = v18;
    }
    else
    {
      v16 = &Heap[6 * (unsigned int)v12];
      *((_QWORD *)v16 + 3) = v15;
    }
    v16[4] = 0;
    LODWORD(v12) = v12 + 1;
    v11 = v38;
  }
  v27 = -1073741801;
LABEL_26:
  v19 = v26;
  v20 = v29;
  while ( (_DWORD)v12 )
  {
    v12 = (unsigned int)(v12 - 1);
    if ( (Heap[6 * v12 + 4] & 2) != 0 )
    {
      v21 = *(_QWORD *)&Heap[6 * v12 + 6];
      if ( v21 )
      {
        if ( !v19 )
        {
          v22 = *(void **)(v21 - 8);
          goto LABEL_32;
        }
        LdrpQueueDeferredTlsData(v21, *(_QWORD *)&Heap[6 * v12 + 8]);
      }
    }
    else if ( (Heap[6 * v12 + 4] & 1) != 0 )
    {
      ++LdrpPotentialTlsLeaks;
    }
    else
    {
      ++v20;
      if ( v19 )
      {
        v25 = *(_QWORD *)&Heap[6 * v12 + 6];
        v24 = *(_QWORD *)(v25 + 8LL * Size);
        RtlFreeHeap(ProcessHeap, 0, (PVOID)(v25 - 16));
      }
      else
      {
        v24 = *(_QWORD *)&Heap[6 * v12 + 6];
      }
      v22 = *(void **)(v24 - 8);
LABEL_32:
      RtlFreeHeap(ProcessHeap, 0, v22);
    }
  }
  v29 = v20;
  TlsEntry = v27;
  v23 = v31;
  if ( v27 < 0 )
  {
    LdrpReleaseTlsEntry(v31, v39);
    if ( v19 )
      LdrpTlsBitmap.SizeOfBitMap -= 8;
  }
  else if ( v29 )
  {
    LdrpActiveThreadCount -= v29;
  }
LABEL_36:
  if ( TlsEntry >= 0 )
    *((_WORD *)v23 + 55) = -1;
  RtlReleaseSRWLockExclusive(&LdrpTlsLock);
  if ( Heap != (_DWORD *)v40 )
    RtlFreeHeap(ProcessHeap, 0, Heap);
  if ( v39[0] )
    RtlFreeHeap(ProcessHeap, 0, v39[0]);
  if ( TlsEntry < 0 )
    return (unsigned int)TlsEntry;
  return v1;
}
