/*
 * XREFs of HUBPSM20_IssuingSuspendedToDeviceSM @ 0x1C000D860
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBPSM20_IssuingSuspendedToDeviceSM(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(v1 + 1328) + 1456LL))(*(_QWORD *)(v1 + 1328), 4098LL);
  *(_WORD *)(v1 + 184) |= 4u;
  return 3013LL;
}
