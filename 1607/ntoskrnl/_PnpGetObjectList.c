/*
 * XREFs of _PnpGetObjectList @ 0x1404DE554
 * Callers:
 *     PiCMGetObjectList @ 0x1404DBFC8 (PiCMGetObjectList.c)
 *     PiDmObjectManagerPopulate @ 0x1405645E8 (PiDmObjectManagerPopulate.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     _PnpGetObjectListDispatch @ 0x1404E578C (_PnpGetObjectListDispatch.c)
 */

__int64 __fastcall PnpGetObjectList(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        int a8)
{
  __int64 v8; // rsi
  __int64 (__fastcall *v10)(__int64, _QWORD, _QWORD, __int64, int, _QWORD *); // rdi
  int v11; // eax
  unsigned int ObjectListDispatch; // eax
  unsigned int v13; // ebx
  int v14; // eax
  int v15; // ecx
  unsigned int v17; // eax
  _QWORD v18[10]; // [rsp+48h] [rbp-19h] BYREF

  v8 = *(_QWORD *)&PiPnpRtlCtx;
  LODWORD(v18[0]) = 0;
  memset(&v18[1], 0, 0x48uLL);
  v10 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, int, _QWORD *))(*(_QWORD *)&PiPnpRtlCtx + 312LL);
  v18[2] = 0LL;
  v18[3] = 0LL;
  v18[4] = a5;
  LODWORD(v18[5]) = a6;
  v18[6] = a7;
  LODWORD(v18[7]) = a8;
  if ( v10 )
  {
    v11 = v10(*(_QWORD *)&PiPnpRtlCtx, 0LL, a2, 5LL, 1, v18);
    if ( v11 == -1073741822 )
    {
      v10 = 0LL;
    }
    else
    {
      if ( v11 == -1073741536 )
        return LODWORD(v18[0]);
      if ( v11 )
        return (unsigned int)-1073741595;
    }
  }
  ObjectListDispatch = PnpGetObjectListDispatch(v8, a2, v18[2], v18[3], v18[4], v18[5], v18[6], v18[7]);
  v13 = ObjectListDispatch;
  if ( !v10 )
    return v13;
  LODWORD(v18[0]) = ObjectListDispatch;
  v14 = v10(v8, 0LL, a2, 5LL, 2, v18);
  v15 = v14;
  if ( v14 == -1073741822 )
    return v13;
  if ( v14 == -1073741536 )
    return LODWORD(v18[0]);
  v17 = v13;
  if ( v15 )
    return (unsigned int)-1073741595;
  return v17;
}
