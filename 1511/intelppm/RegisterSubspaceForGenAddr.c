/*
 * XREFs of RegisterSubspaceForGenAddr @ 0x1C001D274
 * Callers:
 *     InitAcpiCpc @ 0x1C0012F2C (InitAcpiCpc.c)
 * Callees:
 *     RegisterSubspace @ 0x1C001D12C (RegisterSubspace.c)
 */

__int64 __fastcall RegisterSubspaceForGenAddr(__int64 a1, __int64 a2)
{
  int v2; // ebx
  int v4; // ecx
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(unsigned __int8 *)(a2 + 3);
  v4 = RegisterSubspace(a1, v2, &v6);
  if ( v4 >= 0 )
  {
    if ( *(_DWORD *)(v6 + 32) == v2 )
    {
      v4 = 0;
      if ( *(_QWORD *)(a2 + 4) > (__int64)*(unsigned int *)(v6 + 80) )
        return (unsigned int)-1073741811;
    }
    else
    {
      return (unsigned int)-1073741637;
    }
  }
  return (unsigned int)v4;
}
