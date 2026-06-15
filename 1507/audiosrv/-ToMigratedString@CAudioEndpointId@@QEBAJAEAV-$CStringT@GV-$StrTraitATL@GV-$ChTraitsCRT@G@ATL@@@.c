/*
 * XREFs of ?ToMigratedString@CAudioEndpointId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180036E50
 * Callers:
 *     ?ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@H@Z @ 0x180036D68 (-ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@.c)
 * Callees:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180017740 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x180017928 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x18002B950 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall CAudioEndpointId::ToMigratedString(__int64 *a1, __int64 *a2)
{
  __int64 v4; // rdi
  int v5; // r13d
  struct IUnknown *v6; // rbx
  wint_t *v7; // rdi
  int v8; // r12d
  __int64 v9; // r8
  __int64 v10; // r9
  wint_t v11; // r15
  __int64 v12; // rsi
  signed int v13; // ebx
  wint_t v15; // ax
  struct IUnknown *v16; // [rsp+30h] [rbp-20h] BYREF
  __int64 v17; // [rsp+38h] [rbp-18h] BYREF
  __int64 v18; // [rsp+40h] [rbp-10h]
  char v19; // [rsp+90h] [rbp+40h] BYREF
  LPVOID pv; // [rsp+A0h] [rbp+50h] BYREF
  struct IUnknown *v21; // [rsp+A8h] [rbp+58h] BYREF

  ATL::CSimpleStringT<unsigned short,0>::Empty(a2);
  v4 = *a1;
  v16 = 0LL;
  v21 = 0LL;
  v18 = 0LL;
  v17 = 0LL;
  pv = 0LL;
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct IUnknown **))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         v4,
         &v16);
  if ( v5 >= 0 )
  {
    v6 = v21;
    if ( v21 != v16 )
    {
      ATL::AtlComQIPtrAssign(&v21, v16, &GUID_1be09788_6894_4089_8586_9a2a6c265ac5);
      v6 = v21;
    }
    v5 = ((__int64 (__fastcall *)(struct IUnknown *, char *))v6->lpVtbl[1].QueryInterface)(v6, &v19);
    if ( v5 >= 0 )
    {
      v5 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64))v16->lpVtbl[1].QueryInterface)(
             v16,
             &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
             23LL);
      if ( v5 >= 0 )
      {
        v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v18 + 32LL))(v18, 0LL, &v17);
        if ( v5 >= 0 )
        {
          v5 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v17 + 72LL))(v17, &pv);
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
                v15 = v7[1];
                for ( ++v7; v15 != 35; ++v7 )
                {
                  if ( !v15 )
                    break;
                  v15 = v7[1];
                }
                v8 = 3;
              }
              v11 = towlower(*v7);
              v12 = *(unsigned int *)(*a2 - 16);
              v13 = v12 + 1;
              if ( (int)((*(_DWORD *)(*a2 - 12) - (v12 + 1)) | (1 - *(_DWORD *)(*a2 - 8))) < 0 )
                ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((int **)a2, v13, v9, v10);
              *(_WORD *)(*a2 + 2 * v12) = v11;
              if ( v13 < 0 || v13 > *(_DWORD *)(*a2 - 12) )
                ATL::AtlThrowImpl(-2147024809);
              *(_DWORD *)(*a2 - 16) = v13;
              ++v7;
              *(_WORD *)(*a2 + 2LL * v13) = 0;
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
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0xEu,
      (__int64)&WPP_c170edd1854f90c7cdf4fa9bb21811dc_Traceguids,
      v5);
  }
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  if ( v21 )
    ((void (__fastcall *)(struct IUnknown *))v21->lpVtbl->Release)(v21);
  if ( v16 )
    ((void (__fastcall *)(struct IUnknown *))v16->lpVtbl->Release)(v16);
  return (unsigned int)v5;
}
