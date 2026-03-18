/*
 * XREFs of ProtocolCommandToNVMe @ 0x1C000AD38
 * Callers:
 *     NVMeHwBuildIo @ 0x1C0001000 (NVMeHwBuildIo.c)
 * Callees:
 *     GetSrbDataBuffer @ 0x1C0001F4C (GetSrbDataBuffer.c)
 *     SrbAssignQueueId @ 0x1C0002B98 (SrbAssignQueueId.c)
 *     GetControllerMaxTransferSize @ 0x1C0004744 (GetControllerMaxTransferSize.c)
 *     GetNamespaceId @ 0x1C0004770 (GetNamespaceId.c)
 *     GetSrbExtension @ 0x1C0004794 (GetSrbExtension.c)
 *     NVMeZeroMemory @ 0x1C000505C (NVMeZeroMemory.c)
 *     FillClippedSGL @ 0x1C0008878 (FillClippedSGL.c)
 *     NVMeValidateProtocolCommandRequest @ 0x1C000A9E8 (NVMeValidateProtocolCommandRequest.c)
 *     SglToPrp @ 0x1C000C614 (SglToPrp.c)
 */

__int64 __fastcall ProtocolCommandToNVMe(_DWORD *a1, __int64 a2)
{
  __int64 SrbExtension; // rax
  __int64 v5; // rsi
  __int64 v6; // r13
  __int64 SrbDataBuffer; // rbx
  unsigned int v8; // ebp
  __int64 v9; // r12
  unsigned int v10; // r15d
  unsigned int *ScatterGatherList; // rax
  int NamespaceId; // r15d
  unsigned int v13; // edx
  int v14; // ecx
  __int64 v16; // [rsp+78h] [rbp+10h] BYREF
  void *v17; // [rsp+80h] [rbp+18h]

  SrbExtension = GetSrbExtension(a2);
  v5 = 0LL;
  v17 = 0LL;
  v6 = SrbExtension;
  SrbDataBuffer = GetSrbDataBuffer(a2, &v16);
  v8 = NVMeValidateProtocolCommandRequest((__int64)a1, a2);
  if ( v8 )
    goto LABEL_22;
  if ( *(_DWORD *)(SrbDataBuffer + 36) )
  {
    v9 = *(unsigned int *)(SrbDataBuffer + 52);
    v5 = SrbDataBuffer + v9;
    goto LABEL_6;
  }
  if ( *(_DWORD *)(SrbDataBuffer + 32) )
  {
    LODWORD(v9) = *(_DWORD *)(SrbDataBuffer + 48);
    v5 = SrbDataBuffer + (unsigned int)v9;
LABEL_6:
    if ( v5 )
    {
      v10 = (((unsigned int)GetControllerMaxTransferSize(a1) - 1) >> 12) + 2;
      LODWORD(v16) = 24 * v10 + 16;
      StorPortExtendedFunction(0LL, a1, (unsigned int)v16);
      if ( !v17 )
      {
        *(_DWORD *)(SrbDataBuffer + 16) = 7;
LABEL_9:
        *(_BYTE *)(a2 + 3) = 21;
        v8 = -1056964607;
        goto LABEL_22;
      }
      NVMeZeroMemory(v17, v16);
      ScatterGatherList = (unsigned int *)StorPortGetScatterGatherList(a1, a2);
      if ( !FillClippedSGL(ScatterGatherList, (unsigned int *)v17, v10, v9) )
      {
        if ( v17 )
        {
          StorPortExtendedFunction(1LL, a1, v17);
          v17 = 0LL;
        }
        *(_DWORD *)(SrbDataBuffer + 16) = 3;
        goto LABEL_9;
      }
      *(_QWORD *)(v6 + 4208) = v17;
    }
  }
  if ( *(int *)(SrbDataBuffer + 12) >= 0 )
  {
    if ( *(_BYTE *)(a2 + 2) == 40 )
      v13 = *(unsigned __int8 *)(*(unsigned int *)(a2 + 52) + a2 + 10);
    else
      v13 = *(unsigned __int8 *)(a2 + 7);
    NamespaceId = GetNamespaceId((__int64)a1, v13);
  }
  else
  {
    NamespaceId = *(_DWORD *)(SrbDataBuffer + 84);
  }
  *(_BYTE *)(v6 + 4245) ^= ((*(_DWORD *)(SrbDataBuffer + 56) == 1) ^ *(_BYTE *)(v6 + 4245)) & 1;
  *(_BYTE *)(v6 + 4245) ^= (*(_BYTE *)(v6 + 4245) ^ (2 * (v5 != 0))) & 2;
  SrbAssignQueueId((__int64)a1, a2);
  *(_BYTE *)(v6 + 4096) = *(_BYTE *)(SrbDataBuffer + 80);
  v14 = *(_DWORD *)(SrbDataBuffer + 80) ^ *(_DWORD *)(v6 + 4096);
  *(_DWORD *)(v6 + 4100) = NamespaceId;
  *(_DWORD *)(v6 + 4096) ^= v14 & 0x300;
  *(_DWORD *)(v6 + 4136) = *(_DWORD *)(SrbDataBuffer + 120);
  *(_DWORD *)(v6 + 4140) = *(_DWORD *)(SrbDataBuffer + 124);
  *(_DWORD *)(v6 + 4144) = *(_DWORD *)(SrbDataBuffer + 128);
  *(_DWORD *)(v6 + 4148) = *(_DWORD *)(SrbDataBuffer + 132);
  *(_DWORD *)(v6 + 4152) = *(_DWORD *)(SrbDataBuffer + 136);
  *(_DWORD *)(v6 + 4156) = *(_DWORD *)(SrbDataBuffer + 140);
  *(_QWORD *)(v6 + 4216) = ProtocolCommandCompletion;
LABEL_22:
  if ( !*(_BYTE *)(a2 + 3) )
  {
    *(_DWORD *)(SrbDataBuffer + 16) = 0;
    SglToPrp(a1, a2);
  }
  return v8;
}
