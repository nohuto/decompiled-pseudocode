/*
 * XREFs of ?RemoveKey@?$FixedSizeMap@G_N$0BI@@@QEAAJAEBG@Z @ 0x180035BD8
 * Callers:
 *     ?LiftPressedVirtualKeys@ControllerProcessor@@AEAAJ_N@Z @ 0x180034670 (-LiftPressedVirtualKeys@ControllerProcessor@@AEAAJ_N@Z.c)
 *     ?SetVirtualKeyState@ControllerProcessor@@AEAAJPEAUInputInfo@@G_N@Z @ 0x180034FE8 (-SetVirtualKeyState@ControllerProcessor@@AEAAJPEAUInputInfo@@G_N@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 */

__int64 __fastcall FixedSizeMap<unsigned short,bool,24>::RemoveKey(_WORD *a1, unsigned __int16 *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  unsigned int v5; // eax
  _WORD *v6; // rdx

  v3 = 0;
  v4 = *a2;
  v5 = 0;
  v6 = a1;
  do
  {
    if ( *v6 == (_WORD)v4 )
    {
      a1[2 * v5] = a1[48];
      return v3;
    }
    ++v5;
    v6 += 2;
  }
  while ( v5 < 0x18 );
  v3 = -2147467259;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    Template_qqq(v4, &MinInput_Warning_CheckResult, 12, 193, 5);
  return v3;
}
