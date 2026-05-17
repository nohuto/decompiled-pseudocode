/*
 * XREFs of LdrpPinNodeRecurse @ 0x180005294
 * Callers:
 *     LdrpPinNodeRecurse @ 0x180005294 (LdrpPinNodeRecurse.c)
 *     LdrpPinModule @ 0x18000813C (LdrpPinModule.c)
 * Callees:
 *     LdrpPinNodeRecurse @ 0x180005294 (LdrpPinNodeRecurse.c)
 */

void __fastcall LdrpPinNodeRecurse(__int64 *a1)
{
  __int64 v1; // rax
  _QWORD *v2; // rdi
  _QWORD *v3; // rbx

  if ( *((_DWORD *)a1 + 6) != -1 )
  {
    v1 = *a1;
    if ( (*(_BYTE *)(*a1 - 56) & 0x20) == 0 )
    {
      *((_DWORD *)a1 + 6) = -1;
      *(_WORD *)(v1 - 52) = -1;
      v2 = (_QWORD *)a1[5];
      if ( v2 )
      {
        v3 = (_QWORD *)a1[5];
        do
        {
          v3 = (_QWORD *)*v3;
          LdrpPinNodeRecurse(v3[1]);
        }
        while ( v3 != v2 );
      }
    }
  }
}
