/*
 * XREFs of While @ 0x1C0005C80
 * Callers:
 *     <none>
 * Callees:
 *     PushScope @ 0x1C0005DD0 (PushScope.c)
 *     ValidateArgTypes @ 0x1C0011BC0 (ValidateArgTypes.c)
 */

__int64 __fastcall While(__int64 *a1, _QWORD *a2)
{
  unsigned int v4; // edx

  v4 = ValidateArgTypes(a2[10], 0LL, "I");
  if ( !v4 )
  {
    if ( *(_QWORD *)(a2[10] + 16LL) )
    {
      v4 = PushScope((_DWORD)a1, a1[15], a2[5], a2[4], a1[10], a1[11], a1[40], a2[11]);
      if ( !v4 )
        *(_DWORD *)(a1[52] + 16) |= 0x20000u;
    }
    else
    {
      a1[15] = a2[5];
    }
  }
  return v4;
}
