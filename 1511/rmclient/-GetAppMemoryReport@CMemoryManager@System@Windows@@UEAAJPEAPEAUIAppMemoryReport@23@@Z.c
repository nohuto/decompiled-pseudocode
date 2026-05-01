/*
 * XREFs of ?GetAppMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIAppMemoryReport@23@@Z @ 0x180003FB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800088D8 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x180008E40 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180008F4C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_check_icall_nop @ 0x180009170 (_guard_check_icall_nop.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800093F0 (-Release@-$RuntimeClass@U-$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@W.c)
 */

__int64 __fastcall Windows::System::CMemoryManager::GetAppMemoryReport(
        Windows::System::CMemoryManager *this,
        struct Windows::System::IAppMemoryReport **a2)
{
  int v3; // eax
  unsigned __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // r15
  struct Microsoft::WRL::Details::ModuleBase *v7; // rax
  struct Microsoft::WRL::Details::ModuleBase *v8; // rbx
  struct Microsoft::WRL::Details::ModuleBase *v9; // r14
  void (__fastcall *v10)(struct Microsoft::WRL::Details::ModuleBase *); // rbp
  __int64 (__fastcall *v11)(Windows::System::CAppMemoryReport *, __int64, __int64, __int64, unsigned __int64); // rbp
  __int64 (__fastcall *v12)(Windows::System::CAppMemoryReport *, const struct _GUID *, void **); // rdi
  __int64 (__fastcall *v13)(Windows::System::CAppMemoryReport *); // rdi
  signed __int64 v14; // rax
  signed __int64 v15; // rtt
  signed int v16; // esi
  __int64 (__fastcall *v17)(Windows::System::CAppMemoryReport *); // rdi
  signed __int64 v18; // rax
  signed __int32 v19; // ecx
  signed __int64 v20; // rtt
  Windows::System::CAppMemoryReport *(__fastcall *v21)(Windows::System::CAppMemoryReport *, char); // rdi
  __int64 v22; // rcx
  struct Windows::System::IAppMemoryReport *v23; // rdi
  signed int v25; // eax
  struct Windows::System::IAppMemoryReport *v26; // [rsp+30h] [rbp-88h] BYREF
  ULONG v27; // [rsp+38h] [rbp-80h] BYREF
  __int64 v28; // [rsp+40h] [rbp-78h] BYREF
  __int64 v29; // [rsp+48h] [rbp-70h]
  __int64 v30; // [rsp+50h] [rbp-68h]
  unsigned __int64 v31; // [rsp+58h] [rbp-60h]
  unsigned __int64 v32; // [rsp+60h] [rbp-58h]
  char SystemInformation[16]; // [rsp+68h] [rbp-50h] BYREF
  __int64 v34; // [rsp+78h] [rbp-40h]

