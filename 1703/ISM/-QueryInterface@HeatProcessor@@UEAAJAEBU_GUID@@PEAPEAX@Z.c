/*
 * XREFs of ?QueryInterface@HeatProcessor@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003B8D0
 * Callers:
 *     ?QueryInterface@HeatProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003BAE0 (-QueryInterface@HeatProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HeatProcessor::QueryInterface(HeatProcessor *this, const struct _GUID *a2, void **a3)
{
  if ( !a3 )
    return 2147942487LL;
  if ( *(_QWORD *)&a2->Data1 != *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
    || *(_QWORD *)a2->Data4 != *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
  {
    return 2147500034LL;
  }
  (*(void (__fastcall **)(HeatProcessor *))(*(_QWORD *)this + 8LL))(this);
  *a3 = (char *)this + 8;
  return 0LL;
}
