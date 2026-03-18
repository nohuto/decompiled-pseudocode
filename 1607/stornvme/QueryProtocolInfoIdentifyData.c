/*
 * XREFs of QueryProtocolInfoIdentifyData @ 0x1C000B2AC
 * Callers:
 *     IoctlQueryProtocolInfoProcess @ 0x1C00098A8 (IoctlQueryProtocolInfoProcess.c)
 * Callees:
 *     GetSrbDataBuffer @ 0x1C0001F4C (GetSrbDataBuffer.c)
 *     SrbAssignQueueId @ 0x1C0002B98 (SrbAssignQueueId.c)
 *     memset @ 0x1C0003180 (memset.c)
 *     GetNamespaceId @ 0x1C0004770 (GetNamespaceId.c)
 *     GetSrbExtension @ 0x1C0004794 (GetSrbExtension.c)
 *     NVMeAllocateDmaBuffer @ 0x1C00065A0 (NVMeAllocateDmaBuffer.c)
 */

__int64 __fastcall QueryProtocolInfoIdentifyData(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rax
  __int64 v5; // r14
  _DWORD *SrbDataBuffer; // rbp
  __int64 result; // rax
  __int64 PhysicalAddress; // rax
  char v9; // cl
  __int64 v10; // rbx
  int v11; // eax
  int v12; // eax
  int NamespaceId; // ebp
  unsigned int v14; // edx
  int v15; // eax
  _QWORD v16[7]; // [rsp+20h] [rbp-38h] BYREF
  int v17; // [rsp+70h] [rbp+18h] BYREF
  void *v18; // [rsp+78h] [rbp+20h]

  v18 = 0LL;
  SrbExtension = GetSrbExtension(a2);
  v17 = 0;
  v5 = SrbExtension;
  SrbDataBuffer = (_DWORD *)GetSrbDataBuffer(a2, v16);
  if ( SrbDataBuffer[14] < 0x1000u )
  {
    *(_BYTE *)(a2 + 3) = 21;
    return 3238002694LL;
  }
  NVMeAllocateDmaBuffer(a1, 0x1000u);
  if ( v18 )
  {
    memset(v18, 0, 0x1000uLL);
    PhysicalAddress = StorPortGetPhysicalAddress(a1, 0LL, v18, &v17);
    v9 = *(_BYTE *)(a2 + 2);
    v10 = PhysicalAddress;
    if ( v9 == 40 )
      v11 = *(_DWORD *)(a2 + 24);
    else
      v11 = *(_DWORD *)(a2 + 12);
    if ( (v11 & 1) != 0 )
    {
      v12 = SrbDataBuffer[11];
      if ( v12 == 1 )
      {
        NamespaceId = 0;
      }
      else
      {
        if ( v12 )
        {
          *(_BYTE *)(a2 + 3) = 6;
          return 3238002694LL;
        }
        NamespaceId = SrbDataBuffer[12];
      }
    }
    else
    {
      if ( v9 == 40 )
        v14 = *(unsigned __int8 *)(*(unsigned int *)(a2 + 52) + a2 + 10);
      else
        v14 = *(unsigned __int8 *)(a2 + 7);
      NamespaceId = GetNamespaceId(a1, v14);
    }
    *(_BYTE *)(v5 + 4245) |= 3u;
    SrbAssignQueueId(a1, a2);
    v15 = *(_DWORD *)(v5 + 4136);
    *(_BYTE *)(v5 + 4096) = 6;
    *(_DWORD *)(v5 + 4100) = NamespaceId;
    *(_QWORD *)(v5 + 4120) = v10;
    *(_DWORD *)(v5 + 4136) ^= ((NamespaceId == 0) ^ (unsigned __int8)v15) & 3;
    *(_BYTE *)(v5 + 4245) |= 4u;
    *(_QWORD *)(v5 + 4216) = QueryProtocolInfoCompletion;
    *(_QWORD *)(v5 + 4200) = v18;
    result = 0LL;
    *(_DWORD *)(v5 + 4232) = 4096;
  }
  else
  {
    *(_BYTE *)(a2 + 3) = 4;
    return 3238002691LL;
  }
  return result;
}
