/*
 * XREFs of RegisterWmi @ 0x1C0013DD4
 * Callers:
 *     EvtDevicePrepareHardware @ 0x1C0013D20 (EvtDevicePrepareHardware.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002510 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0002A70 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002DC0 (memset.c)
 */

__int64 __fastcall RegisterWmi(_DWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r14
  unsigned int v5; // edi
  _DWORD *v6; // rbx
  __int128 *v7; // rax
  __int128 v8; // xmm0
  __int64 result; // rax
  unsigned int v10; // ebx
  __int64 *i; // rdi
  __int128 *v12; // rax
  __int128 v13; // xmm0
  __int64 v14; // rsi
  _QWORD v15[2]; // [rsp+38h] [rbp-99h] BYREF
  _QWORD v16[8]; // [rsp+48h] [rbp-89h] BYREF
  _DWORD v17[10]; // [rsp+88h] [rbp-49h] BYREF
  void *v18; // [rsp+B0h] [rbp-21h]
  _QWORD v19[5]; // [rsp+B8h] [rbp-19h] BYREF
  __int128 v20; // [rsp+E0h] [rbp+Fh] BYREF
  __int64 v21; // [rsp+F0h] [rbp+1Fh]
  wchar_t v22; // [rsp+F8h] [rbp+27h]

  v22 = aProcessorwmi[12];
  v15[1] = &v20;
  v21 = *(_QWORD *)L"RWMI";
  v18 = &ProcessorPerfStateEvent_GUID;
  v19[0] = a1 + 152;
  v19[1] = &ProcessorCStateEvent_GUID;
  v19[2] = a1 + 156;
  v19[3] = &ProcessorThrottleStateEvent_GUID;
  v19[4] = a1 + 160;
  v20 = *(_OWORD *)L"PROCESSORWMI";
  LODWORD(v15[0]) = 1703960;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _DWORD *))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  v3 = WdfFunctions_01015;
  a1[158] = 0;
  v4 = v2;
  a1[154] = 4;
  a1[162] = 4;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(v3 + 328))(WdfDriverGlobals, v2, v15);
  v5 = 0;
  v6 = &unk_1C00092B0;
  while ( 1 )
  {
    memset(v17, 0, sizeof(v17));
    v7 = (__int128 *)*((_QWORD *)v6 - 2);
    v17[0] = 40;
    v8 = *v7;
    v17[6] = *v6;
    *(_OWORD *)&v17[1] = v8;
    memset(v16, 0, sizeof(v16));
    v16[2] = v17;
    v16[4] = *((_QWORD *)v6 - 1);
    LODWORD(v16[0]) = 64;
    BYTE1(v16[3]) = 1;
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, _QWORD, _QWORD))(WdfFunctions_01015
                                                                                               + 2984))(
               WdfDriverGlobals,
               v4,
               v16,
               0LL,
               0LL);
    if ( (int)result < 0 )
      break;
    ++v5;
    v6 += 6;
    if ( v5 >= 4 )
    {
      v10 = 0;
      for ( i = v19; ; i += 2 )
      {
        memset(v17, 0, sizeof(v17));
        v12 = (__int128 *)*(i - 1);
        v17[0] = 40;
        v13 = *v12;
        v17[5] = 2;
        *(_OWORD *)&v17[1] = v13;
        memset(v16, 0, sizeof(v16));
        v14 = *i;
        v16[2] = v17;
        LODWORD(v16[0]) = 64;
        BYTE1(v16[3]) = 1;
        result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, _QWORD, __int64))(WdfFunctions_01015 + 2984))(
                   WdfDriverGlobals,
                   v4,
                   v16,
                   0LL,
                   v14);
        if ( (int)result < 0 )
          break;
        ++v10;
        *(_BYTE *)(v14 + 12) = 1;
        if ( v10 >= 3 )
          return 0LL;
      }
      return result;
    }
  }
  return result;
}
