/*
 * XREFs of ?Copy@CAppAudioSessionId@@QEAAJAEBV1@@Z @ 0x18000CD04
 * Callers:
 *     ?Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z @ 0x18000BD44 (-Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z.c)
 * Callees:
 *     ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x18000A920 (-CloneData@-$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x180017680 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CAppAudioSessionId::Copy(CAppAudioSessionId *this, const struct CAppAudioSessionId *a2)
{
  const struct CAppAudioSessionId *v2; // r15
  CAppAudioSessionId *v3; // r14
  __int64 v4; // rdx
  volatile signed __int32 *v5; // rcx
  volatile signed __int32 *v6; // rsi
  volatile signed __int32 *v7; // r13
  __int64 v8; // rdx
  volatile signed __int32 *v9; // rcx
  volatile signed __int32 *v10; // rsi
  volatile signed __int32 *v11; // r13
  unsigned int v12; // esi
  _QWORD *v13; // r12
  __int64 v14; // rdx
  volatile signed __int32 *v15; // rcx
  volatile signed __int32 *v16; // r14
  volatile signed __int32 *v17; // r15
  ATL::CAtlException *v19; // rbx
  ATL::CAtlException *v20; // rbx
  ATL::CAtlException *v21; // rbx
  ATL::CAtlException *v22; // [rsp+28h] [rbp-50h] BYREF
  ATL::CAtlException *v23; // [rsp+30h] [rbp-48h] BYREF
  ATL::CAtlException *v24; // [rsp+38h] [rbp-40h] BYREF

  v2 = a2;
  v3 = this;
  *((_OWORD *)this + 1) = *((_OWORD *)a2 + 1);
  try
  {
    v4 = *(_QWORD *)a2;
    v5 = (volatile signed __int32 *)(v4 - 24);
    v6 = (volatile signed __int32 *)(*(_QWORD *)v3 - 24LL);
    if ( (volatile signed __int32 *)(v4 - 24) != v6 )
    {
      if ( *((int *)v6 + 4) >= 0 && *(_QWORD *)v5 == *(_QWORD *)v6 )
      {
        v7 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v5);
        if ( _InterlockedExchangeAdd(v6 + 4, 0xFFFFFFFF) <= 1 )
          (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v6 + 8LL))(*(_QWORD *)v6, v6);
        *(_QWORD *)v3 = v7 + 6;
      }
      else
      {
        ATL::CSimpleStringT<unsigned short,0>::SetString(v3, v4, *(unsigned int *)(v4 - 16));
      }
    }
  }
  catch ( ATL::CAtlException *v22 )
  {
    v19 = v22;
    if ( *(_DWORD *)v22 == -1073741571 )
      _resetstkoflw();
    v12 = *(_DWORD *)v19;
    if ( *(int *)v19 < 0 )
      goto LABEL_30;
    v3 = this;
    v2 = a2;
  }
  try
  {
    v8 = *((_QWORD *)v2 + 1);
    v9 = (volatile signed __int32 *)(v8 - 24);
    v10 = (volatile signed __int32 *)(*((_QWORD *)v3 + 1) - 24LL);
    if ( (volatile signed __int32 *)(v8 - 24) != v10 )
    {
      if ( *((int *)v10 + 4) >= 0 && *(_QWORD *)v9 == *(_QWORD *)v10 )
      {
        v11 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v9);
        if ( _InterlockedExchangeAdd(v10 + 4, 0xFFFFFFFF) <= 1 )
          (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v10 + 8LL))(*(_QWORD *)v10, v10);
        *((_QWORD *)v3 + 1) = v11 + 6;
      }
      else
      {
        ATL::CSimpleStringT<unsigned short,0>::SetString((char *)v3 + 8, v8, *(unsigned int *)(v8 - 16));
      }
    }
  }
  catch ( ATL::CAtlException *v23 )
  {
    v20 = v23;
    if ( *(_DWORD *)v23 == -1073741571 )
      _resetstkoflw();
    v12 = *(_DWORD *)v20;
    if ( *(int *)v20 < 0 )
      goto LABEL_30;
    v3 = this;
    v2 = a2;
  }
  *((_DWORD *)v3 + 10) = *((_DWORD *)v2 + 10);
  v12 = 0;
  try
  {
    v13 = (_QWORD *)((char *)v3 + 32);
    v14 = *((_QWORD *)v2 + 4);
    v15 = (volatile signed __int32 *)(v14 - 24);
    v16 = (volatile signed __int32 *)(*((_QWORD *)v3 + 4) - 24LL);
    if ( (volatile signed __int32 *)(v14 - 24) != v16 )
    {
      if ( *((int *)v16 + 4) >= 0 && *(_QWORD *)v15 == *(_QWORD *)v16 )
      {
        v17 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v15);
        if ( _InterlockedExchangeAdd(v16 + 4, 0xFFFFFFFF) <= 1 )
          (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v16 + 8LL))(*(_QWORD *)v16, v16);
        *v13 = v17 + 6;
      }
      else
      {
        ATL::CSimpleStringT<unsigned short,0>::SetString(v13, v14, *(unsigned int *)(v14 - 16));
      }
    }
  }
  catch ( ATL::CAtlException *v24 )
  {
    v21 = v24;
    if ( *(_DWORD *)v24 == -1073741571 )
      _resetstkoflw();
    v12 = *(_DWORD *)v21;
    if ( *(int *)v21 < 0 )
    {
LABEL_30:
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
      {
        WPP_SF_D(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          18LL,
          &WPP_c170edd1854f90c7cdf4fa9bb21811dc_Traceguids,
          v12);
      }
    }
  }
  return v12;
}
