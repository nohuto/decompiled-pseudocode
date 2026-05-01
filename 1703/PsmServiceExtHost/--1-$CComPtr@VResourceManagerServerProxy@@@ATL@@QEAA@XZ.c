/*
 * XREFs of ??1?$CComPtr@VResourceManagerServerProxy@@@ATL@@QEAA@XZ @ 0x180020970
 * Callers:
 *     j_??1?$CComPtr@VResourceManagerServerProxy@@@ATL@@QEAA@XZ @ 0x180021C40 (j_--1-$CComPtr@VResourceManagerServerProxy@@@ATL@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 */

__int64 ATL::CComPtr<ResourceManagerServerProxy>::~CComPtr<ResourceManagerServerProxy>()
{
  __int64 result; // rax

  if ( g_pProxy )
    return (*(__int64 (__fastcall **)(struct ResourceManagerServerProxy *))(*(_QWORD *)g_pProxy + 16LL))(g_pProxy);
  return result;
}
