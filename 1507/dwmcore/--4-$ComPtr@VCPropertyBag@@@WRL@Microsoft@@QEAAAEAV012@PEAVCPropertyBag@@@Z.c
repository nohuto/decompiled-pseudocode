/*
 * XREFs of ??4?$ComPtr@VCPropertyBag@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPropertyBag@@@Z @ 0x1801123AC
 * Callers:
 *     ?ProcessSetProperties@CCompiledEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPILEDEFFECT_SETPROPERTIES@@@Z @ 0x1801134D0 (-ProcessSetProperties@CCompiledEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPILEDEFFECT_SETPRO.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<CPropertyBag>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v4; // rbx

  if ( *a1 != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    v4 = *a1;
    *a1 = a2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return a1;
}
