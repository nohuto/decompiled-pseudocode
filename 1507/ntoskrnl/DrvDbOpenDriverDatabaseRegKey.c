/*
 * XREFs of DrvDbOpenDriverDatabaseRegKey @ 0x1405BAD40
 * Callers:
 *     DrvDbDispatchDriverDatabase @ 0x1404DD3CC (DrvDbDispatchDriverDatabase.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x140557CC8 (DrvDbGetDriverDatabaseMappedProperty.c)
 *     DrvDbGetDriverDatabaseMappedPropertyKeys @ 0x14071ADA0 (DrvDbGetDriverDatabaseMappedPropertyKeys.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x14071C048 (DrvDbSetDriverDatabaseMappedProperty.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     _wcsicmp @ 0x1401723FC (_wcsicmp.c)
 *     _SysCtxRegOpenKey @ 0x140435B90 (_SysCtxRegOpenKey.c)
 *     DrvDbLoadDatabaseNode @ 0x1404DDF80 (DrvDbLoadDatabaseNode.c)
 *     DrvDbUnloadDatabaseNode @ 0x1404DE1B0 (DrvDbUnloadDatabaseNode.c)
 *     DrvDbFindDatabaseNode @ 0x140553AE0 (DrvDbFindDatabaseNode.c)
 *     DrvDbCreateDatabaseNode @ 0x1405BB0F0 (DrvDbCreateDatabaseNode.c)
 *     DrvDbDestroyDatabaseNode @ 0x14071D040 (DrvDbDestroyDatabaseNode.c)
 */

__int64 __fastcall DrvDbOpenDriverDatabaseRegKey(
        __int64 **a1,
        const wchar_t *a2,
        ACCESS_MASK a3,
        char a4,
        HANDLE *a5,
        _DWORD *a6)
{
  char v10; // r14
  int DatabaseNode; // eax
  __int64 v12; // r8
  int v13; // edi
  struct _KTHREAD *CurrentThread; // rax
  const UNICODE_STRING *v15; // rbx
  __int64 v16; // rcx
  struct _KTHREAD *v17; // rcx
  __int16 v18; // ax
  const UNICODE_STRING *v20[2]; // [rsp+40h] [rbp-28h] BYREF

  v20[0] = 0LL;
  v10 = 0;
  if ( !wcsicmp(a2, L"*") )
  {
    v20[0] = (const UNICODE_STRING *)a1[4];
    goto LABEL_4;
  }
  DatabaseNode = DrvDbFindDatabaseNode((__int64)a1, a2, v20);
  v13 = DatabaseNode;
  if ( DatabaseNode == -1073741772 )
  {
    if ( a4 )
    {
      v13 = DrvDbCreateDatabaseNode(a1, a2, 0LL, 0LL, 16, 0LL, 0LL, v20);
      if ( v13 >= 0 )
      {
        v10 = 1;
        goto LABEL_4;
      }
    }
LABEL_24:
    v15 = v20[0];
    goto LABEL_12;
  }
  if ( DatabaseNode < 0 )
    goto LABEL_24;
LABEL_4:
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v15 = v20[0];
  ExAcquireResourceExclusiveLite((PERESOURCE)v20[0][8].Buffer, 1u);
  if ( ((__int64)v15[3].Buffer & 1) != 0 || (v13 = DrvDbLoadDatabaseNode(a1, (__int64)v15), v13 >= 0) )
  {
    v16 = 0LL;
    if ( *a1 )
      v16 = **a1;
    v13 = SysCtxRegOpenKey(v16, *(char **)&v15[5].Length, 0LL, 0, a3, a5);
    if ( ((__int64)v15[3].Buffer & 1) == 0 )
      DrvDbUnloadDatabaseNode((__int64)a1, (__int64)v15);
    if ( v13 >= 0 && a6 )
      *a6 = 2;
  }
LABEL_12:
  if ( v15 )
  {
    ExReleaseResourceLite((PERESOURCE)v15[8].Buffer);
    v17 = KeGetCurrentThread();
    v18 = v17->KernelApcDisable + 1;
    v17->KernelApcDisable = v18;
    if ( !v18
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v17->ApcState.ApcListHead[0].Flink != &v17->152
      && !v17->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    v15 = v20[0];
  }
  if ( v13 < 0 && v10 )
    DrvDbDestroyDatabaseNode(a1, v15, v12);
  return (unsigned int)v13;
}
