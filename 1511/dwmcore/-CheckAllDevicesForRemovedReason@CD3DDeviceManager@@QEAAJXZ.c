/*
 * XREFs of ?CheckAllDevicesForRemovedReason@CD3DDeviceManager@@QEAAJXZ @ 0x1801449F0
 * Callers:
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180074880 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

__int64 __fastcall CD3DDeviceManager::CheckAllDevicesForRemovedReason(CD3DDeviceManager *this)
{
  __int64 result; // rax
  unsigned int v3; // esi

  result = 0LL;
  v3 = 0;
  do
  {
    if ( v3 >= *((_DWORD *)this + 30) )
      break;
    result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(32LL * v3 + *((_QWORD *)this + 12)) + 552LL)
                                               + 312LL))(*(_QWORD *)(*(_QWORD *)(32LL * v3 + *((_QWORD *)this + 12))
                                                                   + 552LL));
    ++v3;
  }
  while ( (int)result >= 0 );
  return result;
}
