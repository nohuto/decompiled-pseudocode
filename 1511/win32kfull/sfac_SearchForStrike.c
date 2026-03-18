/*
 * XREFs of sfac_SearchForStrike @ 0x1C00A4B84
 * Callers:
 *     sbit_SearchForBitmap @ 0x1C00AD468 (sbit_SearchForBitmap.c)
 * Callees:
 *     FindBlocStrike @ 0x1C00A15CC (FindBlocStrike.c)
 *     InvokeReleaseSfntFrag @ 0x1C00A631C (InvokeReleaseSfntFrag.c)
 *     sfac_GetDataPtr @ 0x1C00A6330 (sfac_GetDataPtr.c)
 *     FindBscaStrike @ 0x1C02D9A40 (FindBscaStrike.c)
 */

__int64 __fastcall sfac_SearchForStrike(
        unsigned int *a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        __int16 a4,
        unsigned __int16 *a5,
        _WORD *a6,
        _WORD *a7,
        __int16 *a8,
        int *a9)
{
  unsigned int v10; // edi
  _WORD *v11; // rsi
  int *v12; // r14
  _WORD *v15; // rcx
  __int64 result; // rax
  __int64 v17; // rdi
  __int16 *v18; // rcx
  __int16 v19; // r9
  unsigned int v20; // [rsp+40h] [rbp-38h]
  unsigned int v21; // [rsp+80h] [rbp+8h]

  v10 = a1[43];
  v11 = a6;
  v12 = a9;
  v21 = a1[41];
  v20 = v10;
  *a6 = 1;
  v15 = a7;
  *v12 = 0;
  *v15 = 0;
  *a8 = 0;
  result = sfac_GetDataPtr((_DWORD)a1, 0, v21, 17, 0, (__int64)&a6);
  if ( !(_DWORD)result )
  {
    if ( !a6 )
      return 0LL;
    if ( (unsigned int)FindBlocStrike((__int64)a6, v21, a2, a3, a4, a5, v12) )
    {
      *v11 = 2;
LABEL_8:
      InvokeReleaseSfntFrag(a1[3]);
      return 0LL;
    }
    result = sfac_GetDataPtr((_DWORD)a1, 0, v10, 18, 0, (__int64)&a9);
    if ( !(_DWORD)result )
    {
      v17 = (__int64)a9;
      if ( a9 )
      {
        if ( (unsigned int)FindBscaStrike((_DWORD)a9, v20, a2, a3, (__int64)v12) )
        {
          v18 = a7;
          *a7 = *(unsigned __int8 *)((unsigned int)(*v12 + 26) + v17);
          v19 = *(unsigned __int8 *)((unsigned int)(*v12 + 27) + v17);
          *a8 = v19;
          if ( (unsigned int)FindBlocStrike((__int64)a6, v21, *v18, v19, a4, a5, v12) )
            *v11 = 3;
        }
        InvokeReleaseSfntFrag(a1[3]);
      }
      goto LABEL_8;
    }
  }
  return result;
}
