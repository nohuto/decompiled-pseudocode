/*
 * XREFs of USBType1Build1MsecIsocRequest @ 0x1C0004228
 * Callers:
 *     USBType1ProcessStreamPointer @ 0x1C00043C0 (USBType1ProcessStreamPointer.c)
 * Callees:
 *     USBType1BuildIsochUrbRequest @ 0x1C0003B90 (USBType1BuildIsochUrbRequest.c)
 *     memmove @ 0x1C0007CC0 (memmove.c)
 */

__int64 __fastcall USBType1Build1MsecIsocRequest(struct _KSPIN *a1, struct _KSSTREAM_POINTER **a2)
{
  _QWORD *Context; // r13
  struct _KSSTREAM_POINTER *v4; // r15
  unsigned int v5; // esi
  __int64 v6; // r14
  ULONG Remaining; // ebx
  ULONG v8; // ebp
  PUCHAR Data; // rdx
  unsigned int *v10; // rdi
  KIRQL v11; // al
  _QWORD *v12; // rdx
  KIRQL v13; // cl
  void **v14; // rax
  struct _KSSTREAM_POINTER *PoolWithTag; // r8

  Context = a1->Context;
  v4 = *a2;
  v5 = 0;
  v6 = Context[17];
  Remaining = (*a2)->OffsetIn.Remaining;
  v8 = Remaining;
  Data = (*a2)->OffsetIn.Data;
  v10 = *(unsigned int **)(v6 + 120);
  if ( *(_DWORD *)(v6 + 108) < Remaining )
    v8 = *(_DWORD *)(v6 + 108);
  memmove((void *)(*((_QWORD *)v10 + 6) + v10[9]), Data, v8);
  if ( Remaining == v8 )
  {
    KsStreamPointerAdvanceOffsetsAndUnlock(v4, v8, 0, 0);
    *a2 = 0LL;
  }
  else
  {
    KsStreamPointerAdvanceOffsets(v4, v8, 0, 0);
  }
  *(_DWORD *)(v6 + 108) -= v8;
  v10[9] += v8;
  if ( !*(_DWORD *)(v6 + 108) )
  {
    v11 = KeAcquireSpinLockRaiseToDpc(Context + 12);
    v12 = *(_QWORD **)v10;
    v13 = v11;
    v14 = (void **)*((_QWORD *)v10 + 1);
    if ( *(unsigned int **)(*(_QWORD *)v10 + 8LL) != v10 || *v14 != v10 )
      __fastfail(3u);
    *v14 = v12;
    v12[1] = v14;
    KeReleaseSpinLock(Context + 12, v13);
    PoolWithTag = (struct _KSSTREAM_POINTER *)ExAllocatePoolWithTag(NonPagedPool, 0x40uLL, 0x41627845u);
    if ( PoolWithTag )
    {
      PoolWithTag->Offset = &PoolWithTag->OffsetIn;
      PoolWithTag->Pin = a1;
      PoolWithTag->OffsetIn.Data = (PUCHAR)*((_QWORD *)v10 + 6);
      PoolWithTag->OffsetIn.Count = v10[9];
      PoolWithTag->OffsetIn.Remaining = v10[9];
      PoolWithTag->Context = v10;
      return (unsigned int)USBType1BuildIsochUrbRequest(
                             PoolWithTag,
                             (IO_COMPLETION_ROUTINE *)USBType1MsCompleteCallback);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v5;
}
