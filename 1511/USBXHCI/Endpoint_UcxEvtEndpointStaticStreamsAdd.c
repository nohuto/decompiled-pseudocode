/*
 * XREFs of Endpoint_UcxEvtEndpointStaticStreamsAdd @ 0x1C00248E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0005540 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0006BF0 (WPP_RECORDER_SF_ddd.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C00086D4 (WPP_RECORDER_SF_dddd.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0011000 (memset.c)
 *     TR_Create @ 0x1C0051C78 (TR_Create.c)
 */

__int64 __fastcall Endpoint_UcxEvtEndpointStaticStreamsAdd(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  int v6; // eax
  int v7; // r14d
  __int64 v8; // rax
  __int64 v9; // rsi
  unsigned int v10; // r15d
  __int64 i; // r12
  unsigned int v12; // r13d
  __int64 v14; // [rsp+28h] [rbp-51h]
  __int64 v15; // [rsp+30h] [rbp-49h]
  __int64 v16; // [rsp+38h] [rbp-41h]
  _QWORD v17[3]; // [rsp+50h] [rbp-29h] BYREF
  _QWORD v18[13]; // [rsp+68h] [rbp-11h] BYREF
  __int64 v19; // [rsp+F0h] [rbp+77h] BYREF
  __int64 v20; // [rsp+F8h] [rbp+7Fh] BYREF

  v19 = a3;
  v4 = a2;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0041138);
  WPP_RECORDER_SF_ddd(
    *(_QWORD *)(v5 + 80),
    4u,
    0xCu,
    0x5Du,
    (__int64)&WPP_abc35e7fa23aea6eb35de0ce9b7cef50_Traceguids,
    *(unsigned __int8 *)(*(_QWORD *)(v5 + 16) + 135LL),
    *(_DWORD *)(v5 + 144),
    v4);
  if ( !*(_BYTE *)(v5 + 37) )
  {
    LODWORD(v15) = *(_DWORD *)(v5 + 144);
    LODWORD(v14) = *(unsigned __int8 *)(*(_QWORD *)(v5 + 16) + 135LL);
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(v5 + 80),
      2u,
      0xCu,
      0x5Eu,
      (__int64)&WPP_abc35e7fa23aea6eb35de0ce9b7cef50_Traceguids,
      v14,
      v15);
    return (unsigned int)-1073741811;
  }
  if ( !(_DWORD)v4 || (unsigned int)v4 > *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v5 + 80LL) + 112LL) )
  {
    LODWORD(v16) = v4;
    LODWORD(v15) = *(_DWORD *)(v5 + 144);
    LODWORD(v14) = *(unsigned __int8 *)(*(_QWORD *)(v5 + 16) + 135LL);
    WPP_RECORDER_SF_ddd(
      *(_QWORD *)(v5 + 80),
      2u,
      0xCu,
      0x5Fu,
      (__int64)&WPP_abc35e7fa23aea6eb35de0ce9b7cef50_Traceguids,
      v14,
      v15,
      v16);
    return (unsigned int)-1073741811;
  }
  memset(v18, 0, 0x38uLL);
  v18[6] = off_1C00412F0;
  LODWORD(v18[0]) = 56;
  v18[1] = Endpoint_EvtStaticStreamsCleanupCallback;
  v18[3] = 0x100000001LL;
  v18[5] = 88 * v4 + 40;
  v6 = ((__int64 (__fastcall *)(void *, __int64, __int64 *, _QWORD *, __int64 *))qword_1C00427E0)(
         WPP_MAIN_CB.Dpc.DpcData,
         a1,
         &v19,
         v18,
         &v20);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           v20,
           off_1C00412F0);
    v9 = v8;
    *(_QWORD *)v8 = v5;
    *(_DWORD *)(v8 + 8) = v4;
    if ( (unsigned int)v4 >= 4 )
    {
      if ( (unsigned int)v4 >= 8 )
      {
        if ( (unsigned int)v4 >= 0x10 )
        {
          if ( (unsigned int)v4 >= 0x20 )
          {
            if ( (unsigned int)v4 >= 0x40 )
              *(_DWORD *)(v8 + 12) = 7 - ((unsigned int)v4 < 0x80);
            else
              *(_DWORD *)(v8 + 12) = 5;
          }
          else
          {
            *(_DWORD *)(v8 + 12) = 4;
          }
        }
        else
        {
          *(_DWORD *)(v8 + 12) = 3;
        }
      }
      else
      {
        *(_DWORD *)(v8 + 12) = 2;
      }
    }
    else
    {
      *(_DWORD *)(v8 + 12) = 1;
    }
    v10 = 0;
    for ( i = v8 + 40; ; i += 88LL )
    {
      v12 = v10 + 1;
      v7 = TR_Create(*(_QWORD *)v5, v5, v20, v10 + 1, 88LL * v10 + v9 + 40);
      if ( v7 < 0 )
        break;
      v17[1] = *(_QWORD *)(*(_QWORD *)i + 72LL);
      v17[0] = 24LL;
      v17[2] = v12;
      ((void (__fastcall *)(void *, __int64, _QWORD *))qword_1C00427D8)(WPP_MAIN_CB.Dpc.DpcData, v20, v17);
      ++v10;
      if ( v12 >= (unsigned int)v4 )
      {
        LODWORD(v16) = v4;
        LODWORD(v15) = *(_DWORD *)(v5 + 144);
        LODWORD(v14) = *(unsigned __int8 *)(*(_QWORD *)(v5 + 16) + 135LL);
        WPP_RECORDER_SF_ddd(
          *(_QWORD *)(v5 + 80),
          4u,
          0xCu,
          0x62u,
          (__int64)&WPP_abc35e7fa23aea6eb35de0ce9b7cef50_Traceguids,
          v14,
          v15,
          v16);
        return 0;
      }
    }
    LODWORD(v16) = v10;
    LODWORD(v15) = *(_DWORD *)(v5 + 144);
    LODWORD(v14) = *(unsigned __int8 *)(*(_QWORD *)(v5 + 16) + 135LL);
    WPP_RECORDER_SF_dddd(
      *(_QWORD *)(v5 + 80),
      2u,
      0xCu,
      0x61u,
      (__int64)&WPP_abc35e7fa23aea6eb35de0ce9b7cef50_Traceguids,
      v14,
      v15,
      v16,
      v7);
  }
  else
  {
    LODWORD(v16) = v6;
    LODWORD(v15) = *(_DWORD *)(v5 + 144);
    LODWORD(v14) = *(unsigned __int8 *)(*(_QWORD *)(v5 + 16) + 135LL);
    WPP_RECORDER_SF_ddd(
      *(_QWORD *)(v5 + 80),
      2u,
      0xCu,
      0x60u,
      (__int64)&WPP_abc35e7fa23aea6eb35de0ce9b7cef50_Traceguids,
      v14,
      v15,
      v16);
  }
  return (unsigned int)v7;
}
