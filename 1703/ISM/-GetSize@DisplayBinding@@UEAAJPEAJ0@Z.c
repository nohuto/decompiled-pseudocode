/*
 * XREFs of ?GetSize@DisplayBinding@@UEAAJPEAJ0@Z @ 0x18001C4B0
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DisplayBinding::GetSize(DisplayBinding *this, int *a2, int *a3)
{
  __int64 v3; // rcx
  unsigned int v4; // ebx

  v3 = *((_QWORD *)this + 13);
  v4 = v3 == 0 ? 0x8007139F : 0;
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64, int *, int *))(*(_QWORD *)v3 + 40LL))(v3, a2, a3);
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    Template_qqq(0LL, &MinInput_Warning_CheckResult, 0, 195, 159);
  }
  return v4;
}
