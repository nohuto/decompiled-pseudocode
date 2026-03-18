/*
 * XREFs of UsbhSetPortData @ 0x1C000B028
 * Callers:
 *     UsbhCreatePdo @ 0x1C0007C50 (UsbhCreatePdo.c)
 * Callees:
 *     UsbhGetPortData @ 0x1C000AEF0 (UsbhGetPortData.c)
 *     UsbhRefPdo @ 0x1C000BE50 (UsbhRefPdo.c)
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     Log @ 0x1C0014B50 (Log.c)
 */

__int64 __fastcall UsbhSetPortData(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rcx

  Log(a1, 256, 1936745588, a2, a3);
  v6 = PdoExt(v5);
  Log(a1, 256, 1936745552, a2, *(unsigned __int16 *)(v6 + 1420));
  v7 = PdoExt(a2);
  result = UsbhGetPortData(a1, *(_WORD *)(v7 + 1420));
  v9 = result;
  if ( result )
  {
    v10 = PdoExt(a2);
    KeResetEvent((PRKEVENT)(v10 + 1288));
    result = UsbhRefPdo(v11, a2, 0LL, 1279349827LL);
    *(_QWORD *)(v9 + 392) = result;
    if ( result )
    {
      _InterlockedExchange((volatile __int32 *)(v9 + 428), 1);
      result = PdoExt(result);
      *(_DWORD *)(result + 1416) |= 8u;
    }
    else
    {
      _InterlockedExchange((volatile __int32 *)(v9 + 428), 0);
    }
  }
  return result;
}
