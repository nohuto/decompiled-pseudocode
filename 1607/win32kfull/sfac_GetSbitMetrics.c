/*
 * XREFs of sfac_GetSbitMetrics @ 0x1C001E778
 * Callers:
 *     GetSbitComponent @ 0x1C000BEA4 (GetSbitComponent.c)
 *     sbit_GetDevAdvanceHeight @ 0x1C001CAB8 (sbit_GetDevAdvanceHeight.c)
 *     GetSbitMetrics @ 0x1C001CBBC (GetSbitMetrics.c)
 *     sbit_GetDevAdvanceWidth @ 0x1C001D030 (sbit_GetDevAdvanceWidth.c)
 *     sbit_CalcDevHorMetrics @ 0x1C014782C (sbit_CalcDevHorMetrics.c)
 * Callees:
 *     InvokeReleaseSfntFrag @ 0x1C001EDA8 (InvokeReleaseSfntFrag.c)
 *     sfac_GetDataPtr @ 0x1C001EDBC (sfac_GetDataPtr.c)
 */

__int64 __fastcall sfac_GetSbitMetrics(
        __int64 a1,
        __int16 a2,
        __int16 a3,
        int a4,
        _WORD *a5,
        _WORD *a6,
        _WORD *a7,
        _WORD *a8,
        _WORD *a9,
        _WORD *a10,
        _WORD *a11,
        _WORD *a12,
        _DWORD *a13,
        _DWORD *a14)
{
  _DWORD *v14; // rdi
  _DWORD *v15; // rsi
  bool v18; // zf
  int v19; // r8d
  __int64 result; // rax
  _DWORD *v21; // rdx
  __int16 v22; // cx
  __int16 v23; // cx
  _WORD *v24; // rax

  v14 = a13;
  v15 = a14;
  *a13 = 0;
  *v15 = 0;
  v18 = a3 == 2;
  v19 = 5;
  if ( a2 == 3 )
    v19 = 8;
  result = sfac_GetDataPtr(a1, a4, v19, (unsigned int)!v18 + 16, 1, (__int64)&a13);
  if ( !(_DWORD)result )
  {
    v21 = a13;
    *a5 = *(unsigned __int8 *)a13;
    *a6 = *((unsigned __int8 *)v21 + 1);
    v22 = *((char *)v21 + 2);
    if ( a2 == 3 )
    {
      *v14 = 1;
      *a7 = v22;
      *a8 = *((char *)v21 + 3);
      *a11 = *((unsigned __int8 *)v21 + 4);
      *a9 = *((char *)v21 + 5);
      *a10 = *((char *)v21 + 6);
      v23 = *((unsigned __int8 *)v21 + 7);
    }
    else
    {
      if ( a2 == 1 )
      {
        *v14 = 1;
        *a7 = v22;
        *a8 = *((char *)v21 + 3);
        v23 = *((unsigned __int8 *)v21 + 4);
        v24 = a11;
LABEL_7:
        *v24 = v23;
        InvokeReleaseSfntFrag(*(unsigned int *)(a1 + 12));
        return 0LL;
      }
      *a9 = v22;
      *a10 = *((char *)v21 + 3);
      v23 = *((unsigned __int8 *)v21 + 4);
    }
    v24 = a12;
    *v15 = 1;
    goto LABEL_7;
  }
  return result;
}
