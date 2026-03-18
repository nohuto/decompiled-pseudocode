/*
 * XREFs of ScsiUnmapRequest @ 0x1C000C394
 * Callers:
 *     NVMeHwBuildIo @ 0x1C0001000 (NVMeHwBuildIo.c)
 * Callees:
 *     GetSrbScsiAddress @ 0x1C0001F1C (GetSrbScsiAddress.c)
 *     GetSrbDataBuffer @ 0x1C0001F4C (GetSrbDataBuffer.c)
 *     SrbAssignQueueId @ 0x1C0002B98 (SrbAssignQueueId.c)
 *     memset @ 0x1C0003180 (memset.c)
 *     GetNamespaceId @ 0x1C0004770 (GetNamespaceId.c)
 *     GetSrbExtension @ 0x1C0004794 (GetSrbExtension.c)
 *     IsDeallocateSupported @ 0x1C0009D0C (IsDeallocateSupported.c)
 *     NVMeSetSenseData @ 0x1C000E5FC (NVMeSetSenseData.c)
 */

__int64 __fastcall ScsiUnmapRequest(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rdi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r10
  unsigned int v9; // ebx
  __int64 v10; // rbp
  unsigned __int16 v11; // bx
  _BYTE *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rbp
  int NamespaceId; // eax
  __int64 PhysicalAddress; // rax
  unsigned int v18; // [rsp+30h] [rbp-28h] BYREF
  _DWORD *v19; // [rsp+38h] [rbp-20h] BYREF
  unsigned __int16 v20; // [rsp+78h] [rbp+20h] BYREF

  v19 = 0LL;
  v20 = 0;
  v18 = 0;
  SrbExtension = GetSrbExtension(a2);
  GetSrbDataBuffer(a2, &v19);
  if ( !IsDeallocateSupported(a1) || (*(_BYTE *)(v8 + 1) & 1) != 0 )
  {
    LOBYTE(v7) = 36;
    LOBYTE(v5) = 6;
    NVMeSetSenseData(a2, v5, v6, v7);
    return 3238002694LL;
  }
  else
  {
    if ( *v19 < 0x18u )
    {
      v9 = -1056964604;
LABEL_7:
      LOBYTE(v7) = 36;
      LOBYTE(v5) = 21;
      NVMeSetSenseData(a2, v5, v6, v7);
      return v9;
    }
    v10 = v7 + 8;
    HIBYTE(v20) = *(_BYTE *)(v7 + 2);
    LOBYTE(v20) = *(_BYTE *)(v7 + 3);
    v11 = v20 >> 4;
    if ( (unsigned __int16)(v20 >> 4) > 0x100u )
    {
      v9 = -1056964602;
      goto LABEL_7;
    }
    memset((void *)SrbExtension, 0, 0x1000uLL);
    if ( v11 )
    {
      v13 = (_BYTE *)(SrbExtension + 14);
      v14 = v11;
      v15 = v10 - SrbExtension;
      do
      {
        v13[1] = v13[v15 - 14];
        *v13 = v13[v15 - 13];
        *(v13 - 1) = v13[v15 - 12];
        *(v13 - 2) = v13[v15 - 11];
        *(v13 - 3) = v13[v15 - 10];
        *(v13 - 4) = v13[v15 - 9];
        *(v13 - 5) = v13[v15 - 8];
        *(v13 - 6) = v13[v15 - 7];
        *(v13 - 7) = v13[v15 - 6];
        *(v13 - 8) = v13[v15 - 5];
        *(v13 - 9) = v13[v15 - 4];
        *(v13 - 10) = v13[v15 - 3];
        v13 += 16;
        --v14;
      }
      while ( v14 );
    }
    *(_BYTE *)(SrbExtension + 4245) = *(_BYTE *)(SrbExtension + 4245) & 0xFC | 2;
    SrbAssignQueueId(a1, a2);
    GetSrbScsiAddress(a2, 0LL, 0LL, &v18);
    NamespaceId = GetNamespaceId(a1, v18);
    *(_DWORD *)(SrbExtension + 4140) |= 4u;
    *(_BYTE *)(SrbExtension + 4096) = 9;
    *(_BYTE *)(SrbExtension + 4136) = v11 - 1;
    *(_DWORD *)(SrbExtension + 4100) = NamespaceId;
    PhysicalAddress = StorPortGetPhysicalAddress(a1, 0LL, SrbExtension, &v20);
    *(_BYTE *)(SrbExtension + 4245) |= 4u;
    *(_QWORD *)(SrbExtension + 4120) = PhysicalAddress;
    return 0LL;
  }
}
