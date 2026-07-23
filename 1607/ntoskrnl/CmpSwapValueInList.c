/*
 * XREFs of CmpSwapValueInList @ 0x1400B2914
 * Callers:
 *     CmSetValueKey @ 0x140402670 (CmSetValueKey.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x14053B5C0 (CmpLightWeightPrepareSetValueKeyUoW.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpSwapValueInList(__int64 a1, int a2, unsigned int a3, __int64 a4)
{
  __int64 v5; // rdx
  unsigned int v6; // ebx
  __int64 v7; // rsi
  __int64 v9; // rax
  int v11; // [rsp+30h] [rbp+8h] BYREF
  int v12; // [rsp+34h] [rbp+Ch]

  v11 = -1;
  v5 = *(unsigned int *)(a4 + 4);
  v6 = 0;
  v7 = a3;
  v12 = 0;
  v9 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(a1 + 8))(a1, v5, &v11);
  if ( v9 )
  {
    *(_DWORD *)(v9 + 4 * v7) = a2;
    (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v11);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v6;
}
