/*
 * XREFs of LdrpHandleTlsData @ 0x18002DED4
 * Callers:
 *     LdrpDoPostSnapWork @ 0x18002DE4C (LdrpDoPostSnapWork.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     RtlImageDirectoryEntryToData @ 0x180031B00 (RtlImageDirectoryEntryToData.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     LdrpAllocateTlsEntry @ 0x18004FF74 (LdrpAllocateTlsEntry.c)
 *     LdrpComputeTlsSizeAndAlignment @ 0x180051458 (LdrpComputeTlsSizeAndAlignment.c)
 *     LdrpGetNewTlsVector @ 0x180051498 (LdrpGetNewTlsVector.c)
 *     LdrpReleaseTlsEntry @ 0x18008410C (LdrpReleaseTlsEntry.c)
 *     LdrpQueueDeferredTlsData @ 0x180085A40 (LdrpQueueDeferredTlsData.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtSetInformationProcess @ 0x1800A67A0 (NtSetInformationProcess.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 *     LdrpGenericExceptionFilter @ 0x1800D2D24 (LdrpGenericExceptionFilter.c)
 */

__int64 __fastcall LdrpHandleTlsData(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  char *v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r14
  void *ProcessHeap; // r15
  _BYTE *Heap; // rdi
  unsigned __int64 v10; // rax
  int v11; // esi
  unsigned __int64 v12; // r8
  int v13; // r13d
  int TlsEntry; // esi
  __int64 v15; // r8
  __int64 v16; // r14
  unsigned int v17; // r13d
  __int64 v18; // rax
  _QWORD *v19; // r13
  _BYTE *v20; // rax
  __int64 NewTlsVector; // rax
  __int64 v22; // rdx
  char v23; // r12
  int v24; // esi
  __int64 v25; // r8
  __int64 v26; // r8
  __int64 v27; // r14
  __int64 v28; // r13
  __int64 v29; // r8
  char v30; // [rsp+30h] [rbp-C8h] BYREF
  int v31; // [rsp+34h] [rbp-C4h]
  unsigned int v32; // [rsp+38h] [rbp-C0h] BYREF
  int v33; // [rsp+3Ch] [rbp-BCh]
  unsigned int v34; // [rsp+40h] [rbp-B8h]
  __int64 v35; // [rsp+48h] [rbp-B0h]
  int v36; // [rsp+50h] [rbp-A8h]
  unsigned int v37[3]; // [rsp+54h] [rbp-A4h] BYREF
  _BYTE *v38; // [rsp+60h] [rbp-98h]
  unsigned __int64 v39; // [rsp+68h] [rbp-90h]
  __int64 v40; // [rsp+70h] [rbp-88h] BYREF
  __int64 v41; // [rsp+78h] [rbp-80h]
  size_t Size; // [rsp+80h] [rbp-78h]
  _QWORD v43[3]; // [rsp+88h] [rbp-70h] BYREF
  _BYTE v44[40]; // [rsp+A0h] [rbp-58h] BYREF

  v35 = a1;
  v43[2] = a1;
  v2 = 0;
  if ( !LdrpActiveThreadCount )
    return 0LL;
  LOBYTE(a2) = 1;
  v6 = RtlImageDirectoryEntryToData(*(_QWORD *)(a1 + 48), a2, 9LL, &v32);
  if ( !v6 )
    return 0LL;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v43[1] = ProcessHeap;
  v33 = 0;
  v43[0] = 0LL;
  Heap = 0LL;
  v38 = 0LL;
  RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpTlsLock, v3, v4, v5);
  if ( LdrpActiveThreadCount == 1 )
  {
    Heap = v44;
    v38 = v44;
  }
  else
  {
    v10 = 24LL * (unsigned int)LdrpActiveThreadCount;
    if ( is_mul_ok((unsigned int)LdrpActiveThreadCount, 0x18uLL) )
    {
      v11 = 0;
    }
    else
    {
      v10 = -1LL;
      v11 = -1073741675;
    }
    if ( v11 >= 0 )
    {
      v12 = v10 + 16;
      if ( v10 + 16 < v10 )
      {
        v12 = -1LL;
        v11 = -1073741675;
      }
      else
      {
        v11 = 0;
      }
      if ( v11 >= 0 )
      {
        Heap = (_BYTE *)RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 786432, v12);
        v38 = Heap;
        if ( !Heap )
          v11 = -1073741801;
      }
    }
    if ( v11 < 0 )
    {
      RtlReleaseSRWLockExclusive(&LdrpTlsLock);
      return (unsigned int)v11;
    }
  }
  v13 = LdrpTlsBitmap;
  v34 = LdrpTlsBitmap;
  TlsEntry = LdrpAllocateTlsEntry(v6, v35, (unsigned int)&v32, (unsigned int)&v30, (__int64)&v40);
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
    *((_DWORD *)Heap + 3) = v13;
    v34 = LdrpTlsBitmap;
  }
  else
  {
    *((_DWORD *)Heap + 1) = 0;
    *((_DWORD *)Heap + 3) = v32;
  }
  v15 = LdrpComputeTlsSizeAndAlignment(v40, v37);
  Size = v15;
  LODWORD(v16) = 0;
  while ( 1 )
  {
    v36 = v16;
    if ( (unsigned int)v16 >= *((_DWORD *)Heap + 2) )
    {
      *(_DWORD *)Heap = 0;
      v31 = NtSetInformationProcess(-1LL, 35LL, Heap, (unsigned int)(24 * *((_DWORD *)Heap + 2) + 16));
      goto LABEL_26;
    }
    v17 = v37[0];
    v39 = v37[0];
    v18 = RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 786432, v37[0] + 1LL + v15);
    v41 = v18;
    if ( !v18 )
      break;
    v19 = (_QWORD *)(~v39 & (v18 + v17 + 1));
    v39 = (unsigned __int64)v19;
    *(v19 - 1) = v18;
    memmove(v19, *(const void **)(v40 + 16), Size);
    if ( v30 )
    {
      NewTlsVector = LdrpGetNewTlsVector(v34);
      v22 = NewTlsVector;
      if ( !NewTlsVector )
      {
        RtlFreeHeap(ProcessHeap, 0LL, v41);
        break;
      }
      *(_QWORD *)(NewTlsVector + 8LL * v32) = v19;
      v20 = &Heap[24 * (unsigned int)v16];
      *((_QWORD *)v20 + 3) = v22;
    }
    else
    {
      v20 = &Heap[24 * (unsigned int)v16];
      *((_QWORD *)v20 + 3) = v19;
    }
    *((_DWORD *)v20 + 4) = 0;
    LODWORD(v16) = v16 + 1;
    v15 = Size;
  }
  v31 = -1073741801;
