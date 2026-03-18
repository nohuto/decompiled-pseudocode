/*
 * XREFs of PopUmpoSendPowerRequestOverrideQuery @ 0x1400FB2FC
 * Callers:
 *     PopCreateKernelPowerRequest @ 0x14051E314 (PopCreateKernelPowerRequest.c)
 *     PopCreateUserPowerRequest @ 0x14051E750 (PopCreateUserPowerRequest.c)
 *     PopPowerRequestOverrideInitialize @ 0x1405809E8 (PopPowerRequestOverrideInitialize.c)
 * Callees:
 *     PoStoreRequester @ 0x1400FB3C0 (PoStoreRequester.c)
 *     PopUmpoSendPowerMessage @ 0x1400FB738 (PopUmpoSendPowerMessage.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PopUmpoSendPowerRequestOverrideQuery(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  size_t v5; // rbp
  _DWORD *PoolWithTag; // rax
  _DWORD *v7; // rbx
  __int64 v8; // r9
  int v9; // edi
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = 0LL;
  LOBYTE(a4) = 1;
  PoStoreRequester(*(_QWORD *)(a1 + 80), 0LL, &v11, a4);
  v5 = v11 + 16;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v11 + 16, 0x6F706D55u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v5);
    LOBYTE(v8) = 1;
    v9 = PoStoreRequester(*(_QWORD *)(a1 + 80), v7 + 4, &v11, v8);
    if ( v9 >= 0 )
    {
      *v7 = 9;
      v7[2] = *(_DWORD *)(a1 + 28);
      v9 = PopUmpoSendPowerMessage(v7, v5);
    }
    ExFreePoolWithTag(v7, 0x6F706D55u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v9;
}
