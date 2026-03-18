/*
 * XREFs of HmgReplace @ 0x1C0071330
 * Callers:
 *     GreCombineRgn @ 0x1C0026E40 (GreCombineRgn.c)
 *     ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1C0027F10 (-bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z.c)
 *     ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x1C0027FA0 (-bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z.c)
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1C00A8B90 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0031D80 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z @ 0x1C0031DD0 (-vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C0031F20 (--1HANDLELOCK@@QEAA@XZ.c)
 */

__int64 __fastcall HmgReplace(unsigned __int16 a1, __int64 a2)
{
  __int64 v2; // rbx
  struct _ENTRY *v4; // rdi
  __int64 v6; // [rsp+30h] [rbp-28h] BYREF
  int v7; // [rsp+38h] [rbp-20h]

  v2 = 0LL;
  v4 = (struct _ENTRY *)((char *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * a1);
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v6, v4, 1, a1, 0);
  if ( v7 && v6 )
  {
    v2 = *(_QWORD *)v4;
    *(_QWORD *)v4 = a2;
    HANDLELOCK::vUnlock((HANDLELOCK *)&v6);
  }
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v6);
  return v2;
}
