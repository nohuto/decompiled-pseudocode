/*
 * XREFs of ?GetKeys@?$FixedSizeMap@G_N$0BI@@@QEAAJAEAY0BI@GPEAI@Z @ 0x180035C3C
 * Callers:
 *     ??1ControllerProcessor@@MEAA@XZ @ 0x180031A84 (--1ControllerProcessor@@MEAA@XZ.c)
 *     ?OnAutoRepeatTimerStatic@ControllerProcessor@@SAJPEAX@Z @ 0x180032440 (-OnAutoRepeatTimerStatic@ControllerProcessor@@SAJPEAX@Z.c)
 *     ?LiftPressedVirtualKeys@ControllerProcessor@@AEAAJ_N@Z @ 0x180034670 (-LiftPressedVirtualKeys@ControllerProcessor@@AEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FixedSizeMap<unsigned short,bool,24>::GetKeys(_WORD *a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // r9
  _WORD *v4; // rbx
  __int64 v5; // r11

  v3 = 0LL;
  v4 = a1 + 48;
  v5 = 24LL;
  do
  {
    if ( *a1 != *v4 )
    {
      *(_WORD *)(a2 + 2 * v3) = *a1;
      v3 = (unsigned int)(v3 + 1);
    }
    a1 += 2;
    --v5;
  }
  while ( v5 );
  if ( a3 )
    *a3 = v3;
  return 0LL;
}
