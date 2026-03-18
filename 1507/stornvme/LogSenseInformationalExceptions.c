/*
 * XREFs of LogSenseInformationalExceptions @ 0x1C00079FC
 * Callers:
 *     ScsiLogSenseRequest @ 0x1C0007B8C (ScsiLogSenseRequest.c)
 * Callees:
 *     NVMeAllocateDmaBuffer @ 0x1C00022EC (NVMeAllocateDmaBuffer.c)
 *     SrbAssignQueueId @ 0x1C0006344 (SrbAssignQueueId.c)
 *     NVMeSetSenseData @ 0x1C000D36C (NVMeSetSenseData.c)
 *     memset @ 0x1C000EE00 (memset.c)
 */

__int64 __fastcall LogSenseInformationalExceptions(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  bool v5; // zf
  _DWORD *v7; // rbx
  unsigned int *v8; // rax
  size_t v9; // rax
  unsigned int v10; // eax
  char v11; // al
  __int64 v12; // rsi
  __int64 PhysicalAddress; // rax
  __int64 v14; // rbx
  char v16; // [rsp+58h] [rbp+10h] BYREF
  void *v17; // [rsp+60h] [rbp+18h]

  v4 = a2;
  v5 = *(_BYTE *)(a2 + 2) == 40;
  v17 = 0LL;
  if ( v5 )
  {
    v7 = *(_DWORD **)(a2 + 64);
    v8 = (unsigned int *)(a2 + 60);
  }
  else
  {
    v7 = *(_DWORD **)(a2 + 24);
    v8 = (unsigned int *)(a2 + 16);
  }
  if ( v7 && (v9 = *v8, (unsigned int)v9 >= 0xC) )
  {
    if ( (v9 & 3) != 0 )
    {
      memset(v7, 0, v9);
    }
    else
    {
      v10 = (unsigned int)v9 >> 2;
      if ( v10 )
        memset(v7, 0, 4LL * v10);
    }
    *v7 = 134217775;
    *((_WORD *)v7 + 2) = 0;
    v11 = *((_BYTE *)v7 + 6) & 0x40;
    *(_DWORD *)((char *)v7 + 7) = -16777212;
    *((_BYTE *)v7 + 6) = v11 | 0x23;
    NVMeAllocateDmaBuffer(a1, 0x200u);
    if ( v17 )
    {
      if ( *(_BYTE *)(v4 + 2) == 40 )
        v12 = *(_QWORD *)(v4 + 104);
      else
        v12 = *(_QWORD *)(v4 + 56);
      if ( (v12 & 0xFFF) != 0 )
        v12 = v12 - (v12 & 0xFFF) + 4096;
      memset(v17, 0, 0x200uLL);
      PhysicalAddress = StorPortGetPhysicalAddress(a1, 0LL, v17, &v16);
      *(_WORD *)(v12 + 4166) = 257;
      v14 = PhysicalAddress;
      SrbAssignQueueId(a1, v4);
      *(_DWORD *)(v12 + 4100) = -1;
      *(_BYTE *)(v12 + 4096) = 2;
      *(_QWORD *)(v12 + 4120) = v14;
      *(_BYTE *)(v12 + 4136) = 2;
      *(_BYTE *)(v12 + 4138) = 127;
      *(_QWORD *)(v12 + 4216) = NVMeGetLogPageHealthInfoCompletion;
      *(_BYTE *)(v12 + 4168) = 1;
      *(_QWORD *)(v12 + 4192) = v17;
      *(_DWORD *)(v12 + 4200) = 512;
      *(_QWORD *)(v12 + 4224) = 47LL;
    }
    else
    {
      *(_BYTE *)(v4 + 3) = 4;
    }
    return 0LL;
  }
  else
  {
    LOBYTE(a4) = 36;
    LOBYTE(a2) = 6;
    NVMeSetSenseData(v4, a2, a3, a4);
    return 3238002694LL;
  }
}
