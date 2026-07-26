/*
 * XREFs of ?NdisTraceLoggingDeviceInitialized@@YAXPEAU_NDIS_MINIPORT_BLOCK@@AEBVNdisStopwatch@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@@H@Z @ 0x1C0014144
 * Callers:
 *     ndisMInvokeInitialize @ 0x1C00A043C (ndisMInvokeInitialize.c)
 * Callees:
 *     ?GetElapsedTimeInMilliseconds@NdisStopwatch@@QEBA_JXZ @ 0x1C001411C (-GetElapsedTimeInMilliseconds@NdisStopwatch@@QEBA_JXZ.c)
 *     _TlgWrite @ 0x1C001752C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C0017668 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 */

void __fastcall NdisTraceLoggingDeviceInitialized(const struct _TlgProvider_t *a1, __int64 a2, int a3, int a4)
{
  NdisStopwatch *v5; // r11
  __int64 v6; // r10
  LPCGUID v7; // r8
  LPCGUID v8; // r9
  const GUID *v9; // r8
  const GUID *v10; // r9
  __int64 v11; // r10
  int ElapsedTimeInMilliseconds; // [rsp+30h] [rbp-19h] BYREF
  int v13; // [rsp+34h] [rbp-15h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  int *p_ElapsedTimeInMilliseconds; // [rsp+60h] [rbp+17h]
  int v16; // [rsp+68h] [rbp+1Fh]
  int v17; // [rsp+6Ch] [rbp+23h]
  int *v18; // [rsp+70h] [rbp+27h]
  int v19; // [rsp+78h] [rbp+2Fh]
  int v20; // [rsp+7Ch] [rbp+33h]
  __int64 v21; // [rsp+80h] [rbp+37h]
  int v22; // [rsp+88h] [rbp+3Fh]
  int v23; // [rsp+8Ch] [rbp+43h]

  if ( a4 )
  {
    if ( (unsigned int)dword_1C0084040 > 5 && TlgKeywordOn(a1, 0x200000000000uLL) )
    {
      v17 = 0;
      v20 = 0;
      v23 = 0;
      p_ElapsedTimeInMilliseconds = &ElapsedTimeInMilliseconds;
      v18 = &v13;
      v21 = v11 + 4064;
      ElapsedTimeInMilliseconds = (int)v10;
      v16 = 4;
      v13 = a3;
      v19 = 4;
      v22 = 16;
      TlgWrite((TraceLoggingHProvider)4, &unk_1C0073FFE, v9, v10, 5u, &pData);
    }
  }
  else if ( (unsigned int)dword_1C0084040 > 5 )
  {
    if ( TlgKeywordOn(a1, 0x200000000000uLL) )
    {
      v17 = 0;
      v20 = 0;
      ElapsedTimeInMilliseconds = NdisStopwatch::GetElapsedTimeInMilliseconds(v5);
      p_ElapsedTimeInMilliseconds = &ElapsedTimeInMilliseconds;
      v18 = (int *)(v6 + 4064);
      v16 = 4;
      v19 = 16;
      TlgWrite((TraceLoggingHProvider)4, &unk_1C0074148, v7, v8, 4u, &pData);
    }
  }
}
