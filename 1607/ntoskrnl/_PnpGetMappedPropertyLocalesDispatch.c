/*
 * XREFs of _PnpGetMappedPropertyLocalesDispatch @ 0x1406DB25C
 * Callers:
 *     _PnpGetObjectPropertyLocalesWorker @ 0x1406DB764 (_PnpGetObjectPropertyLocalesWorker.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     _PnpCtxGetObjectDispatchCallback @ 0x1404E2780 (_PnpCtxGetObjectDispatchCallback.c)
 */

__int64 __fastcall PnpGetMappedPropertyLocalesDispatch(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        int a9)
{
  __int64 result; // rax
  __int64 (__fastcall *v14)(__int64, __int64, _QWORD, __int64, _QWORD *); // [rsp+30h] [rbp-58h] BYREF
  _QWORD v15[8]; // [rsp+40h] [rbp-48h] BYREF

  v14 = 0LL;
  memset(v15, 0, sizeof(v15));
  result = PnpCtxGetObjectDispatchCallback(a1, a3, &v14);
  if ( (int)result >= 0 )
  {
    if ( v14 )
    {
      v15[1] = a5;
      v15[2] = a6;
      LODWORD(v15[3]) = a7;
      v15[4] = a8;
      LODWORD(v15[5]) = a9;
      v15[0] = a4;
      return v14(a1, a2, a3, 7LL, v15);
    }
    else
    {
      return 3221225474LL;
    }
  }
  return result;
}
