/*
 * XREFs of ?InitializeAPOs@CAudioStream@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x180019420
 * Callers:
 *     <none>
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180002144 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017B70 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?InitializeVolumeCoefficientCount@CAudioStream@@UEAAJI@Z @ 0x180019B50 (-InitializeVolumeCoefficientCount@CAudioStream@@UEAAJI@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180054338 (WPP_SF_.c)
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 */

__int64 __fastcall CAudioStream::InitializeAPOs(
        CAudioStream *this,
        __int64 a2,
        unsigned int a3,
        struct IAudioProcessingObject **a4)
{
  unsigned int v7; // r14d
  __int64 (__fastcall ***v8)(_QWORD, GUID *, struct IUnknown **); // rcx
  int v9; // eax
  struct IUnknown *v10; // rcx
  __int64 (__fastcall ***v11)(_QWORD, GUID *, struct IUnknown **); // rcx
  int v12; // eax
  struct IUnknown *v13; // rcx
  __int64 (__fastcall ***v14)(_QWORD, GUID *, struct IUnknown **); // rcx
  int v15; // eax
  struct IUnknown *v16; // rcx
  __int64 (__fastcall ***v17)(_QWORD, GUID *, struct IUnknown **); // rcx
  CAudioSession *v18; // r10
  __int64 v19; // rcx
  int v20; // edi
  __int64 (__fastcall *v21)(CAudioStream *__hidden, unsigned int); // rax
  int v22; // eax
  struct IUnknown *v24; // rsi
  __int64 v25; // rdx
  struct IUnknown *v26; // rsi
  __int64 v27; // rdx
  struct IUnknown *v28; // rsi
  __int64 v29; // rcx
  int v30; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-20h] BYREF
  char v32; // [rsp+28h] [rbp-18h]
  struct IUnknown *v33; // [rsp+70h] [rbp+30h] BYREF
  unsigned int v34; // [rsp+80h] [rbp+40h] BYREF

  if ( !*((_BYTE *)this + 41) )
    *((_DWORD *)this + 31) = 1;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 128);
  v32 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v7 = 0;
  if ( a3 )
  {
    while ( 1 )
    {
      v8 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IUnknown **))*a4;
      v33 = 0LL;
      v9 = (**v8)(v8, &GUID_d81229b1_5a43_480c_92f7_be0f7f4eab60, &v33);
      v10 = v33;
      if ( v9 >= 0 && *((struct IUnknown **)this + 21) != v33 )
      {
        v24 = v33;
        if ( v33 )
        {
          ((void (*)(void))v33->lpVtbl->AddRef)();
          v10 = v33;
        }
        v25 = *((_QWORD *)this + 21);
        if ( v25 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v25 + 16LL))(*((_QWORD *)this + 21));
          v10 = v33;
        }
        *((_QWORD *)this + 21) = v24;
      }
      if ( v10 )
        ((void (__fastcall *)(struct IUnknown *))v10->lpVtbl->Release)(v10);
      v11 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IUnknown **))*a4;
      v33 = 0LL;
      v12 = (**v11)(v11, &GUID_885c7b80_3fa2_4e5a_be07_cf01e1d6e2cd, &v33);
      v13 = v33;
      if ( v12 >= 0 && *((struct IUnknown **)this + 22) != v33 )
      {
        v26 = v33;
        if ( v33 )
        {
          ((void (*)(void))v33->lpVtbl->AddRef)();
          v13 = v33;
        }
        v27 = *((_QWORD *)this + 22);
        if ( v27 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v27 + 16LL))(*((_QWORD *)this + 22));
          v13 = v33;
        }
        *((_QWORD *)this + 22) = v26;
      }
      if ( v13 )
        ((void (__fastcall *)(struct IUnknown *))v13->lpVtbl->Release)(v13);
      v14 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IUnknown **))*a4;
      v33 = 0LL;
      v15 = (**v14)(v14, &GUID_788f7be2_9c40_41c0_af05_4393fbf409f9, &v33);
      v16 = v33;
      if ( v15 >= 0 && *((struct IUnknown **)this + 24) != v33 )
      {
        ATL::AtlComPtrAssign((struct IUnknown **)this + 24, v33);
        v16 = v33;
      }
      if ( v16 )
        ((void (__fastcall *)(struct IUnknown *))v16->lpVtbl->Release)(v16);
      v17 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IUnknown **))*a4;
      v33 = 0LL;
      if ( (int)(**v17)(v17, &GUID_419b26e3_fa99_4408_83de_cc1276efa489, &v33) >= 0 )
      {
        v28 = v33;
        if ( *((struct IUnknown **)this + 23) != v33 )
        {
          if ( v33 )
            ((void (__fastcall *)(struct IUnknown *))v33->lpVtbl->AddRef)(v33);
          v29 = *((_QWORD *)this + 23);
          if ( v29 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
          *((_QWORD *)this + 23) = v28;
        }
        v30 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 23) + 32LL))(
                *((_QWORD *)this + 23),
                (char *)this + 84);
        if ( v30 < 0 )
        {
          v18 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (CAudioSession *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) == 0
            || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
          {
            goto LABEL_15;
          }
          WPP_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            27LL,
            &WPP_56c0583fd767319afe66d4370de2ea71_Traceguids,
            (unsigned int)v30);
        }
      }
      v18 = WPP_GLOBAL_Control;
