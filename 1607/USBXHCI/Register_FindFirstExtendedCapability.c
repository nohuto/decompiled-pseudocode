/*
 * XREFs of Register_FindFirstExtendedCapability @ 0x1C0008C60
 * Callers:
 *     RootHub_PrepareHardware @ 0x1C004CCE0 (RootHub_PrepareHardware.c)
 *     Register_ParseCapabilityRegister @ 0x1C004D050 (Register_ParseCapabilityRegister.c)
 * Callees:
 *     <none>
 */

int *__fastcall Register_FindFirstExtendedCapability(__int64 a1, unsigned __int8 a2)
{
  int *v2; // r8
  int v3; // eax

  v2 = *(int **)(a1 + 56);
  if ( v2 )
  {
    v3 = *v2;
    if ( (unsigned __int8)*v2 != a2 )
    {
      while ( (v3 & 0xFF00) != 0 )
      {
        v2 += BYTE1(v3);
        if ( (unsigned __int64)v2 >= *(_QWORD *)(a1 + 24) + (unsigned __int64)*(unsigned int *)(a1 + 20) )
          break;
        v3 = *v2;
        if ( (unsigned __int8)*v2 == a2 )
          return v2;
      }
      return 0LL;
    }
  }
  return v2;
}
