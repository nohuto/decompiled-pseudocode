/*
 * XREFs of DrvDbGetDeviceIdMappedPropertyKeys @ 0x14069AD0C
 * Callers:
 *     DrvDbDispatchDeviceId @ 0x1404C6A64 (DrvDbDispatchDeviceId.c)
 * Callees:
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     DrvDbOpenObjectRegKey @ 0x1404442A0 (DrvDbOpenObjectRegKey.c)
 *     _PnpCtxRegQueryInfoKey @ 0x1404C7040 (_PnpCtxRegQueryInfoKey.c)
 *     DrvDbGetCompositeMappedPropertyKeys @ 0x14069AC94 (DrvDbGetCompositeMappedPropertyKeys.c)
 */

__int64 __fastcall DrvDbGetDeviceIdMappedPropertyKeys(
        __int64 **a1,
        __int64 a2,
        void *a3,
        __int64 a4,
        unsigned int a5,
        unsigned int *a6)
{
  unsigned int *v6; // rdi
  HANDLE v8; // rax
  int CompositeMappedPropertyKeys; // ebx
  __int64 v10; // rcx
  int v12; // [rsp+20h] [rbp-38h]
  char v13; // [rsp+28h] [rbp-30h]
  HANDLE Handle[3]; // [rsp+40h] [rbp-18h] BYREF
  int v15; // [rsp+70h] [rbp+18h] BYREF

  v6 = a6;
  Handle[0] = 0LL;
  v8 = a3;
  v15 = 0;
  *a6 = 0;
  if ( !a3 )
  {
    v13 = 0;
    v12 = 1;
    CompositeMappedPropertyKeys = DrvDbOpenObjectRegKey(a1, 0LL, 5u, a2, v12, v13, Handle, 0LL);
    if ( CompositeMappedPropertyKeys < 0 )
      goto LABEL_7;
    v8 = Handle[0];
  }
  CompositeMappedPropertyKeys = PnpCtxRegQueryInfoKey((__int64)&v15, v8, 0LL, a4, &v15, 0LL);
  if ( CompositeMappedPropertyKeys >= 0 && v15 )
    CompositeMappedPropertyKeys = DrvDbGetCompositeMappedPropertyKeys(v10, (_OWORD **)off_1402D4758, 2u, a4, a5, v6);
LABEL_7:
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return (unsigned int)CompositeMappedPropertyKeys;
}
