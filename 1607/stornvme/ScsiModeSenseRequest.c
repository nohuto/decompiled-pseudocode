/*
 * XREFs of ScsiModeSenseRequest @ 0x1C000BC30
 * Callers:
 *     NVMeHwBuildIo @ 0x1C0001000 (NVMeHwBuildIo.c)
 * Callees:
 *     GetSrbDataBuffer @ 0x1C0001F4C (GetSrbDataBuffer.c)
 *     SrbAssignQueueId @ 0x1C0002B98 (SrbAssignQueueId.c)
 *     memset @ 0x1C0003180 (memset.c)
 *     GetSrbExtension @ 0x1C0004794 (GetSrbExtension.c)
 *     NVMeAllocateDmaBuffer @ 0x1C00065A0 (NVMeAllocateDmaBuffer.c)
 *     BuildGetLogPageCommand @ 0x1C0008830 (BuildGetLogPageCommand.c)
 *     NVMeSetSenseData @ 0x1C000E5FC (NVMeSetSenseData.c)
 */

__int64 __fastcall ScsiModeSenseRequest(__int64 a1, __int64 a2)
{
  __int64 SrbDataBuffer; // rax
  _BYTE *v5; // r9
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 result; // rax
  unsigned int v9; // ebx
  char v10; // dl
  __int64 SrbExtension; // rdi
  void *v12; // r9
  __int64 PhysicalAddress; // rax
  __int64 v14; // rbx
  __int64 v15; // rax
  _DWORD *v16; // [rsp+60h] [rbp+18h] BYREF
  __int64 v17; // [rsp+68h] [rbp+20h]

  v16 = 0LL;
  v17 = 0LL;
  SrbDataBuffer = GetSrbDataBuffer(a2, &v16);
  v6 = 8LL;
  LOBYTE(v7) = v5[2];
  if ( *v5 == 26 )
    v6 = 4LL;
  if ( (v7 & 0xC0) != 0 )
  {
    LOBYTE(v7) = 6;
LABEL_5:
    LOBYTE(v5) = 36;
    NVMeSetSenseData(a2, v7, v6, v5);
    return 3238002694LL;
  }
  if ( !SrbDataBuffer )
    goto LABEL_11;
  if ( *v16 < (unsigned int)v6 )
  {
    v9 = -1056964604;
LABEL_12:
    LOBYTE(v5) = 36;
    LOBYTE(v7) = 6;
    NVMeSetSenseData(a2, v7, v6, v5);
    return v9;
  }
  v10 = v7 & 0x3F;
  if ( v10 != 63 && v10 != 8 )
  {
LABEL_11:
    v9 = -1056964602;
    goto LABEL_12;
  }
  if ( (unsigned int)(*v16 - v6) < 0xC )
  {
    LOBYTE(v7) = 18;
    goto LABEL_5;
  }
  NVMeAllocateDmaBuffer(a1, 0x200u);
  if ( v17 )
  {
    SrbExtension = GetSrbExtension(a2);
    memset(v12, 0, 0x200uLL);
    PhysicalAddress = StorPortGetPhysicalAddress(a1, 0LL, v17, &v16);
    *(_BYTE *)(SrbExtension + 4245) |= 3u;
    v14 = PhysicalAddress;
    SrbAssignQueueId(a1, a2);
    BuildGetLogPageCommand(SrbExtension + 4096, 2u, 0x200u, v14, -1);
    *(_BYTE *)(SrbExtension + 4245) |= 4u;
    *(_QWORD *)(SrbExtension + 4216) = NVMeModeSenseGetLogPageHealthInfoCompletion;
    v15 = v17;
    *(_QWORD *)(SrbExtension + 4224) = 0LL;
    *(_QWORD *)(SrbExtension + 4200) = v15;
    result = 0LL;
    *(_DWORD *)(SrbExtension + 4232) = 512;
  }
  else
  {
    *(_BYTE *)(a2 + 3) = 4;
    return 3238002691LL;
  }
  return result;
}
