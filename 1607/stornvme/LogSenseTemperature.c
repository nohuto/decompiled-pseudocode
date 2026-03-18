/*
 * XREFs of LogSenseTemperature @ 0x1C0009EF4
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
 *     TemperatureFromKelvinToCelsius @ 0x1C000C7BC (TemperatureFromKelvinToCelsius.c)
 *     NVMeSetSenseData @ 0x1C000E5FC (NVMeSetSenseData.c)
 */

__int64 __fastcall LogSenseTemperature(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  _DWORD *SrbDataBuffer; // rdi
  unsigned int *v6; // r8
  __int64 v7; // r9
  unsigned __int64 v8; // rax
  bool v9; // bl
  char v10; // al
  char v11; // al
  __int64 SrbExtension; // rdi
  void *v13; // r9
  __int64 PhysicalAddress; // rax
  __int64 v15; // rbx
  unsigned int *v17; // [rsp+70h] [rbp+18h] BYREF
  __int64 v18; // [rsp+78h] [rbp+20h]

  v17 = 0LL;
  v18 = 0LL;
  SrbDataBuffer = (_DWORD *)GetSrbDataBuffer(a2, &v17);
  if ( SrbDataBuffer && (v6 = v17, v8 = *v17, v8 >= 0xA) )
  {
    v9 = v8 >= 0x10;
    NVMeZeroMemory(SrbDataBuffer, v8);
    *SrbDataBuffer = 201326605;
    *((_WORD *)SrbDataBuffer + 2) = 0;
    v10 = *((_BYTE *)SrbDataBuffer + 6) & 0x40;
    *((_BYTE *)SrbDataBuffer + 7) = 2;
    *((_BYTE *)SrbDataBuffer + 9) = -1;
    *((_BYTE *)SrbDataBuffer + 6) = v10 | 1;
    if ( v9 )
    {
      *((_WORD *)SrbDataBuffer + 5) = 256;
      v11 = SrbDataBuffer[3] & 0x40;
      *((_BYTE *)SrbDataBuffer + 13) = 2;
      *((_BYTE *)SrbDataBuffer + 12) = v11 | 1;
      *((_BYTE *)SrbDataBuffer + 15) = TemperatureFromKelvinToCelsius(*(unsigned __int16 *)(a1 + 156));
    }
    NVMeAllocateDmaBuffer(a1, 0x200u);
    if ( v18 )
    {
      SrbExtension = GetSrbExtension(a2);
      memset(v13, 0, 0x200uLL);
      PhysicalAddress = StorPortGetPhysicalAddress(a1, 0LL, v18, &v17);
      *(_BYTE *)(SrbExtension + 4245) |= 3u;
      v15 = PhysicalAddress;
      SrbAssignQueueId(a1, a2);
      BuildGetLogPageCommand(SrbExtension + 4096, 2u, 0x200u, v15, -1);
      *(_BYTE *)(SrbExtension + 4245) |= 4u;
      *(_QWORD *)(SrbExtension + 4216) = NVMeGetLogPageHealthInfoCompletion;
      *(_QWORD *)(SrbExtension + 4200) = v18;
      *(_DWORD *)(SrbExtension + 4232) = 512;
      *(_QWORD *)(SrbExtension + 4224) = 13LL;
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
    LOBYTE(v4) = 6;
    NVMeSetSenseData(a2, v4, v6, v7);
    return 3238002694LL;
  }
}
