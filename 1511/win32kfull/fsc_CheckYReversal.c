/*
 * XREFs of fsc_CheckYReversal @ 0x1C00A9C48
 * Callers:
 *     fsc_CheckYReversalInSpline @ 0x1C00A9AB8 (fsc_CheckYReversalInSpline.c)
 * Callees:
 *     fsc_AddYReversal @ 0x1C00A9D2C (fsc_AddYReversal.c)
 */

__int64 __fastcall fsc_CheckYReversal(__int64 a1, __int64 a2, int a3, _WORD *a4, _WORD *a5, _WORD *a6)
{
  __int64 result; // rax

  if ( !*a4 )
  {
    if ( a3 <= (int)a2 )
    {
      if ( a3 >= (int)a2 )
      {
        ++*a6;
      }
      else
      {
        *a4 = -1;
        *a5 = -1;
      }
    }
    else
    {
      *a4 = 1;
      *a5 = 1;
    }
    return 0LL;
  }
  if ( *a4 == 1 )
  {
    if ( a3 > (int)a2 )
      return 0LL;
    result = fsc_AddYReversal(a1, a2, 1LL);
    if ( !(_DWORD)result )
    {
      *a4 = -1;
      return 0LL;
    }
  }
  else
  {
    if ( a3 < (int)a2 )
      return 0LL;
    result = fsc_AddYReversal(a1, a2, 0xFFFFFFFFLL);
    if ( !(_DWORD)result )
    {
      *a4 = 1;
      return 0LL;
    }
  }
  return result;
}
