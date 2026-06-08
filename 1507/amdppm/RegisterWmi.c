/*
 * XREFs of RegisterWmi @ 0x1C0014D58
 * Callers:
 *     EvtDevicePrepareHardware @ 0x1C000F3D0 (EvtDevicePrepareHardware.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0005E20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0005F40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00062C0 (memset.c)
 */

__int64 __fastcall RegisterWmi(_DWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // r14
  unsigned int v4; // esi
  _DWORD *v5; // rdi
  __int128 *v6; // rbx
  int v7; // eax
  __int128 v8; // xmm0
  __int64 result; // rax
  unsigned int v10; // edi
  __int64 *i; // rsi
  __int128 *v12; // rbx
  __int128 v13; // xmm0
  __int64 v14; // rbx
  int v15; // [rsp+30h] [rbp-99h] BYREF
  __int128 *v16; // [rsp+38h] [rbp-91h]
  _QWORD v17[8]; // [rsp+40h] [rbp-89h] BYREF
  _DWORD v18[10]; // [rsp+80h] [rbp-49h] BYREF
  void *v19; // [rsp+A8h] [rbp-21h]
  _QWORD v20[5]; // [rsp+B0h] [rbp-19h] BYREF
  __int128 v21; // [rsp+D8h] [rbp+Fh] BYREF
  __int64 v22; // [rsp+E8h] [rbp+1Fh]
  wchar_t v23; // [rsp+F0h] [rbp+27h]

  v23 = aProcessorwmi[12];
  v16 = &v21;
  v19 = &ProcessorPerfStateEvent_GUID;
  v20[0] = a1 + 150;
  v20[1] = &ProcessorCStateEvent_GUID;
  v20[2] = a1 + 154;
  v20[3] = &ProcessorThrottleStateEvent_GUID;
  v20[4] = a1 + 158;
  v21 = *(_OWORD *)L"PROCESSORWMI";
  v15 = 1703960;
  v22 = *(_QWORD *)L"RWMI";
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _DWORD *))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  a1[156] = 0;
  a1[152] = 4;
  v3 = v2;
  a1[160] = 4;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, int *))(WdfFunctions_01015 + 328))(WdfDriverGlobals, v2, &v15);
  v4 = 0;
  v5 = &unk_1C00076A0;
  while ( 1 )
  {
    v6 = (__int128 *)*((_QWORD *)v5 - 2);
    memset(v18, 0, sizeof(v18));
    v7 = *v5;
    v18[0] = 40;
    v8 = *v6;
    v18[6] = v7;
    *(_OWORD *)&v18[1] = v8;
    memset(v17, 0, sizeof(v17));
    v17[2] = v18;
    v17[4] = *((_QWORD *)v5 - 1);
    LODWORD(v17[0]) = 64;
    BYTE1(v17[3]) = 1;
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, _QWORD, _QWORD))(WdfFunctions_01015
                                                                                               + 2984))(
               WdfDriverGlobals,
               v3,
               v17,
               0LL,
               0LL);
    if ( (int)result < 0 )
      break;
    ++v4;
    v5 += 6;
    if ( v4 >= 4 )
    {
      v10 = 0;
      for ( i = v20; ; i += 2 )
      {
        v12 = (__int128 *)*(i - 1);
        memset(v18, 0, sizeof(v18));
        v18[0] = 40;
        v13 = *v12;
        v18[5] = 2;
        *(_OWORD *)&v18[1] = v13;
        memset(v17, 0, sizeof(v17));
        v14 = *i;
        v17[2] = v18;
        LODWORD(v17[0]) = 64;
        BYTE1(v17[3]) = 1;
        result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, _QWORD, __int64))(WdfFunctions_01015 + 2984))(
                   WdfDriverGlobals,
                   v3,
                   v17,
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
