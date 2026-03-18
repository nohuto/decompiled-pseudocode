/*
 * XREFs of QueryProtocolInfoIdentifyData @ 0x1C00095C8
 * Callers:
 *     IoctlToNVMe @ 0x1C000A2B0 (IoctlToNVMe.c)
 * Callees:
 *     NVMeAllocateDmaBuffer @ 0x1C00023DC (NVMeAllocateDmaBuffer.c)
 *     SrbAssignQueueId @ 0x1C000646C (SrbAssignQueueId.c)
 *     memset @ 0x1C000EF40 (memset.c)
 */

__int64 __fastcall QueryProtocolInfoIdentifyData(__int64 a1, __int64 a2)
{
  int v2; // ebp
  char v4; // dl
  __int64 v6; // rsi
  _DWORD *v7; // r14
  __int64 result; // rax
  __int64 PhysicalAddress; // rax
  char v10; // cl
  __int64 v11; // rbx
  int v12; // eax
  int v13; // eax
  int v14; // r14d
  int v15; // r14d
  int v16; // [rsp+58h] [rbp+10h] BYREF
  void *v17; // [rsp+60h] [rbp+18h]

  v2 = 0;
  v4 = *(_BYTE *)(a2 + 2);
  v17 = 0LL;
  if ( v4 == 40 )
    v6 = *(_QWORD *)(a2 + 104);
  else
    v6 = *(_QWORD *)(a2 + 56);
  if ( (v6 & 0xFFF) != 0 )
    v6 = v6 - (v6 & 0xFFF) + 4096;
  v16 = 0;
  if ( v4 == 40 )
    v7 = *(_DWORD **)(a2 + 64);
  else
    v7 = *(_DWORD **)(a2 + 24);
  if ( v7[14] < 0x1000u )
  {
    *(_BYTE *)(a2 + 3) = 21;
    return 3238002694LL;
  }
  NVMeAllocateDmaBuffer(a1, 0x1000u);
  if ( v17 )
  {
    memset(v17, 0, 0x1000uLL);
    PhysicalAddress = StorPortGetPhysicalAddress(a1, 0LL, v17, &v16);
    v10 = *(_BYTE *)(a2 + 2);
    v11 = PhysicalAddress;
    if ( v10 == 40 )
      v12 = *(_DWORD *)(a2 + 24);
    else
      v12 = *(_DWORD *)(a2 + 12);
    if ( (v12 & 1) != 0 )
    {
      v13 = v7[11];
      if ( v13 == 1 )
      {
        v14 = 0;
      }
      else
      {
        if ( v13 )
        {
          *(_BYTE *)(a2 + 3) = 6;
          return 3238002694LL;
        }
        v14 = v7[12];
      }
    }
    else
    {
      if ( v10 == 40 )
        v15 = *(unsigned __int8 *)(*(unsigned int *)(a2 + 52) + a2 + 10);
      else
        v15 = *(unsigned __int8 *)(a2 + 7);
      v14 = v15 + 1;
    }
    *(_WORD *)(v6 + 4166) = 257;
    SrbAssignQueueId(a1, a2);
    *(_BYTE *)(v6 + 4096) = 6;
    *(_DWORD *)(v6 + 4100) = v14;
    *(_QWORD *)(v6 + 4120) = v11;
    LOBYTE(v2) = v14 == 0;
    *(_DWORD *)(v6 + 4136) ^= (*(_DWORD *)(v6 + 4136) ^ v2) & 3;
    *(_QWORD *)(v6 + 4216) = QueryProtocolInfoCompletion;
    *(_BYTE *)(v6 + 4168) = 1;
    *(_QWORD *)(v6 + 4192) = v17;
    result = 0LL;
    *(_DWORD *)(v6 + 4200) = 4096;
  }
  else
  {
    *(_BYTE *)(a2 + 3) = 4;
    return 3238002691LL;
  }
  return result;
}
