/*
 * XREFs of DrvDbAcquireDatabaseNodeBaseKey @ 0x1404DED30
 * Callers:
 *     DrvDbOpenObjectRegKey @ 0x1404DEEA4 (DrvDbOpenObjectRegKey.c)
 *     DrvDbDeleteObjectRegKey @ 0x1406E0C24 (DrvDbDeleteObjectRegKey.c)
 *     DrvDbGetObjectList @ 0x1406E1A28 (DrvDbGetObjectList.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     DrvDbLoadDatabaseNode @ 0x1404DD3F0 (DrvDbLoadDatabaseNode.c)
 *     _PnpCtxRegCreateTree @ 0x1404DD744 (_PnpCtxRegCreateTree.c)
 *     _SysCtxRegOpenKey @ 0x1404E0B1C (_SysCtxRegOpenKey.c)
 *     _PnpCtxRegCreateKey @ 0x140512D88 (_PnpCtxRegCreateKey.c)
 */

__int64 __fastcall DrvDbAcquireDatabaseNodeBaseKey(__int64 **a1, __int64 a2, int a3, _QWORD *a4)
{
  __int64 v4; // rdi
  __int64 v5; // rbp
  struct _KTHREAD *CurrentThread; // rax
  int DatabaseNode; // ebx
  int v11; // eax
  _QWORD *v12; // r15
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  int Tree; // eax
  int v18; // r9d
  __int64 v19; // rdx
  int Key; // eax
  __int64 v21; // rcx

  LODWORD(v4) = 0;
  v5 = a3;
  *a4 = 0LL;
  CurrentThread = KeGetCurrentThread();
  DatabaseNode = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a2 + 136), 1u);
  v11 = *(_DWORD *)(a2 + 56);
  if ( (v11 & 4) != 0 )
  {
    DatabaseNode = -1073740697;
  }
  else if ( (v11 & 2) != 0 )
  {
    v12 = (_QWORD *)(a2 + 88 + 8 * v5);
    if ( *v12 )
      goto LABEL_4;
    DatabaseNode = DrvDbLoadDatabaseNode(a1, a2);
    if ( DatabaseNode >= 0 )
    {
      v19 = *(_QWORD *)(a2 + 80);
      if ( (_DWORD)v5 )
      {
        Key = PnpCtxRegCreateKey(
                (unsigned int)*a1,
                v19,
                qword_14025B430[v5],
                v18,
                0x2000000,
                0LL,
                a2 + 88 + 8 * v5,
                0LL);
      }
      else
      {
        LODWORD(v21) = 0;
        if ( *a1 )
          v21 = **a1;
        Key = SysCtxRegOpenKey(v21, v19, 0, 0, 0x2000000, a2 + 88);
      }
      DatabaseNode = Key;
      if ( Key >= 0 )
LABEL_4:
        *a4 = *v12;
    }
  }
  else
  {
    DatabaseNode = DrvDbLoadDatabaseNode(a1, a2);
    if ( DatabaseNode >= 0 )
    {
      if ( (_DWORD)v5 )
      {
        Tree = PnpCtxRegCreateTree(*a1);
      }
      else
      {
        if ( *a1 )
          v4 = **a1;
        Tree = SysCtxRegOpenKey(v4, *(_QWORD *)(a2 + 80), 0, 0, 0x2000000, (__int64)a4);
      }
      DatabaseNode = Tree;
    }
  }
  ExReleaseResourceLite(*(PERESOURCE *)(a2 + 136));
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v13, v14, v15);
  if ( DatabaseNode == -1073741275 || DatabaseNode == -1073741772 )
    return (unsigned int)-1073740947;
  return (unsigned int)DatabaseNode;
}
