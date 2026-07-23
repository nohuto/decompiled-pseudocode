/*
 * XREFs of DrvDbGetDeviceIdMappedPropertyKeys @ 0x1406E1204
 * Callers:
 *     DrvDbDispatchDeviceId @ 0x1404B8C04 (DrvDbDispatchDeviceId.c)
 * Callees:
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     _PnpCtxRegQueryInfoKey @ 0x1404B910C (_PnpCtxRegQueryInfoKey.c)
 *     DrvDbOpenObjectRegKey @ 0x1404DEEA4 (DrvDbOpenObjectRegKey.c)
 *     DrvDbGetCompositeMappedPropertyKeys @ 0x1406E118C (DrvDbGetCompositeMappedPropertyKeys.c)
 */

__int64 __fastcall DrvDbGetDeviceIdMappedPropertyKeys(
        __int64 **a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int *a6)
{
  unsigned int *v6; // rdi
  int v8; // eax
  int InfoKey; // ebx
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
    InfoKey = DrvDbOpenObjectRegKey(a1, 0LL, 5, a2, v12, v13, Handle, 0LL);
    if ( InfoKey < 0 )
      goto LABEL_7;
    v8 = (int)Handle[0];
  }
  InfoKey = PnpCtxRegQueryInfoKey((__int64)&v15, v8, 0, a4, (__int64)&v15, 0LL);
  if ( InfoKey >= 0 && v15 )
    InfoKey = DrvDbGetCompositeMappedPropertyKeys(v10, (_OWORD **)off_1402F4D50, 2u, a4, a5, v6);
LABEL_7:
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return (unsigned int)InfoKey;
}
