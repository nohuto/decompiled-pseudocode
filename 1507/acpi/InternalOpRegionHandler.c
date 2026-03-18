/*
 * XREFs of InternalOpRegionHandler @ 0x1C001EC50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00237F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InternalOpRegionHandler(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 (__fastcall *v6)(_QWORD, __int64); // rax

  if ( a6 && (v6 = *(__int64 (__fastcall **)(_QWORD, __int64))(a6 + 16)) != 0LL )
    return v6(a1, a2);
  else
    return 3221225473LL;
}