LABEL_26:
  v23 = v30;
  v24 = v33;
  while ( (_DWORD)v16 )
  {
    v16 = (unsigned int)(v16 - 1);
    if ( (Heap[24 * v16 + 16] & 2) != 0 )
    {
      v25 = *(_QWORD *)&Heap[24 * v16 + 24];
      if ( v25 )
      {
        if ( !v23 )
        {
          v26 = *(_QWORD *)(v25 - 8);
          goto LABEL_32;
        }
        LdrpQueueDeferredTlsData(v25, *(_QWORD *)&Heap[24 * v16 + 32]);
      }
    }
    else if ( (Heap[24 * v16 + 16] & 1) != 0 )
    {
      ++LdrpPotentialTlsLeaks;
    }
    else
    {
      ++v24;
      if ( v23 )
      {
        v29 = *(_QWORD *)&Heap[24 * v16 + 24];
        v28 = *(_QWORD *)(v29 + 8LL * v32);
        RtlFreeHeap(ProcessHeap, 0LL, v29 - 16);
      }
      else
      {
        v28 = *(_QWORD *)&Heap[24 * v16 + 24];
      }
      v26 = *(_QWORD *)(v28 - 8);
LABEL_32:
      RtlFreeHeap(ProcessHeap, 0LL, v26);
    }
  }
  v33 = v24;
  TlsEntry = v31;
  v27 = v35;
  if ( v31 < 0 )
  {
    LdrpReleaseTlsEntry(v35, v43);
    if ( v23 )
      LdrpTlsBitmap -= 8;
  }
  else if ( v33 )
  {
    LdrpActiveThreadCount -= v33;
  }
LABEL_36:
  if ( TlsEntry >= 0 )
    *(_WORD *)(v27 + 110) = -1;
  RtlReleaseSRWLockExclusive(&LdrpTlsLock);
  if ( Heap != v44 )
    RtlFreeHeap(ProcessHeap, 0LL, Heap);
  if ( v43[0] )
    RtlFreeHeap(ProcessHeap, 0LL, v43[0]);
  if ( TlsEntry < 0 )
    return (unsigned int)TlsEntry;
  return v2;
}
