/*
 * XREFs of _PnpGetMappedPropertyDispatch @ 0x1404E26B0
 * Callers:
 *     _PnpGetObjectPropertyWorker @ 0x1404E251C (_PnpGetObjectPropertyWorker.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     _PnpCtxGetObjectDispatchCallback @ 0x1404E2780 (_PnpCtxGetObjectDispatchCallback.c)
 */

__int64 __fastcall PnpGetMappedPropertyDispatch(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int a9,
        __int64 a10,
        int a11)
{
  __int64 result; // rax
  __int64 (__fastcall *v16[2])(_QWORD, _QWORD, _QWORD, __int64, _QWORD *); // [rsp+30h] [rbp-50h] BYREF
  _QWORD v17[8]; // [rsp+40h] [rbp-40h] BYREF

  v16[0] = 0LL;
  memset(v17, 0, sizeof(v17));
  result = PnpCtxGetObjectDispatchCallback(a1, a3, v16);
  if ( (int)result >= 0 )
  {
    if ( v16[0] )
    {
      v17[1] = a5;
      v17[2] = a6;
      v17[3] = a7;
      v17[4] = a8;
      LODWORD(v17[5]) = a9;
      v17[6] = a10;
      LODWORD(v17[7]) = a11;
      v17[0] = a4;
      return v16[0](a1, a2, a3, 8LL, v17);
    }
    else
    {
      return 3221225474LL;
    }
  }
  return result;
}
