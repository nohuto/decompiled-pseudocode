/*
 * XREFs of ScsiModeSenseRequest @ 0x1C00074E4
 * Callers:
 *     ScsiToNVMe @ 0x1C00088F0 (ScsiToNVMe.c)
 * Callees:
 *     NVMeAllocateDmaBuffer @ 0x1C00023DC (NVMeAllocateDmaBuffer.c)
 *     SrbAssignQueueId @ 0x1C000646C (SrbAssignQueueId.c)
 *     NVMeSetSenseData @ 0x1C000D49C (NVMeSetSenseData.c)
 *     memset @ 0x1C000EF40 (memset.c)
 */

__int64 __fastcall ScsiModeSenseRequest(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v5; // rax
  _DWORD *v6; // r9
  __int64 v7; // rdx
  char v8; // cl
  __int64 result; // rax
  unsigned int v10; // ebx
  char v11; // cl
  __int64 v12; // rsi
  __int64 PhysicalAddress; // rax
  __int64 v14; // rbx
  void *v15; // rax
  char v16; // [rsp+58h] [rbp+10h] BYREF
  void *v17; // [rsp+60h] [rbp+18h]

  v17 = 0LL;
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v5 = *(_QWORD *)(a2 + 64);
    v6 = (_DWORD *)(a2 + 60);
  }
  else
  {
    v5 = *(_QWORD *)(a2 + 24);
    v6 = (_DWORD *)(a2 + 16);
  }
  v7 = 8LL;
  v8 = a3[2];
  if ( *a3 == 26 )
    v7 = 4LL;
  if ( (v8 & 0xC0) != 0 )
  {
    LOBYTE(v7) = 6;
LABEL_8:
    LOBYTE(v6) = 36;
    NVMeSetSenseData(a2, v7, a3, v6);
    return 3238002694LL;
  }
  if ( !v5 )
    goto LABEL_14;
  if ( *v6 < (unsigned int)v7 )
  {
    v10 = -1056964604;
LABEL_15:
    LOBYTE(v6) = 36;
    LOBYTE(v7) = 6;
    NVMeSetSenseData(a2, v7, a3, v6);
    return v10;
  }
  v11 = v8 & 0x3F;
  if ( v11 != 63 && v11 != 8 )
  {
LABEL_14:
    v10 = -1056964602;
    goto LABEL_15;
  }
  if ( (unsigned int)(*v6 - v7) < 0xC )
  {
    LOBYTE(v7) = 18;
    goto LABEL_8;
  }
  NVMeAllocateDmaBuffer(a1, 0x200u);
  if ( v17 )
  {
    if ( *(_BYTE *)(a2 + 2) == 40 )
      v12 = *(_QWORD *)(a2 + 104);
    else
      v12 = *(_QWORD *)(a2 + 56);
    if ( (v12 & 0xFFF) != 0 )
      v12 = v12 - (v12 & 0xFFF) + 4096;
    memset(v17, 0, 0x200uLL);
    PhysicalAddress = StorPortGetPhysicalAddress(a1, 0LL, v17, &v16);
    *(_WORD *)(v12 + 4166) = 257;
    v14 = PhysicalAddress;
    SrbAssignQueueId(a1, a2);
    *(_DWORD *)(v12 + 4100) = -1;
    *(_BYTE *)(v12 + 4096) = 2;
    *(_QWORD *)(v12 + 4120) = v14;
    *(_BYTE *)(v12 + 4136) = 2;
    *(_BYTE *)(v12 + 4138) = 127;
    *(_QWORD *)(v12 + 4216) = NVMeModeSenseGetLogPageHealthInfoCompletion;
    *(_BYTE *)(v12 + 4168) = 1;
    v15 = v17;
    *(_QWORD *)(v12 + 4224) = 0LL;
    *(_QWORD *)(v12 + 4192) = v15;
    result = 0LL;
    *(_DWORD *)(v12 + 4200) = 512;
  }
  else
  {
    *(_BYTE *)(a2 + 3) = 4;
    return 3238002691LL;
  }
  return result;
}
