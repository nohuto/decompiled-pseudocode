/*
 * XREFs of ?CheckAllDevicesForRemovedReason@CD3DDeviceManager@@QEAAJXZ @ 0x1801727F8
 * Callers:
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18007BBC0 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceManager::CheckAllDevicesForRemovedReason(CD3DDeviceManager *this)
{
  __int64 result; // rax
  __int64 v3; // rbx
  __int64 v4; // rcx

  result = 0LL;
  v3 = 0LL;
  do
  {
    if ( (unsigned int)v3 >= *((_DWORD *)this + 42) )
      break;
    v4 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 18) + 40 * v3) + 568LL);
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 312LL))(v4);
    v3 = (unsigned int)(v3 + 1);
  }
  while ( (int)result >= 0 );
  return result;
}
