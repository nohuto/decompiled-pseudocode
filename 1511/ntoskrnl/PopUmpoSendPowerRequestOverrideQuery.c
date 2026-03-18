/*
 * XREFs of PopUmpoSendPowerRequestOverrideQuery @ 0x1400981B4
 * Callers:
 *     PopCreateUserPowerRequest @ 0x140452BD8 (PopCreateUserPowerRequest.c)
 *     PopCreateKernelPowerRequest @ 0x140454CCC (PopCreateKernelPowerRequest.c)
 *     PopPowerRequestOverrideInitialize @ 0x14054B2B0 (PopPowerRequestOverrideInitialize.c)
 * Callees:
 *     PoStoreRequester @ 0x140098274 (PoStoreRequester.c)
 *     PopUmpoSendPowerMessage @ 0x140098C28 (PopUmpoSendPowerMessage.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
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
