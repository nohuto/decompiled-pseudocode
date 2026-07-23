/*
 * XREFs of _PnpValidateObjectName @ 0x1405649D8
 * Callers:
 *     PiDmObjectCreate @ 0x14056471C (PiDmObjectCreate.c)
 *     PiDqOpenUserObjectRegKey @ 0x140631E3C (PiDqOpenUserObjectRegKey.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     _PnpValidateObjectNameDispatch @ 0x140564A98 (_PnpValidateObjectNameDispatch.c)
 */

__int64 __fastcall PnpValidateObjectName(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v4; // rsi
  __int64 (__fastcall *v8)(__int64, __int64, _QWORD, __int64, int, _DWORD *); // rdi
  int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // ebx
  int v13; // eax
  int v14; // ecx
  unsigned int v15; // eax
  _DWORD v16[20]; // [rsp+30h] [rbp-58h] BYREF

  v4 = *(_QWORD *)&PiPnpRtlCtx;
  v16[0] = 0;
  memset(&v16[2], 0, 0x48uLL);
  v8 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, int, _DWORD *))(*(_QWORD *)&PiPnpRtlCtx + 312LL);
  v16[4] = a4;
  if ( v8 )
  {
    v9 = v8(*(_QWORD *)&PiPnpRtlCtx, a2, a3, 1LL, 1, v16);
    if ( v9 == -1073741822 )
    {
      v8 = 0LL;
    }
    else
    {
      if ( v9 == -1073741536 )
        return v16[0];
      if ( v9 )
        return (unsigned int)-1073741595;
    }
  }
  v10 = PnpValidateObjectNameDispatch(v4, a2, a3, v16[4]);
  v11 = v10;
  if ( !v8 )
    return v11;
  v16[0] = v10;
  v13 = v8(v4, a2, a3, 1LL, 2, v16);
  v14 = v13;
  if ( v13 == -1073741822 )
    return v11;
  if ( v13 == -1073741536 )
    return v16[0];
  v15 = v11;
  if ( v14 )
    return (unsigned int)-1073741595;
  return v15;
}
