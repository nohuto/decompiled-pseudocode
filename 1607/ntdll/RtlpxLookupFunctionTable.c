/*
 * XREFs of RtlpxLookupFunctionTable @ 0x1800362E0
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x180031D50 (LdrGetProcedureAddressForCaller.c)
 *     RtlpLookupFunctionEntryForStackWalks @ 0x180033690 (RtlpLookupFunctionEntryForStackWalks.c)
 *     LdrpSnapModule @ 0x180033F90 (LdrpSnapModule.c)
 *     RtlLookupFunctionEntry @ 0x180035F90 (RtlLookupFunctionEntry.c)
 *     RtlPcToFileHeader @ 0x180037660 (RtlPcToFileHeader.c)
 *     LdrpInitializeExceptionTable @ 0x1800D2664 (LdrpInitializeExceptionTable.c)
 *     RtlLookupFunctionTable @ 0x1800DBC70 (RtlLookupFunctionTable.c)
 * Callees:
 *     RtlpImageDirectoryEntryToData32 @ 0x1800316B4 (RtlpImageDirectoryEntryToData32.c)
 *     RtlImageNtHeaderEx @ 0x1800348A0 (RtlImageNtHeaderEx.c)
 *     RtlBackoff @ 0x180063160 (RtlBackoff.c)
 *     RtlpWaitCouldDeadlock @ 0x180066AC8 (RtlpWaitCouldDeadlock.c)
 *     RtlpOptimizeSRWLockList @ 0x180076164 (RtlpOptimizeSRWLockList.c)
 *     RtlpWakeSRWLock @ 0x1800761CC (RtlpWakeSRWLock.c)
 *     RtlAddressInSectionTable @ 0x180080BE0 (RtlAddressInSectionTable.c)
 *     RtlRaiseStatus @ 0x1800A5DE0 (RtlRaiseStatus.c)
 *     ZwQueryVirtualMemory @ 0x1800A6880 (ZwQueryVirtualMemory.c)
 *     ZwTerminateProcess @ 0x1800A69A0 (ZwTerminateProcess.c)
 *     NtWaitForAlertByThreadId @ 0x1800A9B90 (NtWaitForAlertByThreadId.c)
 */

