/*
 * XREFs of ?Initialize@CStreamGroup@@UEAAJPEAUSTREAM_GROUP_DESCRIPTOR@@@Z @ 0x140002B20
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateStreamGroupDescriptor@@YAJPEAUSTREAM_GROUP_DESCRIPTOR@@@Z @ 0x140001700 (-ValidateStreamGroupDescriptor@@YAJPEAUSTREAM_GROUP_DESCRIPTOR@@@Z.c)
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x140001D10 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140007990 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x140009490 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x140009F60 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 *     ?CreateModePipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSTREAM_GROUP_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14000F060 (-CreateModePipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSTREAM_GROUP_DESCRIPT.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x1400126C0 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     __security_check_cookie @ 0x140018370 (__security_check_cookie.c)
 *     memcpy_0 @ 0x140019602 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ?AllocateBytes@?$CHeapPtrBase@UtWAVEFORMATEX@@VCComAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x1400254F0 (-AllocateBytes@-$CHeapPtrBase@UtWAVEFORMATEX@@VCComAllocator@ATL@@@ATL@@QEAA_N_K@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140025E9C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CStreamGroup::Initialize(CStreamGroup *this, struct STREAM_GROUP_DESCRIPTOR *a2)
{
  HRESULT Instance; // r14d
  unsigned __int64 v5; // rax
  void *v6; // rax
  unsigned __int64 v7; // rax
  LPVOID v8; // rax
  size_t v9; // r8
  const void *v10; // rdx
  void *v11; // rcx
  const unsigned __int16 *v12; // rdi
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // r13
  unsigned __int16 *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 *i; // rdx
  struct ATL::CAtlPlex *v19; // r8
  __int64 v20; // rax
  __int64 *v21; // rcx
  __int64 v22; // rax
  ATL::CAtlException *v24; // rbx
  unsigned __int16 **ppv; // [rsp+20h] [rbp-88h]
  unsigned __int64 *v26; // [rsp+28h] [rbp-80h]
  unsigned int v27; // [rsp+30h] [rbp-78h]
  LPVOID v28[2]; // [rsp+40h] [rbp-68h] BYREF
  ATL::CAtlException *v29; // [rsp+50h] [rbp-58h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp-50h] BYREF
  float v31; // [rsp+60h] [rbp-48h]
  int v32; // [rsp+64h] [rbp-44h]
  int v33; // [rsp+68h] [rbp-40h]

  v28[1] = (LPVOID)-2LL;
  Instance = ValidateStreamGroupDescriptor(a2);
  if ( Instance < 0 )
    goto LABEL_14;
  *((_QWORD *)this + 27) = *((_QWORD *)a2 + 6);
  *((_OWORD *)this + 14) = *(_OWORD *)((char *)a2 + 60);
  *((_DWORD *)this + 60) = *(_DWORD *)a2;
  *((_BYTE *)this + 80) = *((_DWORD *)a2 + 1) != 0;
  *((_BYTE *)this + 81) = *((_DWORD *)a2 + 8) != 0;
  v5 = *((unsigned int *)a2 + 9);
  if ( v5 > 0x7FFFFFFF )
  {
    *((_QWORD *)this + 25) = 0LL;
    goto LABEL_39;
  }
  v6 = CoTaskMemAlloc((unsigned int)v5);
  *((_QWORD *)this + 25) = v6;
  if ( !v6 )
  {
LABEL_39:
    Instance = -2147024882;
    goto LABEL_14;
  }
  memcpy_0(v6, *((const void **)a2 + 5), *((unsigned int *)a2 + 9));
  v7 = *((unsigned int *)a2 + 3);
  if ( (_DWORD)v7 )
  {
    if ( v7 <= 0x7FFFFFFF )
    {
      v8 = CoTaskMemAlloc((unsigned int)v7);
      *((_QWORD *)this + 26) = v8;
      if ( v8 )
      {
        v9 = *((unsigned int *)a2 + 3);
        v10 = (const void *)*((_QWORD *)a2 + 2);
        v11 = v8;
        goto LABEL_8;
      }
LABEL_43:
      Instance = -2147024882;
      goto LABEL_14;
    }
    *((_QWORD *)this + 26) = 0LL;
    goto LABEL_39;
  }
  if ( !(unsigned __int8)ATL::CHeapPtrBase<tWAVEFORMATEX,ATL::CComAllocator>::AllocateBytes(
                           (char *)this + 208,
                           *((unsigned int *)a2 + 9)) )
    goto LABEL_43;
  v9 = *((unsigned int *)a2 + 9);
  v10 = (const void *)*((_QWORD *)a2 + 5);
  v11 = (void *)*((_QWORD *)this + 26);
LABEL_8:
  memcpy_0(v11, v10, v9);
  v12 = (const unsigned __int16 *)*((_QWORD *)a2 + 3);
  v13 = -1LL;
  do
    ++v13;
  while ( v12[v13] );
  *((_QWORD *)this + 9) = 0LL;
  v14 = v13 + 1;
  if ( v13 + 1 >= v13 )
  {
    *((_QWORD *)this + 9) = 0LL;
    if ( is_mul_ok(v14, 2uLL) )
    {
      v15 = (unsigned __int16 *)CoTaskMemAlloc(2 * v14);
      *((_QWORD *)this + 9) = v15;
      if ( v15 )
      {
        Instance = 0;
        StringCchCopyNExW(v15, v13 + 1, v12, v13, ppv, v26, v27);
        goto LABEL_14;
      }
      goto LABEL_39;
    }
  }
  Instance = -2147024362;
LABEL_14:
  if ( *((_BYTE *)this + 80) )
  {
LABEL_25:
    if ( Instance >= 0 )
    {
      lpCriticalSection = (LPCRITICAL_SECTION)&g_CritSecStreamGroupList;
      LOBYTE(v31) = 0;
      ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
      Instance = 0;
      try
      {
        v17 = StreamGroupList;
        i = (__int64 *)qword_140054570;
        if ( !qword_140054570 )
        {
          v19 = ATL::CAtlPlex::Create(&qword_140054568, (unsigned int)dword_140054578, 0x18uLL);
          if ( !v19 )
            ATL::AtlThrowImpl(-2147024882);
          v20 = (unsigned int)(dword_140054578 - 1);
          v21 = (__int64 *)((char *)v19 + 16 * v20 + 8 * v20 + 8);
          for ( i = (__int64 *)qword_140054570; (int)v20 >= 0; LODWORD(v20) = v20 - 1 )
          {
            *v21 = (__int64)i;
            i = v21;
            qword_140054570 = (__int64)v21;
            v21 -= 3;
          }
        }
        v28[0] = i;
        v22 = *i;
        i[2] = (__int64)this;
        qword_140054570 = v22;
        i[1] = 0LL;
        *i = v17;
        ++qword_140054560;
        if ( StreamGroupList )
          *(_QWORD *)(StreamGroupList + 8) = i;
        else
          qword_140054558 = (__int64)i;
        StreamGroupList = (__int64)i;
      }
      catch ( ATL::CAtlException *v29 )
      {
        v24 = v29;
        if ( *(_DWORD *)v29 == -1073741571 )
          _resetstkoflw();
        LODWORD(v28[0]) = *(_DWORD *)v24;
        Instance = (HRESULT)v28[0];
      }
      if ( LOBYTE(v31) )
        LeaveCriticalSection(lpCriticalSection);
    }
    return (unsigned int)Instance;
  }
  if ( Instance >= 0 )
  {
    v28[0] = 0LL;
    Instance = CoCreateInstance(
                 &GUID_de83650f_8ce4_40ea_a08e_6f0e5cd46f6b,
                 0LL,
                 0x17u,
                 &GUID_97ecdc10_b3b5_4dff_8dcc_abd71ac23c33,
                 v28);
    if ( Instance >= 0 )
    {
      lpCriticalSection = (LPCRITICAL_SECTION)*((_QWORD *)a2 + 6);
      v16 = *((_QWORD *)a2 + 5);
      v31 = (float)*(int *)(v16 + 4);
      v32 = *(unsigned __int16 *)(v16 + 2);
      v33 = *((_DWORD *)a2 + 8);
      Instance = (*(__int64 (__fastcall **)(LPVOID, _QWORD, LPCRITICAL_SECTION *, char *))(*(_QWORD *)v28[0] + 24LL))(
                   v28[0],
                   *((_QWORD *)a2 + 3),
                   &lpCriticalSection,
                   (char *)this + 248);
    }
    if ( v28[0] )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v28[0] + 16LL))(v28[0]);
    if ( Instance >= 0 )
    {
      if ( *((_DWORD *)a2 + 19) )
      {
        Instance = CPipeInstance::CreateModePipeInstance(
                     *((struct IDeviceGraphObjectCache **)this + 31),
                     a2,
                     (struct CPipeInstance **)this + 11);
        if ( Instance < 0 )
          return (unsigned int)Instance;
        Instance = CPipeInstance::Initialize(*((CPipeInstance **)this + 11));
        if ( Instance < 0 )
          return (unsigned int)Instance;
        Instance = CPipeInstance::ConnectAPOs(*((CPipeInstance **)this + 11), 0LL);
      }
      goto LABEL_25;
    }
  }
  return (unsigned int)Instance;
}
