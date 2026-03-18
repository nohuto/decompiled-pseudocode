/*
 * XREFs of ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1C0036790
 * Callers:
 *     GreCombineRgn @ 0x1C002FB30 (GreCombineRgn.c)
 * Callees:
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C002D710 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C002E1E0 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@K@Z @ 0x1C0034588 (--0RGNMEMOBJTMP@@QEAA@K@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00345B0 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x1C0036900 (-bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z.c)
 */

__int64 __fastcall RGNOBJAPI::iCombine(RGNOBJAPI *this, struct RGNOBJ *a2, struct RGNOBJ *a3, int a4)
{
  unsigned int v8; // ebx
  __int16 *v10[3]; // [rsp+20h] [rbp-18h] BYREF

  RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v10, *(_DWORD *)(*(_QWORD *)this + 80LL));
  if ( !v10[0]
    || (RGNOBJ::vCopy((RGNOBJ *)v10, this), (v8 = RGNOBJ::iCombine((RGNOBJ *)v10, a2, a3, a4)) == 0)
    || !(unsigned int)RGNOBJAPI::bSwap(this, (struct RGNOBJ *)v10) )
  {
    v8 = 0;
  }
  RGNMEMOBJTMP::~RGNMEMOBJTMP(v10);
  return v8;
}
