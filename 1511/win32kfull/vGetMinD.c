/*
 * XREFs of vGetMinD @ 0x1C0118274
 * Callers:
 *     ttfdOpenFontContextInternal @ 0x1C011A638 (ttfdOpenFontContextInternal.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall vGetMinD(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  __int16 v3; // r10
  unsigned __int16 v4; // r9
  _WORD *v5; // r8
  unsigned int v6; // r11d
  unsigned int i; // edx

  v1 = *(_QWORD *)(a1 + 64);
  v2 = *(unsigned int *)(a1 + 136);
  v3 = 0;
  v4 = -1;
  v5 = (_WORD *)(v1 + *(unsigned int *)(a1 + 144));
  v6 = (unsigned __int16)__ROR2__(*(_WORD *)(v2 + v1 + 34), 8);
  for ( i = 0; i < v6; v5 += 2 )
  {
    LOWORD(v2) = __ROR2__(*v5, 8);
    if ( (unsigned __int16)v2 < v4 && (_WORD)v2 )
    {
      v4 = v2;
      v3 = i;
    }
    ++i;
  }
  *(_WORD *)(a1 + 324) = v4;
  *(_WORD *)(a1 + 326) = v3;
  return v2;
}
