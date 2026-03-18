/*
 * XREFs of UsbhSetPortData @ 0x1C001A074
 * Callers:
 *     UsbhCreatePdo @ 0x1C0005B90 (UsbhCreatePdo.c)
 * Callees:
 *     UsbhRefPdo @ 0x1C000D410 (UsbhRefPdo.c)
 *     Log @ 0x1C00159D0 (Log.c)
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 *     UsbhGetPortData @ 0x1C001B570 (UsbhGetPortData.c)
 */

__int64 __fastcall UsbhSetPortData(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  _DWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  _DWORD *v12; // rax
  __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbx
  _DWORD *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9

  Log(a1, 256, 1936745588, a2, a3);
  v8 = PdoExt(v7, v5, v6, v7);
  Log(a1, 256, 1936745552, a2, *((unsigned __int16 *)v8 + 710));
  v12 = PdoExt(a2, v9, v10, v11);
  result = UsbhGetPortData(a1, *((unsigned __int16 *)v12 + 710));
  v17 = result;
  if ( result )
  {
    v18 = PdoExt(a2, v14, v15, v16);
    KeResetEvent((PRKEVENT)(v18 + 322));
    result = UsbhRefPdo(v19, a2, 0LL, 1279349827LL);
    *(_QWORD *)(v17 + 392) = result;
    if ( result )
    {
      _InterlockedExchange((volatile __int32 *)(v17 + 428), 1);
      result = (__int64)PdoExt(result, v20, v21, v22);
      *(_DWORD *)(result + 1416) |= 8u;
    }
    else
    {
      _InterlockedExchange((volatile __int32 *)(v17 + 428), 0);
    }
  }
  return result;
}
