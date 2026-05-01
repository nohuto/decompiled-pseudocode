/*
 * XREFs of ?GetAppMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIAppMemoryReport@23@@Z @ 0x1800036A0
 * Callers:
 *     <none>
 * Callees:
 *     RmpBindToRmRpcServer @ 0x180001CF0 (RmpBindToRmRpcServer.c)
 *     ?RegisterWithServer@ModernResourceManagerProxy@@IEAAJXZ @ 0x180003F30 (-RegisterWithServer@ModernResourceManagerProxy@@IEAAJXZ.c)
 *     ?RegisterCommitMemoryCallback@ModernResourceManagerProxy@@QEAAJP6AXPEAU_RM_COMMIT_LEVEL_CHANGE_PAYLOAD@@@ZP6AX_K2@Z@Z @ 0x180004050 (-RegisterCommitMemoryCallback@ModernResourceManagerProxy@@QEAAJP6AXPEAU_RM_COMMIT_LEVEL_CHANGE_P.c)
 *     ??0ModernResourceManagerProxy@@QEAA@XZ @ 0x1800040E0 (--0ModernResourceManagerProxy@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180006040 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180006064 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180006558 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180006710 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@VCAppMemoryReport@System@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180007F04 (--1-$ComPtr@VCAppMemoryReport@System@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x18000921C (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Windows::System::CMemoryManager::GetAppMemoryReport(
        Windows::System::CMemoryManager *this,
        struct Windows::System::IAppMemoryReport **a2)
{
  int InformationProcess; // eax
  signed int v4; // eax
  signed int v5; // edi
  ModernResourceManagerProxy *v6; // rbx
  int v7; // edi
  ModernResourceManagerProxy *v8; // rax
  ModernResourceManagerProxy *v9; // rax
  void (*v10)(struct _RM_COMMIT_LEVEL_CHANGE_PAYLOAD *); // rdx
  void (*v11)(unsigned __int64, unsigned __int64); // r8
  ModernResourceManagerProxy *v12; // rsi
  NTSTATUS v13; // eax
  signed int v14; // eax
  __int64 v15; // rbx
  unsigned __int64 v16; // rdi
  struct Windows::System::IAppMemoryReport *v17; // rcx
  unsigned __int64 v18; // rsi
  volatile signed __int64 *v19; // rax
  volatile signed __int64 *v20; // rbx
  struct Windows::System::IAppMemoryReport *v21; // rcx
  struct Microsoft::WRL::Details::ModuleBase *v23; // rcx
  void (*v24)(void); // rax
  __int64 (__fastcall *v25)(Windows::System::CAppMemoryReport *__hidden, unsigned __int64, unsigned __int64, unsigned __int64, unsigned __int64); // rax
  __int64 (__fastcall *v26)(Windows::System::CAppMemoryReport *__hidden, const struct _GUID *, void **); // rax
  unsigned int (__fastcall *v27)(Windows::System::CAppMemoryReport *__hidden); // rax
  signed __int64 v28; // rax
  signed __int64 v29; // rtt
  struct Windows::System::IAppMemoryReport *v30; // [rsp+38h] [rbp-79h] BYREF
  __int64 v31; // [rsp+40h] [rbp-71h] BYREF
  int v32; // [rsp+48h] [rbp-69h] BYREF
  __int64 v33; // [rsp+50h] [rbp-61h]
  char v34[4]; // [rsp+58h] [rbp-59h] BYREF
  ULONG v35; // [rsp+5Ch] [rbp-55h] BYREF
  __int128 v36; // [rsp+60h] [rbp-51h]
  __int128 v37; // [rsp+70h] [rbp-41h]
  __int64 v38; // [rsp+80h] [rbp-31h]
  char v39[8]; // [rsp+88h] [rbp-29h] BYREF
  __int64 v40; // [rsp+90h] [rbp-21h]
  _OWORD ProcessInformation[2]; // [rsp+98h] [rbp-19h] BYREF
  __int64 v42; // [rsp+B8h] [rbp+7h]
  char SystemInformation[16]; // [rsp+C0h] [rbp+Fh] BYREF
  __int64 v44; // [rsp+D0h] [rbp+1Fh]

  v30 = 0LL;
  InformationProcess = NtQueryInformationProcess(
                         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                         ProcessBasePriority|0x40,
                         ProcessInformation,
                         0x28u,
                         0LL);
  if ( InformationProcess < 0 )
  {
LABEL_2:
    v4 = RtlNtStatusToDosError(InformationProcess);
    v5 = v4;
    if ( v4 > 0 )
      v5 = (unsigned __int16)v4 | 0x80070000;
    goto LABEL_30;
  }
  v6 = 0LL;
  RtlAcquireSRWLockExclusive(&Windows::System::CMemoryManager::s_Lock);
  if ( Windows::System::CMemoryManager::s_pProxy )
  {
    v7 = 0;
  }
  else
  {
    v8 = (ModernResourceManagerProxy *)operator new(0x58uLL);
    if ( v8 && (v9 = ModernResourceManagerProxy::ModernResourceManagerProxy(v8), (v6 = v9) != 0LL) )
    {
      v7 = RmpBindToRmRpcServer(&unk_18000E000, (RPC_BINDING_HANDLE *)v9 + 2);
      if ( v7 >= 0 )
      {
        v7 = ModernResourceManagerProxy::RegisterCommitMemoryCallback(v6, v10, v11);
        if ( v7 >= 0 )
        {
          if ( Windows::System::CMemoryManager::s_pProxy )
            (*(void (__fastcall **)(ModernResourceManagerProxy *))(*(_QWORD *)Windows::System::CMemoryManager::s_pProxy
                                                                 + 16LL))(Windows::System::CMemoryManager::s_pProxy);
          Windows::System::CMemoryManager::s_pProxy = v6;
          v7 = 0;
          v6 = 0LL;
        }
      }
    }
    else
    {
      v7 = -2147024882;
    }
  }
  RtlReleaseSRWLockExclusive(&Windows::System::CMemoryManager::s_Lock);
  if ( v6 )
    (*(void (__fastcall **)(ModernResourceManagerProxy *))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v7 < 0 )
  {
    v15 = v42;
    goto LABEL_26;
  }
  v12 = Windows::System::CMemoryManager::s_pProxy;
  RtlAcquireSRWLockExclusive((char *)Windows::System::CMemoryManager::s_pProxy + 72);
  *((_DWORD *)v12 + 20) = GetCurrentThreadId();
  v5 = ModernResourceManagerProxy::RegisterWithServer(v12);
  if ( v5 < 0 )
  {
    v15 = v31;
  }
  else
  {
    v32 = 16;
    v13 = NtQueryWnfStateData((char *)v12 + 48, 0LL, 0LL, v34, v39, &v32);
    if ( v13 >= 0 )
    {
      v15 = v40;
      v5 = 0;
    }
    else
    {
      v14 = RtlNtStatusToDosError(v13);
      v15 = v31;
      v5 = v14;
      if ( v14 > 0 )
        v5 = (unsigned __int16)v14 | 0x80070000;
    }
  }
  *((_DWORD *)v12 + 20) = 0;
  RtlReleaseSRWLockExclusive((char *)v12 + 72);
  if ( v5 >= 0 )
  {
LABEL_26:
    if ( ((v15 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
    {
      InformationProcess = NtQuerySystemInformation(
                             MaxSystemInfoClass|SystemFullMemoryInformation,
                             SystemInformation,
                             0x20u,
                             &v35);
      if ( InformationProcess < 0 )
        goto LABEL_2;
      v15 = v44 * RmpPageSize;
    }
    v33 = v15;
    v5 = 0;
    v36 = ProcessInformation[0];
    v38 = v42;
    v37 = ProcessInformation[1];
  }
LABEL_30:
  if ( v5 < 0 )
  {
LABEL_35:
    v21 = v30;
    goto LABEL_36;
  }
  v16 = *((_QWORD *)&v36 + 1);
  v17 = v30;
  v18 = *((_QWORD *)&v36 + 1) + v36;
  if ( v30 )
  {
    v30 = 0LL;
    (*(void (__fastcall **)(struct Windows::System::IAppMemoryReport *))(*(_QWORD *)v17 + 16LL))(v17);
  }
  v30 = 0LL;
  v31 = 0LL;
  v19 = (volatile signed __int64 *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v20 = v19;
  if ( !v19 )
  {
    Microsoft::WRL::ComPtr<Windows::System::CAppMemoryReport>::~ComPtr<Windows::System::CAppMemoryReport>(&v31);
    v5 = -2147024882;
    goto LABEL_35;
  }
  v23 = Microsoft::WRL::Details::ModuleBase::module_;
  *((_QWORD *)v19 + 4) = 1LL;
  *v19 = (volatile signed __int64)&Microsoft::WRL::RuntimeClass<Windows::System::IAppMemoryReport,IInspectable,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  *((_QWORD *)v19 + 1) = &Microsoft::WRL::RuntimeClass<Windows::System::IAppMemoryReport,IInspectable,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)v19 + 2) = &Microsoft::WRL::RuntimeClass<Windows::System::IAppMemoryReport,IInspectable,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>,1,0>'};
  if ( v23 )
  {
    v24 = *(void (**)(void))(*(_QWORD *)v23 + 8LL);
    if ( (char *)v24 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
    {
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
      v16 = *((_QWORD *)&v36 + 1);
    }
    else
    {
      v24();
    }
  }
  *((_QWORD *)v20 + 5) = 0LL;
  *v20 = (volatile signed __int64)&Windows::System::CAppMemoryReport::`vftable';
  *((_QWORD *)v20 + 1) = &Windows::System::CAppMemoryReport::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)v20 + 2) = &Windows::System::CAppMemoryReport::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>,1,0>'};
  v25 = (__int64 (__fastcall *)(Windows::System::CAppMemoryReport *__hidden, unsigned __int64, unsigned __int64, unsigned __int64, unsigned __int64))*(&Windows::System::CAppMemoryReport::`vftable' + 11);
  *((_QWORD *)v20 + 6) = 0LL;
  *((_QWORD *)v20 + 7) = 0LL;
  *((_QWORD *)v20 + 8) = 0LL;
  v31 = (__int64)v20;
  if ( v25 == Windows::System::CAppMemoryReport::RuntimeClassInitialize )
  {
    *((_QWORD *)v20 + 6) = v37;
    *((_QWORD *)v20 + 8) = v33;
    *((_QWORD *)v20 + 5) = v16;
    *((_QWORD *)v20 + 7) = v18;
  }
  else
  {
    v5 = v25((Windows::System::CAppMemoryReport *)v20, v16, v37, v18, v33);
    if ( v5 < 0 )
    {
      Microsoft::WRL::ComPtr<Windows::System::CAppMemoryReport>::~ComPtr<Windows::System::CAppMemoryReport>(&v31);
      goto LABEL_59;
    }
  }
  v26 = **(__int64 (__fastcall ***)(Windows::System::CAppMemoryReport *__hidden, const struct _GUID *, void **))v20;
  if ( v26 == Windows::System::CAppMemoryReport::QueryInterface )
  {
    v30 = (struct Windows::System::IAppMemoryReport *)v20;
    v27 = *(unsigned int (__fastcall **)(Windows::System::CAppMemoryReport *__hidden))(*v20 + 8);
    if ( v27 == Windows::System::CAppMemoryReport::AddRef )
    {
      v28 = *((_QWORD *)v20 + 4);
      while ( v28 >= 0 )
      {
        if ( (_DWORD)v28 == 0x7FFFFFFF )
          goto LABEL_56;
        v29 = v28;
        v28 = _InterlockedCompareExchange64(v20 + 4, v28 + 1, v28);
        if ( v29 == v28 )
        {
          v5 = 0;
          goto LABEL_58;
        }
      }
      Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v28 + 16));
      v5 = 0;
    }
    else
    {
      v27((Windows::System::CAppMemoryReport *)v20);
LABEL_56:
      v5 = 0;
    }
  }
  else
  {
    v5 = v26((Windows::System::CAppMemoryReport *)v20, &GUID_6d65339b_4d6f_45bc_9c5e_e49b3ff2758d, (void **)&v30);
  }
LABEL_58:
  (*(void (__fastcall **)(volatile signed __int64 *))(*v20 + 16))(v20);
LABEL_59:
  if ( v5 < 0 )
    goto LABEL_35;
  v21 = 0LL;
  *a2 = v30;
LABEL_36:
  if ( v21 )
  {
    v30 = 0LL;
    (*(void (__fastcall **)(struct Windows::System::IAppMemoryReport *))(*(_QWORD *)v21 + 16LL))(v21);
  }
  return (unsigned int)v5;
}
