/*
 * XREFs of _PnpCreateObject @ 0x1406DAD4C
 * Callers:
 *     PiCMOpenObjectKey @ 0x1404DCACC (PiCMOpenObjectKey.c)
 *     PiCMCreateObject @ 0x1406469D4 (PiCMCreateObject.c)
 * Callees:
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     _PnpCreateObjectDispatch @ 0x1406DAEB8 (_PnpCreateObjectDispatch.c)
 */

__int64 __fastcall PnpCreateObject(__int64 a1, __int64 a2, unsigned int a3, int a4, _QWORD *a5)
{
  __int64 v5; // r14
  __int64 (__fastcall *v9)(__int64, __int64, _QWORD, __int64, int, _DWORD *); // rsi
  int v10; // eax
  int ObjectDispatch; // eax
  int v12; // ebx
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  _DWORD v17[20]; // [rsp+48h] [rbp-21h] BYREF

  v5 = *(_QWORD *)&PiPnpRtlCtx;
  v17[0] = 0;
  memset(&v17[2], 0, 0x48uLL);
  v9 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, int, _DWORD *))(*(_QWORD *)&PiPnpRtlCtx + 312LL);
  if ( a4 || (v17[4] = 1, a5) )
    v17[4] = a4;
  v17[9] = 0;
  if ( v9 )
  {
    v10 = v9(*(_QWORD *)&PiPnpRtlCtx, a2, a3, 3LL, 1, v17);
    if ( v10 == -1073741822 )
    {
      v9 = 0LL;
    }
    else
    {
      if ( v10 == -1073741536 )
        goto LABEL_17;
      if ( v10 )
      {
        v12 = -1073741595;
        goto LABEL_20;
      }
    }
  }
  ObjectDispatch = PnpCreateObjectDispatch(v5, a2, a3, v17[4], (__int64)&v17[6], (__int64)&v17[8], v17[9]);
  v12 = ObjectDispatch;
  if ( !v9 )
    goto LABEL_13;
  v17[0] = ObjectDispatch;
  v13 = v9(v5, a2, a3, 3LL, 2, v17);
  v14 = v13;
  if ( v13 == -1073741822 )
    goto LABEL_13;
  if ( v13 == -1073741536 )
  {
LABEL_17:
    v12 = v17[0];
    goto LABEL_13;
  }
  v15 = v12;
  if ( v14 )
    v15 = -1073741595;
  v12 = v15;
LABEL_13:
  if ( v12 >= 0 && a5 )
  {
    *a5 = *(_QWORD *)&v17[6];
    return (unsigned int)v12;
  }
LABEL_20:
  if ( *(_QWORD *)&v17[6] )
    ZwClose(*(HANDLE *)&v17[6]);
  return (unsigned int)v12;
}
