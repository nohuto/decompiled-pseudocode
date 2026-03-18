/*
 * XREFs of AlpcpSendCloseMessage @ 0x14047E6B8
 * Callers:
 *     AlpcpDeletePort @ 0x14047E7D8 (AlpcpDeletePort.c)
 *     AlpcpClosePort @ 0x14047E9E0 (AlpcpClosePort.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 *     AlpcpUnlockMessage @ 0x140423364 (AlpcpUnlockMessage.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14047CFD8 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpDispatchCloseMessage @ 0x14047FA24 (AlpcpDispatchCloseMessage.c)
 */

__int64 __fastcall AlpcpSendCloseMessage(__int64 a1)
{
  __int64 result; // rax
  int v3; // edx
  ULONG_PTR v4; // rbx
  _QWORD v5[8]; // [rsp+20h] [rbp-48h] BYREF

  memset(v5, 0, sizeof(v5));
  result = *(unsigned int *)(a1 + 416);
  v3 = (*(_DWORD *)(a1 + 416) >> 1) & 3;
  if ( v3 != 1 && (result & 8) == 0 && ((*(_DWORD *)(a1 + 256) & 0x1000) == 0 || v3 == 2) )
  {
    result = *(_QWORD *)(a1 + 16);
    v4 = _InterlockedExchange64((volatile __int64 *)(result + 64), 0LL);
    if ( v4 )
    {
      AlpcpLockForCachedReferenceBlob(v4);
      --*(_WORD *)(v4 - 30);
      *(_DWORD *)(v4 + 248) &= ~0x80000000;
      *(_DWORD *)(v4 + 224) = 3145736;
      *(_BYTE *)(v4 + 228) = 0;
      *(_WORD *)(v4 + 228) |= 5u;
      *(_WORD *)(v4 + 230) = 0;
      v5[0] = a1;
      v5[1] = v4;
      LODWORD(v5[6]) = 0x10000;
      *(_QWORD *)(v4 + 264) = KeGetCurrentThread()->ApcState.Process[1].ThreadListHead.Flink;
      *(_QWORD *)(v4 + 232) = 0LL;
      *(_QWORD *)(v4 + 240) = 0LL;
      result = AlpcpDispatchCloseMessage(v5);
      if ( (int)result < 0 )
        return AlpcpUnlockMessage(v4);
    }
  }
  return result;
}
