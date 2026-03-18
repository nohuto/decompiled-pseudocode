/*
 * XREFs of DpMapMemory @ 0x1C01926B0
 * Callers:
 *     <none>
 * Callees:
 *     DpiVerifyResources @ 0x1C019687C (DpiVerifyResources.c)
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
  char v9; // r12
  ULONG_PTR CommitSize; // r15
  union _LARGE_INTEGER *v11; // rbx
  int v12; // edi
  __int64 v13; // rax
  __int64 v14; // rdi
  unsigned int v15; // r12d
  NTSTATUS v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  union _LARGE_INTEGER v21; // rcx
  _QWORD *v22; // rax
  int v23; // r15d
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rcx
  union _LARGE_INTEGER *PoolWithTag; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  union _LARGE_INTEGER **v30; // rax
  LONGLONG v31; // rcx
  char v32; // r14
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  _QWORD *QuadPart; // rdx
  void **v37; // rax
  void *SectionHandle; // [rsp+60h] [rbp-49h] BYREF
  union _LARGE_INTEGER SectionOffset; // [rsp+68h] [rbp-41h] BYREF
  ULONG_PTR ViewSize; // [rsp+70h] [rbp-39h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-31h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-21h] BYREF
  union _LARGE_INTEGER v44; // [rsp+100h] [rbp+57h] BYREF
  char v45; // [rsp+110h] [rbp+67h]

  v45 = a4;
  v44 = a2;
  v7 = BaseAddress;
  v8 = 0LL;
  v9 = 0;
  CommitSize = (unsigned int)a3;
  v11 = 0LL;
  v12 = a1;
  if ( !a1 || !BaseAddress || !(_DWORD)a3 )
  {
    LODWORD(v14) = -1073741811;
    v35 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v35 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v35);
    goto LABEL_44;
  }
  v8 = *(_QWORD *)(a1 + 64);
  if ( !v8 || *(_DWORD *)(v8 + 16) != 1953656900 || (unsigned int)(*(_DWORD *)(v8 + 20) - 2) > 1 )
  {
    LODWORD(v14) = -1073741811;
    v26 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v26 + 24) = -1073741811LL;
    goto LABEL_35;
  }
  if ( KeGetCurrentIrql() )
  {
    v13 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))WdLogNewEntry5_WdWarning)(
            a1,
            (union _LARGE_INTEGER)a2.QuadPart,
            a3,
            a4);
    *(_QWORD *)(v13 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v13);
  }
  LOBYTE(a4) = v45;
  *v7 = 0LL;
  LODWORD(v14) = DpiVerifyResources(v12, (unsigned int)&v44, CommitSize, a4, (char)Timeout, (__int64)&a6, (__int64)v7);
  if ( (int)v14 >= 0 )
  {
    if ( !*v7 )
    {
      if ( v45 == 1 )
      {
        v9 = 0;
        *v7 = (PVOID)v44.QuadPart;
LABEL_37:
        PoolWithTag = (union _LARGE_INTEGER *)ExAllocatePoolWithTag(PagedPool, 0x50uLL, 0x74727044u);
        v11 = PoolWithTag;
        if ( !PoolWithTag )
        {
          LODWORD(v14) = -1073741801;
          v29 = WdLogNewEntry5_WdLowResource(v28);
          *(_QWORD *)(v29 + 24) = -1073741801LL;
          WdLogEvent5_WdLowResource(v29);
LABEL_52:
          if ( v9 == 1 )
          {
            *(_DWORD *)(v8 + 2440) -= ((unsigned int)CommitSize + (unsigned __int64)(*(_DWORD *)v7 & 0xFFF) + 4095) >> 12;
            if ( (_BYTE)Timeout == 1 )
              ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, *v7);
            else
              MmUnmapIoSpace(*v7, (unsigned int)CommitSize);
          }
          return (unsigned int)v14;
        }
        PoolWithTag[2].LowPart = 1953656900;
        PoolWithTag[2].HighPart = 8;
        PoolWithTag[3].LowPart = 1;
        PoolWithTag[4] = v44;
        BYTE4(PoolWithTag[5].QuadPart) = v45;
        BYTE5(PoolWithTag[5].QuadPart) = (_BYTE)Timeout;
        PoolWithTag[5].LowPart = CommitSize;
        PoolWithTag[6].QuadPart = PsGetCurrentProcess(v28);
        v11[7].LowPart = a6;
        v11[8].QuadPart = (LONGLONG)*v7;
        LOBYTE(v11[9].LowPart) = v9;
        KeWaitForSingleObject((PVOID)(v8 + 2384), Executive, 0, 0, 0LL);
        v30 = (union _LARGE_INTEGER **)(v8 + 2368);
        v31 = *(_QWORD *)(v8 + 2368);
        if ( *(_QWORD *)(v31 + 8) != v8 + 2368 )
          __fastfail(3u);
        v11->QuadPart = v31;
        v11[1].QuadPart = (LONGLONG)v30;
        *(_QWORD *)(v31 + 8) = v11;
        *v30 = v11;
        KeReleaseMutex((PRKMUTEX)(v8 + 2384), 0);
        v32 = 1;
        v34 = WdLogNewEntry5_WdEvent(v33);
        *(_QWORD *)(v34 + 24) = v11;
        WdLogEvent5_WdEvent(v34);
LABEL_45:
        if ( (int)v14 >= 0 )
          return (unsigned int)v14;
        if ( v32 == 1 )
        {
          KeWaitForSingleObject((PVOID)(v8 + 2384), Executive, 0, 0, 0LL);
          QuadPart = (_QWORD *)v11->QuadPart;
          v37 = (void **)v11[1].QuadPart;
          if ( *(union _LARGE_INTEGER **)(v11->QuadPart + 8) != v11 || *v37 != v11 )
            __fastfail(3u);
          *v37 = QuadPart;
          QuadPart[1] = v37;
          KeReleaseMutex((PRKMUTEX)(v8 + 2384), 0);
        }
        if ( v11 )
          ExFreePoolWithTag(v11, 0x74727044u);
        goto LABEL_52;
      }
      v15 = 0;
      if ( (_BYTE)Timeout != 1 )
      {
        v24 = (int)a6;
        v15 = 4;
        if ( !a6 || byte_1C0056E90 )
        {
          v15 = 516;
        }
        else if ( a6 != 1 )
        {
          if ( a6 == 2 )
          {
            v15 = 1028;
          }
          else
          {
            v25 = WdLogNewEntry5_WdError(a6 - 1);
            *(_QWORD *)(v25 + 24) = v24;
            *(_QWORD *)(v25 + 32) = v8;
            WdLogEvent5_WdError(v25);
          }
        }
        *v7 = (PVOID)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))MmMapIoSpaceEx)(
                       (union _LARGE_INTEGER)v44.QuadPart,
                       CommitSize,
                       v15);
LABEL_33:
        if ( *v7 )
        {
          v9 = 1;
          *(_DWORD *)(v8 + 2440) += ((unsigned int)CommitSize + (unsigned __int64)(*(_DWORD *)v7 & 0xFFF) + 4095) >> 12;
          goto LABEL_37;
        }
        LODWORD(v14) = -1073741811;
        v26 = ((__int64 (__fastcall *)(_QWORD))WdLogNewEntry5_WdError)((union _LARGE_INTEGER)v21.QuadPart);
        *(_QWORD *)(v26 + 24) = (unsigned int)CommitSize;
        *(_QWORD *)(v26 + 32) = v15;
LABEL_35:
        WdLogEvent5_WdError(v26);
        return (unsigned int)v14;
      }
      ViewSize = CommitSize;
      RtlInitUnicodeString(&DestinationString, L"\\Device\\PhysicalMemory");
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v16 = ZwOpenSection(&SectionHandle, 0xF001Fu, &ObjectAttributes);
      v14 = v16;
      if ( v16 >= 0 )
      {
        SectionOffset = v44;
        if ( byte_1C0056E90 == 1 || !a6 )
        {
          v15 = 512;
        }
        else if ( a6 == 2 )
        {
          v15 = 1024;
        }
        v14 = ZwMapViewOfSection(
                SectionHandle,
                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                v7,
                0LL,
                CommitSize,
                &SectionOffset,
                &ViewSize,
                ViewUnmap,
                0,
                v15 | 4);
        ZwClose(SectionHandle);
        if ( (int)v14 >= 0 )
        {
          v21 = SectionOffset;
          if ( v44.LowPart < SectionOffset.LowPart )
          {
            LODWORD(v14) = -1073741823;
            v22 = (_QWORD *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))WdLogNewEntry5_WdCriticalError)(
                              (union _LARGE_INTEGER)SectionOffset.QuadPart,
                              v19,
                              v20);
            v22[3] = 275LL;
            v22[4] = 21LL;
            v22[5] = -1073741823LL;
            WdLogEvent5_WdCriticalError(v22);
            return (unsigned int)v14;
          }
          v23 = ViewSize - v44.LowPart;
          *v7 = (char *)*v7 + v44.QuadPart - SectionOffset.QuadPart;
          LODWORD(CommitSize) = v21.LowPart + v23;
          goto LABEL_33;
        }
      }
      v18 = WdLogNewEntry5_WdError(v17);
      *(_QWORD *)(v18 + 24) = v14;
      WdLogEvent5_WdError(v18);
      v9 = 0;
    }
LABEL_44:
    v32 = 0;
    goto LABEL_45;
  }
  return (unsigned int)v14;
}
