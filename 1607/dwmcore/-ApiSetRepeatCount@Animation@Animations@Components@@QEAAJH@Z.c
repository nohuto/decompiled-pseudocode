/*
 * XREFs of ?ApiSetRepeatCount@Animation@Animations@Components@@QEAAJH@Z @ 0x18001909C
 * Callers:
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x180087408 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATIO.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Components::Animations::Animation::ApiSetRepeatCount(
        Components::Animations::Animation *this,
        int a2)
{
  if ( (*((_BYTE *)this + 104) & 4) != 0 )
    return 2147500037LL;
  *((_DWORD *)this + 12) = a2;
  return 0LL;
}
