/*
 * XREFs of ?ToMigratedString@CAudioEndpointId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800117F0
 * Callers:
 *     ?ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@H@Z @ 0x180014C88 (-ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@.c)
 * Callees:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x1800186F0 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x1800188B0 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x180038050 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall CAudioEndpointId::ToMigratedString(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rdi
  int v5; // r13d
  struct IUnknown *v6; // rbx
  wint_t *v7; // rdi
  int v8; // r12d
  wint_t v9; // r15
  __int64 v10; // rsi
  int v11; // ebx
  wint_t v13; // ax
  struct IUnknown *v14; // [rsp+30h] [rbp-20h] BYREF
  __int64 v15; // [rsp+38h] [rbp-18h] BYREF
  __int64 v16; // [rsp+40h] [rbp-10h]
  char v17; // [rsp+90h] [rbp+40h] BYREF
  LPVOID pv; // [rsp+A0h] [rbp+50h] BYREF
  struct IUnknown *v19; // [rsp+A8h] [rbp+58h] BYREF

  ATL::CSimpleStringT<unsigned short,0>::Empty(a2);
  v4 = *a1;
  v14 = 0LL;
  v19 = 0LL;
  v16 = 0LL;
  v15 = 0LL;
  pv = 0LL;
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct IUnknown **))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         v4,
         &v14);
  if ( v5 >= 0 )
  {
    v6 = v19;
    if ( v19 != v14 )
    {
      ATL::AtlComQIPtrAssign(&v19, v14, &GUID_1be09788_6894_4089_8586_9a2a6c265ac5);
      v6 = v19;
    }
    v5 = ((__int64 (__fastcall *)(struct IUnknown *, char *))v6->lpVtbl[1].QueryInterface)(v6, &v17);
    if ( v5 >= 0 )
    {
      v5 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64))v14->lpVtbl[1].QueryInterface)(
             v14,
             &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
             23LL);
      if ( v5 >= 0 )
      {
        v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v16 + 32LL))(v16, 0LL, &v15);
        if ( v5 >= 0 )
        {
          v5 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v15 + 72LL))(v15, &pv);
          if ( v5 >= 0 )
          {
            v7 = (wint_t *)pv;
            v8 = 0;
            if ( !*(_WORD *)pv )
              goto LABEL_18;
            do
            {
              if ( *v7 == 35 )
                ++v8;
              if ( v8 == 2 )
              {
                v13 = v7[1];
                for ( ++v7; v13 != 35; ++v7 )
                {
                  if ( !v13 )
                    break;
                  v13 = v7[1];
                }
                v8 = 3;
              }
              v9 = towlower(*v7);
              v10 = *(unsigned int *)(*a2 - 16LL);
              v11 = v10 + 1;
              if ( (int)((*(_DWORD *)(*a2 - 12LL) - (v10 + 1)) | (1 - *(_DWORD *)(*a2 - 8LL))) < 0 )
                ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(a2, (unsigned int)v11);
              *(_WORD *)(*a2 + 2 * v10) = v9;
              if ( v11 < 0 || v11 > *(_DWORD *)(*a2 - 12LL) )
                ATL::AtlThrowImpl(-2147024809);
              *(_DWORD *)(*a2 - 16LL) = v11;
              ++v7;
              *(_WORD *)(*a2 + 2LL * v11) = 0;
            }
            while ( *v7 );
          }
        }
      }
    }
  }
  v7 = (wint_t *)pv;
LABEL_18:
  if ( v7 )
  {
    CoTaskMemFree(v7);
    pv = 0LL;
  }
  if ( v5 < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      14LL,
      &WPP_c170edd1854f90c7cdf4fa9bb21811dc_Traceguids,
      (unsigned int)v5);
  }
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  if ( v19 )
    ((void (__fastcall *)(struct IUnknown *))v19->lpVtbl->Release)(v19);
  if ( v14 )
    ((void (__fastcall *)(struct IUnknown *))v14->lpVtbl->Release)(v14);
  return (unsigned int)v5;
}