  v26 = 0LL;
  v3 = NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessBasePriority|0x40, &v28, 0x28u, 0LL);
  if ( v3 >= 0 )
  {
    v4 = v32;
    if ( v32 || (v4 = v31) != 0 )
    {
LABEL_6:
      v5 = v29;
      v6 = v29 + v28;
      v26 = 0LL;
      v7 = (struct Microsoft::WRL::Details::ModuleBase *)operator new(
                                                           0x48uLL,
                                                           (const struct std::nothrow_t *)&std::nothrow);
      v8 = v7;
      if ( !v7 )
      {
        v16 = -2147024882;
        goto LABEL_32;
      }
      v9 = Microsoft::WRL::Details::ModuleBase::module_;
      *((_QWORD *)v7 + 4) = 1LL;
      *(_QWORD *)v7 = &Microsoft::WRL::RuntimeClass<Windows::System::IAppMemoryReport,IInspectable,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
      *((_QWORD *)v7 + 1) = &Microsoft::WRL::RuntimeClass<Windows::System::IAppMemoryReport,IInspectable,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IWeakReferenceSource'};
      *((_QWORD *)v7 + 2) = &Microsoft::WRL::RuntimeClass<Windows::System::IAppMemoryReport,IInspectable,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>,1,0>'};
      if ( v9 )
      {
        v10 = *(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v9 + 8LL);
        if ( (char *)v10 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
        {
          _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
          v5 = v29;
        }
        else
        {
          v10(v9);
        }
      }
      v11 = (__int64 (__fastcall *)(Windows::System::CAppMemoryReport *, __int64, __int64, __int64, unsigned __int64))*(&Windows::System::CAppMemoryReport::`vftable' + 11);
      *(_QWORD *)v8 = &Windows::System::CAppMemoryReport::`vftable';
      *((_QWORD *)v8 + 1) = &Windows::System::CAppMemoryReport::`vftable'{for `IWeakReferenceSource'};
      *((_QWORD *)v8 + 2) = &Windows::System::CAppMemoryReport::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>,1,0>'};
      *((_QWORD *)v8 + 5) = 0LL;
      *((_QWORD *)v8 + 6) = 0LL;
      *((_QWORD *)v8 + 7) = 0LL;
      *((_QWORD *)v8 + 8) = 0LL;
      if ( v11 == Windows::System::CAppMemoryReport::RuntimeClassInitialize )
      {
        *((_QWORD *)v8 + 6) = v30;
        *((_QWORD *)v8 + 5) = v5;
        *((_QWORD *)v8 + 7) = v6;
        *((_QWORD *)v8 + 8) = v4;
      }
      else
      {
        v16 = v11(v8, v5, v30, v6, v4);
        if ( v16 < 0 )
        {
          v17 = *(__int64 (__fastcall **)(Windows::System::CAppMemoryReport *))(*(_QWORD *)v8 + 16LL);
          goto LABEL_39;
        }
      }
      v12 = **(__int64 (__fastcall ***)(Windows::System::CAppMemoryReport *, const struct _GUID *, void **))v8;
      if ( v12 == Windows::System::CAppMemoryReport::QueryInterface )
      {
        v26 = v8;
        v13 = *(__int64 (__fastcall **)(Windows::System::CAppMemoryReport *))(*(_QWORD *)v8 + 8LL);
        if ( v13 == Windows::System::CAppMemoryReport::AddRef )
        {
          v14 = *((_QWORD *)v8 + 4);
          while ( v14 >= 0 )
          {
            v15 = v14;
            v14 = _InterlockedCompareExchange64((volatile signed __int64 *)v8 + 4, v14 + 1, v14);
            if ( v15 == v14 )
              goto LABEL_17;
          }
          _InterlockedIncrement((volatile signed __int32 *)(2 * v14 + 16));
        }
        else
        {
          v13(v8);
        }
LABEL_17:
        v16 = 0;
      }
      else
      {
        v16 = v12(v8, &GUID_6d65339b_4d6f_45bc_9c5e_e49b3ff2758d, (void **)&v26);
      }
      v17 = *(__int64 (__fastcall **)(Windows::System::CAppMemoryReport *))(*(_QWORD *)v8 + 16LL);
      if ( v17 == Windows::System::CAppMemoryReport::Release )
      {
        v18 = *((_QWORD *)v8 + 4);
        while ( v18 >= 0 )
        {
          v19 = v18 - 1;
          v20 = v18;
          v18 = _InterlockedCompareExchange64((volatile signed __int64 *)v8 + 4, v18 - 1, v18);
          if ( v20 == v18 )
            goto LABEL_22;
        }
        v19 = _InterlockedDecrement((volatile signed __int32 *)(2 * v18 + 16));
LABEL_22:
        if ( v19 )
          goto LABEL_30;
        v21 = *(Windows::System::CAppMemoryReport *(__fastcall **)(Windows::System::CAppMemoryReport *, char))(*(_QWORD *)v8 + 80LL);
        if ( v21 == Windows::System::CAppMemoryReport::`vector deleting destructor' )
        {
          v22 = *((_QWORD *)v8 + 4);
          *(_QWORD *)v8 = &Windows::System::CAppMemoryReport::`vftable';
          *((_QWORD *)v8 + 1) = &Windows::System::CAppMemoryReport::`vftable'{for `IWeakReferenceSource'};
          *((_QWORD *)v8 + 2) = &Windows::System::CAppMemoryReport::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>,1,0>'};
          if ( v22 < 0 )
            Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(2 * v22);
          operator delete(v8);
        }
        else
        {
          v21(v8, 1);
        }
        v8 = Microsoft::WRL::Details::ModuleBase::module_;
        if ( !Microsoft::WRL::Details::ModuleBase::module_ )
          goto LABEL_30;
        v17 = *(__int64 (__fastcall **)(Windows::System::CAppMemoryReport *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                            + 16LL);
        if ( (char *)v17 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount )
        {
          _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
          goto LABEL_30;
        }
      }
LABEL_39:
      v17(v8);
LABEL_30:
      if ( v16 >= 0 )
      {
        *a2 = v26;
        v26 = 0LL;
      }
      goto LABEL_32;
    }
    v3 = NtQuerySystemInformation(MaxSystemInfoClass|SystemFullMemoryInformation, SystemInformation, 0x20u, &v27);
    if ( v3 >= 0 )
    {
      v4 = v34 * (unsigned int)RmpPageSize;
      goto LABEL_6;
    }
  }
  v25 = RtlNtStatusToDosError(v3);
  v16 = v25;
  if ( v25 > 0 )
    v16 = (unsigned __int16)v25 | 0x80070000;
LABEL_32:
  v23 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(struct Windows::System::IAppMemoryReport *))(*(_QWORD *)v23 + 16LL))(v23);
  }
  return (unsigned int)v16;
}
