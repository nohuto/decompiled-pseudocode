/*
 * XREFs of ?Release@CChannel@DirectComposition@@QEAAKXZ @ 0x1C00235A4
 * Callers:
 *     ?DestroyHandle@CChannel@DirectComposition@@SAJI@Z @ 0x1C0016018 (-DestroyHandle@CChannel@DirectComposition@@SAJI@Z.c)
 *     ?Create@CApplicationChannel@DirectComposition@@SAJPEAI@Z @ 0x1C0024874 (-Create@CApplicationChannel@DirectComposition@@SAJPEAI@Z.c)
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C006B6A8 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     ?UnlockAndUnreference@CChannel@DirectComposition@@UEAAXXZ @ 0x1C00D54D0 (-UnlockAndUnreference@CChannel@DirectComposition@@UEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CChannel::Release(DirectComposition::CChannel *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 )
    (*(void (__fastcall **)(DirectComposition::CChannel *))(*(_QWORD *)this + 24LL))(this);
  return v1;
}
