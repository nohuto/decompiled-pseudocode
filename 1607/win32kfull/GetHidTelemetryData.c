/*
 * XREFs of GetHidTelemetryData @ 0x1C00E5E08
 * Callers:
 *     CheckPointerDeviceConfiguration @ 0x1C00E61F0 (CheckPointerDeviceConfiguration.c)
 * Callees:
 *     ?TraceLoggingHidConfigEvent@@YAXKPEAG0KKUtagRECT@@1@Z @ 0x1C00E5C7C (-TraceLoggingHidConfigEvent@@YAXKPEAG0KKUtagRECT@@1@Z.c)
 *     GetHidVidPidStrings @ 0x1C00E5F34 (GetHidVidPidStrings.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

void __fastcall GetHidTelemetryData(__int64 a1)
{
  __int64 v2; // rax
  struct tagRECT v3; // xmm6
  unsigned int v4; // esi
  struct tagRECT v5; // xmm7
  int v6; // edi
  __int64 v7; // rdx
  int v8; // ecx
  int v9; // [rsp+48h] [rbp-39h] BYREF
  unsigned __int16 *v10; // [rsp+50h] [rbp-31h]
  int v11; // [rsp+58h] [rbp-29h] BYREF
  unsigned __int16 *v12; // [rsp+60h] [rbp-21h]
  struct tagRECT v13; // [rsp+68h] [rbp-19h] BYREF
  struct tagRECT v14; // [rsp+78h] [rbp-9h] BYREF
  unsigned __int16 v15; // [rsp+88h] [rbp+7h] BYREF
  __int64 v16; // [rsp+8Ah] [rbp+9h]
  int v17; // [rsp+92h] [rbp+11h]
  __int16 v18; // [rsp+96h] [rbp+15h]
  unsigned __int16 v19; // [rsp+98h] [rbp+17h] BYREF
  __int64 v20; // [rsp+9Ah] [rbp+19h]
  int v21; // [rsp+A2h] [rbp+21h]
  __int16 v22; // [rsp+A6h] [rbp+25h]

  v11 = 0x100000;
  v20 = 0LL;
  v21 = 0;
  v22 = 0;
  v16 = 0LL;
  v17 = 0;
  v18 = 0;
  v12 = &v19;
  v10 = &v15;
  v2 = *(_QWORD *)(a1 + 480);
  v19 = 0;
  v15 = 0;
  v9 = 0x100000;
  v3 = *(struct tagRECT *)(v2 + 156);
  v4 = *(_DWORD *)(v2 + 688);
  v5 = *(struct tagRECT *)(v2 + 188);
  v6 = *(_DWORD *)(v2 + 24);
  GetHidVidPidStrings(a1, &v11, &v9);
  v7 = *(_QWORD *)(a1 + 480);
  v8 = 3;
  if ( (unsigned int)(*(_DWORD *)(v7 + 24) - 5) > 1 )
  {
    if ( (unsigned int)(*(_DWORD *)(v7 + 24) - 1) > 3 )
    {
      if ( *(_DWORD *)(v7 + 24) == 7 )
      {
        v6 = *(_DWORD *)(v7 + 1520);
        v8 = 5;
      }
      else
      {
        v8 = 1;
      }
    }
    else
    {
      v8 = 2;
    }
  }
  v13 = v3;
  v14 = v5;
  TraceLoggingHidConfigEvent(v8, &v19, &v15, v4, v6, &v14, &v13);
}
