/*
 * XREFs of HalExamineMBR @ 0x140105C4C
 * Callers:
 *     IoSetPartitionInformation @ 0x1404E3140 (IoSetPartitionInformation.c)
 *     IoReadPartitionTable @ 0x1404E89A8 (IoReadPartitionTable.c)
 *     IopCreateArcName @ 0x140522480 (IopCreateArcName.c)
 *     IoWritePartitionTable @ 0x1405F5BF8 (IoWritePartitionTable.c)
 *     VerifierHalExamineMBR @ 0x1406C06AC (VerifierHalExamineMBR.c)
 * Callees:
 *     IofCallDriver @ 0x14007E4C0 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     IoBuildSynchronousFsdRequest @ 0x1404A9D3C (IoBuildSynchronousFsdRequest.c)
 */

void __stdcall HalExamineMBR(PDEVICE_OBJECT DeviceObject, ULONG SectorSize, ULONG MBRTypeIdentifier, PVOID *Buffer)
{
  ULONG v5; // esi
  SIZE_T v8; // rdx
  _DWORD *PoolWithTag; // rax
  _DWORD *v10; // rbx
  PIRP v11; // rax
  NTSTATUS Status; // eax
  int v13; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-30h] BYREF
  struct _KEVENT Object; // [rsp+50h] [rbp-20h] BYREF
  LARGE_INTEGER Timeout; // [rsp+A8h] [rbp+38h] BYREF

  *Buffer = 0LL;
  v5 = 512;
  if ( SectorSize >= 0x200 )
    v5 = SectorSize;
  Timeout.QuadPart = 0LL;
  v8 = v5;
  if ( v5 < 0x1000 )
    v8 = 4096LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, v8, 0x62747346u);
  v10 = PoolWithTag;
  if ( PoolWithTag )
  {
    Object.Header.SignalState = 0;
    Object.Header.WaitListHead.Blink = &Object.Header.WaitListHead;
    LOWORD(Object.Header.Lock) = 0;
    Object.Header.WaitListHead.Flink = &Object.Header.WaitListHead;
    Object.Header.Size = 6;
    v11 = IoBuildSynchronousFsdRequest(3u, DeviceObject, PoolWithTag, v5, &Timeout, &Object, &IoStatusBlock);
    if ( !v11 )
      goto LABEL_12;
    v11->Tail.Overlay.CurrentStackLocation[-1].Flags |= 2u;
    Status = IofCallDriver(DeviceObject, v11);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    if ( Status < 0
      || *((_WORD *)v10 + 255) != 0xAA55
      || (v13 = *((unsigned __int8 *)v10 + 450), v13 != MBRTypeIdentifier) )
    {
LABEL_12:
      ExFreePoolWithTag(v10, 0);
      return;
    }
    if ( (_BYTE)v13 == 84 )
    {
      *v10 = 63;
LABEL_17:
      *Buffer = v10;
      return;
    }
    if ( (_BYTE)v13 == 85 )
      goto LABEL_17;
  }
}
