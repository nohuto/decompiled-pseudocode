/*
 * XREFs of Register_GetExtendedCapabilityTotalSize @ 0x1C000A0D4
 * Callers:
 *     Wmi_CreateControllerCapabilities @ 0x1C0007140 (Wmi_CreateControllerCapabilities.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Register_GetExtendedCapabilityTotalSize(__int64 a1)
{
  int *v1; // r8
  unsigned int v2; // edx
  int v3; // eax
  int v4; // edx

  v1 = *(int **)(a1 + 56);
  v2 = 0;
  if ( v1 )
  {
    while ( 1 )
    {
      v3 = *v1;
      if ( (*v1 & 0xFF00) == 0 )
        break;
      v1 += BYTE1(v3);
      if ( (unsigned __int64)v1 >= *(_QWORD *)(a1 + 24) + (unsigned __int64)*(unsigned int *)(a1 + 20) )
        return v2;
    }
    v4 = (_DWORD)v1 - *(_DWORD *)(a1 + 56);
    if ( (unsigned __int8)v3 == 1 )
    {
      return (unsigned int)(v4 + 8);
    }
    else if ( (unsigned __int8)v3 == 2 )
    {
      return v4 + 4 * ((unsigned int)v1[2] >> 28) + 16;
    }
    else
    {
      return (unsigned int)(v4 + 4);
    }
  }
  return v2;
}
