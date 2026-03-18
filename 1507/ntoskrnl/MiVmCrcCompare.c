/*
 * XREFs of MiVmCrcCompare @ 0x1406A92BC
 * Callers:
 *     MiProcessCrcList @ 0x1406A8BBC (MiProcessCrcList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVmCrcCompare(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax

  v2 = *(_QWORD *)(a2 + 32);
  if ( a1 <= v2 )
    return (unsigned int)-(a1 < v2);
  else
    return 1LL;
}
