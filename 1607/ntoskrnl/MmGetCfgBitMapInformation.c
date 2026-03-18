/*
 * XREFs of MmGetCfgBitMapInformation @ 0x14051A9C0
 * Callers:
 *     PspPrepareSystemDllInitBlock @ 0x14051A834 (PspPrepareSystemDllInitBlock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetCfgBitMapInformation(int a1, _QWORD *a2)
{
  __int64 v2; // r8

  if ( a1 )
  {
    v2 = *(_QWORD *)(qword_140327F90 + 276840688);
    *a2 = *(_QWORD *)(qword_140327F90 + 276840696);
  }
  else
  {
    v2 = *(_QWORD *)(qword_140327F90 + 276840664);
    *a2 = *(_QWORD *)(qword_140327F90 + 276840672);
  }
  return v2;
}
