/*
 * XREFs of USBMidiInProcessPin @ 0x1C0006030
 * Callers:
 *     <none>
 * Callees:
 *     USBMidiInCopyEvent @ 0x1C00211E4 (USBMidiInCopyEvent.c)
 */

__int64 __fastcall USBMidiInProcessPin(PKSPIN Pin)
{
  _QWORD *Context; // rbx
  unsigned int v2; // r12d
  __int64 v4; // rbp
  KSPIN_LOCK *v5; // r15
  PKSSTREAM_POINTER LeadingEdgeStreamPointer; // rsi
  KIRQL v7; // bl
  __int64 **v8; // rdi
  __int64 *v9; // r14
  __int64 v10; // rax
  int v11; // r8d
  __int64 v12; // r9
  __int64 v13; // r8
  PUCHAR Data; // rcx
  __int64 **v15; // rcx
  ULONG Remaining; // [rsp+60h] [rbp+8h] BYREF

  Context = Pin->Context;
  v2 = 0;
  v4 = Context[17];
  v5 = Context + 12;
  LeadingEdgeStreamPointer = KsPinGetLeadingEdgeStreamPointer(Pin, KSSTREAM_POINTER_STATE_LOCKED);
  v7 = KeAcquireSpinLockRaiseToDpc(Context + 12);
  v8 = (__int64 **)(v4 + 64);
  while ( *v8 != (__int64 *)v8 && LeadingEdgeStreamPointer )
  {
    v9 = *v8;
    v10 = **v8;
    if ( (__int64 **)(*v8)[1] != v8 || *(__int64 **)(v10 + 8) != v9 )
      __fastfail(3u);
    *v8 = (__int64 *)v10;
    *(_QWORD *)(v10 + 8) = v8;
    KeReleaseSpinLock(v5, v7);
    if ( (*((_BYTE *)v9 + 25) & 0xF8) == 0xF8 )
    {
      v11 = *(_DWORD *)(v4 + 48);
      if ( v11 )
      {
        KsStreamPointerAdvanceOffsetsAndUnlock(LeadingEdgeStreamPointer, 0, (v11 + 3) & 0xFFFFFFFC, 1u);
        *(_DWORD *)(v4 + 48) = 0;
        LeadingEdgeStreamPointer = KsPinGetLeadingEdgeStreamPointer(Pin, KSSTREAM_POINTER_STATE_LOCKED);
      }
    }
    if ( LeadingEdgeStreamPointer )
    {
      v12 = v9[2];
      v13 = *(_QWORD *)(v4 + 56);
      Data = LeadingEdgeStreamPointer->OffsetOut.Data;
      Remaining = LeadingEdgeStreamPointer->OffsetOut.Remaining;
      USBMidiInCopyEvent((_DWORD)Data, (_DWORD)v9 + 24, v13, v12, (__int64)&Remaining);
      if ( (v9[3] & 0xF) == 4 && Remaining + 3 <= LeadingEdgeStreamPointer->OffsetOut.Remaining )
      {
        *(_DWORD *)(v4 + 48) += Remaining;
      }
      else
      {
        KsStreamPointerAdvanceOffsetsAndUnlock(LeadingEdgeStreamPointer, 0, (Remaining + 3) & 0xFFFFFFFC, 1u);
        *(_DWORD *)(v4 + 48) = 0;
        LeadingEdgeStreamPointer = KsPinGetLeadingEdgeStreamPointer(Pin, KSSTREAM_POINTER_STATE_LOCKED);
      }
    }
    v7 = KeAcquireSpinLockRaiseToDpc(v5);
    v15 = *(__int64 ***)(v4 + 88);
    *v9 = v4 + 80;
    v9[1] = (__int64)v15;
    if ( *v15 != (__int64 *)(v4 + 80) )
      __fastfail(3u);
    *v15 = v9;
    *(_QWORD *)(v4 + 88) = v9;
  }
  if ( *v8 == (__int64 *)v8 )
  {
    if ( LeadingEdgeStreamPointer )
      KsStreamPointerUnlock(LeadingEdgeStreamPointer, 0);
    v2 = 259;
  }
  *(_BYTE *)(v4 + 33) = 0;
  KeReleaseSpinLock(v5, v7);
  return v2;
}
