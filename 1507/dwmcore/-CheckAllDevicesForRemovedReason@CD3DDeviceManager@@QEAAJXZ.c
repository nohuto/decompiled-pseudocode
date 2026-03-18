/*
 * XREFs of ?CheckAllDevicesForRemovedReason@CD3DDeviceManager@@QEAAJXZ @ 0x180132AB0
 * Callers:
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180042CF0 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CD3DDeviceManager::CheckAllDevicesForRemovedReason(CD3DDeviceManager *this)
{
  __int64 result; // rax
  unsigned int v3; // esi

  result = 0LL;
  v3 = 0;
  do
  {
    if ( v3 >= *((_DWORD *)this + 32) )
      break;
    result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(32LL * v3 + *((_QWORD *)this + 13)) + 544LL)
                                               + 312LL))(*(_QWORD *)(*(_QWORD *)(32LL * v3 + *((_QWORD *)this + 13))
                                                                   + 544LL));
    ++v3;
  }
  while ( (int)result >= 0 );
  return result;
}
