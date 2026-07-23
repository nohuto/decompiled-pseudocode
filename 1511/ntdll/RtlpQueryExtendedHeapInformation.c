/*
 * XREFs of RtlpQueryExtendedHeapInformation @ 0x1800E13A4
 * Callers:
 *     RtlQueryHeapInformation @ 0x18007FDC0 (RtlQueryHeapInformation.c)
 * Callees:
 *     RtlUnlockHeap @ 0x180023960 (RtlUnlockHeap.c)
 *     RtlLockHeap @ 0x18002E860 (RtlLockHeap.c)
 *     RtlEnterCriticalSection @ 0x18002E900 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18002EE00 (RtlLeaveCriticalSection.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     RtlpQueryExtendedInformationHeap @ 0x180093700 (RtlpQueryExtendedInformationHeap.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     ZwMapViewOfSection @ 0x1800A55C0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A5600 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x1800A5A00 (NtCreateSection.c)
 *     memset @ 0x1800AB900 (memset.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800E1180 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlpQueryExtendedInformationAllHeaps @ 0x1800E1840 (RtlpQueryExtendedInformationAllHeaps.c)
 */

__int64 __fastcall RtlpQueryExtendedHeapInformation(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v7; // rax
  __int64 v8; // rcx
  int ExtendedInformationHeap; // r14d
  __int16 v10; // si
  unsigned __int64 v11; // rcx
  NTSTATUS v12; // esi
  void *v13; // rcx
  int v14; // eax
  unsigned __int64 v15; // r12
  _QWORD *v16; // rax
  unsigned __int64 v17; // r12
  char *v18; // rdi
  PVOID BaseAddress; // [rsp+50h] [rbp-B0h] BYREF
  LARGE_INTEGER MaximumSize; // [rsp+58h] [rbp-A8h] BYREF
  LARGE_INTEGER SectionOffset; // [rsp+60h] [rbp-A0h] BYREF
  ULONG_PTR ViewSize; // [rsp+68h] [rbp-98h] BYREF
  PRTL_DYNAMIC_HASH_TABLE HashTable; // [rsp+70h] [rbp-90h]
  _QWORD *v24; // [rsp+78h] [rbp-88h]
  int v25; // [rsp+80h] [rbp-80h] BYREF
  __int64 (__fastcall *v26)(__int64, _QWORD *); // [rsp+88h] [rbp-78h]
  _QWORD *v27; // [rsp+90h] [rbp-70h]
  _QWORD v28[12]; // [rsp+A0h] [rbp-60h] BYREF
  HANDLE Buffer[16]; // [rsp+100h] [rbp+0h] BYREF
  int v30; // [rsp+190h] [rbp+90h]
  HANDLE SectionHandle; // [rsp+1A8h] [rbp+A8h] BYREF

  if ( (a1 & 7) != 0 )
    return 3221225485LL;
  if ( *(_QWORD *)a1 == -1LL )
  {
    v25 = *(_DWORD *)(a1 + 16);
    memset(v28, 0, sizeof(v28));
    if ( *(_QWORD *)(a1 + 24) )
    {
      v26 = *(__int64 (__fastcall **)(__int64, _QWORD *))(a1 + 24);
      v7 = *(_QWORD **)(a1 + 32);
    }
    else
    {
      v28[0] = a1;
      v28[10] = a1 + 40;
      v28[11] = a1 + a2;
      v7 = v28;
      v28[9] = a1;
      v26 = RtlpExtendedHeapInformationGenerator;
    }
    v27 = v7;
    RtlEnterCriticalSection(&RtlpProcessHeapsListLock);
    v8 = *(_QWORD *)(a1 + 8);
    if ( v8 )
    {
      if ( *(_DWORD *)(v8 + 16) == -571548178 )
        v10 = *(_WORD *)(v8 + 36);
      else
        v10 = *(_WORD *)(v8 + 208);
      if ( v10 != -1 )
        RtlLockHeap((PVOID)v8);
      ExtendedInformationHeap = RtlpQueryExtendedInformationHeap(*(_QWORD *)(a1 + 8), (__int64)&v25);
      if ( v10 != -1 )
        RtlUnlockHeap(*(PVOID *)(a1 + 8));
    }
    else
    {
      ExtendedInformationHeap = RtlpQueryExtendedInformationAllHeaps(&v25);
    }
    RtlLeaveCriticalSection(&RtlpProcessHeapsListLock);
    if ( ExtendedInformationHeap == -2147483622 )
      ExtendedInformationHeap = 0;
    if ( v26 == RtlpExtendedHeapInformationGenerator )
    {
      if ( ExtendedInformationHeap >= 0 )
      {
        v11 = v28[10];
        if ( a3 )
          *a3 = v28[10] - v28[9];
        if ( v11 > v28[11] )
          return (unsigned int)-1073741789;
      }
    }
    else if ( a3 )
    {
      *a3 = 88LL;
    }
    return (unsigned int)ExtendedInformationHeap;
  }
  else
  {
    SectionHandle = 0LL;
    BaseAddress = 0LL;
    MaximumSize.QuadPart = 0x10000LL;
    v12 = NtCreateSection(&SectionHandle, 0xF001Fu, 0LL, &MaximumSize, 4u, 0x8000000u, 0LL);
    if ( v12 >= 0 )
    {
      while ( 1 )
      {
        memset(Buffer, 0, 0x50uLL);
        v13 = *(void **)a1;
        Buffer[2] = *(HANDLE *)(a1 + 8);
        LODWORD(Buffer[3]) = *(_DWORD *)(a1 + 16);
        Buffer[1] = (HANDLE)MaximumSize.QuadPart;
        Buffer[0] = SectionHandle;
        v14 = RtlpHeapPerformCrossProcessQuery(v13, Buffer);
        v12 = v14;
        if ( v14 != -1073741789 )
          break;
        NtClose(SectionHandle);
        MaximumSize.QuadPart = ((unsigned __int64)Buffer[4] + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
        SectionHandle = 0LL;
        v12 = NtCreateSection(&SectionHandle, 0xF001Fu, 0LL, &MaximumSize, 4u, 0x8000000u, 0LL);
        if ( v12 < 0 )
          goto LABEL_56;
      }
      if ( v14 >= 0 )
      {
        SectionOffset.QuadPart = 0LL;
        ViewSize = 0x10000LL;
        v12 = ZwMapViewOfSection(
                SectionHandle,
                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                &BaseAddress,
                0LL,
                0x10000uLL,
                &SectionOffset,
                &ViewSize,
                ViewUnmap,
                0,
                4u);
        if ( v12 >= 0 )
        {
          v15 = 0LL;
          memset(v28, 0, sizeof(v28));
          HashTable = *(PRTL_DYNAMIC_HASH_TABLE *)(a1 + 24);
          if ( HashTable )
          {
            v16 = *(_QWORD **)(a1 + 32);
          }
          else
          {
            v28[0] = a1;
            v28[10] = a1 + 40;
            v28[9] = a1;
            v28[11] = a1 + a2;
            v16 = v28;
            HashTable = (PRTL_DYNAMIC_HASH_TABLE)RtlpExtendedHeapInformationGenerator;
          }
          v24 = v16;
          v30 = 0;
          if ( LODWORD(Buffer[5]) )
          {
            while ( 1 )
            {
              v17 = (v15 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
              if ( v17 >= MaximumSize.QuadPart
                || v17 >= 2 * ViewSize
                || (__int64)(ViewSize + SectionOffset.QuadPart) > MaximumSize.QuadPart )
              {
                break;
              }
              v18 = (char *)BaseAddress + v17;
              if ( v17 + 16 >= ViewSize || !*(_DWORD *)v18 )
              {
                NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
                SectionOffset.QuadPart += ViewSize;
                BaseAddress = 0LL;
                v12 = ZwMapViewOfSection(
                        SectionHandle,
                        (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                        &BaseAddress,
                        0LL,
                        ViewSize,
                        &SectionOffset,
                        &ViewSize,
                        ViewUnmap,
                        0,
                        4u);
                if ( v12 < 0 )
                  goto LABEL_48;
                v18 = (char *)BaseAddress;
                v17 = 0LL;
              }
              v12 = ((__int64 (__fastcall *)(char *, _QWORD *))HashTable)(v18, v24);
              if ( v12 >= 0 )
              {
                v15 = *((_QWORD *)v18 + 1) + v17;
                if ( (unsigned int)++v30 < LODWORD(Buffer[5]) )
                  continue;
              }
              goto LABEL_48;
            }
            v12 = -1073741762;
          }
LABEL_48:
          if ( HashTable == (PRTL_DYNAMIC_HASH_TABLE)RtlpExtendedHeapInformationGenerator )
          {
            if ( v12 >= 0 )
            {
              if ( a3 )
                *a3 = v28[10] - v28[9];
              if ( v28[10] > v28[11] )
                v12 = -1073741789;
            }
          }
          else if ( a3 )
          {
            *a3 = 88LL;
          }
        }
      }
    }
LABEL_56:
    if ( BaseAddress )
      NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
    if ( SectionHandle )
      NtClose(SectionHandle);
    return (unsigned int)v12;
  }
}
