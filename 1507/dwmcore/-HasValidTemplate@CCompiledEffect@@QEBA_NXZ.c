/*
 * XREFs of ?HasValidTemplate@CCompiledEffect@@QEBA_NXZ @ 0x180113374
 * Callers:
 *     ?IsReadyToDraw@CCompiledEffect@@QEBA_NXZ @ 0x1801133B0 (-IsReadyToDraw@CCompiledEffect@@QEBA_NXZ.c)
 *     ?ProcessSetProperties@CCompiledEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPILEDEFFECT_SETPROPERTIES@@@Z @ 0x1801134D0 (-ProcessSetProperties@CCompiledEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPILEDEFFECT_SETPRO.c)
 *     ?ProcessUpdateInputs@CCompiledEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPILEDEFFECT_UPDATEINPUTS@@PEBXI@Z @ 0x180113574 (-ProcessUpdateInputs@CCompiledEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPILEDEFFECT_UPDATEI.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CCompiledEffect::HasValidTemplate(CCompiledEffect *this)
{
  return __PAIR128__(*((_QWORD *)this + 7), 0LL) != *(_QWORD *)(*((_QWORD *)this + 7) + 48LL);
}
