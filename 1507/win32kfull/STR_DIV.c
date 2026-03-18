/*
 * XREFs of STR_DIV @ 0x1C00374D0
 * Callers:
 *     ?vInitStrDDAClip@@YAXPEAU_RECTL@@0000@Z @ 0x1C0036FE4 (-vInitStrDDAClip@@YAXPEAU_RECTL@@0000@Z.c)
 *     ?vInitStrDDA@@YAXPEAU_STRDDA@@PEAU_RECTL@@11@Z @ 0x1C00372DC (-vInitStrDDA@@YAXPEAU_STRDDA@@PEAU_RECTL@@11@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall STR_DIV(_DWORD *a1, int a2, int a3)
{
  int v3; // edx
  __int64 result; // rax
  int v6; // edx
  int v7; // kr08_4

  if ( a2 < 0 )
  {
    v7 = -1 - a2;
    v6 = (-1 - a2) >> 31;
    result = (unsigned int)(__SPAIR64__(v6, v7) / a3);
    *a1 = -1 - result;
    a1[1] = a3 - __SPAIR64__(v6, v7) % a3 - 1;
  }
  else
  {
    v3 = a2 >> 31;
    result = (unsigned int)(__SPAIR64__(v3, a2) / a3);
    *a1 = result;
    a1[1] = __SPAIR64__(v3, a2) % a3;
  }
  return result;
}
