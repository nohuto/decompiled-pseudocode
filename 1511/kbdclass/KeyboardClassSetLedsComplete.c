/*
 * XREFs of KeyboardClassSetLedsComplete @ 0x1C0001330
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00018D0 (WPP_RECORDER_SF_qq.c)
 */

__int64 __fastcall KeyboardClassSetLedsComplete(__int64 a1, IRP *a2, __int64 a3)
{
  signed __int64 v5; // rax
  __int32 v6; // ecx

  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(a3 + 32), a2, 0x20u);
  v5 = _InterlockedCompareExchange64((volatile signed __int64 *)(a3 + 368), 0LL, (signed __int64)a2);
  if ( v5 && (IRP *)v5 != a2
    || (v6 = _InterlockedExchange((volatile __int32 *)(a3 + 376), 3), (IRP *)v5 == a2)
    || !v5 && v6 == 2 )
  {
    WPP_RECORDER_SF_qq(WPP_GLOBAL_Control->DeviceExtension, 4, 4, 97);
    IoFreeIrp(a2);
  }
  return 3221225494LL;
}
