/*
 * XREFs of USBType1LockDelay @ 0x1C002152C
 * Callers:
 *     USBType1ProcessStreamPointer @ 0x1C0004600 (USBType1ProcessStreamPointer.c)
 * Callees:
 *     USBType1BuildIsochUrbRequest @ 0x1C0003DD0 (USBType1BuildIsochUrbRequest.c)
 *     memset @ 0x1C0008240 (memset.c)
 */

__int64 __fastcall USBType1LockDelay(struct _KSPIN *a1)
{
  _QWORD *Context; // rax
  __int64 v3; // rsi
  __int64 v4; // r8
  unsigned int v5; // r8d
  unsigned int v6; // edi
  struct _KSSTREAM_POINTER *PoolWithTag; // rax
  struct _KSSTREAM_POINTER *v8; // rbx
  int v9; // edi
  __int64 result; // rax

  Context = a1->Context;
  v3 = Context[17];
  v4 = *(_QWORD *)(Context[16] + 160LL);
  if ( *(_BYTE *)(v4 + 4) == 1 )
  {
    v5 = *(unsigned __int16 *)(v4 + 5);
LABEL_5:
    if ( v5 )
      goto LABEL_7;
    goto LABEL_6;
  }
  if ( *(_BYTE *)(v4 + 4) == 2 )
  {
    v5 = (unsigned int)*(unsigned __int16 *)(v4 + 5) / *(_DWORD *)(v3 + 100);
    goto LABEL_5;
  }
LABEL_6:
  v5 = 1;
LABEL_7:
  v6 = *(_DWORD *)(v3 + 8) * (v5 * *(_DWORD *)(v3 + 100) + v5 * (*(_DWORD *)(v3 + 104) >> 14) / 0x3E8);
  PoolWithTag = (struct _KSSTREAM_POINTER *)ExAllocatePoolWithTag(NonPagedPool, v6 + 64, 0x41627845u);
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v6 + 64);
    v8->Pin = a1;
    v8->OffsetIn.Data = (PUCHAR)&v8[1];
    v8->OffsetIn.Count = v6;
    v8->OffsetIn.Remaining = v6;
    v9 = USBType1BuildIsochUrbRequest(v8, (IO_COMPLETION_ROUTINE *)USBType1LockDelayCompleteCallback);
    if ( v9 < 0 )
      ExFreePool(v8);
  }
  else
  {
    v9 = -1073741670;
  }
  result = (unsigned int)v9;
  *(_BYTE *)(v3 + 83) = 0;
  return result;
}
