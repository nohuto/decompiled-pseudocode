/*
 * XREFs of RIMABRessurectPenDevice @ 0x1C00D26C8
 * Callers:
 *     RIMABRemoveBoostSource @ 0x1C00D2664 (RIMABRemoveBoostSource.c)
 * Callees:
 *     RIMABArbitratePrimaryStatus @ 0x1C00D2118 (RIMABArbitratePrimaryStatus.c)
 */

__int64 __fastcall RIMABRessurectPenDevice(__int64 a1)
{
  _QWORD *v1; // rdi
  _QWORD *v3; // rbx
  __int64 *v4; // rax
  __int64 v5; // rdx
  __int64 result; // rax

  v1 = (_QWORD *)(a1 + 536);
  v3 = *(_QWORD **)(a1 + 536);
  while ( v3 != v1 )
  {
    v4 = v3 - 1;
    v3 = (_QWORD *)*v3;
    v5 = *v4;
    result = (unsigned int)(*(_DWORD *)(*v4 + 24) - 6);
    if ( (unsigned int)result <= 1 )
    {
      *(_DWORD *)(*(_QWORD *)(v5 + 680) + 2392LL) |= 0x100u;
      result = RIMABArbitratePrimaryStatus(a1, v5, 0);
    }
  }
  return result;
}
