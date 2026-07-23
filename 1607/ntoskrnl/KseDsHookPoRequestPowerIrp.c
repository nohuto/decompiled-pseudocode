/*
 * XREFs of KseDsHookPoRequestPowerIrp @ 0x1401DD2F4
 * Callers:
 *     <none>
 * Callees:
 *     KsepDsEventRequestPowerIrp @ 0x1401DDE48 (KsepDsEventRequestPowerIrp.c)
 */

__int64 __fastcall KseDsHookPoRequestPowerIrp(__int64 a1, __int64 a2, char a3, __int64 a4, __int64 a5, _QWORD *a6)
{
  int v6; // ebx
  unsigned int v8; // esi
  __int64 v10; // [rsp+40h] [rbp+8h]

  v6 = (unsigned __int8)a2;
  v8 = qword_1402F4808(a1, a2);
  KsepDsEventRequestPowerIrp(*(_QWORD *)(a1 + 8), a1, v10, v6, a3, v8);
  if ( a6 )
    *a6 = v10;
  return v8;
}
