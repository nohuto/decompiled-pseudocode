/*
 * XREFs of UsbhBusifGetSSHub @ 0x1C0027AD8
 * Callers:
 *     UsbhPdoPnp_QueryInterface @ 0x1C0016910 (UsbhPdoPnp_QueryInterface.c)
 * Callees:
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 */

__int64 __fastcall UsbhBusifGetSSHub(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v5; // rax
  __int64 v6; // rdx
  __int64 result; // rax

  v5 = FdoExt(a1, a2, a3, a4);
  v6 = *(_QWORD *)(*(_QWORD *)(a3 + 184) + 24LL);
  *(_QWORD *)(v6 + 16) = UsbhBusIfSSReference;
  *(_QWORD *)(v6 + 24) = UsbhBusIfSSDereference;
  *(_QWORD *)(v6 + 32) = UsbhBusIf_SuspendChildHub;
  *(_QWORD *)(v6 + 40) = UsbhBusIf_ResumeChildHub;
  *(_QWORD *)(v6 + 8) = v5;
  *(_DWORD *)v6 = 48;
  _InterlockedIncrement(v5 + 853);
  *(_DWORD *)(a3 + 48) = 0;
  result = 0LL;
  *(_QWORD *)(a3 + 56) = 0LL;
  return result;
}
