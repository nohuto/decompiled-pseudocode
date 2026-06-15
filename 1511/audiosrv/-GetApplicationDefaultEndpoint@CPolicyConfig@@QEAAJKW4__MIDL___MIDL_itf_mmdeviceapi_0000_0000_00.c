/*
 * XREFs of ?GetApplicationDefaultEndpoint@CPolicyConfig@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAPEAG@Z @ 0x18001B150
 * Callers:
 *     s_rtgGetDefaultAudioEndpoint @ 0x1800375B0 (s_rtgGetDefaultAudioEndpoint.c)
 * Callees:
 *     ??4?$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x1800183F4 (--4-$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180037010 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CPolicyConfig::GetApplicationDefaultEndpoint(
        CPolicyConfig *this,
        unsigned int a2,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002 a3,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a4,
        unsigned __int16 **a5)
{
  __int64 v6; // rdi
  CPolicyConfig *v8; // r15
  struct ATL::CStringData *(__fastcall *v9)(ATL::CAtlStringMgr *); // r14
  __int64 *v10; // rax
  int v11; // r14d
  char *v12; // r8
  __int64 v13; // rdx
  unsigned __int8 v14; // al
  int v15; // ecx
  unsigned __int16 *v16; // rbx
  ATL::CAtlException *v18; // r8
  __int64 v19; // rdx
  unsigned __int8 v20; // al
  ATL::CAtlException *v21; // rbx
  ATL::CAtlException *v22; // rbx
  __int64 v23; // rdx
  __int64 i; // rdx
  unsigned __int16 *v25; // rbx
  unsigned __int64 v26; // rdi
  unsigned __int16 *v27; // rax
  int v28; // [rsp+24h] [rbp-B4h]
  int v29; // [rsp+28h] [rbp-B0h]
  int v30; // [rsp+2Ch] [rbp-ACh]
  unsigned __int16 *v31; // [rsp+30h] [rbp-A8h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-A0h]
  char v33; // [rsp+40h] [rbp-98h]
  int v34; // [rsp+48h] [rbp-90h]
  __int64 v35; // [rsp+50h] [rbp-88h]
  int v36; // [rsp+58h] [rbp-80h]
  __int64 v37; // [rsp+60h] [rbp-78h]
  unsigned int v38; // [rsp+68h] [rbp-70h]
  __int64 v39; // [rsp+70h] [rbp-68h]
  unsigned int v40; // [rsp+78h] [rbp-60h]
  unsigned int v41; // [rsp+80h] [rbp-58h]
  unsigned int v42; // [rsp+88h] [rbp-50h]
  int v43; // [rsp+90h] [rbp-48h]
  int v44; // [rsp+94h] [rbp-44h]
  __int64 v45; // [rsp+98h] [rbp-40h]
  char *v46; // [rsp+A0h] [rbp-38h]
  ATL::CAtlException *v47; // [rsp+A8h] [rbp-30h] BYREF
  ATL::CAtlException *v48[2]; // [rsp+B0h] [rbp-28h] BYREF

  v45 = -2LL;
  v6 = a3;
  v8 = g_PolicyConfig;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)g_PolicyConfig + 120);
  EnterCriticalSection((LPCRITICAL_SECTION)g_PolicyConfig + 3);
  v33 = 1;
  v9 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *))(ATL::g_strmgr + 24LL);
  if ( v9 == ATL::CAtlStringMgr::GetNilString )
  {
    _InterlockedIncrement(dword_1800E64A8);
    v10 = &qword_1800E6498;
  }
  else
  {
    v10 = (__int64 *)v9((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  }
  v31 = (unsigned __int16 *)(v10 + 3);
  if ( (unsigned int)v6 > 2 )
    goto LABEL_46;
  if ( a4 )
  {
    if ( a4 == eCapture )
    {
      v11 = 0;
      try
      {
        v18 = (CPolicyConfig *)((char *)v8 + 64 * v6 + 8 * v6 + 376);
        v48[1] = v18;
        v42 = a2;
        v41 = a2;
        if ( *((_DWORD *)v18 + 4) == 17 )
          v19 = a2 % 0x11;
        else
          v19 = a2 % *((_DWORD *)v18 + 4);
        v43 = v19;
        if ( !*(_QWORD *)v18 )
          goto LABEL_24;
        v23 = *(_QWORD *)(*(_QWORD *)v18 + 8 * v19);
        v39 = v23;
        while ( v23 )
        {
          v36 = *(_DWORD *)(v23 + 24);
          if ( v36 == a2 && *(_DWORD *)v23 == a2 )
          {
            v35 = v23;
            goto LABEL_36;
          }
          v23 = *(_QWORD *)(v23 + 16);
          v39 = v23;
        }
        v23 = 0LL;
        v35 = 0LL;
LABEL_36:
        if ( v23 )
        {
          ATL::CSimpleStringT<unsigned short,0>::operator=(&v31, (__int64 *)(v23 + 8));
          v20 = 1;
        }
        else
        {
LABEL_24:
          v20 = 0;
        }
        v15 = v20;
        v29 = v20;
      }
      catch ( ATL::CAtlException *v48 )
      {
        v22 = v48[0];
        if ( *(_DWORD *)v48[0] == -1073741571 )
          _resetstkoflw();
        v28 = *(_DWORD *)v22;
        v15 = v29;
LABEL_44:
        v11 = v28;
      }
      goto LABEL_11;
    }
LABEL_46:
    v11 = -2147024809;
    goto LABEL_14;
  }
  v11 = 0;
  try
  {
    v12 = (char *)v8 + 64 * v6 + 8 * v6 + 160;
    v46 = v12;
    v40 = a2;
    v38 = a2;
    if ( *((_DWORD *)v12 + 4) == 17 )
      v13 = a2 % 0x11;
    else
      v13 = a2 % *((_DWORD *)v12 + 4);
    v34 = v13;
    if ( *(_QWORD *)v12 )
    {
      for ( i = *(_QWORD *)(*(_QWORD *)v12 + 8 * v13); ; i = *(_QWORD *)(i + 16) )
      {
        v37 = i;
        if ( !i )
          break;
        v44 = *(_DWORD *)(i + 24);
        if ( v44 == a2 && *(_DWORD *)i == a2 )
        {
          ATL::CSimpleStringT<unsigned short,0>::operator=(&v31, (__int64 *)(i + 8));
          v14 = 1;
          goto LABEL_10;
        }
      }
    }
    v14 = 0;
LABEL_10:
    v15 = v14;
    v30 = v14;
  }
  catch ( ATL::CAtlException *v47 )
  {
    v21 = v47;
    if ( *(_DWORD *)v47 == -1073741571 )
      _resetstkoflw();
    v28 = *(_DWORD *)v21;
    v15 = v30;
    goto LABEL_44;
  }
LABEL_11:
  if ( v11 >= 0 )
  {
    if ( v15 )
    {
      v25 = v31;
      v26 = *((_DWORD *)v31 - 4) + 1;
      v27 = (unsigned __int16 *)CoTaskMemAlloc(2 * v26);
      *a5 = v27;
      StringCchCopyW(v27, v26, v25);
    }
    else
    {
      v11 = -2147023728;
    }
  }
LABEL_14:
  v16 = v31;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v31 - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD, unsigned __int16 *))(**((_QWORD **)v16 - 3) + 8LL))(*((_QWORD *)v16 - 3), v16 - 12);
  if ( v33 )
  {
    LeaveCriticalSection(lpCriticalSection);
    v33 = 0;
  }
  return (unsigned int)v11;
}
