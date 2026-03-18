/*
 * XREFs of DrvDbOpenDriverDatabaseRegKey @ 0x140549920
 * Callers:
 *     DrvDbDispatchDriverDatabase @ 0x140443694 (DrvDbDispatchDriverDatabase.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x1405422FC (DrvDbGetDriverDatabaseMappedProperty.c)
 *     DrvDbGetDriverDatabaseMappedPropertyKeys @ 0x14069ADE0 (DrvDbGetDriverDatabaseMappedPropertyKeys.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x14069BA8C (DrvDbSetDriverDatabaseMappedProperty.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     _wcsicmp @ 0x14014437C (_wcsicmp.c)
 *     _SysCtxRegOpenKey @ 0x14043BE70 (_SysCtxRegOpenKey.c)
 *     DrvDbLoadDatabaseNode @ 0x14044473C (DrvDbLoadDatabaseNode.c)
 *     DrvDbUnloadDatabaseNode @ 0x14044496C (DrvDbUnloadDatabaseNode.c)
 *     DrvDbFindDatabaseNode @ 0x140447070 (DrvDbFindDatabaseNode.c)
 *     DrvDbCreateDatabaseNode @ 0x140524640 (DrvDbCreateDatabaseNode.c)
 *     DrvDbDestroyDatabaseNode @ 0x14069C9E4 (DrvDbDestroyDatabaseNode.c)
 */

__int64 __fastcall DrvDbOpenDriverDatabaseRegKey(
        __int64 **a1,
        const wchar_t *a2,
        unsigned int a3,
        char a4,
        __int64 a5,
        _DWORD *a6)
{
  char v10; // bp
  int DatabaseNode; // eax
  __int64 v12; // r8
  int v13; // edi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int16 *v15; // rbx
  __int64 v16; // rcx
  unsigned __int16 *v18[2]; // [rsp+40h] [rbp-28h] BYREF

  v18[0] = 0LL;
  v10 = 0;
  if ( !wcsicmp(a2, L"*") )
  {
    v18[0] = (unsigned __int16 *)a1[4];
    goto LABEL_4;
  }
  DatabaseNode = DrvDbFindDatabaseNode((__int64)a1, a2, (const UNICODE_STRING **)v18);
  v13 = DatabaseNode;
  if ( DatabaseNode == -1073741772 )
  {
    if ( a4 )
    {
      v13 = DrvDbCreateDatabaseNode((__int64)a1, a2, 0, 0LL, 16, 0LL, 0LL, v18);
      if ( v13 >= 0 )
      {
        v10 = 1;
        goto LABEL_4;
      }
    }
LABEL_23:
    v15 = v18[0];
    goto LABEL_12;
  }
  if ( DatabaseNode < 0 )
    goto LABEL_23;
LABEL_4:
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v15 = v18[0];
  ExAcquireResourceExclusiveLite(*((PERESOURCE *)v18[0] + 17), 1u);
  if ( (*((_DWORD *)v15 + 14) & 1) != 0 || (v13 = DrvDbLoadDatabaseNode(a1, (__int64)v15), v13 >= 0) )
  {
    if ( *a1 )
      v16 = **a1;
    else
      v16 = 0LL;
    v13 = SysCtxRegOpenKey(v16, *((_QWORD *)v15 + 10), 0LL, 0, a3, a5);
    if ( (*((_DWORD *)v15 + 14) & 1) == 0 )
      DrvDbUnloadDatabaseNode((__int64)a1, (__int64)v15);
    if ( v13 >= 0 && a6 )
      *a6 = 2;
  }
LABEL_12:
  if ( v15 )
  {
    ExReleaseResourceLite(*((PERESOURCE *)v15 + 17));
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v15 = v18[0];
  }
  if ( v13 < 0 && v10 )
    DrvDbDestroyDatabaseNode(a1, v15, v12);
  return (unsigned int)v13;
}
