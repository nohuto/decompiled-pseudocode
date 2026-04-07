/*
 * XREFs of ?AddApproximateAtlasSize@CAtlasButton@@MEAAXPEAI@Z @ 0x180018FE0
 * Callers:
 *     ?Validate@CAtlasedImage@@QEAAJXZ @ 0x18002B7A0 (-Validate@CAtlasedImage@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CAtlasButton::AddApproximateAtlasSize(CAtlasButton *this, unsigned int *a2)
{
  _DWORD *v2; // r8
  int v3; // eax
  _DWORD *v4; // r11
  _DWORD *v5; // rcx

  v2 = (_DWORD *)*((_QWORD *)this + 9);
  v3 = 1;
  if ( v2 )
    *a2 += ((v2[9] > 0) + (v2[8] > 0) + 1) * ((v2[10] > 0) + (v2[11] > 0) + 1);
  v4 = (_DWORD *)*((_QWORD *)this + 17);
  if ( v4 )
    *a2 += ((v4[9] > 0) + (v4[8] > 0) + 1) * ((v4[10] > 0) + (v4[11] > 0) + 1);
  v5 = (_DWORD *)*((_QWORD *)this + 18);
  if ( v5 )
  {
    if ( (int)v5[11] <= 0 )
      v3 = 0;
    *a2 += ((v5[9] > 0) + (v5[8] > 0) + 1) * (v3 + (v5[10] > 0) + 1);
  }
}
