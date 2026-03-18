/*
 * XREFs of QueryProtocolInfoFeatureData @ 0x1C000999C
 * Callers:
 *     IoctlToNVMe @ 0x1C000A2B0 (IoctlToNVMe.c)
 * Callees:
 *     NVMeAllocateDmaBuffer @ 0x1C00023DC (NVMeAllocateDmaBuffer.c)
 *     SrbAssignQueueId @ 0x1C000646C (SrbAssignQueueId.c)
 *     memset @ 0x1C000EF40 (memset.c)
 */

__int64 __fastcall QueryProtocolInfoFeatureData(__int64 a1, __int64 a2)
{
  char v3; // dl
  __int64 v5; // r14
  unsigned int v6; // ebp
  _DWORD *v7; // r13
  int v8; // eax
  __int64 result; // rax
  int v10; // r15d
  int v11; // eax
  int v12; // r15d
  void *v13; // rcx
  __int64 PhysicalAddress; // rbx
  int v15; // ecx
  int v16; // [rsp+68h] [rbp+10h] BYREF
  void *v17; // [rsp+70h] [rbp+18h]
  __int64 v18; // [rsp+78h] [rbp+20h]

  v3 = *(_BYTE *)(a2 + 2);
  v17 = 0LL;
  if ( v3 == 40 )
    v5 = *(_QWORD *)(a2 + 104);
  else
    v5 = *(_QWORD *)(a2 + 56);
  v6 = 4096;
  if ( (v5 & 0xFFF) != 0 )
    v5 = v5 - (v5 & 0xFFF) + 4096;
  v18 = 0LL;
  v16 = 0;
  if ( v3 == 40 )
    v7 = *(_DWORD **)(a2 + 64);
  else
    v7 = *(_DWORD **)(a2 + 24);
  v8 = v7[11];
  if ( (v8 & 0xFFFFF800) != 0
    || (_BYTE)v8
    && ((unsigned __int8)v8 <= 3u
     || (unsigned __int8)v8 > 4u && ((unsigned __int8)v8 <= 0xDu || (unsigned int)(unsigned __int8)v8 - 128 <= 3))
    && v7[12] )
  {
    goto LABEL_10;
  }
  if ( (unsigned __int8)v8 > 0xCu )
  {
    if ( (unsigned __int8)v8 != 13 )
    {
      if ( (unsigned __int8)v8 == 128 )
        goto LABEL_41;
      if ( (unsigned __int8)v8 != 129 )
      {
        if ( (unsigned int)(unsigned __int8)v8 - 130 <= 1 )
        {
          v6 = 0;
          v10 = 0;
          goto LABEL_36;
        }
        goto LABEL_26;
      }
      v6 = 8;
    }
  }
  else
  {
    if ( (unsigned __int8)v8 != 12 )
    {
      if ( !(_BYTE)v8 )
        goto LABEL_26;
      if ( (unsigned __int8)v8 <= 2u )
        goto LABEL_41;
      if ( (unsigned __int8)v8 == 3 )
      {
LABEL_26:
        v10 = 0;
        goto LABEL_29;
      }
      if ( (unsigned __int8)v8 <= 6u )
        goto LABEL_41;
      if ( (unsigned __int8)v8 != 7 )
      {
        if ( (unsigned int)(unsigned __int8)v8 - 8 > 3 )
          goto LABEL_26;
LABEL_41:
        v6 = 0;
        v10 = -1;
        goto LABEL_36;
      }
LABEL_10:
      *(_BYTE *)(a2 + 3) = 6;
      return 3238002694LL;
    }
    v6 = 256;
  }
  v10 = -1;
LABEL_29:
  if ( v7[13] < 0x28u )
  {
LABEL_30:
    *(_BYTE *)(a2 + 3) = 21;
    return 3238002694LL;
  }
LABEL_36:
  if ( v7[14] < v6 )
    goto LABEL_30;
  if ( v10 != -1 )
  {
    if ( v3 == 40 )
      v11 = *(_DWORD *)(a2 + 24);
    else
      v11 = *(_DWORD *)(a2 + 12);
    if ( (v11 & 1) != 0 )
    {
      v10 = -1;
    }
    else
    {
      if ( v3 == 40 )
        v12 = *(unsigned __int8 *)(*(unsigned int *)(a2 + 52) + a2 + 10);
      else
        v12 = *(unsigned __int8 *)(a2 + 7);
      v10 = v12 + 1;
    }
  }
  if ( v6 )
  {
    NVMeAllocateDmaBuffer(a1, v6);
    v13 = v17;
    if ( !v17 )
    {
      *(_BYTE *)(a2 + 3) = 4;
      return 3238002691LL;
    }
    if ( v6 >> 2 )
    {
      memset(v17, 0, 4LL * (v6 >> 2));
      v13 = v17;
    }
    PhysicalAddress = StorPortGetPhysicalAddress(a1, 0LL, v13, &v16);
  }
  else
  {
    PhysicalAddress = v18;
  }
  *(_BYTE *)(v5 + 4166) = 1;
  *(_BYTE *)(v5 + 4167) = v6 != 0;
  SrbAssignQueueId(a1, a2);
  v15 = v7[12];
  *(_DWORD *)(v5 + 4136) = v7[11];
  *(_BYTE *)(v5 + 4096) = 10;
  *(_DWORD *)(v5 + 4100) = v10;
  *(_QWORD *)(v5 + 4120) = PhysicalAddress;
  *(_DWORD *)(v5 + 4140) = v15;
  *(_QWORD *)(v5 + 4216) = QueryProtocolInfoCompletion;
  *(_BYTE *)(v5 + 4168) = v6 != 0;
  *(_QWORD *)(v5 + 4192) = v17;
  result = 0LL;
  *(_DWORD *)(v5 + 4200) = v6;
  return result;
}
