/*
 * XREFs of ?ApiSetKeyframeCount@Animation@Animations@Components@@QEAAJH@Z @ 0x180161790
 * Callers:
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x1800F7D98 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATIO.c)
 * Callees:
 *     ?SetKeyframeCount@Sequence@Animations@Components@@QEAAJH@Z @ 0x180164A14 (-SetKeyframeCount@Sequence@Animations@Components@@QEAAJH@Z.c)
 */

__int64 __fastcall Components::Animations::Animation::ApiSetKeyframeCount(
        Components::Animations::Sequence **this,
        int a2)
{
  __int64 result; // rax

  result = Components::Animations::Sequence::SetKeyframeCount(this[3], a2);
  if ( (int)result >= 0 )
  {
    *((_DWORD *)this + 56) = a2;
    return 0LL;
  }
  return result;
}
