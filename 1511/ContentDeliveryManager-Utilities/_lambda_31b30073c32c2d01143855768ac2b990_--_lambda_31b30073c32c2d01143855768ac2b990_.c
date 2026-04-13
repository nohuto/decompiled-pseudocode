/*
 * XREFs of _lambda_31b30073c32c2d01143855768ac2b990_::_lambda_31b30073c32c2d01143855768ac2b990_ @ 0x18000E750
 * Callers:
 *     ?ProcessCreativeEventAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@111PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@PEAUICreativeEventReportedCache@2@PEAPEAUIAsyncAction@67@@Z @ 0x18000E350 (-ProcessCreativeEventAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@.c)
 * Callees:
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 */

__int64 __fastcall lambda_31b30073c32c2d01143855768ac2b990_::_lambda_31b30073c32c2d01143855768ac2b990_(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        _DWORD *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 *a9,
        __int64 *a10)
{
  __int64 v11; // rdx
  signed __int64 v12; // rax
  signed __int64 v13; // rtt
  __int64 v14; // rsi
  __int64 v15; // rsi

  *(_QWORD *)a1 = a2;
  v11 = *a3;
  *(_QWORD *)(a1 + 8) = *a3;
  if ( v11 )
  {
    v12 = *(_QWORD *)(v11 + 80);
    while ( v12 >= 0 )
    {
      v13 = v12;
      v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 80), v12 + 1, v12);
      if ( v13 == v12 )
        goto LABEL_6;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * v12 + 16));
  }
LABEL_6:
  *(_DWORD *)(a1 + 16) = *a4;
  *(_QWORD *)(a1 + 24) = *(_QWORD *)a5;
  *(_QWORD *)a5 = 0LL;
  *(_BYTE *)(a1 + 32) = 0;
  *(_BYTE *)(a5 + 8) = 1;
  *(_QWORD *)(a1 + 40) = *(_QWORD *)a6;
  *(_QWORD *)a6 = 0LL;
  *(_BYTE *)(a1 + 48) = 0;
  *(_BYTE *)(a6 + 8) = 1;
  *(_QWORD *)(a1 + 56) = *(_QWORD *)a7;
  *(_QWORD *)a7 = 0LL;
  *(_BYTE *)(a1 + 64) = 0;
  *(_BYTE *)(a7 + 8) = 1;
  *(_QWORD *)(a1 + 72) = *(_QWORD *)a8;
  *(_QWORD *)a8 = 0LL;
  *(_BYTE *)(a1 + 80) = 0;
  *(_BYTE *)(a8 + 8) = 1;
  v14 = *a9;
  *(_QWORD *)(a1 + 88) = *a9;
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
  v15 = *a10;
  *(_QWORD *)(a1 + 96) = *a10;
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  return a1;
}
