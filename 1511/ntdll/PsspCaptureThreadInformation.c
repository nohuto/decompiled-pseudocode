/*
 * XREFs of PsspCaptureThreadInformation @ 0x18008B488
 * Callers:
 *     PssNtCaptureSnapshot @ 0x1800478E0 (PssNtCaptureSnapshot.c)
 * Callees:
 *     RtlGetExtendedContextLength @ 0x180070810 (RtlGetExtendedContextLength.c)
 *     PsspDumpThread @ 0x18008B79C (PsspDumpThread.c)
 *     PsspFreeLinkedHandleList @ 0x18008B98C (PsspFreeLinkedHandleList.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x1800A53C0 (ZwAllocateVirtualMemory.c)
 *     ZwMapViewOfSection @ 0x1800A55C0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A5600 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x1800A5A00 (NtCreateSection.c)
 *     ZwGetNextThread @ 0x1800A6DF0 (ZwGetNextThread.c)
 */

__int64 __fastcall PsspCaptureThreadInformation(__int64 a1, void *a2, unsigned int a3, ULONG a4)
{
  unsigned int v4; // ebx
  ACCESS_MASK v6; // r12d
  PVOID *v7; // r15
  unsigned __int16 *v8; // rsi
  unsigned int v9; // r14d
  NTSTATUS NextThread; // eax
  int v11; // ecx
  NTSTATUS v12; // edi
  __int64 v13; // rdx
  NTSTATUS v14; // eax
  int v15; // esi
  unsigned __int64 v16; // rcx
  PVOID v17; // rdx
  int v18; // r12d
  PVOID *v19; // r14
  unsigned int i; // r12d
  int v21; // eax
  __int64 v22; // rdx
  ULONG_PTR v24; // rax
  NTSTATUS ExtendedContextLength; // eax
  int Flags; // [rsp+28h] [rbp-69h]
  ULONG_PTR ViewSize; // [rsp+58h] [rbp-39h] BYREF
  HANDLE ThreadHandle; // [rsp+60h] [rbp-31h] BYREF
  HANDLE NewThreadHandle; // [rsp+68h] [rbp-29h] BYREF
  PVOID v30; // [rsp+70h] [rbp-21h] BYREF
  HANDLE SectionHandle; // [rsp+78h] [rbp-19h] BYREF
  PVOID BaseAddress; // [rsp+80h] [rbp-11h] BYREF
  int v33; // [rsp+88h] [rbp-9h]
  int v34[2]; // [rsp+90h] [rbp-1h] BYREF
  int v35; // [rsp+98h] [rbp+7h]
  __int64 v36; // [rsp+9Ch] [rbp+Bh]
  LARGE_INTEGER MaximumSize; // [rsp+A8h] [rbp+17h] BYREF

  v4 = 0;
  v33 = a3 & 0x100;
  v6 = (v33 != 0 ? 8 : 0) | (a3 >> 7) & 8 | 0x40;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0;
  NextThread = ZwGetNextThread(a2, 0LL, v6, 0, 0, &NewThreadHandle);
  v11 = (int)NewThreadHandle;
  v12 = NextThread;
  ThreadHandle = NewThreadHandle;
  if ( NextThread != -2147483622 )
  {
    v13 = 1LL;
    do
    {
      if ( v12 < 0 )
        goto LABEL_34;
      if ( !v8 || v8[5] >= v8[4] )
      {
        ViewSize = 1LL;
        v30 = 0LL;
        v12 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v30, 0LL, &ViewSize, 0x1000u, 4u);
        if ( v12 < 0 )
          goto LABEL_34;
        if ( v7 )
        {
          *(_QWORD *)v8 = v30;
          v8 = (unsigned __int16 *)v30;
        }
        else
        {
          v8 = (unsigned __int16 *)v30;
          v7 = (PVOID *)v30;
        }
        LODWORD(v13) = 1;
        v24 = ViewSize - 16;
        v8[5] = 0;
        v8[4] = v24 >> 2;
        v11 = (int)NewThreadHandle;
      }
      v9 += v13;
      *(_DWORD *)&v8[2 * v8[5] + 6] = v11;
      v8[5] += v13;
      v14 = ZwGetNextThread(a2, ThreadHandle, v6, 0, 0, &NewThreadHandle);
      v11 = (int)NewThreadHandle;
      v12 = v14;
      ThreadHandle = NewThreadHandle;
      v13 = 1LL;
    }
    while ( v14 != -2147483622 );
    if ( !v9 )
      return 0LL;
    v15 = 0;
    LODWORD(ThreadHandle) = 0;
    if ( v33 )
    {
      if ( (a3 & 0x200) == 0
        || (ExtendedContextLength = RtlGetExtendedContextLength(a4, (PULONG)&ThreadHandle),
            v15 = (int)ThreadHandle,
            ExtendedContextLength < 0) )
      {
        v15 = 1232;
      }
    }
    *(_DWORD *)(a1 + 1024) = v15;
    v16 = v9 * (unsigned __int64)(((v15 + 15) & 0xFFFFFFF0) + 128);
    if ( v16 > 0xFFFFFFFF )
    {
      v12 = -1073741675;
    }
    else
    {
      MaximumSize.QuadPart = (unsigned int)v16;
      v12 = NtCreateSection(
              &SectionHandle,
              0xF0007u,
              (POBJECT_ATTRIBUTES)&stru_180102F98,
              &MaximumSize,
              4u,
              0x8000000u,
              0LL);
      if ( v12 >= 0 )
      {
        BaseAddress = 0LL;
        ViewSize = 0LL;
        v12 = ZwMapViewOfSection(
                SectionHandle,
                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                &BaseAddress,
                0LL,
                0LL,
                0LL,
                &ViewSize,
                ViewShare,
                0,
                4u);
        if ( v12 >= 0 )
        {
          v17 = BaseAddress;
          v18 = 0;
          v19 = v7;
          *(_QWORD *)v34 = BaseAddress;
          v35 = ViewSize;
          v36 = 0LL;
          if ( v7 )
          {
            do
            {
              for ( i = 0; i < *((unsigned __int16 *)v19 + 5); ++i )
              {
                NewThreadHandle = (HANDLE)*((unsigned int *)v19 + i + 3);
                v21 = PsspDumpThread((int)v34, a3, a4, v15, Flags, NewThreadHandle);
                v12 = v21;
                if ( v21 == -1073741789 )
                  break;
                if ( v21 < 0 )
                {
                  NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
                  goto LABEL_33;
                }
              }
              if ( v12 < 0 )
                break;
              v19 = (PVOID *)*v19;
            }
            while ( v19 );
            v17 = BaseAddress;
            v18 = HIDWORD(v36);
            v4 = v36;
          }
          NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v17);
          PsspFreeLinkedHandleList(v7, v22);
          *(_QWORD *)(a1 + 1000) = v4;
          *(_QWORD *)(a1 + 1008) = SectionHandle;
          *(_DWORD *)(a1 + 992) = v18;
          *(_QWORD *)(a1 + 1016) = MEMORY[0x7FFE0014];
          return 0LL;
        }
LABEL_33:
        NtClose(SectionHandle);
      }
    }
LABEL_34:
    PsspFreeLinkedHandleList(v7, v13);
    return (unsigned int)v12;
  }
  return 0LL;
}