__int64 __fastcall RtlpxLookupFunctionTable(unsigned __int64 BaseAddress, char *a2, __int64 a3, __int64 a4)
{
  char *v4; // rdi
  bool v5; // zf
  PVOID v6; // r14
  __int64 v7; // rsi
  unsigned __int64 Value; // rbx
  int v9; // r10d
  int v10; // r9d
  int v11; // eax
  char *v12; // r8
  unsigned __int64 v13; // rdx
  signed __int64 v14; // rax
  signed __int64 v15; // rcx
  unsigned __int64 v17; // rbx
  bool v18; // r15
  void *v19; // r14
  int v20; // eax
  PIMAGE_NT_HEADERS v21; // rcx
  unsigned __int16 Magic; // ax
  __int64 VirtualAddress; // rdx
  signed __int64 v24; // rcx
  signed __int64 v25; // rdx
  signed __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rdx
  signed __int64 v30; // rax
  signed __int64 v31; // rax
  _QWORD *v33; // rax
  __int64 i; // rdx
  SIZE_T MemoryInformationLength; // [rsp+20h] [rbp-60h]
  unsigned __int64 MemoryInformation; // [rsp+38h] [rbp-48h] BYREF
  int v37; // [rsp+40h] [rbp-40h]
  int v38; // [rsp+48h] [rbp-38h]
  unsigned __int64 v39; // [rsp+50h] [rbp-30h] BYREF
  unsigned __int64 *v40; // [rsp+58h] [rbp-28h]
  __int64 v41; // [rsp+60h] [rbp-20h]
  unsigned __int64 v42; // [rsp+68h] [rbp-18h]
  int v43; // [rsp+70h] [rbp-10h]
  signed __int32 v44[3]; // [rsp+74h] [rbp-Ch] BYREF
  int v45; // [rsp+C8h] [rbp+48h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v47; // [rsp+D8h] [rbp+58h] BYREF

  v4 = a2;
  v5 = LdrInitState == 3;
  v6 = (PVOID)BaseAddress;
  v7 = 0LL;
  *((_QWORD *)a2 + 1) = 0LL;
  *((_DWORD *)a2 + 4) = 0;
  if ( v5 )
  {
    v45 = 0;
    Value = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpInvertedFunctionTableSRWLock, 17LL, 0LL);
    if ( !Value )
    {
LABEL_3:
      if ( LdrpInvertedFunctionTable[0] != 1 )
      {
        v9 = 1;
        v10 = LdrpInvertedFunctionTable[0] - 1;
        while ( v10 >= v9 )
        {
          v11 = (v10 + v9) >> 1;
          v12 = (char *)&xmmword_180163430 + 24 * v11;
          v13 = *((_QWORD *)v12 + 1);
          if ( (unsigned __int64)v6 < v13 )
          {
            if ( !v11 )
              break;
            v10 = v11 - 1;
          }
          else
          {
            if ( (unsigned __int64)v6 < v13 + *((unsigned int *)v12 + 4) )
            {
              *(_OWORD *)v4 = *(_OWORD *)v12;
              *((_QWORD *)v4 + 2) = *((_QWORD *)v12 + 2);
              v7 = *(_QWORD *)v4;
              break;
            }
            v9 = v11 + 1;
          }
        }
      }
      v14 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpInvertedFunctionTableSRWLock, 0LL, 17LL);
      v15 = v14;
      if ( v14 != 17 )
      {
        if ( (v14 & 1) == 0 )
          RtlRaiseStatus(-1073741212);
        if ( (v14 & 2) != 0 )
        {
LABEL_44:
          if ( (v15 & 8) != 0 )
          {
            v33 = (_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0uLL);
            for ( i = *(_QWORD *)((v15 & 0xFFFFFFFFFFFFFFF0uLL) + 8); !i; i = v33[1] )
              v33 = (_QWORD *)*v33;
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(i + 32), 0xFFFFFFFF) > 1 )
              goto LABEL_14;
            v27 = -9LL;
          }
          else
          {
            v27 = -1LL;
          }
          while ( 1 )
          {
            v28 = (v15 & 6) == 2 ? v27 + 4 : v27;
            v29 = v28 + v15;
            v30 = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)&LdrpInvertedFunctionTableSRWLock,
                    v28 + v15,
                    v15);
            if ( v15 == v30 )
              break;
            v15 = v30;
          }
          if ( (v15 & 6) == 2 )
            RtlpWakeSRWLock(&LdrpInvertedFunctionTableSRWLock, v29, 0LL);
          goto LABEL_14;
        }
        while ( 1 )
        {
          v25 = v15 - 16;
          if ( (v15 & 0xFFFFFFFFFFFFFFF0uLL) == 0x10 )
            v25 = 0LL;
          v26 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpInvertedFunctionTableSRWLock, v25, v15);
          v5 = v15 == v26;
          v15 = v26;
          if ( v5 )
            break;
          if ( (v26 & 2) != 0 )
            goto LABEL_44;
        }
      }
