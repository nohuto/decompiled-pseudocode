/*
 * XREFs of ?CloseEndpoint@CInputSinkStruct@@AEAAJPEAI@Z @ 0x18012F46C
 * Callers:
 *     ?CleanupEndpoints@CInputSinkStruct@@AEAAXXZ @ 0x18005ACA8 (-CleanupEndpoints@CInputSinkStruct@@AEAAXXZ.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CInputSinkStruct::CloseEndpoint(CInputSinkStruct *this, unsigned int *a2)
{
  struct CInputManager *v2; // rdi
  unsigned int v4; // esi
  unsigned int v5; // eax

  v2 = CInputManager::s_pInputManager;
  v4 = -2147467259;
  if ( CInputManager::s_pInputManager )
    v2 = (struct CInputManager *)*((_QWORD *)CInputManager::s_pInputManager + 51);
  if ( v2 )
  {
    (*(void (__fastcall **)(struct CInputManager *))(*(_QWORD *)v2 + 8LL))(v2);
    v5 = (*(__int64 (__fastcall **)(struct CInputManager *, _QWORD, __int64))(*(_QWORD *)v2 + 136LL))(v2, *a2, 1LL);
    *a2 = 0;
    v4 = v5;
    (*(void (__fastcall **)(struct CInputManager *))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return v4;
}
