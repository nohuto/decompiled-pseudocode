/*
 * XREFs of QueryProtocolInfoFeatureData @ 0x1C000B054
 * Callers:
 *     IoctlQueryProtocolInfoProcess @ 0x1C00098A8 (IoctlQueryProtocolInfoProcess.c)
 * Callees:
 *     GetSrbDataBuffer @ 0x1C0001F4C (GetSrbDataBuffer.c)
 *     SrbAssignQueueId @ 0x1C0002B98 (SrbAssignQueueId.c)
 *     GetNamespaceId @ 0x1C0004770 (GetNamespaceId.c)
 *     GetSrbExtension @ 0x1C0004794 (GetSrbExtension.c)
 *     NVMeZeroMemory @ 0x1C000505C (NVMeZeroMemory.c)
 *     NVMeAllocateDmaBuffer @ 0x1C00065A0 (NVMeAllocateDmaBuffer.c)
 */

__int64 __fastcall QueryProtocolInfoFeatureData(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rax
  __int64 v5; // r13
  _DWORD *SrbDataBuffer; // r15
  int v7; // ecx
  __int64 result; // rax
  int v9; // eax
  int NamespaceId; // r14d
  unsigned int v11; // esi
  char v12; // al
  int v13; // ecx
  unsigned int v14; // edx
  __int64 PhysicalAddress; // rbx
  int v16; // ecx
  char v17; // bp
  _QWORD v18[8]; // [rsp+28h] [rbp-40h] BYREF
  int v19; // [rsp+80h] [rbp+18h] BYREF
  void *v20; // [rsp+88h] [rbp+20h]

  v20 = 0LL;
  SrbExtension = GetSrbExtension(a2);
  v19 = 0;
  v5 = SrbExtension;
  SrbDataBuffer = (_DWORD *)GetSrbDataBuffer(a2, v18);
  v7 = SrbDataBuffer[11];
  if ( (v7 & 0xFFFFF800) != 0 )
    goto LABEL_2;
  if ( (unsigned __int8)v7 <= 0xDu && (v9 = 16366, _bittest(&v9, (unsigned __int8)v7))
    || (unsigned int)(unsigned __int8)v7 - 128 <= 3 )
  {
    if ( SrbDataBuffer[12] )
      goto LABEL_2;
  }
  if ( (unsigned __int8)v7 > 0xCu )
  {
    if ( (unsigned __int8)v7 == 13 )
    {
      NamespaceId = -1;
      goto LABEL_31;
    }
    if ( (unsigned __int8)v7 == 128 )
      goto LABEL_29;
    if ( (unsigned __int8)v7 != 129 )
    {
      if ( (unsigned int)(unsigned __int8)v7 - 130 <= 1 )
      {
        v11 = 0;
        NamespaceId = 0;
        goto LABEL_24;
      }
      goto LABEL_16;
    }
    v11 = 8;
LABEL_18:
    NamespaceId = -1;
    goto LABEL_32;
  }
  if ( (unsigned __int8)v7 == 12 )
  {
    v11 = 256;
    goto LABEL_18;
  }
  if ( (_BYTE)v7 )
  {
    if ( (unsigned __int8)v7 <= 2u )
      goto LABEL_29;
    if ( (unsigned __int8)v7 >= 4u )
    {
      if ( (unsigned __int8)v7 <= 6u )
        goto LABEL_29;
      if ( (unsigned __int8)v7 != 7 )
      {
        if ( (unsigned int)(unsigned __int8)v7 - 8 > 3 )
          goto LABEL_16;
LABEL_29:
        v11 = 0;
        NamespaceId = -1;
        goto LABEL_24;
      }
LABEL_2:
      *(_BYTE *)(a2 + 3) = 6;
      return 3238002694LL;
    }
  }
LABEL_16:
  NamespaceId = 0;
LABEL_31:
  v11 = 4096;
LABEL_32:
  if ( SrbDataBuffer[13] < 0x28u )
    goto LABEL_33;
LABEL_24:
  if ( SrbDataBuffer[14] < v11 )
  {
LABEL_33:
    *(_BYTE *)(a2 + 3) = 21;
    return 3238002694LL;
  }
  if ( NamespaceId != -1 )
  {
    v12 = *(_BYTE *)(a2 + 2);
    if ( v12 == 40 )
      v13 = *(_DWORD *)(a2 + 24);
    else
      v13 = *(_DWORD *)(a2 + 12);
    if ( (v13 & 1) != 0 )
    {
      NamespaceId = -1;
    }
    else
    {
      if ( v12 == 40 )
        v14 = *(unsigned __int8 *)(*(unsigned int *)(a2 + 52) + a2 + 10);
      else
        v14 = *(unsigned __int8 *)(a2 + 7);
      NamespaceId = GetNamespaceId(a1, v14);
    }
  }
  if ( v11 )
  {
    NVMeAllocateDmaBuffer(a1, v11);
    if ( !v20 )
    {
      *(_BYTE *)(a2 + 3) = 4;
      return 3238002691LL;
    }
    NVMeZeroMemory(v20, v11);
    PhysicalAddress = StorPortGetPhysicalAddress(a1, 0LL, v20, &v19);
  }
  else
  {
    PhysicalAddress = 0LL;
  }
  *(_BYTE *)(v5 + 4245) |= 1u;
  *(_BYTE *)(v5 + 4245) ^= (*(_BYTE *)(v5 + 4245) ^ (2 * (v11 != 0))) & 2;
  SrbAssignQueueId(a1, a2);
  v16 = SrbDataBuffer[12];
  *(_DWORD *)(v5 + 4136) = SrbDataBuffer[11];
  *(_BYTE *)(v5 + 4096) = 10;
  *(_DWORD *)(v5 + 4100) = NamespaceId;
  *(_QWORD *)(v5 + 4120) = PhysicalAddress;
  *(_DWORD *)(v5 + 4140) = v16;
  v17 = (*(_BYTE *)(v5 + 4245) ^ (4 * (v11 != 0))) & 4;
  *(_QWORD *)(v5 + 4216) = QueryProtocolInfoCompletion;
  *(_BYTE *)(v5 + 4245) ^= v17;
  *(_QWORD *)(v5 + 4200) = v20;
  result = 0LL;
  *(_DWORD *)(v5 + 4232) = v11;
  return result;
}
