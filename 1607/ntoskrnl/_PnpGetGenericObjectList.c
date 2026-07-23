/*
 * XREFs of _PnpGetGenericObjectList @ 0x14056255C
 * Callers:
 *     _CmGetMatchingDeviceContainerListWorker @ 0x1405624D4 (_CmGetMatchingDeviceContainerListWorker.c)
 * Callees:
 *     _PnpCtxRegEnumKeyWithCallback @ 0x1405634B4 (_PnpCtxRegEnumKeyWithCallback.c)
 */

__int64 __fastcall PnpGetGenericObjectList(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _WORD *a5,
        unsigned int a6,
        _DWORD *a7)
{
  int v7; // edx
  int v8; // ecx
  __int64 (__fastcall *v10)(); // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+28h] [rbp-20h]
  _WORD *v12; // [rsp+30h] [rbp-18h]
  __int64 v13; // [rsp+38h] [rbp-10h]

  v11 = 0LL;
  *a7 = 0;
  v12 = 0LL;
  v13 = 0LL;
  if ( a6 )
    *a5 = 0;
  v11 = a4;
  v10 = CmContainerListGenericObjectCallback;
  v12 = a5;
  v13 = a6;
  v7 = PnpCtxRegEnumKeyWithCallback(a1, a2, &PnpObjectListCallback, &v10);
  if ( v7 >= 0 )
  {
    v8 = HIDWORD(v13);
    *a7 = HIDWORD(v13);
    if ( v8 )
    {
      *a7 = v8 + 1;
      if ( a5 && a6 >= v8 + 1 )
        a5[v8] = 0;
      else
        return (unsigned int)-1073741789;
    }
  }
  return (unsigned int)v7;
}
