/*
 * XREFs of ?vParentError@HFDBASIS64@@QEAAXPEA_J@Z @ 0x1C00B6F30
 * Callers:
 *     ?bNext@BEZIER64@@QEAAHPEAU_POINTFIX@@@Z @ 0x1C00B68F0 (-bNext@BEZIER64@@QEAAHPEAU_POINTFIX@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall HFDBASIS64::vParentError(HFDBASIS64 *this, __int64 *a2)
{
  __int64 v2; // r10
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r11
  __int64 v7; // rcx
  __int64 v8; // rdx

  v2 = *((_QWORD *)this + 3);
  v4 = 4 * v2;
  v5 = 4 * v2;
  if ( (v2 & 0x2000000000000000LL) != 0 )
    v5 = -4LL * *((_QWORD *)this + 3);
  v6 = *((_QWORD *)this + 2);
  v7 = 8 * v6 - v4;
  if ( v7 >= 0 )
    v8 = 8 * v6 - v4;
  else
    v8 = 4 * v2 - 8 * v6;
  if ( v5 <= v8 )
  {
    if ( v7 >= 0 )
      v4 = 8 * v6 - v4;
    else
      v4 = 4 * v2 - 8 * v6;
  }
  else if ( (v2 & 0x2000000000000000LL) != 0 )
  {
    v4 = -4 * v2;
  }
  *a2 = v4;
}