LABEL_14:
      if ( v7 || !byte_18016342C )
        return v7;
      goto LABEL_16;
    }
    while ( 1 )
    {
      if ( (Value & 1) != 0 && (((Value >> 1) & 1) != 0 || (Value & 0xFFFFFFFFFFFFFFF0uLL) == 0) )
      {
        if ( (unsigned __int8)RtlpWaitCouldDeadlock(BaseAddress, a2, a3, a4, MemoryInformationLength) )
          ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073741749);
        BaseAddress = (unsigned __int64)NtCurrentTeb()->ClientId.UniqueThread;
        v42 = BaseAddress;
        LOBYTE(BaseAddress) = 0;
        v44[0] = 2;
        v41 = 0LL;
        if ( ((Value >> 1) & 1) != 0 )
        {
          v40 = 0LL;
          v43 = -1;
          v39 = Value & 0xFFFFFFFFFFFFFFF0uLL;
          a2 = (char *)((unsigned __int64)&v39 | Value & 8 | 7);
          LOBYTE(BaseAddress) = (Value & 4) == 0;
        }
        else
        {
          v43 = -2;
          v40 = &v39;
          a2 = (char *)&v39 + 3;
        }
        v31 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)&LdrpInvertedFunctionTableSRWLock,
                (signed __int64)a2,
                Value);
        v5 = Value == v31;
        Value = v31;
        if ( !v5 )
          goto LABEL_58;
        if ( (_BYTE)BaseAddress )
          RtlpOptimizeSRWLockList(&LdrpInvertedFunctionTableSRWLock);
        if ( MEMORY[0x7FFE036A] > 1u )
        {
          BaseAddress = (unsigned int)SRWLockSpinCount;
          if ( SRWLockSpinCount )
          {
            do
            {
              if ( (v44[0] & 2) == 0 )
                break;
              _mm_pause();
              v5 = (_DWORD)BaseAddress == 1;
              BaseAddress = (unsigned int)(BaseAddress - 1);
            }
            while ( !v5 );
          }
        }
        if ( _interlockedbittestandreset(v44, 1u) )
        {
          do
            NtWaitForAlertByThreadId(&LdrpInvertedFunctionTableSRWLock, 0LL);
          while ( (v44[0] & 4) == 0 );
        }
      }
      else
      {
        v24 = Value | 1;
        if ( (Value & 2) == 0 )
          v24 += 16LL;
        if ( Value == _InterlockedCompareExchange64(
                        (volatile signed __int64 *)&LdrpInvertedFunctionTableSRWLock,
                        v24,
                        Value) )
          goto LABEL_3;
LABEL_58:
        RtlBackoff(&v45);
        _m_prefetchw(&LdrpInvertedFunctionTableSRWLock);
        Value = LdrpInvertedFunctionTableSRWLock.Value;
      }
    }
  }
LABEL_16:
  if ( ZwQueryVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v6, MemoryImageInformation, &MemoryInformation, 0x18uLL, 0LL) >= 0 )
  {
    v17 = MemoryInformation;
    if ( MemoryInformation )
    {
      if ( (v38 & 2) == 0 && (v38 & 1) == 0 && (unsigned __int64)v6 >= MemoryInformation )
      {
        OutHeaders = 0LL;
        v18 = 1;
        v47 = 0LL;
        v19 = (void *)MemoryInformation;
        v7 = 0LL;
        if ( (MemoryInformation & 3) != 0 )
        {
          v18 = (MemoryInformation & 1) == 0;
          v19 = (void *)(MemoryInformation & 0xFFFFFFFFFFFFFFFCuLL);
        }
        v20 = RtlImageNtHeaderEx(1u, v19, 0LL, &OutHeaders);
        v21 = OutHeaders;
        if ( OutHeaders )
        {
          Magic = OutHeaders->OptionalHeader.Magic;
          if ( Magic != 267 )
          {
            if ( Magic == 523 && OutHeaders->OptionalHeader.NumberOfRvaAndSizes > 3 )
            {
              VirtualAddress = OutHeaders->OptionalHeader.DataDirectory[3].VirtualAddress;
              if ( (_DWORD)VirtualAddress )
              {
                *((_DWORD *)v4 + 5) = OutHeaders->OptionalHeader.DataDirectory[3].Size;
                if ( !v18 && (unsigned int)VirtualAddress >= v21->OptionalHeader.SizeOfHeaders )
                {
                  v7 = (__int64)RtlAddressInSectionTable(v21, v19, VirtualAddress);
                  if ( v7 )
                    goto LABEL_30;
                  goto LABEL_79;
                }
                v7 = (__int64)v19 + VirtualAddress;
LABEL_30:
                *((_DWORD *)v4 + 4) = v37;
                *(_QWORD *)v4 = v7;
                *((_QWORD *)v4 + 1) = v17;
                return v7;
              }
            }
LABEL_79:
            v7 = 0LL;
            goto LABEL_30;
          }
          v20 = RtlpImageDirectoryEntryToData32((__int64)v19, (void *)v18, 3u, (_DWORD *)v4 + 5, OutHeaders, &v47);
          v7 = v47;
        }
        if ( v20 >= 0 )
          goto LABEL_30;
        goto LABEL_79;
      }
    }
  }
  return v7;
}
