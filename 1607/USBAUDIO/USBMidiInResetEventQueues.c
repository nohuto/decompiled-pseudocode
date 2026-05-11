/*
 * XREFs of USBMidiInResetEventQueues @ 0x1C00062D8
 * Callers:
 *     USBMidiInStateChangePin @ 0x1C00063A0 (USBMidiInStateChangePin.c)
 * Callees:
 *     memset @ 0x1C0008380 (memset.c)
 */

void __fastcall USBMidiInResetEventQueues(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rsi
  KSPIN_LOCK *v3; // rbp
  KIRQL v4; // al
  __int64 **v5; // rdi
  KIRQL v6; // r14
  __int64 *v7; // rbx
  __int64 v8; // rcx
  __int64 **v9; // rcx

  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(_QWORD *)(v1 + 136);
  v3 = (KSPIN_LOCK *)(v1 + 96);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
  *(_BYTE *)(v2 + 32) = 0;
  v5 = (__int64 **)(v2 + 64);
  v6 = v4;
  while ( *v5 != (__int64 *)v5 )
  {
    v7 = *v5;
    v8 = **v5;
    if ( (__int64 **)(*v5)[1] != v5 || *(__int64 **)(v8 + 8) != v7 )
      __fastfail(3u);
    *v5 = (__int64 *)v8;
    *(_QWORD *)(v8 + 8) = v5;
    memset(v7, 0, 0x20uLL);
    v9 = *(__int64 ***)(v2 + 88);
    if ( *v9 != (__int64 *)(v2 + 80) )
      __fastfail(3u);
    *v7 = v2 + 80;
    v7[1] = (__int64)v9;
    *v9 = v7;
    *(_QWORD *)(v2 + 88) = v7;
  }
  KeReleaseSpinLock(v3, v6);
}
