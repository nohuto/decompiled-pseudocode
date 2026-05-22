/*
 * XREFs of ??1DWMInputRouter@@MEAA@XZ @ 0x180011DE8
 * Callers:
 *     ??_EDWMInputRouter@@MEAAPEAXI@Z @ 0x180011C94 (--_EDWMInputRouter@@MEAAPEAXI@Z.c)
 *     ??_GMPCInputRouter@@EEAAPEAXI@Z @ 0x180083F7C (--_GMPCInputRouter@@EEAAPEAXI@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ??1?$KernelInputConnection@U_MIT_INPUT_FOCUS_MESSAGE@@@@QEAA@XZ @ 0x180011D44 (--1-$KernelInputConnection@U_MIT_INPUT_FOCUS_MESSAGE@@@@QEAA@XZ.c)
 *     ?GetKeys@?$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAAJPEAUtagMsgRoutingInfo@@I@Z @ 0x180018C18 (-GetKeys@-$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAAJPEAUtagMsgRoutingInfo@.c)
 *     ??_V@YAXPEAX_K@Z @ 0x18009DF08 (--_V@YAXPEAX_K@Z.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18009DF10 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18009E024 (--_U@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=27
void __fastcall DWMInputRouter::~DWMInputRouter(DWMInputRouter *this)
{
  char *v2; // r14
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  unsigned __int64 v8; // rbx
  _QWORD *v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rbp
  int Keys; // eax
  __int64 v13; // rcx
  unsigned int v14; // esi
  int v15; // eax
  __int64 v16; // rcx
  __int64 i; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 j; // r8
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  char *v30; // rcx
  char *v31; // rbx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rcx
  _OWORD v48[2]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v49; // [rsp+60h] [rbp-28h]

  *(_QWORD *)this = &DWMInputRouter::`vftable'{for `ISystemInputRouter'};
  *((_QWORD *)this + 1) = &DWMInputRouter::`vftable'{for `IInputDisplayDeviceBinding'};
  *((_QWORD *)this + 2) = &DWMInputRouter::`vftable'{for `IRemoteViewHitTest'};
  *((_QWORD *)this + 3) = &DWMInputRouter::`vftable'{for `IRemoteViewHitTestRequest'};
  *((_QWORD *)this + 4) = &DWMInputRouter::`vftable'{for `IMessageObjectOwner'};
  *((_QWORD *)this + 5) = &DWMInputRouter::`vftable'{for `IInputDeviceInfoStore'};
  *((_QWORD *)this + 6) = &DWMInputRouter::`vftable'{for `IInputRouterStatics'};
  v2 = (char *)this + 56;
  *((_QWORD *)this + 7) = &DWMInputRouter::`vftable'{for `IInputDeliveryServerHost'};
  *((_QWORD *)this + 8) = &DWMInputRouter::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  v3 = *((_QWORD *)this + 17);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  *((_QWORD *)this + 17) = 0LL;
  v4 = *((_QWORD *)this + 18);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  *((_QWORD *)this + 18) = 0LL;
  v5 = *((_QWORD *)this + 28);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  *((_QWORD *)this + 28) = 0LL;
  v6 = *((_QWORD *)this + 27);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  *((_QWORD *)this + 27) = 0LL;
  v7 = *((_QWORD *)this + 29);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  *((_QWORD *)this + 29) = 0LL;
  v8 = *((unsigned int *)this + 23);
  if ( (_DWORD)v8 )
  {
    v9 = operator new[](saturated_mul(v8, 0x28uLL));
    v11 = v9;
    if ( v9 )
    {
      Keys = DynamicSizeMap<tagMsgRoutingInfo,IInputTarget *,1>::GetKeys((char *)this + 80, v9, (unsigned int)v8);
      if ( Keys >= 0 )
      {
        v14 = 0;
        while ( 1 )
        {
          v48[0] = *(_OWORD *)&v11[5 * v14];
          v48[1] = *(_OWORD *)&v11[5 * v14 + 2];
          v49 = v11[5 * v14 + 4];
          v15 = (*(__int64 (__fastcall **)(char *, _OWORD *))(*(_QWORD *)v2 + 32LL))(v2, v48);
          if ( v15 < 0 )
            break;
          if ( ++v14 >= (unsigned int)v8 )
          {
            operator delete(v11);
            goto LABEL_27;
          }
        }
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          Template_qqq(v16, &MinInput_Warning_CheckResult, 0, 853, v15);
      }
      else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        Template_qqq(v13, &MinInput_Warning_CheckResult, 0, 848, Keys);
      }
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      Template_qqq(v10, &MinInput_Warning_CheckResult, 0, 843, 14);
    }
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
LABEL_27:
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 22); i = (unsigned int)(i + 1) )
  {
    v18 = 6LL * (unsigned int)i;
    v19 = *((_QWORD *)this + 10);
    *(_OWORD *)(v19 + 8 * v18) = *((_OWORD *)this + 6);
    *(_OWORD *)(v19 + 8 * v18 + 16) = *((_OWORD *)this + 7);
    *(_QWORD *)(v19 + 8 * v18 + 32) = *((_QWORD *)this + 16);
  }
  *((_DWORD *)this + 23) = 0;
  for ( j = 0LL; (unsigned int)j < *((_DWORD *)this + 50); j = (unsigned int)(j + 1) )
  {
    i = 2LL * (unsigned int)j;
    *(_DWORD *)(*((_QWORD *)this + 24) + 16LL * (unsigned int)j) = *((_DWORD *)this + 52);
  }
  *((_DWORD *)this + 51) = 0;
  v21 = *((_QWORD *)this + 19);
  if ( v21 )
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v21 + 16LL))(v21, i, j);
  *((_QWORD *)this + 19) = 0LL;
  v22 = *((_QWORD *)this + 20);
  if ( v22 )
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v22 + 16LL))(v22, i, j);
  *((_QWORD *)this + 20) = 0LL;
  v23 = *((_QWORD *)this + 18);
  if ( v23 )
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v23 + 16LL))(v23, i, j);
  *((_QWORD *)this + 18) = 0LL;
  v24 = *((_QWORD *)this + 88);
  if ( v24 )
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v24 + 16LL))(v24, i, j);
  *((_QWORD *)this + 88) = 0LL;
  v25 = *((_QWORD *)this + 90);
  if ( v25 )
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v25 + 16LL))(v25, i, j);
  *((_QWORD *)this + 90) = 0LL;
  v26 = *((unsigned int *)this + 240);
  if ( (_DWORD)v26 )
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 119) + 144LL))(
      *((_QWORD *)this + 119),
      v26,
      j);
  *((_DWORD *)this + 240) = 0;
  v27 = *((_QWORD *)this + 119);
  if ( v27 )
  {
    *((_QWORD *)this + 119) = 0LL;
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v27 + 16LL))(v27, v26, j);
  }
  KernelInputConnection<_MIT_INPUT_FOCUS_MESSAGE>::~KernelInputConnection<_MIT_INPUT_FOCUS_MESSAGE>(
    (__int64 *)this + 103,
    v26);
  v28 = *((_QWORD *)this + 102);
  if ( v28 )
  {
    *((_QWORD *)this + 102) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  }
  v29 = *((_QWORD *)this + 101);
  if ( v29 )
  {
    *((_QWORD *)this + 101) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  }
  operator delete(*((void **)this + 98));
  v30 = (char *)*((_QWORD *)this + 94);
  if ( v30 )
  {
    v31 = v30 - 8;
    `eh vector destructor iterator'(
      v30,
      0x50uLL,
      *((_QWORD *)v30 - 1),
      DynamicSizeMap<_GUID,std::function<long (IHitTestRequest *,void *,std::vector<Microsoft::WRL::ComPtr<IInputTarget>> *)>,1>::MapEntry::~MapEntry);
    operator delete[](v31, 80LL * *(_QWORD *)v31 + 8);
  }
  v32 = *((_QWORD *)this + 93);
  *((_QWORD *)this + 93) = 0LL;
  if ( v32 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  v33 = *((_QWORD *)this + 92);
  *((_QWORD *)this + 92) = 0LL;
  if ( v33 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  v34 = *((_QWORD *)this + 90);
  *((_QWORD *)this + 90) = 0LL;
  if ( v34 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
  v35 = *((_QWORD *)this + 89);
  *((_QWORD *)this + 89) = 0LL;
  if ( v35 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  v36 = *((_QWORD *)this + 88);
  *((_QWORD *)this + 88) = 0LL;
  if ( v36 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
  v37 = *((_QWORD *)this + 87);
  *((_QWORD *)this + 87) = 0LL;
  if ( v37 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  v38 = *((_QWORD *)this + 86);
  *((_QWORD *)this + 86) = 0LL;
  if ( v38 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
  `eh vector destructor iterator'((char *)this + 248, 0x58uLL, 5uLL, (void (*)(void *))DeviceBinding::~DeviceBinding);
  v39 = *((_QWORD *)this + 29);
  *((_QWORD *)this + 29) = 0LL;
  if ( v39 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
  v40 = *((_QWORD *)this + 28);
  *((_QWORD *)this + 28) = 0LL;
  if ( v40 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
  v41 = *((_QWORD *)this + 27);
  *((_QWORD *)this + 27) = 0LL;
  if ( v41 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
  operator delete(*((void **)this + 24));
  v42 = *((_QWORD *)this + 22);
  *((_QWORD *)this + 22) = 0LL;
  if ( v42 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
  v43 = *((_QWORD *)this + 21);
  *((_QWORD *)this + 21) = 0LL;
  if ( v43 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
  v44 = *((_QWORD *)this + 20);
  *((_QWORD *)this + 20) = 0LL;
  if ( v44 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
  v45 = *((_QWORD *)this + 19);
  *((_QWORD *)this + 19) = 0LL;
  if ( v45 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
  v46 = *((_QWORD *)this + 18);
  *((_QWORD *)this + 18) = 0LL;
  if ( v46 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
  v47 = *((_QWORD *)this + 17);
  *((_QWORD *)this + 17) = 0LL;
  if ( v47 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
  operator delete(*((void **)this + 10));
  *((_QWORD *)this + 8) = &RefCountedObject::`vftable';
}
