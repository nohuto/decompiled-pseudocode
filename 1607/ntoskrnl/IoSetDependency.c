/*
 * XREFs of IoSetDependency @ 0x14062AD48
 * Callers:
 *     <none>
 * Callees:
 *     PipProcessRebuildPowerRelationsQueue @ 0x1403F11B4 (PipProcessRebuildPowerRelationsQueue.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1403F3058 (PnpAcquireDependencyRelationsLock.c)
 *     PnpReleaseDependencyRelationsLock @ 0x1403F3088 (PnpReleaseDependencyRelationsLock.c)
 *     PipSetDependency @ 0x14062B648 (PipSetDependency.c)
 */

__int64 __fastcall IoSetDependency(__int64 a1, __int64 a2, int a3)
{
  int v4; // ebx
  __int64 v5; // rcx
  int v6; // [rsp+20h] [rbp-38h] BYREF
  __int64 v7; // [rsp+28h] [rbp-30h]
  int v8; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+38h] [rbp-20h]
  int v10; // [rsp+40h] [rbp-18h]

  if ( a1 && a2 && (a3 & 3) != 0 && (a3 & 0xFFFFFFFC) == 0 )
  {
    if ( a1 == a2 )
      return 3221225473LL;
    v6 = 0;
    v8 = 0;
    v7 = a1;
    v9 = a2;
    v10 = a3;
    PnpAcquireDependencyRelationsLock(1);
    v4 = PipSetDependency(&v6, &v8);
    PnpReleaseDependencyRelationsLock();
    if ( v4 >= 0 )
      PipProcessRebuildPowerRelationsQueue(v5);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v4;
}
