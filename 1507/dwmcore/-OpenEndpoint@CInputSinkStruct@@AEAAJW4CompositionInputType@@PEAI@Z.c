/*
 * XREFs of ?OpenEndpoint@CInputSinkStruct@@AEAAJW4CompositionInputType@@PEAI@Z @ 0x18012F510
 * Callers:
 *     ?SetupEndpoints@CInputSinkStruct@@AEAAXXZ @ 0x18005AC54 (-SetupEndpoints@CInputSinkStruct@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     memset_0 @ 0x180099BC6 (memset_0.c)
 */

__int64 __fastcall CInputSinkStruct::OpenEndpoint(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v6; // esi
  struct CInputManager *v7; // rdi
  HRESULT CompositionInputQueueAndTransform; // eax
  LPVOID ppv[2]; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v11[32]; // [rsp+30h] [rbp-98h] BYREF

  v6 = -2147467259;
  memset_0(ppv, 0, 0x30uLL);
  v7 = CInputManager::s_pInputManager;
  if ( CInputManager::s_pInputManager )
    v7 = (struct CInputManager *)*((_QWORD *)CInputManager::s_pInputManager + 51);
  if ( v7 )
  {
    (*(void (__fastcall **)(struct CInputManager *))(*(_QWORD *)v7 + 8LL))(v7);
    CompositionInputQueueAndTransform = NtQueryCompositionInputQueueAndTransform(
                                          *(const IID *const *)(a1 + 16),
                                          (const IID *const)a2,
                                          ppv);
    v6 = CompositionInputQueueAndTransform | 0x10000000;
    if ( CompositionInputQueueAndTransform >= 0 )
      v6 = (*(__int64 (__fastcall **)(struct CInputManager *, _BYTE *, __int64))(*(_QWORD *)v7 + 96LL))(v7, v11, a3);
    (*(void (__fastcall **)(struct CInputManager *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return v6;
}
