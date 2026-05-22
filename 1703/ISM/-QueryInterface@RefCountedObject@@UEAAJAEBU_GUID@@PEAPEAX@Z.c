/*
 * XREFs of ?QueryInterface@RefCountedObject@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800017D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RefCountedObject::QueryInterface(RefCountedObject *this, const struct _GUID *a2, void **a3)
{
  __int64 result; // rax

  if ( !a3 )
    return 2147942487LL;
  if ( *(_QWORD *)&a2->Data1 != *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
    || *(_QWORD *)a2->Data4 != *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
  {
    return 2147500034LL;
  }
  (*(void (__fastcall **)(RefCountedObject *))(*(_QWORD *)this + 8LL))(this);
  result = 0LL;
  *a3 = this;
  return result;
}
