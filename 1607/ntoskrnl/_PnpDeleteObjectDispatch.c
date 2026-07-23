/*
 * XREFs of _PnpDeleteObjectDispatch @ 0x1406DB0D0
 * Callers:
 *     _PnpDeleteObject @ 0x1406DAFB8 (_PnpDeleteObject.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     _PnpCtxGetObjectDispatchCallback @ 0x1404E2780 (_PnpCtxGetObjectDispatchCallback.c)
 *     _PnpObjectRaiseDeleteEvent @ 0x1406DC310 (_PnpObjectRaiseDeleteEvent.c)
 */

__int64 __fastcall PnpDeleteObjectDispatch(__int64 a1, __int64 a2, int a3, int a4)
{
  int ObjectDispatchCallback; // ebx
  __int64 (__fastcall *v10)(__int64, __int64, _QWORD, __int64, _DWORD *); // [rsp+30h] [rbp-58h] BYREF
  _DWORD v11[16]; // [rsp+40h] [rbp-48h] BYREF

  v10 = 0LL;
  memset(v11, 0, sizeof(v11));
  if ( (_WORD)a4 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    ObjectDispatchCallback = PnpCtxGetObjectDispatchCallback(a1, a3, &v10);
    if ( ObjectDispatchCallback >= 0 )
    {
      if ( v10 )
      {
        v11[0] = a4;
        ObjectDispatchCallback = v10(a1, a2, (unsigned int)a3, 4LL, v11);
        if ( ObjectDispatchCallback >= 0 && a3 >= 6 )
          PnpObjectRaiseDeleteEvent(a1, a2, (unsigned int)a3);
      }
      else
      {
        return (unsigned int)-1073741822;
      }
    }
  }
  return (unsigned int)ObjectDispatchCallback;
}