LABEL_15:
      if ( v33 )
      {
        ((void (__fastcall *)(struct IUnknown *))v33->lpVtbl->Release)(v33);
        v18 = WPP_GLOBAL_Control;
      }
      if ( !*((_QWORD *)this + 21) || !*((_QWORD *)this + 22) || !*((_QWORD *)this + 24) || !*((_QWORD *)this + 23) )
      {
        ++v7;
        ++a4;
        if ( v7 < a3 )
          continue;
      }
      goto LABEL_21;
    }
  }
  v18 = WPP_GLOBAL_Control;
LABEL_21:
  if ( v32 )
  {
    LeaveCriticalSection(lpCriticalSection);
    v18 = WPP_GLOBAL_Control;
  }
  if ( !*((_BYTE *)this + 41) )
  {
    v19 = *((_QWORD *)this + 21);
    if ( v19 )
    {
      v20 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v19 + 40LL))(v19, &v34);
      if ( v20 >= 0 )
      {
        v21 = *(__int64 (__fastcall **)(CAudioStream *__hidden, unsigned int))(*(_QWORD *)this + 152LL);
        if ( v21 == CAudioStream::InitializeVolumeCoefficientCount )
          v22 = CAudioStream::InitializeVolumeCoefficientCount(this, v34);
        else
          v22 = v21(this, v34);
        v20 = v22;
      }
      v18 = WPP_GLOBAL_Control;
    }
    else
    {
      if ( v18 != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_DWORD *)v18 + 7) & 0x200000) != 0
        && *((_BYTE *)v18 + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)v18 + 2), 28LL, &WPP_56c0583fd767319afe66d4370de2ea71_Traceguids);
        v18 = WPP_GLOBAL_Control;
      }
      v20 = -2147467262;
    }
    if ( *((_QWORD *)this + 22) )
    {
      if ( v20 >= 0 )
        return (unsigned int)v20;
    }
    else
    {
      if ( v18 != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_DWORD *)v18 + 7) & 0x200000) != 0
        && *((_BYTE *)v18 + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)v18 + 2), 29LL, &WPP_56c0583fd767319afe66d4370de2ea71_Traceguids);
      }
      v20 = -2147467262;
    }
    AudSrvTraceLoggingErrorHelper("CAudioStream::InitializeAPOs", 0x417u, v20);
    return (unsigned int)v20;
  }
  return 0LL;
}
