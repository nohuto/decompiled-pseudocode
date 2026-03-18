/*
 * XREFs of DpMapMemory @ 0x1C0166410
 * Callers:
 *     <none>
 * Callees:
 *     DpiVerifyResources @ 0x1C016BBF0 (DpiVerifyResources.c)
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
  __int64 v31; // rcx
  _QWORD *v32; // rax
  PVOID v33; // rax
  LONGLONG v34; // rcx
  char v35; // r15
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  _QWORD *QuadPart; // rdx
  void **v42; // rax
  char v44; // [rsp+58h] [rbp-51h]
  union _LARGE_INTEGER SectionOffset; // [rsp+60h] [rbp-49h] BYREF
  ULONG_PTR ViewSize; // [rsp+68h] [rbp-41h] BYREF
  void *SectionHandle; // [rsp+70h] [rbp-39h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-31h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-21h] BYREF
  union _LARGE_INTEGER v50; // [rsp+100h] [rbp+57h] BYREF
  char v51; // [rsp+110h] [rbp+67h]

  v51 = a4;
  v50 = a2;
  v7 = BaseAddress;
  v8 = 0LL;
  v9 = 0LL;
  CommitSize = (unsigned int)a3;
  v44 = 0;
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
  LOBYTE(a4) = v51;
  *v7 = 0LL;
  LODWORD(v13) = DpiVerifyResources(v11, (unsigned int)&v50, CommitSize, a4, (char)Timeout, (__int64)&a6, (__int64)v7);
  if ( (int)v13 >= 0 )
  {
    if ( *v7 )
    {
LABEL_49:
      v35 = 0;
      goto LABEL_50;
    }
    if ( v51 == 1 )
    {
      v14 = 0;
      *v7 = (PVOID)v50.QuadPart;
LABEL_41:
      v44 = v14;
      PoolWithTag = (union _LARGE_INTEGER *)ExAllocatePoolWithTag(PagedPool, 0x50uLL, 0x74727044u);
      v9 = PoolWithTag;
      if ( !PoolWithTag )
      {
        LODWORD(v13) = -1073741801;
        v32 = (_QWORD *)WdLogNewEntry5_WdLowResource(v31);
        v32[4] = ExAllocatePoolWithTag;
        v32[3] = &DpMapMemory;
        v32[5] = -1073741801LL;
        WdLogEvent5_WdLowResource(v32);
LABEL_57:
        if ( v44 == 1 )
        {
          *(_DWORD *)(v8 + 1320) -= ((unsigned int)CommitSize + (unsigned __int64)(*(_DWORD *)v7 & 0xFFF) + 4095) >> 12;
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
      PoolWithTag[4] = v50;
      BYTE4(PoolWithTag[5].QuadPart) = v51;
      BYTE5(PoolWithTag[5].QuadPart) = (_BYTE)Timeout;
      PoolWithTag[5].LowPart = CommitSize;
      PoolWithTag[6].QuadPart = PsGetCurrentProcess(v31);
      v9[7].LowPart = a6;
      v33 = *v7;
      LOBYTE(v9[9].LowPart) = v14;
      v9[8].QuadPart = (LONGLONG)v33;
      KeWaitForSingleObject((PVOID)(v8 + 1264), Executive, 0, 0, 0LL);
      v34 = *(_QWORD *)(v8 + 1248);
      v9->QuadPart = v34;
      v9[1].QuadPart = v8 + 1248;
      if ( *(_QWORD *)(v34 + 8) != v8 + 1248 )
        __fastfail(3u);
      *(_QWORD *)(v34 + 8) = v9;
      *(_QWORD *)(v8 + 1248) = v9;
      KeReleaseMutex((PRKMUTEX)(v8 + 1264), 0);
      v35 = 1;
      v40 = WdLogNewEntry5_WdEvent(v37, v36, v38, v39);
      *(_QWORD *)(v40 + 24) = &DpMapMemory;
      *(_QWORD *)(v40 + 32) = v9;
      WdLogEvent5_WdEvent(v40);
LABEL_50:
      if ( (int)v13 >= 0 )
        return (unsigned int)v13;
      if ( v35 == 1 )
      {
        KeWaitForSingleObject((PVOID)(v8 + 1264), Executive, 0, 0, 0LL);
        QuadPart = (_QWORD *)v9->QuadPart;
        v42 = (void **)v9[1].QuadPart;
        if ( *(union _LARGE_INTEGER **)(v9->QuadPart + 8) != v9 || *v42 != v9 )
          __fastfail(3u);
        *v42 = QuadPart;
        QuadPart[1] = v42;
        KeReleaseMutex((PRKMUTEX)(v8 + 1264), 0);
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
      SectionOffset = v50;
      if ( byte_1C0046C50 == 1 || !a6 )
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
      if ( v50.LowPart < SectionOffset.LowPart )
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
      v25 = ViewSize - v50.LowPart;
      *v7 = (char *)*v7 + v50.QuadPart - SectionOffset.QuadPart;
      LODWORD(CommitSize) = v23.LowPart + v25;
      goto LABEL_35;
    }
    v26 = (int)a6;
    if ( !a6 || byte_1C0046C50 )
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
                   (union _LARGE_INTEGER)v50.QuadPart,
                   CommitSize,
                   v28);
LABEL_35:
    if ( *v7 )
    {
      v14 = 1;
      *(_DWORD *)(v8 + 1320) += ((unsigned int)CommitSize + (unsigned __int64)(*(_DWORD *)v7 & 0xFFF) + 4095) >> 12;
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
