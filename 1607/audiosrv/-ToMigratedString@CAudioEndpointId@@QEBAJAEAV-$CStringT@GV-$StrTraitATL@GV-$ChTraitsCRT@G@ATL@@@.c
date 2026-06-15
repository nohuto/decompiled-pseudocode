/*
 * XREFs of ?ToMigratedString@CAudioEndpointId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18006680C
 * Callers:
 *     ?ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@H@Z @ 0x180066A08 (-ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@.c)
 * Callees:
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x180012CA0 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x1800276E8 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?AppendChar@?$CSimpleStringT@G$0A@@ATL@@QEAAXG@Z @ 0x180065964 (-AppendChar@-$CSimpleStringT@G$0A@@ATL@@QEAAXG@Z.c)
 */

__int64 __fastcall CAudioEndpointId::ToMigratedString(__int64 *a1, __int64 *a2)
{
  __int64 v4; // rdx
  int v5; // edi
  struct IUnknown *v6; // rcx
  _WORD *v7; // rbx
  int v8; // esi
  __int16 v9; // ax
  __int16 v10; // ax
  struct IUnknown *v12; // [rsp+30h] [rbp-20h] BYREF
  __int64 v13; // [rsp+38h] [rbp-18h] BYREF
  __int64 v14; // [rsp+40h] [rbp-10h]
  char v15; // [rsp+80h] [rbp+30h] BYREF
  LPVOID pv; // [rsp+90h] [rbp+40h] BYREF
  struct IUnknown *v17; // [rsp+98h] [rbp+48h] BYREF

  ATL::CSimpleStringT<unsigned short,0>::Empty(a2);
  v4 = *a1;
  v12 = 0LL;
  v17 = 0LL;
  v14 = 0LL;
  v13 = 0LL;
  pv = 0LL;
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct IUnknown **))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         v4,
         &v12);
  if ( v5 >= 0 )
  {
    v6 = v17;
    if ( v17 != v12 )
    {
      ATL::AtlComQIPtrAssign(&v17, v12, &GUID_1be09788_6894_4089_8586_9a2a6c265ac5);
      v6 = v17;
    }
    v5 = ((__int64 (__fastcall *)(struct IUnknown *, char *))v6->lpVtbl[1].QueryInterface)(v6, &v15);
    if ( v5 >= 0 )
    {
      v5 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64))v12->lpVtbl[1].QueryInterface)(
             v12,
             &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
             23LL);
      if ( v5 >= 0 )
      {
        v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v14 + 32LL))(v14, 0LL, &v13);
        if ( v5 >= 0 )
        {
          v5 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v13 + 72LL))(v13, &pv);
          if ( v5 >= 0 )
          {
            v7 = pv;
            v8 = 0;
            v9 = *(_WORD *)pv;
            if ( !*(_WORD *)pv )
              goto LABEL_18;
            do
            {
              if ( v9 == 35 )
                ++v8;
              if ( v8 == 2 )
              {
                do
                  ++v7;
                while ( *v7 != 35 && *v7 );
                v8 = 3;
              }
              v10 = _o_towlower((unsigned __int16)*v7);
              ATL::CSimpleStringT<unsigned short,0>::AppendChar((const void **)a2, v10);
              v9 = *++v7;
            }
            while ( *v7 );
          }
        }
      }
    }
  }
  v7 = pv;
LABEL_18:
  if ( v7 )
  {
    CoTaskMemFree(v7);
    pv = 0LL;
  }
  if ( v5 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioEndpointId::ToMigratedString", 250, v5);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v17 )
    ((void (__fastcall *)(struct IUnknown *))v17->lpVtbl->Release)(v17);
  if ( v12 )
    ((void (__fastcall *)(struct IUnknown *))v12->lpVtbl->Release)(v12);
  return (unsigned int)v5;
}
