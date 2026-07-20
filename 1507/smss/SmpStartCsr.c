/*
 * XREFs of SmpStartCsr @ 0x140005CC0
 * Callers:
 *     SmpCreateInitialSession @ 0x140002E30 (SmpCreateInitialSession.c)
 *     SmpApiCallback @ 0x140006090 (SmpApiCallback.c)
 * Callees:
 *     SmpStopCsr @ 0x140001110 (SmpStopCsr.c)
 *     SmpGetCoreProcessIds @ 0x140002EB4 (SmpGetCoreProcessIds.c)
 *     SmpExecuteCommand @ 0x14000350C (SmpExecuteCommand.c)
 *     SmpAllocateControlBlock @ 0x140005458 (SmpAllocateControlBlock.c)
 *     SmpDereferenceKnownSubSys @ 0x140007B10 (SmpDereferenceKnownSubSys.c)
 *     SmpDestroyControlBlock @ 0x140007C5C (SmpDestroyControlBlock.c)
 *     SmpReleaseControlBlock @ 0x140007CEC (SmpReleaseControlBlock.c)
 *     SmpRecordControlBlock @ 0x140007EA8 (SmpRecordControlBlock.c)
 *     SmpAllocateInitialCommandBuffer @ 0x140007F6C (SmpAllocateInitialCommandBuffer.c)
 *     __security_check_cookie @ 0x14000C1E0 (__security_check_cookie.c)
 *     memset_0 @ 0x14000C6C8 (memset_0.c)
 */

__int64 __fastcall SmpStartCsr(__int64 a1)
{
  unsigned int v2; // ecx
  HANDLE *ControlBlock; // rax
  HANDLE *v4; // rbx
  int CoreProcessIds; // edi
  __int64 v6; // r8
  int v7; // eax
  _QWORD *v8; // rcx
  unsigned int v9; // eax
  NTSTATUS v10; // eax
  PVOID v12; // rcx
  int ProcessInformation; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-C8h] BYREF
  PVOID BaseAddress[2]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE EventInformation[4]; // [rsp+58h] [rbp-A8h] BYREF
  int v17; // [rsp+5Ch] [rbp-A4h]
  HANDLE Object[2]; // [rsp+60h] [rbp-A0h] BYREF
  struct _RTL_USER_PROCESS_INFORMATION v19; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v20[40]; // [rsp+E0h] [rbp-20h] BYREF
  int v21; // [rsp+108h] [rbp+8h]
  int v22; // [rsp+110h] [rbp+10h]

  v19.Size = 0;
  memset_0(&v19.ProcessHandle, 0, 0x60uLL);
  v2 = *(_DWORD *)(a1 + 48);
  *(_OWORD *)BaseAddress = 0LL;
  if ( v2 < SmpNumberInitialSessions )
  {
    CoreProcessIds = SmpGetCoreProcessIds(v2, (volatile signed __int32 **)BaseAddress);
    *(_DWORD *)(a1 + 48) = *(_DWORD *)(SmpCoreProcessIds + 40LL * *(unsigned int *)(a1 + 48));
    if ( CoreProcessIds >= 0 )
    {
      v12 = BaseAddress[0];
      if ( BaseAddress[0] && *((_DWORD *)BaseAddress[0] + 6) == 2 )
        *(_QWORD *)(a1 + 320) = *((_QWORD *)BaseAddress[0] + 6);
      else
        CoreProcessIds = -1073741823;
      if ( v12 )
        SmpDereferenceKnownSubSys(v12);
      if ( CoreProcessIds >= 0 )
      {
        *(PVOID *)(a1 + 312) = BaseAddress[1];
        return 0LL;
      }
      v22 = *(_DWORD *)(a1 + 48);
      v21 = 6;
      SmpStopCsr((__int64)v20);
      return (unsigned int)CoreProcessIds;
    }
  }
  NtWaitForSingleObject(SmpSessionCreateBlockEvent, 0, 0LL);
  UnicodeString.Length = *(_WORD *)(a1 + 52);
  UnicodeString.MaximumLength = UnicodeString.Length;
  UnicodeString.Buffer = (PWSTR)(a1 + 56);
  ControlBlock = (HANDLE *)SmpAllocateControlBlock();
  v4 = ControlBlock;
  if ( !ControlBlock )
    return 3221225626LL;
  CoreProcessIds = SmpAllocateInitialCommandBuffer(ControlBlock[3], &UnicodeString);
  if ( CoreProcessIds >= 0 )
  {
    CoreProcessIds = SmpExecuteCommand((__int64)&UnicodeString, 0LL, v6, 5152, &v19);
    RtlFreeUnicodeString(&UnicodeString);
    if ( CoreProcessIds >= 0 )
    {
      v7 = NtQueryInformationProcess(v19.ProcessHandle, ProcessSessionInformation, &ProcessInformation, 4u, 0LL);
      CoreProcessIds = v7;
      if ( v7 >= 0 )
      {
        v8 = v4[2];
        *v8 = v4[4];
        v8[1] = v4[5];
        v4[6] = v19.ProcessHandle;
        v4[7] = v19.ClientId.UniqueProcess;
        *((_DWORD *)v4 + 2) = ProcessInformation;
        v9 = _InterlockedIncrement(&dword_140024160);
        if ( v9 > SmpNumberInitialSessions )
          _InterlockedDecrement(&dword_140024160);
        else
          *(_DWORD *)(SmpCoreProcessIds + 40LL * (v9 - 1)) = ProcessInformation;
        *((_OWORD *)v4 + 4) = *(_OWORD *)a1;
        *((_OWORD *)v4 + 5) = *(_OWORD *)(a1 + 16);
        v4[12] = *(HANDLE *)(a1 + 32);
        SmpRecordControlBlock(v4);
        CoreProcessIds = NtResumeThread(v19.ThreadHandle, 0LL);
        NtClose(v19.ThreadHandle);
        if ( CoreProcessIds >= 0 )
        {
          Object[0] = v4[6];
          Object[1] = v4[4];
          v10 = NtWaitForMultipleObjects(2u, Object, WaitAny, 0, 0LL);
          CoreProcessIds = v10;
          if ( v10 < 0 )
          {
            if ( (*(_BYTE *)v4 & 1) != 0
              || (_m_prefetchw(v4), (_InterlockedOr((volatile signed __int32 *)v4, 1u) & 1) != 0) )
            {
              CoreProcessIds = 0;
            }
          }
          else
          {
            if ( v10 )
              goto LABEL_11;
            NtQueryEvent(v4[4], EventBasicInformation, EventInformation, 8u, 0LL);
            if ( !v17 )
            {
              if ( (*(_BYTE *)v4 & 1) == 0 )
                _InterlockedOr((volatile signed __int32 *)v4, 1u);
              CoreProcessIds = -1073741823;
LABEL_31:
              SmpDestroyControlBlock(v4);
              goto LABEL_26;
            }
            CoreProcessIds = NtClearEvent(v4[4]);
          }
LABEL_11:
          if ( CoreProcessIds >= 0 )
          {
            SmpReleaseControlBlock(v4);
            return 259LL;
          }
          goto LABEL_31;
        }
        if ( (*(_BYTE *)v4 & 1) == 0 )
          _InterlockedOr((volatile signed __int32 *)v4, 1u);
        goto LABEL_31;
      }
      NtTerminateProcess(v19.ProcessHandle, v7);
      NtClose(v19.ProcessHandle);
      NtClose(v19.ThreadHandle);
    }
  }
LABEL_26:
  SmpReleaseControlBlock(v4);
  return (unsigned int)CoreProcessIds;
}
