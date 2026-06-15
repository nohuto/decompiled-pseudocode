/*
 * XREFs of ?Initialize@CStreamGroup@@UEAAJPEAUSTREAM_GROUP_DESCRIPTOR@@@Z @ 0x140004310
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateStreamGroupDescriptor@@YAJPEAUSTREAM_GROUP_DESCRIPTOR@@@Z @ 0x140002494 (-ValidateStreamGroupDescriptor@@YAJPEAUSTREAM_GROUP_DESCRIPTOR@@@Z.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x140002500 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?AddHead@?$CAtlList@PEAVCStreamGroup@@V?$CElementTraits@PEAVCStreamGroup@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCStreamGroup@@@Z @ 0x140004AD4 (-AddHead@-$CAtlList@PEAVCStreamGroup@@V-$CElementTraits@PEAVCStreamGroup@@@ATL@@@ATL@@QEAAPEAU__.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140008110 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?CreateModePipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSTREAM_GROUP_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14000AE90 (-CreateModePipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSTREAM_GROUP_DESCRIPT.c)
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x14000DB78 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x14000E680 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x140018E40 (__security_check_cookie.c)
 *     memcpy_0 @ 0x140019B52 (memcpy_0.c)
 *     ?AllocateBytes@?$CHeapPtrBase@UtWAVEFORMATEX@@VCComAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x1400266FC (-AllocateBytes@-$CHeapPtrBase@UtWAVEFORMATEX@@VCComAllocator@ATL@@@ATL@@QEAA_N_K@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CStreamGroup::Initialize(CStreamGroup *this, struct STREAM_GROUP_DESCRIPTOR *a2)
{
  int Instance; // esi
  unsigned __int64 v5; // rax
  void *v6; // rax
  unsigned __int64 v7; // rax
  LPVOID v8; // rax
  size_t v9; // r8
  const void *v10; // rdx
  void *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  char *v14; // r8
  unsigned __int64 v15; // r9
  unsigned int v16; // r12d
  __int64 v17; // rcx
  __int64 result; // rax
  __int64 v19; // rcx
  ATL::CAtlException *v20; // rbx
  int ppv; // [rsp+20h] [rbp-78h]
  LPVOID v22[2]; // [rsp+30h] [rbp-68h] BYREF
  ATL::CAtlException *v23; // [rsp+40h] [rbp-58h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-50h] BYREF
  float v25; // [rsp+50h] [rbp-48h]
  int v26; // [rsp+54h] [rbp-44h]
  int v27; // [rsp+58h] [rbp-40h]

  v22[1] = (LPVOID)-2LL;
  Instance = ValidateStreamGroupDescriptor(a2);
  if ( Instance < 0 )
    goto LABEL_11;
  *((_QWORD *)this + 27) = *((_QWORD *)a2 + 6);
  *((_OWORD *)this + 14) = *(_OWORD *)((char *)a2 + 60);
  *((_DWORD *)this + 60) = *(_DWORD *)a2;
  *((_BYTE *)this + 80) = *((_DWORD *)a2 + 1) != 0;
  *((_BYTE *)this + 81) = *((_DWORD *)a2 + 8) != 0;
  v5 = *((unsigned int *)a2 + 9);
  if ( v5 > 0x7FFFFFFF )
  {
    v16 = 0;
    *((_QWORD *)this + 25) = 0LL;
  }
  else
  {
    v6 = CoTaskMemAlloc((unsigned int)v5);
    *((_QWORD *)this + 25) = v6;
    if ( v6 )
    {
      memcpy_0(v6, *((const void **)a2 + 5), *((unsigned int *)a2 + 9));
      v7 = *((unsigned int *)a2 + 3);
      if ( !(_DWORD)v7 )
      {
        if ( (unsigned __int8)ATL::CHeapPtrBase<tWAVEFORMATEX,ATL::CComAllocator>::AllocateBytes(
                                (char *)this + 208,
                                *((unsigned int *)a2 + 9)) )
        {
          v9 = *((unsigned int *)a2 + 9);
          v10 = (const void *)*((_QWORD *)a2 + 5);
          v11 = (void *)*((_QWORD *)this + 26);
LABEL_8:
          memcpy_0(v11, v10, v9);
          v14 = (char *)*((_QWORD *)a2 + 3);
          v15 = -1LL;
          do
            ++v15;
          while ( *(_WORD *)&v14[2 * v15] );
          Instance = _AllocStringWorker<CTCoAllocPolicy>(v13, v12, v14, v15, ppv, (char **)this + 9);
          goto LABEL_11;
        }
        Instance = -2147024882;
LABEL_11:
        v16 = 0;
        goto LABEL_12;
      }
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
        Instance = -2147024882;
        goto LABEL_11;
      }
      v16 = 0;
      *((_QWORD *)this + 26) = 0LL;
    }
    else
    {
      v16 = 0;
    }
  }
  Instance = -2147024882;
LABEL_12:
  if ( !*((_BYTE *)this + 80) )
  {
    if ( Instance < 0 )
      return (unsigned int)Instance;
    v22[0] = 0LL;
    Instance = CoCreateInstance(
                 &GUID_de83650f_8ce4_40ea_a08e_6f0e5cd46f6b,
                 0LL,
                 0x17u,
                 &GUID_97ecdc10_b3b5_4dff_8dcc_abd71ac23c33,
                 v22);
    if ( Instance >= 0 )
    {
      lpCriticalSection = (LPCRITICAL_SECTION)*((_QWORD *)a2 + 6);
      v17 = *((_QWORD *)a2 + 5);
      v25 = (float)*(int *)(v17 + 4);
      v26 = *(unsigned __int16 *)(v17 + 2);
      v27 = *((_DWORD *)a2 + 8);
      Instance = (*(__int64 (__fastcall **)(LPVOID, _QWORD, LPCRITICAL_SECTION *, char *))(*(_QWORD *)v22[0] + 24LL))(
                   v22[0],
                   *((_QWORD *)a2 + 3),
                   &lpCriticalSection,
                   (char *)this + 248);
    }
    if ( v22[0] )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v22[0] + 16LL))(v22[0]);
    if ( Instance < 0 )
      return (unsigned int)Instance;
    if ( *((_DWORD *)a2 + 19) )
    {
      result = CPipeInstance::CreateModePipeInstance(
                 *((struct IDeviceGraphObjectCache **)this + 31),
                 a2,
                 (struct CPipeInstance **)this + 11);
      if ( (int)result < 0 )
        return result;
      result = CPipeInstance::Initialize(*((CPipeInstance **)this + 11));
      if ( (int)result < 0 )
        return result;
      Instance = CPipeInstance::ConnectAPOs(*((CPipeInstance **)this + 11), 0LL);
    }
  }
  if ( Instance < 0 )
    return (unsigned int)Instance;
  lpCriticalSection = &g_CritSecStreamGroupList;
  LOBYTE(v25) = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  try
  {
    v22[0] = this;
    ATL::CAtlList<CStreamGroup *,ATL::CElementTraits<CStreamGroup *>>::AddHead(v19, v22);
  }
  catch ( ATL::CAtlException *v23 )
  {
    v20 = v23;
    if ( *(_DWORD *)v23 == -1073741571 )
      _resetstkoflw();
    LODWORD(v22[0]) = *(_DWORD *)v20;
    v16 = (unsigned int)v22[0];
  }
  if ( LOBYTE(v25) )
    LeaveCriticalSection(lpCriticalSection);
  return v16;
}
