/*
 * XREFs of KiGetComparisonRanks @ 0x1400AA4A4
 * Callers:
 *     KiDirectSwitchThread @ 0x1400527F0 (KiDirectSwitchThread.c)
 *     KiEvaluateGroupSchedulingPreemption @ 0x1400CDE50 (KiEvaluateGroupSchedulingPreemption.c)
 * Callees:
 *     <none>
 */

void __fastcall KiGetComparisonRanks(__int64 a1, __int64 a2, unsigned int *a3, unsigned int *a4)
{
  unsigned int v6; // eax
  unsigned __int8 v7; // di
  char v8; // r9
  unsigned __int8 v9; // bl
  unsigned int v10; // r8d
  __int64 v11; // rax
  __int64 v12; // rbx

  if ( a1 == a2 )
  {
    v6 = *(_DWORD *)(a1 + 116);
    *a3 = v6;
    *a4 = v6;
    return;
  }
  v7 = *(_BYTE *)(a1 + 113);
  v8 = 0;
  v9 = *(_BYTE *)(a2 + 113);
  v10 = 0;
  if ( v7 > v9 )
  {
    v8 = 1;
    do
    {
      if ( *(_DWORD *)(a1 + 116) > v10 )
        v10 = *(_DWORD *)(a1 + 116);
      a1 = *(_QWORD *)(a1 + 408);
    }
    while ( *(_BYTE *)(a1 + 113) > v9 );
  }
  else if ( v7 < v9 )
  {
    v8 = -1;
    do
    {
      if ( *(_DWORD *)(a2 + 116) > v10 )
        v10 = *(_DWORD *)(a2 + 116);
      a2 = *(_QWORD *)(a2 + 408);
    }
    while ( v7 < *(_BYTE *)(a2 + 113) );
  }
  if ( a1 != a2 )
  {
    v11 = *(_QWORD *)(a1 + 408);
    v8 = 0;
    v12 = *(_QWORD *)(a2 + 408);
    if ( v11 == v12 )
    {
LABEL_11:
      *a3 = *(_DWORD *)(a1 + 116);
      *a4 = *(_DWORD *)(a2 + 116);
      return;
    }
    do
    {
      a1 = v11;
      a2 = v12;
      v11 = *(_QWORD *)(v11 + 408);
      v12 = *(_QWORD *)(v12 + 408);
    }
    while ( v11 != v12 );
  }
  if ( !v8 )
    goto LABEL_11;
  if ( v8 <= 0 )
  {
    *a3 = 0;
    *a4 = v10;
  }
  else
  {
    *a4 = 0;
    *a3 = v10;
  }
}
