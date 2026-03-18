/*
 * XREFs of DrvDbSetRegValueMappedProperty @ 0x14069C830
 * Callers:
 *     DrvDbSetDeviceIdMappedProperty @ 0x14069B8BC (DrvDbSetDeviceIdMappedProperty.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x14069BA8C (DrvDbSetDriverDatabaseMappedProperty.c)
 *     DrvDbSetDriverFileMappedProperty @ 0x14069C05C (DrvDbSetDriverFileMappedProperty.c)
 *     DrvDbSetDriverInfFileMappedProperty @ 0x14069C174 (DrvDbSetDriverInfFileMappedProperty.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x14069C28C (DrvDbSetDriverPackageMappedProperty.c)
 * Callees:
 *     _PnpCtxRegSetValue @ 0x14045D128 (_PnpCtxRegSetValue.c)
 *     _PnpCtxRegDeleteValue @ 0x1404EBE98 (_PnpCtxRegDeleteValue.c)
 */

int __fastcall DrvDbSetRegValueMappedProperty(__int64 a1, void *a2, __int64 a3, int a4, int *a5, ULONG a6)
{
  int v6; // ecx
  int *v7; // rcx
  ULONG v8; // eax
  int result; // eax
  int v10; // [rsp+58h] [rbp+20h] BYREF

  v6 = 0;
  if ( a4 )
  {
    if ( a4 == 5 )
    {
      if ( a6 != 2 )
        return -1073741811;
      v6 = *(unsigned __int16 *)a5;
    }
    else
    {
      if ( a4 != 17 )
      {
        v7 = a5;
        v8 = a6;
        return PnpCtxRegSetValue((__int64)v7, a2, *(_QWORD *)(a3 + 16), *(unsigned int *)(a3 + 24), (__int64)v7, v8);
      }
      if ( a6 != 1 )
        return -1073741811;
      LOBYTE(v6) = *(_BYTE *)a5 == 0xFF;
    }
    v10 = v6;
    v8 = 4;
    v7 = &v10;
    return PnpCtxRegSetValue((__int64)v7, a2, *(_QWORD *)(a3 + 16), *(unsigned int *)(a3 + 24), (__int64)v7, v8);
  }
  result = PnpCtxRegDeleteValue(0LL, a2, *(const WCHAR **)(a3 + 16));
  if ( result == -1073741772 )
    return -1073741275;
  return result;
}
