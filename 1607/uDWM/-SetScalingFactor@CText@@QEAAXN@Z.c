/*
 * XREFs of ?SetScalingFactor@CText@@QEAAXN@Z @ 0x180018950
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180025DA0 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CText::SetScalingFactor(CText *this, double a2)
{
  double v2; // rax

  if ( *((double *)this + 50) != a2 )
  {
    v2 = *(double *)this;
    *((double *)this + 50) = a2;
    (*(void (__fastcall **)(CText *, __int64))(*(_QWORD *)&v2 + 24LL))(this, 4096LL);
  }
}
