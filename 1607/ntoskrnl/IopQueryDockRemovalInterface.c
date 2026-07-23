/*
 * XREFs of IopQueryDockRemovalInterface @ 0x14064A004
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x140484DD0 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     IopSynchronousCall @ 0x1404E8B2C (IopSynchronousCall.c)
 */

__int64 __fastcall IopQueryDockRemovalInterface(struct _DEVICE_OBJECT *a1, _QWORD *a2)
{
  _DWORD *PoolWithTag; // rax
  _DWORD *v5; // rbx
  __int64 v7; // r9
  int v8; // edi
  _QWORD v9[9]; // [rsp+30h] [rbp-78h] BYREF
  GUID v10; // [rsp+78h] [rbp-30h] BYREF

  v10 = GUID_DOCK_INTERFACE;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x20207050u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x30uLL);
  *v5 = 48;
  memset(v9, 0, sizeof(v9));
  LOWORD(v9[0]) = 2075;
  v9[1] = &v10;
  LODWORD(v9[2]) = 48;
  v9[3] = v5;
  v9[4] = 0LL;
  v8 = IopSynchronousCall(a1, (__int64)v9, -1073741637, v7, 0LL);
  if ( v8 < 0 )
    ExFreePoolWithTag(v5, 0);
  else
    *a2 = v5;
  return (unsigned int)v8;
}
