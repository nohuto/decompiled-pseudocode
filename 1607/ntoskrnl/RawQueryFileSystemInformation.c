/*
 * XREFs of RawQueryFileSystemInformation @ 0x140683588
 * Callers:
 *     RawUserFsCtrl @ 0x140529F94 (RawUserFsCtrl.c)
 * Callees:
 *     KeInitializeEvent @ 0x14002DA20 (KeInitializeEvent.c)
 *     IofCallDriver @ 0x14002DBE0 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     IoBuildSynchronousFsdRequest @ 0x14050E5A8 (IoBuildSynchronousFsdRequest.c)
 *     RawPerformDevIoCtrl @ 0x140683034 (RawPerformDevIoCtrl.c)
 *     RawComputeFileSystemInformationChecksum @ 0x14068352C (RawComputeFileSystemInformationChecksum.c)
 */

__int64 __fastcall RawQueryFileSystemInformation(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // r15
  size_t v6; // rax
  NTSTATUS Status; // ebx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  size_t v11; // rsi
  PVOID PoolWithTag; // rax
  __int64 v13; // rdi
  PIRP v14; // rax
  unsigned int v15; // eax
  int v16; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-29h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-19h] BYREF
  _BYTE Timeout[12]; // [rsp+78h] [rbp-1h] BYREF
  __int64 v21; // [rsp+84h] [rbp+Bh]
  SIZE_T NumberOfBytes; // [rsp+8Ch] [rbp+13h]

  v3 = *(_QWORD **)(a1 + 24);
  IoStatusBlock.Pointer = 0LL;
  memset(Timeout, 0, sizeof(Timeout));
  IoStatusBlock.Information = 0LL;
  v21 = 0LL;
  LODWORD(NumberOfBytes) = 0;
  v6 = *(unsigned int *)(a2 + 8);
  memset(&Event, 0, sizeof(Event));
  if ( (unsigned int)v6 >= 9 )
  {
    memset(v3, 0, v6);
    Status = RawPerformDevIoCtrl(v8, *(struct _DEVICE_OBJECT **)(a3 + 176), v9, v10, Timeout);
    if ( Status >= 0 )
    {
      v11 = (unsigned int)NumberOfBytes;
      if ( (unsigned int)NumberOfBytes >= 0x18 )
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x62574152u);
        v13 = (__int64)PoolWithTag;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, v11);
          KeInitializeEvent(&Event, NotificationEvent, 0);
          v14 = IoBuildSynchronousFsdRequest(
                  3u,
                  *(PDEVICE_OBJECT *)(a3 + 176),
                  (PVOID)v13,
                  v11,
                  0LL,
                  &Event,
                  &IoStatusBlock);
          if ( v14 )
          {
            v14->Tail.Overlay.CurrentStackLocation[-1].Flags |= 2u;
            Status = IofCallDriver(*(PDEVICE_OBJECT *)(a3 + 176), v14);
            if ( Status == 259 )
            {
              KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
              Status = IoStatusBlock.Status;
            }
            if ( Status >= 0 )
            {
              if ( *(_DWORD *)(v13 + 16) == 1397904198
                && (v15 = *(unsigned __int16 *)(v13 + 20), v15 <= (unsigned int)v11)
                && (unsigned __int16)v15 >= 0x18u
                && (unsigned __int16)RawComputeFileSystemInformationChecksum(v13) == *(_WORD *)(v13 + 22) )
              {
                if ( *(_BYTE *)(v13 + 3) == 82
                  && *(_BYTE *)(v13 + 4) == 101
                  && *(_BYTE *)(v13 + 5) == 70
                  && *(_BYTE *)(v13 + 6) == 83 )
                {
                  v16 = Status;
                  if ( !*(_BYTE *)(v13 + 7) )
                    v16 = -1073741637;
                  Status = v16;
                }
                *v3 = *(_QWORD *)(v13 + 3);
                *(_QWORD *)(a1 + 56) = 9LL;
              }
              else
              {
                Status = -1073741637;
              }
            }
          }
          else
          {
            Status = -1073741670;
          }
          ExFreePoolWithTag((PVOID)v13, 0);
        }
        else
        {
          return (unsigned int)-1073741670;
        }
      }
      else
      {
        return (unsigned int)-1073741637;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741789;
  }
  return (unsigned int)Status;
}
