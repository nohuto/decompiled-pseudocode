/*
 * XREFs of DpMapMemory @ 0x1C016A940
 * Callers:
 *     <none>
 * Callees:
 *     DpiVerifyResources @ 0x1C0170400 (DpiVerifyResources.c)
 */

__int64 __fastcall DpMapMemory(
        __int64 a1,
        union _LARGE_INTEGER a2,
        __int64 a3,
        __int64 a4,
        PLARGE_INTEGER Timeout,
        DWORD a6,
        PVOID *BaseAddress)
{
  PVOID *v7; // rsi
  __int64 v8; // r13
  union _LARGE_INTEGER *v9; // rbx
  ULONG_PTR CommitSize; // r12
  int v11; // edi
  __int64 v12; // rax
  __int64 v13; // rdi
  char v14; // r15
  NTSTATUS v15; // eax
  __int64 v16; // rcx
  _QWORD *v17; // rcx
  void *v18; // rax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  union _LARGE_INTEGER v23; // rcx
  _QWORD *v24; // rax
  int v25; // r12d
  __int64 v26; // rbx
  _QWORD *v27; // rax
  __int64 v28; // r8
  _QWORD *v29; // rax
  union _LARGE_INTEGER *PoolWithTag; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  _QWORD *v35; // rax
  PVOID v36; // rax
  LONGLONG v37; // rcx
  char v38; // r15
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rax
  _QWORD *QuadPart; // rdx
  void **v45; // rax
  char v47; // [rsp+58h] [rbp-51h]
  union _LARGE_INTEGER SectionOffset; // [rsp+60h] [rbp-49h] BYREF
  ULONG_PTR ViewSize; // [rsp+68h] [rbp-41h] BYREF
  void *SectionHandle; // [rsp+70h] [rbp-39h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-31h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-21h] BYREF
  union _LARGE_INTEGER v53; // [rsp+100h] [rbp+57h] BYREF
  char v54; // [rsp+110h] [rbp+67h]

  v54 = a4;
  v53 = a2;
  v7 = BaseAddress;
  v8 = 0LL;
  v9 = 0LL;
  CommitSize = (unsigned int)a3;
  v47 = 0;
  v11 = a1;
  if ( !a1 || !BaseAddress || !(_DWORD)a3 )
  {
    LODWORD(v13) = -1073741811;
    v17 = (_QWORD *)WdLogNewEntry5_WdError(a1);
    v17[4] = 0LL;
    v17[3] = &DpMapMemory;
    v17[5] = -1073741811LL;
    goto LABEL_48;
  }
  v8 = *(_QWORD *)(a1 + 64);
  if ( !v8 || *(_DWORD *)(v8 + 16) != 1953656900 || (unsigned int)(*(_DWORD *)(v8 + 20) - 2) > 1 )
  {
    LODWORD(v13) = -1073741811;
    v29 = (_QWORD *)WdLogNewEntry5_WdError(a1);
    v29[4] = 0LL;
    goto LABEL_37;
  }
  if ( KeGetCurrentIrql() )
  {
    v12 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))WdLogNewEntry5_WdWarning)(
            a1,
            (union _LARGE_INTEGER)a2.QuadPart,
            a3,
            a4);
    *(_QWORD *)(v12 + 24) = &DpMapMemory;
    *(_QWORD *)(v12 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v12);
  }
  LOBYTE(a4) = v54;
  *v7 = 0LL;
  LODWORD(v13) = DpiVerifyResources(v11, (unsigned int)&v53, CommitSize, a4, (char)Timeout, (__int64)&a6, (__int64)v7);
  if ( (int)v13 >= 0 )
  {
    if ( *v7 )
    {
LABEL_49:
      v38 = 0;
      goto LABEL_50;
    }
    if ( v54 == 1 )
    {
      v14 = 0;
      *v7 = (PVOID)v53.QuadPart;
LABEL_41:
      v47 = v14;
      PoolWithTag = (union _LARGE_INTEGER *)ExAllocatePoolWithTag(PagedPool, 0x50uLL, 0x74727044u);
      v9 = PoolWithTag;
      if ( !PoolWithTag )
      {
        LODWORD(v13) = -1073741801;
        v35 = (_QWORD *)WdLogNewEntry5_WdLowResource(v32, v31, v33, v34);
        v35[4] = ExAllocatePoolWithTag;
        v35[3] = &DpMapMemory;
        v35[5] = -1073741801LL;
        WdLogEvent5_WdLowResource(v35);
LABEL_57:
        if ( v47 == 1 )
        {
          *(_DWORD *)(v8 + 1360) -= ((unsigned int)CommitSize + (unsigned __int64)(*(_DWORD *)v7 & 0xFFF) + 4095) >> 12;
          if ( (_BYTE)Timeout == 1 )
            ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, *v7);
          else
            MmUnmapIoSpace(*v7, (unsigned int)CommitSize);
        }
        return (unsigned int)v13;
      }
      PoolWithTag[2].LowPart = 1953656900;
      PoolWithTag[2].HighPart = 8;
      PoolWithTag[3].LowPart = 1;
      PoolWithTag[4] = v53;
      BYTE4(PoolWithTag[5].QuadPart) = v54;
      BYTE5(PoolWithTag[5].QuadPart) = (_BYTE)Timeout;
      PoolWithTag[5].LowPart = CommitSize;
      PoolWithTag[6].QuadPart = PsGetCurrentProcess(v32);
      v9[7].LowPart = a6;
      v36 = *v7;
      LOBYTE(v9[9].LowPart) = v14;
      v9[8].QuadPart = (LONGLONG)v36;
      KeWaitForSingleObject((PVOID)(v8 + 1304), Executive, 0, 0, 0LL);
      v37 = *(_QWORD *)(v8 + 1288);
      v9->QuadPart = v37;
      v9[1].QuadPart = v8 + 1288;
      if ( *(_QWORD *)(v37 + 8) != v8 + 1288 )
        __fastfail(3u);
      *(_QWORD *)(v37 + 8) = v9;
      *(_QWORD *)(v8 + 1288) = v9;
      KeReleaseMutex((PRKMUTEX)(v8 + 1304), 0);
      v38 = 1;
      v43 = WdLogNewEntry5_WdEvent(v40, v39, v41, v42);
      *(_QWORD *)(v43 + 24) = &DpMapMemory;
      *(_QWORD *)(v43 + 32) = v9;
      WdLogEvent5_WdEvent(v43);
LABEL_50:
      if ( (int)v13 >= 0 )
        return (unsigned int)v13;
      if ( v38 == 1 )
      {
        KeWaitForSingleObject((PVOID)(v8 + 1304), Executive, 0, 0, 0LL);
        QuadPart = (_QWORD *)v9->QuadPart;
        v45 = (void **)v9[1].QuadPart;
        if ( *(union _LARGE_INTEGER **)(v9->QuadPart + 8) != v9 || *v45 != v9 )
          __fastfail(3u);
        *v45 = QuadPart;
        QuadPart[1] = v45;
        KeReleaseMutex((PRKMUTEX)(v8 + 1304), 0);
      }
      if ( v9 )
        ExFreePoolWithTag(v9, 0x74727044u);
      goto LABEL_57;
    }
    if ( (_BYTE)Timeout == 1 )
    {
      ViewSize = CommitSize;
      RtlInitUnicodeString(&DestinationString, L"\\Device\\PhysicalMemory");
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v15 = ZwOpenSection(&SectionHandle, 0xF001Fu, &ObjectAttributes);
      v13 = v15;
      if ( v15 < 0 )
      {
        v17 = (_QWORD *)WdLogNewEntry5_WdError(v16);
        v17[3] = &DpMapMemory;
        v18 = ZwOpenSection;
LABEL_16:
        v17[4] = v18;
        v17[5] = v13;
LABEL_48:
        WdLogEvent5_WdError(v17);
        goto LABEL_49;
      }
      SectionOffset = v53;
      if ( byte_1C0046CD0 == 1 || !a6 )
      {
        v19 = 512;
      }
      else if ( a6 == 2 )
      {
        v19 = 1024;
      }
      else
      {
        v19 = 0;
      }
      v13 = ZwMapViewOfSection(
              SectionHandle,
              (HANDLE)0xFFFFFFFFFFFFFFFFLL,
              v7,
              0LL,
              CommitSize,
              &SectionOffset,
              &ViewSize,
              ViewUnmap,
              0,
              v19 | 4);
      ZwClose(SectionHandle);
      if ( (int)v13 < 0 )
      {
        v17 = (_QWORD *)WdLogNewEntry5_WdError(v21);
        v17[3] = &DpMapMemory;
        v18 = ZwMapViewOfSection;
        goto LABEL_16;
      }
      v23 = SectionOffset;
      if ( v53.LowPart < SectionOffset.LowPart )
      {
        LODWORD(v13) = -1073741823;
        v24 = (_QWORD *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))WdLogNewEntry5_WdCriticalError)(
                          (union _LARGE_INTEGER)SectionOffset.QuadPart,
                          v20,
                          v22);
        v24[6] = 0LL;
        v24[3] = 275LL;
        v24[4] = 21LL;
        v24[5] = &DpMapMemory;
        v24[7] = -1073741823LL;
        WdLogEvent5_WdCriticalError(v24);
        return (unsigned int)v13;
      }
      v25 = ViewSize - v53.LowPart;
      *v7 = (char *)*v7 + v53.QuadPart - SectionOffset.QuadPart;
      LODWORD(CommitSize) = v23.LowPart + v25;
      goto LABEL_35;
    }
    v26 = (int)a6;
    if ( !a6 || byte_1C0046CD0 )
    {
      v28 = 516LL;
      goto LABEL_34;
    }
    if ( a6 != 1 )
    {
      if ( a6 == 2 )
      {
        v28 = 1028LL;
        goto LABEL_34;
      }
      v27 = (_QWORD *)WdLogNewEntry5_WdError(a6 - 1);
      v27[3] = &DpMapMemory;
      v27[4] = v26;
      v27[5] = v8;
      WdLogEvent5_WdError(v27);
    }
    v28 = 4LL;
LABEL_34:
    *v7 = (PVOID)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))MmMapIoSpaceEx)(
                   (union _LARGE_INTEGER)v53.QuadPart,
                   CommitSize,
                   v28);
LABEL_35:
    if ( *v7 )
    {
      v14 = 1;
      *(_DWORD *)(v8 + 1360) += ((unsigned int)CommitSize + (unsigned __int64)(*(_DWORD *)v7 & 0xFFF) + 4095) >> 12;
      goto LABEL_41;
    }
    LODWORD(v13) = -1073741811;
    v29 = (_QWORD *)((__int64 (__fastcall *)(_QWORD))WdLogNewEntry5_WdError)((union _LARGE_INTEGER)v23.QuadPart);
    v29[4] = 0LL;
LABEL_37:
    v29[3] = &DpMapMemory;
    v29[5] = -1073741811LL;
    WdLogEvent5_WdError(v29);
  }
  return (unsigned int)v13;
}
