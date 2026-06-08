/*
 * XREFs of RegisterWmi @ 0x1C00120B4
 * Callers:
 *     EvtDevicePrepareHardware @ 0x1C0012000 (EvtDevicePrepareHardware.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002450 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00029B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002D00 (memset.c)
 */

__int64 __fastcall RegisterWmi(_DWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r14
  unsigned int v5; // esi
  _DWORD *v6; // rdi
  __int128 *v7; // rbx
  int v8; // eax
  __int128 v9; // xmm0
  __int64 result; // rax
  unsigned int v11; // edi
  __int64 *i; // rsi
  __int128 *v13; // rbx
  __int128 v14; // xmm0
  __int64 v15; // rbx
  int v16; // [rsp+30h] [rbp-99h] BYREF
  __int128 *v17; // [rsp+38h] [rbp-91h]
  _QWORD v18[8]; // [rsp+40h] [rbp-89h] BYREF
  _DWORD v19[10]; // [rsp+80h] [rbp-49h] BYREF
  void *v20; // [rsp+A8h] [rbp-21h]
  _QWORD v21[5]; // [rsp+B0h] [rbp-19h] BYREF
  __int128 v22; // [rsp+D8h] [rbp+Fh] BYREF
  __int64 v23; // [rsp+E8h] [rbp+1Fh]
  wchar_t v24; // [rsp+F0h] [rbp+27h]

  v24 = aProcessorwmi[12];
  v17 = &v22;
  v20 = &ProcessorPerfStateEvent_GUID;
  v21[0] = a1 + 148;
  v21[1] = &ProcessorCStateEvent_GUID;
  v21[2] = a1 + 152;
  v21[3] = &ProcessorThrottleStateEvent_GUID;
  v21[4] = a1 + 156;
  v22 = *(_OWORD *)L"PROCESSORWMI";
  v16 = 1703960;
  v23 = *(_QWORD *)L"RWMI";
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _DWORD *))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  v3 = WdfFunctions_01015;
  a1[154] = 0;
  v4 = v2;
  a1[150] = 4;
  a1[158] = 4;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, int *))(v3 + 328))(WdfDriverGlobals, v2, &v16);
  v5 = 0;
  v6 = &unk_1C00082E0;
  while ( 1 )
  {
    v7 = (__int128 *)*((_QWORD *)v6 - 2);
    memset(v19, 0, sizeof(v19));
    v8 = *v6;
    v19[0] = 40;
    v9 = *v7;
    v19[6] = v8;
    *(_OWORD *)&v19[1] = v9;
    memset(v18, 0, sizeof(v18));
    v18[2] = v19;
    v18[4] = *((_QWORD *)v6 - 1);
    LODWORD(v18[0]) = 64;
    BYTE1(v18[3]) = 1;
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, _QWORD, _QWORD))(WdfFunctions_01015
                                                                                               + 2984))(
               WdfDriverGlobals,
               v4,
               v18,
               0LL,
               0LL);
    if ( (int)result < 0 )
      break;
    ++v5;
    v6 += 6;
    if ( v5 >= 4 )
    {
      v11 = 0;
      for ( i = v21; ; i += 2 )
      {
        v13 = (__int128 *)*(i - 1);
        memset(v19, 0, sizeof(v19));
        v19[0] = 40;
        v14 = *v13;
        v19[5] = 2;
        *(_OWORD *)&v19[1] = v14;
        memset(v18, 0, sizeof(v18));
        v15 = *i;
        v18[2] = v19;
        LODWORD(v18[0]) = 64;
        BYTE1(v18[3]) = 1;
        result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, _QWORD, __int64))(WdfFunctions_01015 + 2984))(
                   WdfDriverGlobals,
                   v4,
                   v18,
                   0LL,
                   v15);
        if ( (int)result < 0 )
          break;
        ++v11;
        *(_BYTE *)(v15 + 12) = 1;
        if ( v11 >= 3 )
          return 0LL;
      }
      return result;
    }
  }
  return result;
}
