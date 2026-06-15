/*
 * XREFs of ?GetApplicationDefaultEndpoint@CPolicyConfig@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAPEAG@Z @ 0x18001EFC0
 * Callers:
 *     s_rtgGetDefaultAudioEndpoint @ 0x18002FF30 (s_rtgGetDefaultAudioEndpoint.c)
 * Callees:
 *     ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x18000A920 (-CloneData@-$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x180017680 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18002E51C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?GetNode@?$CAtlMap@KV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$CElementTraits@K@2@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@@ATL@@AEBAPEAVCNode@12@KAEAI0AEAPEAV312@@Z @ 0x18003204C (-GetNode@-$CAtlMap@KV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$CElementTr.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CPolicyConfig::GetApplicationDefaultEndpoint(
        CPolicyConfig *this,
        unsigned int a2,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002 a3,
        unsigned int a4,
        unsigned __int16 **a5)
{
  __int64 v6; // r14
  CPolicyConfig *v8; // r15
  struct ATL::CStringData *(__fastcall *v9)(ATL::CAtlStringMgr *); // rbx
  __int64 *v10; // rax
  const unsigned __int16 *v11; // rbx
  char *v12; // r8
  __int64 v13; // rdx
  unsigned __int8 v14; // al
  int v15; // ecx
  __int64 Node; // rax
  int v18; // ecx
  ATL::CAtlException *v19; // rbx
  ATL::CAtlException *v20; // rbx
  ATL::CAtlException *v21; // rdx
  volatile signed __int32 *v22; // rcx
  const unsigned __int16 *v23; // rsi
  __int64 i; // rdx
  ATL::CAtlException *v25; // rdx
  volatile signed __int32 *v26; // rcx
  __int64 *v27; // rsi
  unsigned __int64 v28; // rsi
  unsigned __int16 *v29; // rax
  volatile signed __int32 *v30; // [rsp+38h] [rbp-100h] BYREF
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 v31; // [rsp+40h] [rbp-F8h]
  int v32; // [rsp+44h] [rbp-F4h]
  int v33; // [rsp+48h] [rbp-F0h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp-E8h]
  char v35; // [rsp+58h] [rbp-E0h]
  __int64 *v36; // [rsp+60h] [rbp-D8h]
  char v37; // [rsp+68h] [rbp-D0h] BYREF
  unsigned __int16 *v38; // [rsp+70h] [rbp-C8h]
  unsigned int v39; // [rsp+78h] [rbp-C0h]
  volatile signed __int32 *v40; // [rsp+80h] [rbp-B8h]
  int v41; // [rsp+88h] [rbp-B0h]
  char v42; // [rsp+8Ch] [rbp-ACh] BYREF
  unsigned int v43; // [rsp+90h] [rbp-A8h]
  volatile signed __int32 *v44; // [rsp+98h] [rbp-A0h]
  unsigned int v45; // [rsp+A0h] [rbp-98h]
  __int64 v46; // [rsp+A8h] [rbp-90h]
  int v47; // [rsp+B0h] [rbp-88h]
  unsigned int v48; // [rsp+B8h] [rbp-80h]
  __int64 v49; // [rsp+C0h] [rbp-78h]
  char *v50; // [rsp+C8h] [rbp-70h]
  __int64 v51; // [rsp+D0h] [rbp-68h]
  __int64 v52; // [rsp+D8h] [rbp-60h]
  char *v53; // [rsp+E0h] [rbp-58h]
  char *v54; // [rsp+E8h] [rbp-50h]
  ATL::CAtlException *v55[3]; // [rsp+F0h] [rbp-48h] BYREF
  ATL::CAtlException *v56[2]; // [rsp+108h] [rbp-30h] BYREF
  char v57[8]; // [rsp+118h] [rbp-20h] BYREF

  v49 = -2LL;
  v6 = a3;
  v8 = g_PolicyConfig;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)g_PolicyConfig + 120);
  EnterCriticalSection((LPCRITICAL_SECTION)g_PolicyConfig + 3);
  v35 = 1;
  v9 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *))(ATL::g_strmgr + 24LL);
  if ( v9 == ATL::CAtlStringMgr::GetNilString )
  {
    _InterlockedIncrement(dword_1800E84A8);
    v10 = &qword_1800E8498;
  }
  else
  {
    v10 = (__int64 *)v9((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  }
  v11 = (const unsigned __int16 *)(v10 + 3);
  v30 = (volatile signed __int32 *)(v10 + 3);
  if ( (unsigned int)v6 > 2 )
    goto LABEL_51;
  if ( a4 )
  {
    if ( a4 == 1 )
    {
      a4 = 0;
      v32 = 0;
      try
      {
        Node = ATL::CAtlMap<unsigned long,ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>>::GetNode(
                 (int)v8 + 8 * ((int)v6 + 8 * (int)v6 + 47),
                 a2,
                 (unsigned int)&v42,
                 (unsigned int)&v37,
                 (__int64)v57);
        v51 = Node;
        if ( Node )
        {
          v56[1] = (ATL::CAtlException *)(Node + 8);
          v21 = *(ATL::CAtlException **)(Node + 8);
          v22 = (volatile signed __int32 *)((char *)v21 - 24);
          v53 = (char *)v21 - 24;
          v23 = v11 - 12;
          v38 = (unsigned __int16 *)(v11 - 12);
          if ( (const unsigned __int16 *)((char *)v21 - 24) != v11 - 12 )
          {
            if ( *((int *)v23 + 4) >= 0 && *(_QWORD *)v22 == *(_QWORD *)v23 )
            {
              v40 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v22);
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)v23 + 4, 0xFFFFFFFF) <= 1 )
                (*(void (__fastcall **)(_QWORD, unsigned __int16 *))(**(_QWORD **)v38 + 8LL))(*(_QWORD *)v38, v38);
              v11 = (const unsigned __int16 *)(v40 + 6);
              v30 = v40 + 6;
            }
            else
            {
              v43 = *((_DWORD *)v21 - 4);
              v55[2] = v21;
              ATL::CSimpleStringT<unsigned short,0>::SetString((__int64 *)&v30, v21, v43);
              v11 = (const unsigned __int16 *)v30;
            }
          }
          LOBYTE(Node) = 1;
        }
        v18 = (unsigned __int8)Node;
        v32 = (unsigned __int8)Node;
      }
      catch ( ATL::CAtlException *v55 )
      {
        v20 = v55[0];
        if ( *(_DWORD *)v55[0] == -1073741571 )
          _resetstkoflw();
        v31 = *(_DWORD *)v20;
        a4 = v31;
        v11 = (const unsigned __int16 *)v30;
        if ( v31 < eRender )
          goto LABEL_14;
        v18 = v32;
      }
      if ( !v18 )
      {
        a4 = -2147023728;
        goto LABEL_14;
      }
      goto LABEL_50;
    }
LABEL_51:
    a4 = -2147024809;
    goto LABEL_14;
  }
  v33 = 0;
  try
  {
    v12 = (char *)v8 + 64 * v6 + 8 * v6 + 160;
    v50 = v12;
    v48 = a2;
    v39 = a2;
    if ( *((_DWORD *)v12 + 4) == 17 )
      v13 = a2 % 0x11;
    else
      v13 = a2 % *((_DWORD *)v12 + 4);
    v47 = v13;
    if ( *(_QWORD *)v12 )
    {
      for ( i = *(_QWORD *)(*(_QWORD *)v12 + 8 * v13); ; i = *(_QWORD *)(i + 16) )
      {
        v46 = i;
        if ( !i )
          break;
        v41 = *(_DWORD *)(i + 24);
        if ( v41 == a2 && *(_DWORD *)i == a2 )
        {
          v52 = i + 8;
          v25 = *(ATL::CAtlException **)(i + 8);
          v26 = (volatile signed __int32 *)((char *)v25 - 24);
          v54 = (char *)v25 - 24;
          v27 = v10;
          v36 = v10;
          if ( (__int64 *)((char *)v25 - 24) != v10 )
          {
            if ( *((int *)v10 + 4) >= 0 && *(_QWORD *)v26 == *v10 )
            {
              v44 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v26);
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)v27 + 4, 0xFFFFFFFF) <= 1 )
                (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*v36 + 8LL))(*v36, v36);
              v11 = (const unsigned __int16 *)(v44 + 6);
              v30 = v44 + 6;
            }
            else
            {
              v45 = *((_DWORD *)v25 - 4);
              v55[1] = v25;
              ATL::CSimpleStringT<unsigned short,0>::SetString((__int64 *)&v30, v25, v45);
              v11 = (const unsigned __int16 *)v30;
            }
          }
          v14 = 1;
          goto LABEL_10;
        }
      }
    }
    v14 = 0;
LABEL_10:
    v15 = v14;
    v33 = v14;
  }
  catch ( ATL::CAtlException *v56 )
  {
    v19 = v56[0];
    if ( *(_DWORD *)v56[0] == -1073741571 )
      _resetstkoflw();
    v31 = *(_DWORD *)v19;
    a4 = v31;
    v11 = (const unsigned __int16 *)v30;
    v15 = v33;
  }
  if ( (a4 & 0x80000000) == 0 )
  {
    if ( !v15 )
    {
      a4 = -2147023728;
      goto LABEL_14;
    }
LABEL_50:
    v28 = *((_DWORD *)v11 - 4) + 1;
    v29 = (unsigned __int16 *)CoTaskMemAlloc(2 * v28);
    *a5 = v29;
    StringCchCopyW(v29, v28, v11);
  }
LABEL_14:
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v11 - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD, const unsigned __int16 *))(**((_QWORD **)v11 - 3) + 8LL))(
      *((_QWORD *)v11 - 3),
      v11 - 12);
  if ( v35 )
  {
    LeaveCriticalSection(lpCriticalSection);
    v35 = 0;
  }
  return a4;
}
