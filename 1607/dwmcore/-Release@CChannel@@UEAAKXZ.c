/*
 * XREFs of ?Release@CChannel@@UEAAKXZ @ 0x18004AC00
 * Callers:
 *     ?CreateKernelChannel@CConnection@@AEAAJPEAPEAVCChannel@@@Z @ 0x1800A871C (-CreateKernelChannel@CConnection@@AEAAJPEAPEAVCChannel@@@Z.c)
 *     ?Create@CChannel@@SAJPEAVCConnection@@IPEAPEAV1@@Z @ 0x1800A89CC (-Create@CChannel@@SAJPEAVCConnection@@IPEAPEAV1@@Z.c)
 *     ?DestroyChannel@CConnection@@QEAAJI@Z @ 0x180113894 (-DestroyChannel@CConnection@@QEAAJI@Z.c)
 *     ?Destroy@CChannel@@UEAAJXZ @ 0x180114B50 (-Destroy@CChannel@@UEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1CChannel@@AEAA@XZ @ 0x1801145D0 (--1CChannel@@AEAA@XZ.c)
 */

__int64 __fastcall CChannel::Release(CChannel *this)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v2 && this )
  {
    CChannel::~CChannel(this);
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CChannel *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  }
  return v2;
}
