/*
 * XREFs of FirmwareGetInfo @ 0x1C0008D64
 * Callers:
 *     IoctlToNVMe @ 0x1C000A180 (IoctlToNVMe.c)
 * Callees:
 *     NVMeAllocateDmaBuffer @ 0x1C00022EC (NVMeAllocateDmaBuffer.c)
 *     SrbAssignQueueId @ 0x1C0006344 (SrbAssignQueueId.c)
 *     memset @ 0x1C000EE00 (memset.c)
 */

__int64 __fastcall FirmwareGetInfo(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  bool v4; // zf
  _DWORD *v6; // rbx
  unsigned int v7; // ecx
  __int64 result; // rax
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 PhysicalAddress; // rax
  __int64 v12; // rbx
  char v13; // [rsp+48h] [rbp+10h] BYREF
  void *v14; // [rsp+50h] [rbp+18h]

  v2 = 0;
  v4 = *(_BYTE *)(a2 + 2) == 40;
  v14 = 0LL;
  if ( v4 )
    v6 = *(_DWORD **)(a2 + 64);
  else
    v6 = *(_DWORD **)(a2 + 24);
  v7 = v6[12];
  if ( v7 < 0x10
    || (v9 = (unsigned int)v6[11], *(_DWORD *)((char *)v6 + v9) == 2)
    && *(_DWORD *)((char *)v6 + v9 + 4) >= 0x18u
    && v7 < 0x18 )
  {
    v6[5] = 3;
    result = 3238002694LL;
    *(_BYTE *)(a2 + 3) = 21;
  }
  else
  {
    NVMeAllocateDmaBuffer(a1, 0x200u);
    if ( v14 )
    {
      if ( *(_BYTE *)(a2 + 2) == 40 )
        v10 = *(_QWORD *)(a2 + 104);
      else
        v10 = *(_QWORD *)(a2 + 56);
      if ( (v10 & 0xFFF) != 0 )
        v10 = v10 - (v10 & 0xFFF) + 4096;
      memset(v14, 0, 0x200uLL);
      PhysicalAddress = StorPortGetPhysicalAddress(a1, 0LL, v14, &v13);
      *(_WORD *)(v10 + 4166) = 257;
      v12 = PhysicalAddress;
      SrbAssignQueueId(a1, a2);
      *(_DWORD *)(v10 + 4100) = -1;
      *(_BYTE *)(v10 + 4096) = 2;
      *(_QWORD *)(v10 + 4120) = v12;
      *(_BYTE *)(v10 + 4136) = 3;
      *(_BYTE *)(v10 + 4138) = 127;
      *(_QWORD *)(v10 + 4216) = NVMeGetLogPageFirmwareSlotCompletion;
      *(_BYTE *)(v10 + 4168) = 1;
      *(_QWORD *)(v10 + 4192) = v14;
      *(_DWORD *)(v10 + 4200) = 512;
    }
    else
    {
      *(_BYTE *)(a2 + 3) = 4;
      v2 = -1056964605;
      v6[5] = 1;
    }
    return v2;
  }
  return result;
}
