/*
 * XREFs of ?IsProcessAllowed@@YAHKPEBG@Z @ 0x180009A20
 * Callers:
 *     AudioServerInitialize @ 0x18000A980 (AudioServerInitialize.c)
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_Dd @ 0x18007C094 (WPP_SF_Dd.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall IsProcessAllowed(DWORD dwProcessId, const unsigned __int16 *a2)
{
  unsigned int v4; // edi
  int v5; // r15d
  int v6; // r13d
  int v7; // eax
  signed int v8; // r14d
  unsigned int v9; // eax
  __int64 v10; // rcx
  DWORD pSessionId; // [rsp+30h] [rbp-59h] BYREF
  __int64 v13; // [rsp+38h] [rbp-51h] BYREF
  __int64 v14; // [rsp+40h] [rbp-49h] BYREF
  __int64 v15; // [rsp+48h] [rbp-41h] BYREF
  __int64 v16; // [rsp+50h] [rbp-39h] BYREF
  PROPVARIANT v17; // [rsp+58h] [rbp-31h] BYREF
  __int64 v18; // [rsp+60h] [rbp-29h]
  __int64 v19; // [rsp+68h] [rbp-21h]
  PROPVARIANT pvar; // [rsp+70h] [rbp-19h] BYREF
  __int64 v21; // [rsp+78h] [rbp-11h]
  __int64 v22; // [rsp+80h] [rbp-9h]
  __int64 v23; // [rsp+88h] [rbp-1h]
  DEVPROPGUID fmtid; // [rsp+90h] [rbp+7h] BYREF
  int v25; // [rsp+A0h] [rbp+17h]

  v23 = -2LL;
  v4 = 0;
  v5 = 0;
  v13 = 0LL;
  v16 = 0LL;
  v15 = 0LL;
  v14 = 0LL;
  v6 = 0;
  pSessionId = 0;
  pvar = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v7 = RpcImpersonateClient(0LL);
  if ( v7 )
  {
    if ( v7 > 0 )
      v8 = (unsigned __int16)v7 | 0x80070000;
    else
      v8 = v7;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      if ( v7 > 0 )
        v7 = (unsigned __int16)v7 | 0x80070000;
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        12LL,
        &WPP_1ce008ef94d310117402048c610b448c_Traceguids,
        (unsigned int)v7);
    }
  }
  else
  {
    v5 = 1;
    if ( !ProcessIdToSessionId(dwProcessId, &pSessionId) )
      pSessionId = 0;
    v8 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
           *(_QWORD *)&g_DeviceEnumerator,
           a2,
           &v13);
    if ( v8 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v13 + 32LL))(v13, 0LL, &v16);
      if ( v8 >= 0 )
      {
        if ( !(*(unsigned int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v16 + 40LL))(
                v16,
                &PKEY_Endpoint_Devnode,
                &pvar) )
        {
          if ( (_WORD)pvar == 31 )
          {
            v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
                   *(_QWORD *)&g_DeviceEnumerator,
                   v21,
                   &v14);
            if ( v8 < 0 )
              goto LABEL_16;
            v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v14 + 32LL))(v14, 0LL, &v15);
            if ( v8 < 0 )
              goto LABEL_16;
            fmtid = DEVPKEY_Device_SessionId.fmtid;
            v25 = 6;
            if ( (*(int (__fastcall **)(__int64, DEVPROPGUID *, PROPVARIANT *))(*(_QWORD *)v15 + 40LL))(
                   v15,
                   &fmtid,
                   &v17) >= 0
              && (_WORD)v17 == 19 )
            {
              v6 = v18;
            }
          }
          else
          {
            v6 = 0;
          }
        }
        if ( pSessionId && v6 && pSessionId != v6 )
        {
          if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
            && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
            && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
          {
            WPP_SF_Dd(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
              13LL,
              &WPP_1ce008ef94d310117402048c610b448c_Traceguids,
              pSessionId,
              v6);
          }
        }
        else
        {
          v4 = 1;
        }
      }
    }
  }
LABEL_16:
  PropVariantClear(&pvar);
  PropVariantClear(&v17);
  if ( !v5 )
    goto LABEL_18;
  v9 = RpcRevertToSelf();
  if ( !v9 )
    goto LABEL_18;
  v10 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      14LL,
      &WPP_1ce008ef94d310117402048c610b448c_Traceguids,
      v9);
LABEL_18:
    v10 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  }
  if ( v8 < 0
    && (struct _GUID *)v10 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(v10 + 28) & 0x100) != 0
    && *(_BYTE *)(v10 + 25) >= 2u )
  {
    WPP_SF_D(*(_QWORD *)(v10 + 16), 15LL, &WPP_1ce008ef94d310117402048c610b448c_Traceguids, (unsigned int)v8);
  }
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  return v4;
}
