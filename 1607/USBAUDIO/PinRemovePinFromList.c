/*
 * XREFs of PinRemovePinFromList @ 0x1C0002194
 * Callers:
 *     PinClose @ 0x1C00157F0 (PinClose.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PinRemovePinFromList(_QWORD *a1)
{
  PKSDEVICE Device; // rax
  KSPIN_LOCK *Context; // rdi
  _QWORD *v4; // rbx
  KIRQL v5; // al
  __int64 v6; // r8
  _QWORD *v7; // rdx

  Device = KsGetDevice(a1);
  if ( Device )
  {
    Context = (KSPIN_LOCK *)Device->Context;
    v4 = (_QWORD *)a1[2];
    v5 = KeAcquireSpinLockRaiseToDpc(Context + 12);
    v6 = *v4;
    v7 = (_QWORD *)v4[1];
    if ( *(_QWORD **)(*v4 + 8LL) != v4 || (_QWORD *)*v7 != v4 )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    KeReleaseSpinLock(Context + 12, v5);
  }
  return 0LL;
}
