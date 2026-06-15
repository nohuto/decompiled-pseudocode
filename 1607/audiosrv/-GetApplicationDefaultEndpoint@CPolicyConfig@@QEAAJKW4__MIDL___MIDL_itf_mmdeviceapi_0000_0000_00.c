/*
 * XREFs of ?GetApplicationDefaultEndpoint@CPolicyConfig@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAPEAG@Z @ 0x180011380
 * Callers:
 *     s_rtgGetDefaultAudioEndpoint @ 0x1800110E0 (s_rtgGetDefaultAudioEndpoint.c)
 * Callees:
 *     ??4?$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x1800129B0 (--4-$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180027B6C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CPolicyConfig::GetApplicationDefaultEndpoint(
        CPolicyConfig *this,
        unsigned int a2,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002 a3,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a4,
        unsigned __int16 **a5)
{
  __int64 v6; // r14
  CPolicyConfig *v8; // r15
  struct ATL::CStringData *(__fastcall *v9)(ATL::CAtlStringMgr *__hidden); // rax
  __int64 *v10; // rax
  int v11; // edi
  ATL::CAtlException *v12; // r8
  __int64 v13; // rdx
  unsigned __int8 v14; // al
  int v15; // ecx
  unsigned __int16 *v16; // rdx
  char *v18; // r8
  __int64 v19; // rdx
  unsigned __int8 v20; // al
  ATL::CAtlException *v21; // rbx
  ATL::CAtlException *v22; // rbx
  __int64 v23; // rdx
  __int64 i; // rdx
  unsigned __int16 *v25; // rbx
  unsigned __int64 v26; // rsi
  unsigned __int16 *v27; // rax
  int v28; // [rsp+34h] [rbp-134h]
  int v29; // [rsp+38h] [rbp-130h]
  int v30; // [rsp+3Ch] [rbp-12Ch]
  unsigned __int16 *v31; // [rsp+40h] [rbp-128h] BYREF
  int v32; // [rsp+48h] [rbp-120h] BYREF
  int v33; // [rsp+50h] [rbp-118h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp-110h]
  char v35; // [rsp+60h] [rbp-108h]
  unsigned int v36; // [rsp+68h] [rbp-100h]
  unsigned int v37; // [rsp+70h] [rbp-F8h]
  int v38; // [rsp+74h] [rbp-F4h]
  int v39; // [rsp+78h] [rbp-F0h]
  unsigned int v40; // [rsp+80h] [rbp-E8h]
  unsigned int v41; // [rsp+88h] [rbp-E0h]
  int v42; // [rsp+8Ch] [rbp-DCh]
  int v43; // [rsp+90h] [rbp-D8h]
  __int64 v44; // [rsp+98h] [rbp-D0h]
  __int64 v45; // [rsp+A0h] [rbp-C8h]
  __int64 v46; // [rsp+A8h] [rbp-C0h]
  unsigned __int16 **v47; // [rsp+B0h] [rbp-B8h]
  _DWORD v48[2]; // [rsp+B8h] [rbp-B0h] BYREF
  __int64 v49; // [rsp+C0h] [rbp-A8h]
  __int64 v50; // [rsp+C8h] [rbp-A0h]
  char *v51; // [rsp+D0h] [rbp-98h]
  ATL::CAtlException *v52[2]; // [rsp+D8h] [rbp-90h] BYREF
  ATL::CAtlException *v53; // [rsp+E8h] [rbp-80h] BYREF
  void *v54; // [rsp+F0h] [rbp-78h] BYREF
  int v55; // [rsp+F8h] [rbp-70h]
  int v56; // [rsp+FCh] [rbp-6Ch]
  void *v57; // [rsp+100h] [rbp-68h]
  int v58; // [rsp+108h] [rbp-60h]
  int v59; // [rsp+10Ch] [rbp-5Ch]
  const char *v60; // [rsp+110h] [rbp-58h]
  __int64 v61; // [rsp+118h] [rbp-50h]
  int *v62; // [rsp+120h] [rbp-48h]
  __int64 v63; // [rsp+128h] [rbp-40h]
  int *v64; // [rsp+130h] [rbp-38h]
  __int64 v65; // [rsp+138h] [rbp-30h]

  v50 = -2LL;
  v6 = a3;
  v47 = a5;
  v8 = g_PolicyConfig;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)g_PolicyConfig + 120);
  EnterCriticalSection((LPCRITICAL_SECTION)g_PolicyConfig + 3);
  v35 = 1;
  v9 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24LL);
  if ( v9 == ATL::CAtlStringMgr::GetNilString )
  {
    _InterlockedIncrement(&dword_1800CB020);
    v10 = &qword_1800CB010;
  }
  else
  {
    v10 = (__int64 *)v9((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  }
  v31 = (unsigned __int16 *)(v10 + 3);
  if ( (unsigned int)v6 > 2 )
    goto LABEL_48;
  if ( a4 == eRender )
  {
    v11 = 0;
    try
    {
      v12 = (CPolicyConfig *)((char *)v8 + 64 * v6 + 8 * v6 + 160);
      v52[1] = v12;
      v40 = a2;
      v41 = a2;
      if ( *((_DWORD *)v12 + 4) == 17 )
        v13 = a2 % 0x11;
      else
        v13 = a2 % *((_DWORD *)v12 + 4);
      v42 = v13;
      if ( *(_QWORD *)v12 )
      {
        for ( i = *(_QWORD *)(*(_QWORD *)v12 + 8 * v13); ; i = *(_QWORD *)(i + 16) )
        {
          v46 = i;
          if ( !i )
            break;
          v43 = *(_DWORD *)(i + 24);
          if ( v43 == a2 && *(_DWORD *)i == a2 )
          {
            ATL::CSimpleStringT<unsigned short,0>::operator=(&v31);
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
    catch ( ATL::CAtlException *v53 )
    {
      v21 = v53;
      if ( *(_DWORD *)v53 == -1073741571 )
        _o__resetstkoflw();
      v28 = *(_DWORD *)v21;
      v15 = v30;
      goto LABEL_46;
    }
    goto LABEL_11;
  }
  if ( a4 != eCapture )
  {
LABEL_48:
    v11 = -2147024809;
    goto LABEL_14;
  }
  v11 = 0;
  try
  {
    v18 = (char *)v8 + 64 * v6 + 8 * v6 + 376;
    v51 = v18;
    v36 = a2;
    v37 = a2;
    if ( *((_DWORD *)v18 + 4) == 17 )
      v19 = a2 % 0x11;
    else
      v19 = a2 % *((_DWORD *)v18 + 4);
    v38 = v19;
    if ( !*(_QWORD *)v18 )
      goto LABEL_26;
    v23 = *(_QWORD *)(*(_QWORD *)v18 + 8 * v19);
    v44 = v23;
    while ( v23 )
    {
      v39 = *(_DWORD *)(v23 + 24);
      if ( v39 == a2 && *(_DWORD *)v23 == a2 )
      {
        v45 = v23;
        goto LABEL_38;
      }
      v23 = *(_QWORD *)(v23 + 16);
      v44 = v23;
    }
    v23 = 0LL;
    v45 = 0LL;
LABEL_38:
    if ( v23 )
    {
      ATL::CSimpleStringT<unsigned short,0>::operator=(&v31);
      v20 = 1;
    }
    else
    {
LABEL_26:
      v20 = 0;
    }
    v15 = v20;
    v29 = v20;
  }
  catch ( ATL::CAtlException *v52 )
  {
    v22 = v52[0];
    if ( *(_DWORD *)v52[0] == -1073741571 )
      _o__resetstkoflw();
    v28 = *(_DWORD *)v22;
    v15 = v29;
LABEL_46:
    v11 = v28;
  }
LABEL_11:
  if ( v11 >= 0 )
  {
    if ( v15 )
    {
      v25 = v31;
      v26 = *((_DWORD *)v31 - 4) + 1;
      v27 = (unsigned __int16 *)CoTaskMemAlloc(2 * v26);
      *v47 = v27;
      StringCchCopyW(v27, v26, v25);
      goto LABEL_16;
    }
    v11 = -2147023728;
  }
LABEL_14:
  v33 = v11;
  v32 = 4211;
  if ( dword_1800CA040 > 4u )
  {
    v60 = "CPolicyConfig::GetApplicationDefaultEndpoint";
    v61 = 45LL;
    v62 = &v32;
    v63 = 4LL;
    v64 = &v33;
    v65 = 4LL;
    v48[0] = ((unsigned int)&unk_1800A7C74 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v48[1] = 4;
    v49 = 0LL;
    v54 = off_1800CA048;
    v55 = *(unsigned __int16 *)off_1800CA048;
    v56 = 2;
    v57 = &unk_1800A7C7F;
    v58 = 35;
    v59 = 1;
    EtwEventWriteTransfer(qword_1800CA060, v48, 0LL, 0LL, 5, &v54);
  }
LABEL_16:
  v16 = v31 - 12;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v31 - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v16 + 8LL))(*(_QWORD *)v16);
  if ( v35 )
  {
    LeaveCriticalSection(lpCriticalSection);
    v35 = 0;
  }
  return (unsigned int)v11;
}
