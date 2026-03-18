/*
 * XREFs of LogSenseTemperature @ 0x1C00077F4
 * Callers:
 *     ScsiLogSenseRequest @ 0x1C0007B8C (ScsiLogSenseRequest.c)
 * Callees:
 *     NVMeAllocateDmaBuffer @ 0x1C00022EC (NVMeAllocateDmaBuffer.c)
 *     SrbAssignQueueId @ 0x1C0006344 (SrbAssignQueueId.c)
 *     NVMeSetSenseData @ 0x1C000D36C (NVMeSetSenseData.c)
 *     memset @ 0x1C000EE00 (memset.c)
 */

__int64 __fastcall LogSenseTemperature(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  bool v5; // zf
  _DWORD *v7; // rbx
  unsigned int *v8; // rax
  size_t v9; // rax
  bool v10; // di
  unsigned int v11; // eax
  char v12; // cl
  char v13; // al
  char v14; // al
  unsigned __int16 v15; // ax
  __int64 v16; // rdi
  __int64 PhysicalAddress; // rax
  __int64 v18; // rbx
  char v20; // [rsp+68h] [rbp+10h] BYREF
  void *v21; // [rsp+70h] [rbp+18h]

  v4 = a2;
  v5 = *(_BYTE *)(a2 + 2) == 40;
  v21 = 0LL;
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
  if ( v7 && (v9 = *v8, v9 >= 0xA) )
  {
    v10 = v9 >= 0x10;
    if ( (v9 & 3) != 0 )
    {
      memset(v7, 0, v9);
    }
    else
    {
      v11 = (unsigned int)v9 >> 2;
      if ( v11 )
        memset(v7, 0, 4LL * v11);
    }
    *v7 = 201326605;
    v12 = -1;
    *((_WORD *)v7 + 2) = 0;
    v13 = *((_BYTE *)v7 + 6) & 0x40;
    *((_BYTE *)v7 + 7) = 2;
    *((_BYTE *)v7 + 9) = -1;
    *((_BYTE *)v7 + 6) = v13 | 1;
    if ( v10 )
    {
      *((_WORD *)v7 + 5) = 256;
      v14 = v7[3] & 0x40;
      *((_BYTE *)v7 + 13) = 2;
      *((_BYTE *)v7 + 12) = v14 | 1;
      v15 = *(_WORD *)(a1 + 148);
      if ( v15 != 0xFFFF )
      {
        if ( v15 <= 0x20Fu )
        {
          if ( v15 <= 0x111u )
            v12 = 0;
          else
            v12 = v15 - 17;
        }
        else
        {
          v12 = -2;
        }
      }
      *((_BYTE *)v7 + 15) = v12;
    }
    NVMeAllocateDmaBuffer(a1, 0x200u);
    if ( v21 )
    {
      if ( *(_BYTE *)(v4 + 2) == 40 )
        v16 = *(_QWORD *)(v4 + 104);
      else
        v16 = *(_QWORD *)(v4 + 56);
      if ( (v16 & 0xFFF) != 0 )
        v16 = v16 - (v16 & 0xFFF) + 4096;
      memset(v21, 0, 0x200uLL);
      PhysicalAddress = StorPortGetPhysicalAddress(a1, 0LL, v21, &v20);
      *(_WORD *)(v16 + 4166) = 257;
      v18 = PhysicalAddress;
      SrbAssignQueueId(a1, v4);
      *(_DWORD *)(v16 + 4100) = -1;
      *(_BYTE *)(v16 + 4096) = 2;
      *(_QWORD *)(v16 + 4120) = v18;
      *(_BYTE *)(v16 + 4136) = 2;
      *(_BYTE *)(v16 + 4138) = 127;
      *(_QWORD *)(v16 + 4216) = NVMeGetLogPageHealthInfoCompletion;
      *(_BYTE *)(v16 + 4168) = 1;
      *(_QWORD *)(v16 + 4192) = v21;
      *(_DWORD *)(v16 + 4200) = 512;
      *(_QWORD *)(v16 + 4224) = 13LL;
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
