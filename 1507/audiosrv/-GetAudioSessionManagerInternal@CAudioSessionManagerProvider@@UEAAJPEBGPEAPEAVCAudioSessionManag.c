/*
 * XREFs of ?GetAudioSessionManagerInternal@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z @ 0x18002B330
 * Callers:
 *     ?GetAudioSessionManager@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z @ 0x18002B1B0 (-GetAudioSessionManager@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
 *     ?SetEndpointId@CAudioSessionManager@@QEAAJPEBG@Z @ 0x18001934C (-SetEndpointId@CAudioSessionManager@@QEAAJPEBG@Z.c)
 *     ??0CAudioSessionManager@@QEAA@XZ @ 0x1800194B4 (--0CAudioSessionManager@@QEAA@XZ.c)
 *     ?Add@?$CAtlArray@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@@ATL@@QEAA_KPEBG@Z @ 0x18002BA30 (-Add@-$CAtlArray@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$CElementTrait.c)
 *     ?Add@?$CAtlArray@PEAVCAudioSessionManager@@V?$CElementTraits@PEAVCAudioSessionManager@@@ATL@@@ATL@@QEAA_KAEBQEAVCAudioSessionManager@@@Z @ 0x18002BA9C (-Add@-$CAtlArray@PEAVCAudioSessionManager@@V-$CElementTraits@PEAVCAudioSessionManager@@@ATL@@@AT.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 *     ?RemoveAt@?$CAtlArray@PEAVCAudioSessionManager@@V?$CElementTraits@PEAVCAudioSessionManager@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x18006755C (-RemoveAt@-$CAtlArray@PEAVCAudioSessionManager@@V-$CElementTraits@PEAVCAudioSessionManager@@@ATL.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_S @ 0x18006B12C (WPP_SF_S.c)
 *     ?HasTooManyReferences@@YA_NPEAUIUnknown@@@Z @ 0x180072F90 (-HasTooManyReferences@@YA_NPEAUIUnknown@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSessionManagerProvider::GetAudioSessionManagerInternal(
        CAudioSessionManagerProvider *this,
        wchar_t *a2,
        struct IUnknown **a3)
{
  struct IUnknown **v3; // r15
  wchar_t *v4; // r13
  CAudioSessionManagerProvider *v5; // r14
  unsigned __int64 v6; // rbx
  int v7; // esi
  unsigned int v8; // edi
  unsigned __int64 v9; // rcx
  struct IUnknown *v10; // r9
  __int64 v11; // rcx
  HANDLE ProcessHeap; // rax
  CAudioSessionManager *v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  CAudioSessionManager *v16; // rdi
  unsigned __int64 v17; // rdx
  _QWORD *v18; // rcx
  ATL::CAtlException *v20; // rbx
  ATL::CAtlException *v21; // rbx
  CAudioSessionManager *v22; // [rsp+20h] [rbp-68h] BYREF
  CAudioSessionManager *v23; // [rsp+28h] [rbp-60h]
  __int64 v24; // [rsp+30h] [rbp-58h]
  ATL::CAtlException *v25; // [rsp+38h] [rbp-50h] BYREF
  ATL::CAtlException *v26; // [rsp+40h] [rbp-48h] BYREF
  char v30; // [rsp+A8h] [rbp+20h]

  v24 = -2LL;
  v3 = a3;
  v4 = a2;
  v5 = this;
  v6 = 0LL;
  v7 = 0;
  v30 = 0;
  *a3 = 0LL;
  if ( a2 )
  {
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_S(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        14LL,
        &WPP_abd27309d5392e00f5af32e14a1baf25_Traceguids,
        a2);
    }
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v5 + 64));
    v8 = 0;
    if ( *((_QWORD *)v5 + 14) )
    {
      v9 = 0LL;
      while ( 1 )
      {
        if ( v9 >= *((_QWORD *)v5 + 18) )
          ATL::AtlThrowImpl(-2147024809);
        if ( !_wcsicmp(*(const wchar_t **)(*((_QWORD *)v5 + 17) + 8 * v9), v4) )
          break;
        v9 = ++v8;
        if ( (unsigned __int64)v8 >= *((_QWORD *)v5 + 14) )
          goto LABEL_20;
      }
      if ( (unsigned __int64)v8 >= *((_QWORD *)v5 + 14) )
        ATL::AtlThrowImpl(-2147024809);
      v10 = *(struct IUnknown **)(*((_QWORD *)v5 + 13) + 8LL * v8);
      *v3 = v10;
      v11 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 == &WPP_GLOBAL_Control
        || (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) < 4u )
      {
LABEL_21:
        if ( *v3 )
          goto LABEL_54;
        if ( (struct _GUID *)v11 != &WPP_GLOBAL_Control
          && (*(_BYTE *)(v11 + 28) & 0x40) != 0
          && *(_BYTE *)(v11 + 25) >= 4u )
        {
          WPP_SF_(*(_QWORD *)(v11 + 16), 0x10u, (__int64)&WPP_abd27309d5392e00f5af32e14a1baf25_Traceguids);
        }
        ProcessHeap = GetProcessHeap();
        v13 = (CAudioSessionManager *)HeapAlloc(ProcessHeap, 0, 0x108uLL);
        v23 = v13;
        if ( v13 )
          v16 = CAudioSessionManager::CAudioSessionManager(v13);
        else
          v16 = 0LL;
        v23 = v16;
        v22 = v16;
        if ( !v16 )
        {
          v7 = -2147024882;
          goto LABEL_57;
        }
        v7 = CAudioSessionManager::SetEndpointId((int **)v16, (char *)v4, v14, v15);
        if ( v7 < 0 )
        {
LABEL_43:
          if ( v16 )
          {
            if ( v30 )
            {
              v17 = *((_QWORD *)v5 + 14);
              if ( v17 )
              {
                v18 = (_QWORD *)((char *)v5 + 104);
                while ( 1 )
                {
                  if ( v6 >= *((_QWORD *)v5 + 14) )
                    ATL::AtlThrowImpl(-2147024809);
                  if ( *(CAudioSessionManager **)(*v18 + 8 * v6) == v16 )
                    break;
                  if ( ++v6 >= v17 )
                    goto LABEL_53;
                }
                ATL::CAtlArray<CAudioSessionManager *,ATL::CElementTraits<CAudioSessionManager *>>::RemoveAt(v18);
              }
            }
LABEL_53:
            (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v16 + 1) + 24LL))((__int64)v16 + 8, 1LL);
          }
LABEL_57:
          LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v5 + 64));
          if ( v7 >= 0 )
            return (unsigned int)v7;
          goto LABEL_58;
        }
        if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
          && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
        {
          WPP_SF_q(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
            17LL,
            &WPP_abd27309d5392e00f5af32e14a1baf25_Traceguids,
            v16);
        }
        try
        {
          ATL::CAtlArray<CAudioSessionManager *,ATL::CElementTraits<CAudioSessionManager *>>::Add(
            (char *)v5 + 104,
            &v22);
        }
        catch ( ATL::CAtlException *v25 )
        {
          v20 = v25;
          if ( *(_DWORD *)v25 == -1073741571 )
            _resetstkoflw();
          LODWORD(v22) = *(_DWORD *)v20;
          v7 = (int)v22;
          if ( (int)v22 < 0 )
          {
LABEL_42:
            v6 = 0LL;
            v5 = this;
            v16 = v23;
            goto LABEL_43;
          }
          v5 = this;
          v3 = a3;
          v4 = a2;
          v16 = v23;
        }
        v30 = 1;
        v7 = 0;
        try
        {
          ATL::CAtlArray<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>>::Add(
            (char *)v5 + 136,
            v4);
        }
        catch ( ATL::CAtlException *v26 )
        {
          v21 = v26;
          if ( *(_DWORD *)v26 == -1073741571 )
            _resetstkoflw();
          LODWORD(v22) = *(_DWORD *)v21;
          v7 = (int)v22;
          if ( (int)v22 >= 0 )
          {
            v5 = this;
            v3 = a3;
            v16 = v23;
            goto LABEL_41;
          }
          goto LABEL_42;
        }
LABEL_41:
        *v3 = (struct IUnknown *)v16;
LABEL_54:
        if ( HasTooManyReferences(*v3 + 1) )
          v7 = -2147024882;
        else
          ((void (__fastcall *)(struct IUnknown *))(*v3)->lpVtbl->AddRef)(*v3);
        goto LABEL_57;
      }
      WPP_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        15LL,
        &WPP_abd27309d5392e00f5af32e14a1baf25_Traceguids,
        v10);
    }
LABEL_20:
    v11 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    goto LABEL_21;
  }
  v7 = -2147024809;
LABEL_58:
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      18LL,
      &WPP_abd27309d5392e00f5af32e14a1baf25_Traceguids,
      (unsigned int)v7);
  }
  return (unsigned int)v7;
}
