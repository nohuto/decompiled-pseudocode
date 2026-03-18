/*
 * XREFs of FirmwareGetInfo @ 0x1C0008C4C
 * Callers:
 *     IoctlFirmwareProcess @ 0x1C00097FC (IoctlFirmwareProcess.c)
 * Callees:
 *     GetSrbDataBuffer @ 0x1C0001F4C (GetSrbDataBuffer.c)
 *     SrbAssignQueueId @ 0x1C0002B98 (SrbAssignQueueId.c)
 *     memset @ 0x1C0003180 (memset.c)
 *     GetSrbExtension @ 0x1C0004794 (GetSrbExtension.c)
 *     NVMeAllocateDmaBuffer @ 0x1C00065A0 (NVMeAllocateDmaBuffer.c)
 *     BuildGetLogPageCommand @ 0x1C0008830 (BuildGetLogPageCommand.c)
 */

__int64 __fastcall FirmwareGetInfo(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebp
  _DWORD *SrbDataBuffer; // rax
  _DWORD *v6; // rbx
  unsigned int v7; // edx
  __int64 v9; // rax
  __int64 SrbExtension; // rdi
  __int64 PhysicalAddress; // rax
  __int64 v12; // rbx
  __int64 v13; // [rsp+60h] [rbp+18h] BYREF
  void *v14; // [rsp+68h] [rbp+20h]

  v4 = 0;
  v14 = 0LL;
  SrbDataBuffer = (_DWORD *)GetSrbDataBuffer(a2, &v13);
  v6 = SrbDataBuffer;
  v7 = SrbDataBuffer[12];
  if ( v7 < 0x10 )
  {
    SrbDataBuffer[5] = 3;
LABEL_3:
    *(_BYTE *)(a2 + 3) = 21;
    return 3238002694LL;
  }
  v9 = (unsigned int)SrbDataBuffer[11];
  if ( *(_DWORD *)((char *)v6 + v9) == 2 && *(_DWORD *)((char *)v6 + v9 + 4) >= 0x18u && v7 < 0x18 )
  {
    v6[5] = 3;
    goto LABEL_3;
  }
  NVMeAllocateDmaBuffer(a1, 0x200u);
  if ( v14 )
  {
    SrbExtension = GetSrbExtension(a2);
    memset(v14, 0, 0x200uLL);
    PhysicalAddress = StorPortGetPhysicalAddress(a1, 0LL, v14, &v13);
    *(_BYTE *)(SrbExtension + 4245) |= 3u;
    v12 = PhysicalAddress;
    SrbAssignQueueId(a1, a2);
    BuildGetLogPageCommand(SrbExtension + 4096, 3u, 0x200u, v12, -1);
    *(_BYTE *)(SrbExtension + 4245) |= 4u;
    *(_QWORD *)(SrbExtension + 4216) = NVMeGetLogPageFirmwareSlotCompletion;
    *(_QWORD *)(SrbExtension + 4200) = v14;
    *(_DWORD *)(SrbExtension + 4232) = 512;
  }
  else
  {
    *(_BYTE *)(a2 + 3) = 4;
    v4 = -1056964605;
    v6[5] = 1;
  }
  return v4;
}
