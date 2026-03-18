/*
 * XREFs of QueryProtocolInfoLogPageData @ 0x1C0009750
 * Callers:
 *     IoctlToNVMe @ 0x1C000A2B0 (IoctlToNVMe.c)
 * Callees:
 *     NVMeAllocateDmaBuffer @ 0x1C00023DC (NVMeAllocateDmaBuffer.c)
 *     SrbAssignQueueId @ 0x1C000646C (SrbAssignQueueId.c)
 *     memmove @ 0x1C000EC00 (memmove.c)
 *     memset @ 0x1C000EF40 (memset.c)
 */

__int64 __fastcall QueryProtocolInfoLogPageData(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  char v4; // dl
  __int64 v6; // rsi
  unsigned int v7; // r14d
  __int64 v8; // rax
  int v9; // r15d
  _DWORD *v10; // r13
  unsigned int v11; // ecx
  const void *v13; // rdx
  int v14; // eax
  int v15; // r15d
  void *v16; // rcx
  __int64 PhysicalAddress; // rax
  __int64 v18; // rbx
  unsigned int v19; // ecx
  int v20; // edx
  char v21; // [rsp+60h] [rbp+8h] BYREF
  void *v22; // [rsp+68h] [rbp+10h]

  v2 = 0;
  v4 = *(_BYTE *)(a2 + 2);
  v22 = 0LL;
  if ( v4 == 40 )
    v6 = *(_QWORD *)(a2 + 104);
  else
    v6 = *(_QWORD *)(a2 + 56);
  v7 = 4096;
  if ( (v6 & 0xFFF) != 0 )
    v6 = v6 - (v6 & 0xFFF) + 4096;
  v8 = *(_QWORD *)(a1 + 1072);
  v9 = 0;
  if ( v4 == 40 )
    v10 = *(_DWORD **)(a2 + 64);
  else
    v10 = *(_DWORD **)(a2 + 24);
  v11 = v10[11];
  if ( v11 != 1 )
  {
    if ( v11 == 2 )
    {
      v7 = 512;
      if ( (*(_BYTE *)(v8 + 261) & 1) != 0 )
        goto LABEL_21;
    }
    else if ( v11 == 3 )
    {
      v7 = 512;
    }
    else
    {
      if ( v11 <= 3 )
      {
LABEL_15:
        v7 = v10[14];
        goto LABEL_21;
      }
      if ( v11 > 5 )
      {
        if ( v11 != 128 )
          goto LABEL_15;
        goto LABEL_20;
      }
    }
    v9 = -1;
    goto LABEL_21;
  }
  v9 = -1;
LABEL_20:
  v7 = 64;
LABEL_21:
  if ( v10[14] < v7 )
  {
    *(_BYTE *)(a2 + 3) = 21;
    return 3238002694LL;
  }
  if ( v11 != 5 )
  {
    if ( v9 != -1 )
    {
      if ( v4 == 40 )
        v14 = *(_DWORD *)(a2 + 24);
      else
        v14 = *(_DWORD *)(a2 + 12);
      if ( (v14 & 1) != 0 )
      {
        v9 = -1;
      }
      else
      {
        if ( v4 == 40 )
          v15 = *(unsigned __int8 *)(*(unsigned int *)(a2 + 52) + a2 + 10);
        else
          v15 = *(unsigned __int8 *)(a2 + 7);
        v9 = v15 + 1;
      }
    }
    NVMeAllocateDmaBuffer(a1, v7);
    v16 = v22;
    if ( !v22 )
    {
      *(_BYTE *)(a2 + 3) = 4;
      return 3238002691LL;
    }
    if ( (v7 & 3) != 0 )
    {
      if ( v7 )
      {
        memset(v22, 0, v7);
        goto LABEL_44;
      }
    }
    else if ( v7 >> 2 )
    {
      memset(v22, 0, 4LL * (v7 >> 2));
LABEL_44:
      v16 = v22;
    }
    PhysicalAddress = StorPortGetPhysicalAddress(a1, 0LL, v16, &v21);
    *(_WORD *)(v6 + 4166) = 257;
    v18 = PhysicalAddress;
    SrbAssignQueueId(a1, a2);
    LOBYTE(v19) = *((_BYTE *)v10 + 44);
    if ( (unsigned __int8)v19 <= 5u && (v20 = 42, _bittest(&v20, v19)) || (_BYTE)v19 == 0x80 )
      v9 = -1;
    *(_BYTE *)(v6 + 4136) = v19;
    *(_BYTE *)(v6 + 4096) = 2;
    *(_DWORD *)(v6 + 4100) = v9;
    *(_QWORD *)(v6 + 4120) = v18;
    *(_BYTE *)(v6 + 4138) = (v7 >> 2) - 1;
    *(_BYTE *)(v6 + 4168) = 1;
    *(_QWORD *)(v6 + 4216) = QueryProtocolInfoCompletion;
    *(_QWORD *)(v6 + 4192) = v22;
    *(_DWORD *)(v6 + 4200) = v7;
    return v2;
  }
  v13 = *(const void **)(a1 + 3216);
  if ( v13 )
  {
    memmove((char *)v10 + (unsigned int)v10[13] + 36, v13, v7);
    *(_BYTE *)(a2 + 3) = 1;
  }
  else
  {
    *(_BYTE *)(a2 + 3) = 6;
    return (unsigned int)-1056964602;
  }
  return v2;
}
