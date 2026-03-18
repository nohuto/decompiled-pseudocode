/*
 * XREFs of DrvDbAcquireDatabaseNodeBaseKey @ 0x1404DDCF8
 * Callers:
 *     DrvDbOpenObjectRegKey @ 0x1404DDA8C (DrvDbOpenObjectRegKey.c)
 *     DrvDbDeleteObjectRegKey @ 0x14071A6EC (DrvDbDeleteObjectRegKey.c)
 *     DrvDbGetObjectList @ 0x14071B464 (DrvDbGetObjectList.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     _SysCtxRegOpenKey @ 0x140435B90 (_SysCtxRegOpenKey.c)
 *     _PnpCtxRegCreateKey @ 0x1404DDA14 (_PnpCtxRegCreateKey.c)
 *     DrvDbLoadDatabaseNode @ 0x1404DDF80 (DrvDbLoadDatabaseNode.c)
 *     _PnpCtxRegCreateTree @ 0x1404DE538 (_PnpCtxRegCreateTree.c)
 */

__int64 __fastcall DrvDbAcquireDatabaseNodeBaseKey(__int64 **a1, __int64 a2, int a3, HANDLE *a4)
{
  __int64 v4; // rbp
  struct _KTHREAD *CurrentThread; // rax
  int DatabaseNode; // ebx
  int v10; // eax
  HANDLE *v11; // r14
  struct _KTHREAD *v12; // rcx
  __int16 v13; // ax
  char *v15; // rdx
  int Tree; // eax
  __int64 v17; // r9
  char *v18; // rdx
  int Key; // eax
  __int64 v20; // rcx
  __int64 v21; // rcx

  v4 = a3;
  *a4 = 0LL;
  CurrentThread = KeGetCurrentThread();
  DatabaseNode = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a2 + 136), 1u);
  v10 = *(_DWORD *)(a2 + 56);
  if ( (v10 & 4) != 0 )
  {
    DatabaseNode = -1073740697;
  }
  else if ( (v10 & 2) != 0 )
  {
    v11 = (HANDLE *)(a2 + 88 + 8 * v4);
    if ( *v11 )
      goto LABEL_4;
    DatabaseNode = DrvDbLoadDatabaseNode(a1, a2);
    if ( DatabaseNode >= 0 )
    {
      v18 = *(char **)(a2 + 80);
      if ( (_DWORD)v4 )
      {
        Key = PnpCtxRegCreateKey(
                (__int64)*a1,
                (__int64)v18,
                qword_140295240[v4],
                v17,
                0x2000000u,
                0LL,
                a2 + 88 + 8 * v4,
                0LL);
      }
      else
      {
        v20 = 0LL;
        if ( *a1 )
          v20 = **a1;
        Key = SysCtxRegOpenKey(v20, v18, 0LL, 0, 0x2000000u, (HANDLE *)(a2 + 88));
      }
      DatabaseNode = Key;
      if ( Key >= 0 )
LABEL_4:
        *a4 = *v11;
    }
  }
  else
  {
    DatabaseNode = DrvDbLoadDatabaseNode(a1, a2);
    if ( DatabaseNode >= 0 )
    {
      v15 = *(char **)(a2 + 80);
      if ( (_DWORD)v4 )
      {
        Tree = PnpCtxRegCreateTree(
                 (unsigned int)*a1,
                 (_DWORD)v15,
                 qword_140295240[v4],
                 0,
                 0x2000000,
                 0LL,
                 (__int64)a4,
                 0LL);
      }
      else
      {
        v21 = 0LL;
        if ( *a1 )
          v21 = **a1;
        Tree = SysCtxRegOpenKey(v21, v15, 0LL, 0, 0x2000000u, a4);
      }
      DatabaseNode = Tree;
    }
  }
  ExReleaseResourceLite(*(PERESOURCE *)(a2 + 136));
  v12 = KeGetCurrentThread();
  v13 = v12->KernelApcDisable + 1;
  v12->KernelApcDisable = v13;
  if ( !v13
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v12->ApcState.ApcListHead[0].Flink != &v12->152
    && !v12->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( DatabaseNode == -1073741275 || DatabaseNode == -1073741772 )
    return (unsigned int)-1073740947;
  return (unsigned int)DatabaseNode;
}
