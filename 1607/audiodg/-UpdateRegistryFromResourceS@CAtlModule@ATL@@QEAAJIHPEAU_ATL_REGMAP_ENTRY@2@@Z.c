/*
 * XREFs of ?UpdateRegistryFromResourceS@CAtlModule@ATL@@QEAAJIHPEAU_ATL_REGMAP_ENTRY@2@@Z @ 0x140038084
 * Callers:
 *     ?UpdateRegistry@CCrossProcessClientInputEndpoint@@SAJH@Z @ 0x140038010 (-UpdateRegistry@CCrossProcessClientInputEndpoint@@SAJH@Z.c)
 *     ?UpdateRegistry@CCrossProcessClientOutputEndpoint@@SAJH@Z @ 0x140038030 (-UpdateRegistry@CCrossProcessClientOutputEndpoint@@SAJH@Z.c)
 *     ?UpdateRegistry@CCrossProcessServerInputEndpoint@@SAJH@Z @ 0x140038050 (-UpdateRegistry@CCrossProcessServerInputEndpoint@@SAJH@Z.c)
 *     ?UpdateRegistry@CCrossProcessServerOutputEndpoint@@SAJH@Z @ 0x140038070 (-UpdateRegistry@CCrossProcessServerOutputEndpoint@@SAJH@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x140018370 (__security_check_cookie.c)
 *     memset_0 @ 0x140018550 (memset_0.c)
 *     __report_rangecheckfailure @ 0x140018A18 (__report_rangecheckfailure.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ?Init@CComSafeDeleteCriticalSection@ATL@@QEAAJXZ @ 0x140024D9C (-Init@CComSafeDeleteCriticalSection@ATL@@QEAAJXZ.c)
 *     ??1?$CAtlSafeAllocBufferManager@VCCRTAllocator@ATL@@@_ATL_SAFE_ALLOCA_IMPL@ATL@@QEAA@XZ @ 0x140032794 (--1-$CAtlSafeAllocBufferManager@VCCRTAllocator@ATL@@@_ATL_SAFE_ALLOCA_IMPL@ATL@@QEAA@XZ.c)
 *     ??1CRegObject@ATL@@UEAA@XZ @ 0x140035120 (--1CRegObject@ATL@@UEAA@XZ.c)
 *     ?AddReplacement@CRegObject@ATL@@UEAAJPEBG0@Z @ 0x1400357F0 (-AddReplacement@CRegObject@ATL@@UEAAJPEBG0@Z.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x140035E78 (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 *     ?RegisterFromResource@CRegObject@ATL@@IEAAJPEBG00H@Z @ 0x140037558 (-RegisterFromResource@CRegObject@ATL@@IEAAJPEBG00H@Z.c)
 *     ?ocslen@@YAHPEBG@Z @ 0x140038430 (-ocslen@@YAHPEBG@Z.c)
 */

__int64 __fastcall ATL::CAtlModule::UpdateRegistryFromResourceS(
        ATL::CAtlModule *this,
        unsigned __int16 a2,
        int a3,
        struct ATL::_ATL_REGMAP_ENTRY *a4)
{
  CAudioDGModule *v4; // rdi
  int Error; // ebx
  HMODULE v9; // rbx
  DWORD ModuleFileNameW; // eax
  WCHAR *v11; // rdx
  __int64 v12; // rcx
  unsigned __int16 v13; // r8
  unsigned __int16 *v14; // r8
  int v15; // eax
  int v16; // eax
  unsigned __int64 v17; // rcx
  int v18; // eax
  _QWORD *v19; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD *v20; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v21[3]; // [rsp+48h] [rbp-C0h] BYREF
  int v22; // [rsp+60h] [rbp-A8h]
  struct _RTL_CRITICAL_SECTION v23; // [rsp+68h] [rbp-A0h] BYREF
  char v24; // [rsp+90h] [rbp-78h]
  WCHAR Filename[264]; // [rsp+98h] [rbp-70h] BYREF
  unsigned __int16 Source[520]; // [rsp+2A8h] [rbp+1A0h] BYREF
  unsigned __int16 v27; // [rsp+6B8h] [rbp+5B0h] BYREF
  _BYTE Destination[1054]; // [rsp+6BAh] [rbp+5B2h] BYREF

