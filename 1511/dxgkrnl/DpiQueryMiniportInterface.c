/*
 * XREFs of DpiQueryMiniportInterface @ 0x1C00D3AB0
 * Callers:
 *     ?DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C00D2338 (-DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     DpiFdoInitializeFdo @ 0x1C00D3310 (DpiFdoInitializeFdo.c)
 *     DpiFdoHandleQueryIndirectDispInterface @ 0x1C016F520 (DpiFdoHandleQueryIndirectDispInterface.c)
 *     DpiFdoHandleQueryThermalInterface @ 0x1C016F660 (DpiFdoHandleQueryThermalInterface.c)
 * Callees:
 *     DpiDxgkDdiQueryInterface @ 0x1C00D3B38 (DpiDxgkDdiQueryInterface.c)
 */

__int64 __fastcall DpiQueryMiniportInterface(__int64 a1, __int64 a2, __int16 a3, __int16 a4, int a5, __int64 a6)
{
  __int64 v6; // rcx
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v15; // [rsp+20h] [rbp-38h] BYREF
  __int16 v16; // [rsp+28h] [rbp-30h]
  __int16 v17; // [rsp+2Ah] [rbp-2Eh]
  __int64 v18; // [rsp+30h] [rbp-28h]
  __int64 v19; // [rsp+38h] [rbp-20h]
  int v20; // [rsp+40h] [rbp-18h]

  v6 = *(_QWORD *)(a1 + 64);
  LODWORD(v7) = -1073741637;
  if ( *(_QWORD *)(*(_QWORD *)(v6 + 40) + 256LL) )
  {
    v19 = 0LL;
    v18 = a6;
    v16 = a3;
    v15 = a2;
    v17 = a4;
    v20 = a5;
    v8 = DpiDxgkDdiQueryInterface(*(_QWORD *)(v6 + 40), *(_QWORD *)(v6 + 48), &v15);
    v7 = v8;
    if ( v8 < 0 )
    {
      v13 = WdLogNewEntry5_WdEvent(v10, v9, v11, v12);
      *(_QWORD *)(v13 + 24) = DpiQueryMiniportInterface;
      *(_QWORD *)(v13 + 32) = v7;
      WdLogEvent5_WdEvent(v13);
    }
  }
  return (unsigned int)v7;
}
