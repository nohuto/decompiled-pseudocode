/*
 * XREFs of MiHashIsCommon @ 0x1401F9C40
 * Callers:
 *     MiCombineWorkingSet @ 0x1401F7EFC (MiCombineWorkingSet.c)
 *     MiSharePages @ 0x1401FA710 (MiSharePages.c)
 *     MiCombineAllPhysicalMemory @ 0x1406637FC (MiCombineAllPhysicalMemory.c)
 *     MiProcessCrcList @ 0x140663EAC (MiProcessCrcList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiHashIsCommon(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r8
  unsigned int v3; // eax
  unsigned int v6; // edx

  v2 = *(_QWORD **)(a1 + 48);
  v3 = 0;
  if ( !v2 )
    return 1LL;
  v6 = *(_DWORD *)(a1 + 56);
  if ( v6 )
  {
    while ( a2 != *v2 )
    {
      ++v3;
      ++v2;
      if ( v3 >= v6 )
        return 0LL;
    }
    return 1LL;
  }
  return 0LL;
}
