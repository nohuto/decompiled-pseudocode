/*
 * XREFs of ?InitializeAPOs@CAudioStream@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x18001D890
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B270 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?InitializeVolumeCoefficientCount@CAudioStream@@UEAAJI@Z @ 0x18001E010 (-InitializeVolumeCoefficientCount@CAudioStream@@UEAAJI@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800342D0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CAudioStream::InitializeAPOs(
        CAudioStream *this,
        __int64 a2,
        unsigned int a3,
        struct IAudioProcessingObject **a4)
{
  unsigned int v7; // r12d
  __int64 (__fastcall ***v8)(_QWORD, GUID *, struct IUnknown **); // rsi
  int v9; // eax
  struct IUnknown *v10; // rbx
  __int64 (__fastcall ***v11)(_QWORD, GUID *, struct IUnknown **); // rsi
  int v12; // eax
  struct IUnknown *v13; // rbx
  __int64 (__fastcall ***v14)(_QWORD, GUID *, struct IUnknown **); // rsi
  int v15; // eax
  struct IUnknown *v16; // rbx
  __int64 (__fastcall ***v17)(_QWORD, GUID *, struct IUnknown **); // rsi
  __int64 v18; // rcx
  __int64 v19; // rsi
  int v20; // ebx
  __int64 (__fastcall *v21)(CAudioStream *__hidden, unsigned int); // rbx
  int v22; // eax
  struct IUnknown *v24; // r14
  __int64 v25; // rsi
  struct IUnknown *v26; // r14
  __int64 v27; // rsi
  struct IUnknown *v28; // rsi
  __int64 v29; // r14
  int v30; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-10h] BYREF
  char v32; // [rsp+28h] [rbp-8h]
  struct IUnknown *v33; // [rsp+70h] [rbp+40h] BYREF
  unsigned int v34; // [rsp+80h] [rbp+50h] BYREF

  *((_DWORD *)this + 29) = 1;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 120);
  v32 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v7 = 0;
  if ( a3 )
  {
    do
    {
      v8 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IUnknown **))*a4;
      v33 = 0LL;
      v9 = (**v8)(v8, &GUID_d81229b1_5a43_480c_92f7_be0f7f4eab60, &v33);
      v10 = v33;
      if ( v9 >= 0 && *((struct IUnknown **)this + 20) != v33 )
      {
        v24 = v33;
        if ( v33 )
        {
          ((void (__fastcall *)(struct IUnknown *))v33->lpVtbl->AddRef)(v33);
          v10 = v33;
        }
        v25 = *((_QWORD *)this + 20);
        if ( v25 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v25 + 16LL))(*((_QWORD *)this + 20));
          v10 = v33;
        }
        *((_QWORD *)this + 20) = v24;
      }
      if ( v10 )
        ((void (__fastcall *)(struct IUnknown *))v10->lpVtbl->Release)(v10);
      v11 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IUnknown **))*a4;
      v33 = 0LL;
      v12 = (**v11)(v11, &GUID_885c7b80_3fa2_4e5a_be07_cf01e1d6e2cd, &v33);
      v13 = v33;
      if ( v12 >= 0 && *((struct IUnknown **)this + 21) != v33 )
      {
        v26 = v33;
        if ( v33 )
        {
          ((void (__fastcall *)(struct IUnknown *))v33->lpVtbl->AddRef)(v33);
          v13 = v33;
        }
        v27 = *((_QWORD *)this + 21);
        if ( v27 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v27 + 16LL))(*((_QWORD *)this + 21));
          v13 = v33;
        }
        *((_QWORD *)this + 21) = v26;
      }
      if ( v13 )
        ((void (__fastcall *)(struct IUnknown *))v13->lpVtbl->Release)(v13);
      v14 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IUnknown **))*a4;
      v33 = 0LL;
      v15 = (**v14)(v14, &GUID_788f7be2_9c40_41c0_af05_4393fbf409f9, &v33);
      v16 = v33;
      if ( v15 >= 0 && *((struct IUnknown **)this + 23) != v33 )
      {
        ATL::AtlComPtrAssign((struct IUnknown **)this + 23, v33);
        v16 = v33;
      }
      if ( v16 )
        ((void (__fastcall *)(struct IUnknown *))v16->lpVtbl->Release)(v16);
      v17 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IUnknown **))*a4;
      v33 = 0LL;
      if ( (int)(**v17)(v17, &GUID_419b26e3_fa99_4408_83de_cc1276efa489, &v33) < 0 )
        goto LABEL_12;
      v28 = v33;
      if ( *((struct IUnknown **)this + 22) != v33 )
      {
        if ( v33 )
          ((void (__fastcall *)(struct IUnknown *))v33->lpVtbl->AddRef)(v33);
        v29 = *((_QWORD *)this + 22);
        if ( v29 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v29 + 16LL))(*((_QWORD *)this + 22));
        *((_QWORD *)this + 22) = v28;
      }
      v30 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 22) + 32LL))(
              *((_QWORD *)this + 22),
              (char *)this + 84);
      if ( v30 < 0 )
      {
        v18 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
        if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
          && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x200000) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
        {
          WPP_SF_D(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
            40LL,
            &WPP_ac8bf37043f63ecae5504e787611946d_Traceguids,
            (unsigned int)v30);
          v18 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
        }
      }
      else
      {
LABEL_12:
        v18 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
      }
      if ( v33 )
      {
        ((void (__fastcall *)(struct IUnknown *))v33->lpVtbl->Release)(v33);
        v18 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
      }
      if ( *((_QWORD *)this + 20) && *((_QWORD *)this + 21) && *((_QWORD *)this + 23) && *((_QWORD *)this + 22) )
        break;
      ++v7;
      ++a4;
    }
    while ( v7 < a3 );
  }
  else
  {
    v18 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  }
  if ( v32 )
  {
    LeaveCriticalSection(lpCriticalSection);
    v18 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  }
  v19 = *((_QWORD *)this + 20);
  if ( v19 )
  {
    v20 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)v19 + 40LL))(*((_QWORD *)this + 20), &v34);
    if ( v20 >= 0 )
    {
      v21 = *(__int64 (__fastcall **)(CAudioStream *__hidden, unsigned int))(*(_QWORD *)this + 144LL);
      if ( v21 == CAudioStream::InitializeVolumeCoefficientCount )
        v22 = CAudioStream::InitializeVolumeCoefficientCount(this, v34);
      else
        v22 = v21(this, v34);
      v20 = v22;
    }
    v18 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  }
  else
  {
    if ( (struct _GUID *)v18 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(v18 + 28) & 0x200000) != 0
      && *(_BYTE *)(v18 + 25) >= 4u )
    {
      WPP_SF_(*(_QWORD *)(v18 + 16), 0x29u, (__int64)&WPP_ac8bf37043f63ecae5504e787611946d_Traceguids);
      v18 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    }
    v20 = -2147467262;
  }
  if ( *((_QWORD *)this + 21) )
  {
    if ( v20 >= 0 )
      return (unsigned int)v20;
  }
  else
  {
    if ( (struct _GUID *)v18 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(v18 + 28) & 0x200000) != 0
      && *(_BYTE *)(v18 + 25) >= 4u )
    {
      WPP_SF_(*(_QWORD *)(v18 + 16), 0x2Au, (__int64)&WPP_ac8bf37043f63ecae5504e787611946d_Traceguids);
      v18 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    }
    v20 = -2147467262;
  }
  if ( (struct _GUID *)v18 != &WPP_GLOBAL_Control && (*(_BYTE *)(v18 + 28) & 0x40) != 0 && *(_BYTE *)(v18 + 25) >= 2u )
    WPP_SF_D(*(_QWORD *)(v18 + 16), 43LL, &WPP_ac8bf37043f63ecae5504e787611946d_Traceguids, (unsigned int)v20);
  return (unsigned int)v20;
}
