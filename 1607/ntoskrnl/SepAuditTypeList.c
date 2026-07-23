/*
 * XREFs of SepAuditTypeList @ 0x140691D8C
 * Callers:
 *     SepSetAuditInfoForObjectType @ 0x1406925AC (SepSetAuditInfoForObjectType.c)
 * Callees:
 *     <none>
 */

_UNKNOWN **__fastcall SepAuditTypeList(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4, _BYTE *a5, _BYTE *a6)
{
  _UNKNOWN **result; // rax
  __int64 v7; // r10
  bool v10; // di
  __int64 v11; // r9
  __int64 v12; // r10
  int *v13; // rdx
  _WORD *v14; // rcx
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  result = &retaddr;
  v7 = a4;
  v10 = *(_DWORD *)(a3 + 4LL * a4) >= 0;
  v11 = a4 + 1;
  if ( (unsigned int)v11 < a2 )
  {
    v12 = 6 * v7;
    v13 = (int *)(a3 + 4 * v11);
    v14 = (_WORD *)(48 * v11 + a1 + 2);
    do
    {
      result = (_UNKNOWN **)*(unsigned __int16 *)(a1 + 8 * v12);
      if ( *(v14 - 1) <= (unsigned __int16)result )
        break;
      if ( v10 )
      {
        if ( *v13 < 0 )
        {
          *a6 = 1;
          *v14 |= 2u;
        }
      }
      else if ( *v13 >= 0 )
      {
        *a5 = 1;
        *v14 |= 1u;
      }
      LODWORD(v11) = v11 + 1;
      ++v13;
      v14 += 24;
    }
    while ( (unsigned int)v11 < a2 );
  }
  return result;
}
