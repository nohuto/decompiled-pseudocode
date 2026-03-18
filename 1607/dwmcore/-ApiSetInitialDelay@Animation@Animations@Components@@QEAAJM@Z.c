/*
 * XREFs of ?ApiSetInitialDelay@Animation@Animations@Components@@QEAAJM@Z @ 0x180018F34
 * Callers:
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x180087408 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATIO.c)
 * Callees:
 *     ?Round@Math@Animations@Components@@SAHM@Z @ 0x18002D3CC (-Round@Math@Animations@Components@@SAHM@Z.c)
 */

__int64 __fastcall Components::Animations::Animation::ApiSetInitialDelay(
        Components::Animations::Animation *this,
        float a2)
{
  int v2; // edx
  __int64 v3; // rcx
  __int64 result; // rax

  v2 = Components::Animations::Math::Round(a2 * 1000.0);
  result = 0LL;
  if ( v2 < 0 )
    return 2147942487LL;
  *(_DWORD *)(v3 + 32) = v2;
  *(_DWORD *)(v3 + 36) = 0;
  return result;
}
