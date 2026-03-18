/*
 * XREFs of ?SetDeviceFocus@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_PROMOTION_TYPE@@PEAUtagWND@@@Z @ 0x1C023BE1C
 * Callers:
 *     NtUserSetInteractiveControlFocus @ 0x1C0219B60 (NtUserSetInteractiveControlFocus.c)
 *     ?UpdateInputTarget@InteractiveControlDevice@@QEAAPEAUtagWND@@I@Z @ 0x1C023E93C (-UpdateInputTarget@InteractiveControlDevice@@QEAAPEAUtagWND@@I@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00E5414 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C021F6CC (_TlgCreateSz.c)
 *     ?SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C023E5F0 (-SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z.c)
 */

__int64 __fastcall InteractiveControlManager::SetDeviceFocus(__int64 a1, int a2, unsigned int a3, __int64 a4)
{
  LPCGUID v8; // r9
  LPCGUID v9; // r8
  __int64 *v10; // rbx
  __int64 v11; // r14
  __int64 v12; // rcx
  LPCGUID cData; // r9
  LPCGUID v14; // r8
  unsigned int v16; // [rsp+30h] [rbp-69h] BYREF
  int v17; // [rsp+34h] [rbp-65h] BYREF
  unsigned int v18; // [rsp+38h] [rbp-61h] BYREF
  __int64 v19; // [rsp+40h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-29h] BYREF
  unsigned int *v22; // [rsp+80h] [rbp-19h]
  int v23; // [rsp+88h] [rbp-11h]
  int v24; // [rsp+8Ch] [rbp-Dh]
  int *v25; // [rsp+90h] [rbp-9h]
  int v26; // [rsp+98h] [rbp-1h]
  int v27; // [rsp+9Ch] [rbp+3h]
  __int64 *v28; // [rsp+A0h] [rbp+7h]
  int v29; // [rsp+A8h] [rbp+Fh]
  int v30; // [rsp+ACh] [rbp+13h]

  v16 = 0;
  if ( (unsigned int)hProvider > 4 )
  {
    TlgCreateSz(&pDesc, "InteractiveControlManager::SetDeviceFocus entry");
    v24 = 0;
    v27 = 0;
    v30 = 0;
    v22 = (unsigned int *)&v17;
    v25 = (int *)&v18;
    v28 = &v19;
    v17 = a2;
    v23 = (int)v8;
    v18 = a3;
    v26 = (int)v8;
    v19 = a4;
    v29 = 8;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EF5A1, v9, v8, 6u, &pData);
  }
  v10 = (__int64 *)(a1 + 40);
  v11 = 5LL;
  do
  {
    v12 = *v10;
    if ( *v10 && (!a2 || a2 == *(_DWORD *)(v12 + 8)) )
      InteractiveControlDevice::SetFocus(v12, a4, a3);
    ++v10;
    --v11;
  }
  while ( v11 );
  if ( !a2 )
  {
    HMAssignmentLock(a1, a4);
    *(_DWORD *)(a1 + 8) = a3;
  }
  if ( (unsigned int)hProvider > 4 )
  {
    TlgCreateSz(&pDesc, "InteractiveControlManager::SetDeviceFocus exit");
    v24 = 0;
    v22 = &v16;
    v23 = (int)cData;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EF3B0, v14, cData, (UINT32)cData, &pData);
  }
  return v16;
}