  v4 = ATL::_pAtlModule;
  v21[0] = &ATL::CRegObject::`vftable';
  v21[1] = 0LL;
  v21[2] = 0LL;
  v22 = 0;
  memset_0(&v23, 0, sizeof(v23));
  v24 = 0;
  Error = ATL::CComSafeDeleteCriticalSection::Init(&v23);
  if ( Error >= 0 )
  {
    Error = (*(__int64 (__fastcall **)(CAudioDGModule *, _QWORD *))(*(_QWORD *)v4 + 40LL))(v4, v21);
    if ( Error >= 0 )
    {
      v9 = hModule;
      v19 = 0LL;
      ModuleFileNameW = GetModuleFileNameW(hModule, Filename, 0x104u);
      if ( !ModuleFileNameW )
      {
        Error = ATL::AtlHresultFromLastError();
LABEL_23:
        ATL::_ATL_SAFE_ALLOCA_IMPL::CAtlSafeAllocBufferManager<ATL::CCRTAllocator>::~CAtlSafeAllocBufferManager<ATL::CCRTAllocator>(&v19);
        goto LABEL_2;
      }
      if ( ModuleFileNameW != 260 )
      {
        v11 = Filename;
        LODWORD(v12) = 0;
        do
        {
          v13 = *v11;
          if ( !*v11 )
            break;
          Source[(unsigned int)v12] = v13;
          if ( v13 == 39 && (unsigned int)v12 < 0x206 )
          {
            v12 = (unsigned int)(v12 + 1);
            Source[v12] = 39;
          }
          ++v11;
          LODWORD(v12) = v12 + 1;
        }
        while ( (unsigned int)v12 < 0x207 );
        Source[(unsigned int)v12] = 0;
        if ( !v9 || v9 == GetModuleHandleW(0LL) )
        {
          v27 = 34;
          v15 = ocslen(Source);
          if ( memcpy_s(Destination, 0x414uLL, Source, 2LL * (v15 + 1)) )
          {
            ATL::_ATL_SAFE_ALLOCA_IMPL::CAtlSafeAllocBufferManager<ATL::CCRTAllocator>::~CAtlSafeAllocBufferManager<ATL::CCRTAllocator>(&v19);
            Error = -2147467259;
            goto LABEL_2;
          }
          v16 = ocslen(&v27);
          *(_WORD *)&Destination[2 * v16 - 2] = 34;
          v17 = 2LL * v16 + 2;
          if ( v17 >= 0x418 )
            _report_rangecheckfailure();
          *(_WORD *)&Destination[v17 - 2] = 0;
          v14 = &v27;
        }
        else
        {
          v14 = Source;
        }
        Error = ATL::CRegObject::AddReplacement((ATL::CRegObject *)v21, L"Module", v14);
        if ( Error >= 0 )
        {
          Error = ATL::CRegObject::AddReplacement((ATL::CRegObject *)v21, L"Module_Raw", Source);
          if ( Error >= 0 )
          {
            v20 = 0LL;
            if ( a3 )
              v18 = ATL::CRegObject::RegisterFromResource(
                      (ATL::CRegObject *)v21,
                      Filename,
                      (const unsigned __int16 *)a2,
                      L"REGISTRY",
                      1);
            else
              v18 = ATL::CRegObject::RegisterFromResource(
                      (ATL::CRegObject *)v21,
                      Filename,
                      (const unsigned __int16 *)a2,
                      L"REGISTRY",
                      0);
            Error = v18;
            ATL::_ATL_SAFE_ALLOCA_IMPL::CAtlSafeAllocBufferManager<ATL::CCRTAllocator>::~CAtlSafeAllocBufferManager<ATL::CCRTAllocator>(&v20);
          }
        }
        goto LABEL_23;
      }
      ATL::_ATL_SAFE_ALLOCA_IMPL::CAtlSafeAllocBufferManager<ATL::CCRTAllocator>::~CAtlSafeAllocBufferManager<ATL::CCRTAllocator>(&v19);
      Error = -2147024774;
    }
  }
LABEL_2:
  ATL::CRegObject::~CRegObject((ATL::CRegObject *)v21);
  return (unsigned int)Error;
}
