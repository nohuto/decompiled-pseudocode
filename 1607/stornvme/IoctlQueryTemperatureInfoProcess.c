/*
 * XREFs of IoctlQueryTemperatureInfoProcess @ 0x1C0009954
 * Callers:
 *     IoctlToNVMe @ 0x1C0009BF0 (IoctlToNVMe.c)
 * Callees:
 *     GetSrbDataBuffer @ 0x1C0001F4C (GetSrbDataBuffer.c)
 *     SrbAssignQueueId @ 0x1C0002B98 (SrbAssignQueueId.c)
 *     memset @ 0x1C0003180 (memset.c)
 *     GetSrbExtension @ 0x1C0004794 (GetSrbExtension.c)
 *     NVMeZeroMemory @ 0x1C000505C (NVMeZeroMemory.c)
 *     NVMeAllocateDmaBuffer @ 0x1C00065A0 (NVMeAllocateDmaBuffer.c)
 *     BuildGetLogPageCommand @ 0x1C0008830 (BuildGetLogPageCommand.c)
 */

__int64 __fastcall IoctlQueryTemperatureInfoProcess(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  unsigned int v4; // edi
  __int64 SrbExtension; // rax
  __int64 v7; // r15
  __int64 SrbDataBuffer; // rbx
  __int16 v9; // cx
  __int16 v10; // ax
  __int16 v11; // ax
  __int16 v12; // ax
  __int64 PhysicalAddress; // rax
  __int64 v14; // rbx
  int v16; // [rsp+60h] [rbp+8h] BYREF
  void *v17; // [rsp+70h] [rbp+18h]
  _DWORD *v18; // [rsp+78h] [rbp+20h] BYREF

  v2 = *(_QWORD *)(a1 + 1080);
  v4 = 0;
  v18 = 0LL;
  v17 = 0LL;
  SrbExtension = GetSrbExtension(a2);
  v16 = 0;
  v7 = SrbExtension;
  SrbDataBuffer = GetSrbDataBuffer(a2, &v18);
  if ( *v18 >= 0x44u )
  {
    NVMeZeroMemory((void *)(SrbDataBuffer + 28), *v18 - 28);
    *(_DWORD *)(SrbDataBuffer + 32) = 40;
    v9 = 0x8000;
    *(_DWORD *)(SrbDataBuffer + 28) = 40;
    v10 = *(_WORD *)(v2 + 268);
    if ( v10 )
      v11 = v10 - 273;
    else
      v11 = 0x8000;
    *(_WORD *)(SrbDataBuffer + 36) = v11;
    v12 = *(_WORD *)(v2 + 266);
    if ( v12 )
      v9 = v12 - 273;
    *(_WORD *)(SrbDataBuffer + 38) = v9;
    NVMeAllocateDmaBuffer(a1, 0x200u);
    if ( v17 )
    {
      memset(v17, 0, 0x200uLL);
      PhysicalAddress = StorPortGetPhysicalAddress(a1, 0LL, v17, &v16);
      *(_BYTE *)(v7 + 4245) |= 3u;
      v14 = PhysicalAddress;
      SrbAssignQueueId(a1, a2);
      BuildGetLogPageCommand(v7 + 4096, 2u, 0x200u, v14, -1);
      *(_BYTE *)(v7 + 4245) |= 4u;
      *(_QWORD *)(v7 + 4216) = QueryTemperatureInfoHealthLogCompletion;
      *(_QWORD *)(v7 + 4200) = v17;
      *(_DWORD *)(v7 + 4232) = 512;
    }
    else
    {
      *(_BYTE *)(a2 + 3) = 4;
      return (unsigned int)-1056964605;
    }
  }
  else
  {
    *(_BYTE *)(a2 + 3) = 21;
    return (unsigned int)-1056964602;
  }
  return v4;
}
