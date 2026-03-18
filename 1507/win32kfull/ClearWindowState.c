/*
 * XREFs of ClearWindowState @ 0x1C0123D90
 * Callers:
 *     <none>
 * Callees:
 *     SetOrClrWF @ 0x1C005B694 (SetOrClrWF.c)
 *     ?ValidateState@@YAHK@Z @ 0x1C0123DE4 (-ValidateState@@YAHK@Z.c)
 */

__int64 __fastcall ClearWindowState(__int64 a1, unsigned int a2)
{
  unsigned __int16 v2; // r10
  _DWORD *v3; // r11

  if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 384LL) == *(_QWORD *)(gptiCurrent + 384LL) && (unsigned int)ValidateState(a2) )
    SetOrClrWF(0, v3, v2, 1);
  return 1LL;
}
