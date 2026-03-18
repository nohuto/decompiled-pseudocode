/*
 * XREFs of Register_FindNextExtendedCapability @ 0x1C0006608
 * Callers:
 *     RootHub_PrepareHardware @ 0x1C0049820 (RootHub_PrepareHardware.c)
 * Callees:
 *     <none>
 */

int *__fastcall Register_FindNextExtendedCapability(__int64 a1, int *a2)
{
  int v2; // eax

  if ( a2 )
  {
    v2 = *a2;
    while ( (v2 & 0xFF00) != 0 )
    {
      a2 += BYTE1(v2);
      if ( (unsigned __int64)a2 >= *(_QWORD *)(a1 + 24) + (unsigned __int64)*(unsigned int *)(a1 + 20) )
        break;
      v2 = *a2;
      if ( (unsigned __int8)*a2 == 2 )
        return a2;
    }
    return 0LL;
  }
  return a2;
}
