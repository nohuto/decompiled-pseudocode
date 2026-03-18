/*
 * XREFs of QueryProtocolInfoLogPageData @ 0x1C000B420
 * Callers:
 *     IoctlQueryProtocolInfoProcess @ 0x1C00098A8 (IoctlQueryProtocolInfoProcess.c)
 * Callees:
 *     GetSrbDataBuffer @ 0x1C0001F4C (GetSrbDataBuffer.c)
 *     SrbAssignQueueId @ 0x1C0002B98 (SrbAssignQueueId.c)
 *     memmove @ 0x1C0002E40 (memmove.c)
 *     GetNamespaceId @ 0x1C0004770 (GetNamespaceId.c)
 *     GetSrbExtension @ 0x1C0004794 (GetSrbExtension.c)
 *     NVMeZeroMemory @ 0x1C000505C (NVMeZeroMemory.c)
 *     NVMeAllocateDmaBuffer @ 0x1C00065A0 (NVMeAllocateDmaBuffer.c)
 *     BuildGetLogPageCommand @ 0x1C0008830 (BuildGetLogPageCommand.c)
 */

__int64 __fastcall QueryProtocolInfoLogPageData(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebp
  __int64 SrbExtension; // r12
  int NamespaceId; // r14d
  _DWORD *SrbDataBuffer; // rax
  __int64 v8; // r9
  _DWORD *v9; // r15
  unsigned int v10; // ecx
  unsigned int v11; // esi
  const void *v13; // rdx
  char v14; // al
  int v15; // ecx
  unsigned int v16; // edx
  __int64 PhysicalAddress; // rax
  __int64 v18; // rbx
  __int64 v19; // [rsp+70h] [rbp+8h] BYREF
  char *v20; // [rsp+80h] [rbp+18h]

  v3 = 0;
  v20 = 0LL;
  SrbExtension = GetSrbExtension(a2);
  NamespaceId = 0;
  SrbDataBuffer = (_DWORD *)GetSrbDataBuffer(a2, &v19);
  v9 = SrbDataBuffer + 7;
  v10 = SrbDataBuffer[11];
  if ( v10 != 1 )
  {
    if ( v10 == 2 )
    {
      v11 = 512;
      if ( (*(_BYTE *)(v8 + 261) & 1) != 0 )
        goto LABEL_14;
    }
    else if ( v10 == 3 )
    {
      v11 = 512;
    }
    else
    {
      if ( v10 <= 3 )
      {
LABEL_7:
        v11 = SrbDataBuffer[14];
        goto LABEL_14;
      }
      if ( v10 > 5 )
      {
        if ( v10 != 128 )
          goto LABEL_7;
        goto LABEL_13;
      }
      v11 = 4096;
    }
    NamespaceId = -1;
    goto LABEL_14;
  }
  NamespaceId = -1;
LABEL_13:
  v11 = 64;
LABEL_14:
  if ( SrbDataBuffer[14] < v11 )
  {
    *(_BYTE *)(a2 + 3) = 21;
    return 3238002694LL;
  }
  if ( v10 == 5 )
  {
    v13 = *(const void **)(a1 + 3224);
    if ( v13 )
    {
      v20 = (char *)SrbDataBuffer + (unsigned int)SrbDataBuffer[13] + 36;
      memmove(v20, v13, v11);
      *(_BYTE *)(a2 + 3) = 1;
    }
    else
    {
      *(_BYTE *)(a2 + 3) = 6;
      return (unsigned int)-1056964602;
    }
  }
  else
  {
    if ( NamespaceId != -1 )
    {
      v14 = *(_BYTE *)(a2 + 2);
      if ( v14 == 40 )
        v15 = *(_DWORD *)(a2 + 24);
      else
        v15 = *(_DWORD *)(a2 + 12);
      if ( (v15 & 1) != 0 )
      {
        NamespaceId = -1;
      }
      else
      {
        if ( v14 == 40 )
          v16 = *(unsigned __int8 *)(*(unsigned int *)(a2 + 52) + a2 + 10);
        else
          v16 = *(unsigned __int8 *)(a2 + 7);
        NamespaceId = GetNamespaceId(a1, v16);
      }
    }
    NVMeAllocateDmaBuffer(a1, v11);
    if ( !v20 )
    {
      *(_BYTE *)(a2 + 3) = 4;
      return 3238002691LL;
    }
    NVMeZeroMemory(v20, v11);
    PhysicalAddress = StorPortGetPhysicalAddress(a1, 0LL, v20, &v19);
    *(_BYTE *)(SrbExtension + 4245) |= 3u;
    v18 = PhysicalAddress;
    SrbAssignQueueId(a1, a2);
    BuildGetLogPageCommand(SrbExtension + 4096, *((_BYTE *)v9 + 16), v11, v18, NamespaceId);
    *(_BYTE *)(SrbExtension + 4245) |= 4u;
    *(_QWORD *)(SrbExtension + 4216) = QueryProtocolInfoCompletion;
    *(_QWORD *)(SrbExtension + 4200) = v20;
    *(_DWORD *)(SrbExtension + 4232) = v11;
  }
  return v3;
}
