/*
 * XREFs of LogSenseInformationalExceptions @ 0x1C0009D30
 * Callers:
 *     ScsiLogSenseRequest @ 0x1C000BA5C (ScsiLogSenseRequest.c)
 * Callees:
 *     GetSrbDataBuffer @ 0x1C0001F4C (GetSrbDataBuffer.c)
 *     SrbAssignQueueId @ 0x1C0002B98 (SrbAssignQueueId.c)
 *     memset @ 0x1C0003180 (memset.c)
 *     GetSrbExtension @ 0x1C0004794 (GetSrbExtension.c)
 *     NVMeZeroMemory @ 0x1C000505C (NVMeZeroMemory.c)
 *     NVMeAllocateDmaBuffer @ 0x1C00065A0 (NVMeAllocateDmaBuffer.c)
 *     BuildGetLogPageCommand @ 0x1C0008830 (BuildGetLogPageCommand.c)
 *     NVMeSetSenseData @ 0x1C000E5FC (NVMeSetSenseData.c)
 */

__int64 __fastcall LogSenseInformationalExceptions(__int64 a1, __int64 a2)
{
  char *SrbDataBuffer; // rax
  __int64 v5; // rdx
  unsigned int *v6; // r8
  __int64 v7; // r9
  char *v8; // rbx
  char v9; // al
  __int64 SrbExtension; // rdi
  void *v11; // r9
  __int64 PhysicalAddress; // rax
  __int64 v13; // rbx
  unsigned int *v15; // [rsp+60h] [rbp+18h] BYREF
  __int64 v16; // [rsp+68h] [rbp+20h]

  v15 = 0LL;
  v16 = 0LL;
  SrbDataBuffer = (char *)GetSrbDataBuffer(a2, &v15);
  v8 = SrbDataBuffer;
  if ( SrbDataBuffer && (v6 = v15, v5 = *v15, (unsigned int)v5 >= 0xC) )
  {
    NVMeZeroMemory(SrbDataBuffer, v5);
    *(_DWORD *)v8 = 134217775;
    *((_WORD *)v8 + 2) = 0;
    v9 = v8[6] & 0x40;
    *(_DWORD *)(v8 + 7) = -16777212;
    v8[6] = v9 | 0x23;
    NVMeAllocateDmaBuffer(a1, 0x200u);
    if ( v16 )
    {
      SrbExtension = GetSrbExtension(a2);
      memset(v11, 0, 0x200uLL);
      PhysicalAddress = StorPortGetPhysicalAddress(a1, 0LL, v16, &v15);
      *(_BYTE *)(SrbExtension + 4245) |= 3u;
      v13 = PhysicalAddress;
      SrbAssignQueueId(a1, a2);
      BuildGetLogPageCommand(SrbExtension + 4096, 2u, 0x200u, v13, -1);
      *(_BYTE *)(SrbExtension + 4245) |= 4u;
      *(_QWORD *)(SrbExtension + 4216) = NVMeGetLogPageHealthInfoCompletion;
      *(_QWORD *)(SrbExtension + 4200) = v16;
      *(_DWORD *)(SrbExtension + 4232) = 512;
      *(_QWORD *)(SrbExtension + 4224) = 47LL;
    }
    else
    {
      *(_BYTE *)(a2 + 3) = 4;
    }
    return 0LL;
  }
  else
  {
    LOBYTE(v7) = 36;
    LOBYTE(v5) = 6;
    NVMeSetSenseData(a2, v5, v6, v7);
    return 3238002694LL;
  }
}
