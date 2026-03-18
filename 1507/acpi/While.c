/*
 * XREFs of While @ 0x1C0017E80
 * Callers:
 *     <none>
 * Callees:
 *     ValidateArgTypes @ 0x1C0013180 (ValidateArgTypes.c)
 *     PushScope @ 0x1C00156E0 (PushScope.c)
 */

__int64 __fastcall While(_QWORD *a1, __int64 *a2)
{
  unsigned int v4; // edx

  v4 = ValidateArgTypes(a2[10], 0, (__int64)"I");
  if ( !v4 )
  {
    if ( *(_QWORD *)(a2[10] + 16) )
    {
      v4 = PushScope(a1, a1[15], a2[5], a2[4], a1[10], a1[11], a1[40], a2[11]);
      if ( !v4 )
        *(_DWORD *)(a1[52] + 16LL) |= 0x20000u;
    }
    else
    {
      a1[15] = a2[5];
    }
  }
  return v4;
}
