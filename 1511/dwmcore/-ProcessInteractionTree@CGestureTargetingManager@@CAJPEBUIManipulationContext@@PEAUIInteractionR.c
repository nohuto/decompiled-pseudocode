/*
 * XREFs of ?ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionResource@@KPEAUInteractionAxisGroup@@2PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@PEAPEAU3@6@Z @ 0x1800F2CE8
 * Callers:
 *     ?ProcessInteractions@CGestureTargetingManager@@SAXPEAUIManipulationContext@@K@Z @ 0x180003CFC (-ProcessInteractions@CGestureTargetingManager@@SAXPEAUIManipulationContext@@K@Z.c)
 *     ?ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionResource@@KPEAUInteractionAxisGroup@@2PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@PEAPEAU3@6@Z @ 0x1800F2CE8 (-ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionR.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x180002120 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ @ 0x180003F94 (-InternalRelease@-$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CombineInteractionFilter@CGestureTargetingManager@@CA?AUInteractionAxis@@AEBU2@0@Z @ 0x1800B4C08 (-CombineInteractionFilter@CGestureTargetingManager@@CA-AUInteractionAxis@@AEBU2@0@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionResource@@KPEAUInteractionAxisGroup@@2PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@PEAPEAU3@6@Z @ 0x1800F2CE8 (-ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionR.c)
 *     RemoveCountFromEndOfArray_D2DVector3_ @ 0x180144904 (RemoveCountFromEndOfArray_D2DVector3_.c)
 *     ?DisableBufferingForInteraction@?A0x734f6366@@YA_NPEBUIManipulationContext@@PEBUIInteractionResource@@K@Z @ 0x180144958 (-DisableBufferingForInteraction@-A0x734f6366@@YA_NPEBUIManipulationContext@@PEBUIInteractionReso.c)
 */

__int64 __fastcall CGestureTargetingManager::ProcessInteractionTree(
        _anonymous_namespace_ *a1,
        struct IManipulationContext *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        unsigned __int64 a6,
        __int64 a7,
        _DWORD *a8,
        struct IManipulationContext **a9,
        struct IManipulationContext **a10)
{
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 (__fastcall *v14)(_anonymous_namespace_ *); // rbx
  __int64 v15; // rdi
  int v16; // esi
  struct IManipulationContext *v17; // rdi
  unsigned int v18; // edi
  __int64 v19; // rax
  _DWORD *v20; // rbx
  int v21; // ecx
  unsigned __int64 v22; // rdx
  int v23; // eax
  bool v24; // zf
  _OWORD *v25; // rax
  const struct IInteractionResource *v26; // r8
  unsigned int v27; // r9d
  _OWORD *v28; // rdx
  struct IManipulationContext **v29; // rbx
  int v32; // [rsp+50h] [rbp-89h]
  __int64 v34[2]; // [rsp+68h] [rbp-71h] BYREF
  unsigned __int64 v35; // [rsp+78h] [rbp-61h]
  unsigned int v36; // [rsp+80h] [rbp-59h] BYREF
  __int64 v37; // [rsp+88h] [rbp-51h] BYREF
  struct IManipulationContext *v38; // [rsp+90h] [rbp-49h]
  unsigned int v39; // [rsp+98h] [rbp-41h] BYREF
  int v40; // [rsp+9Ch] [rbp-3Dh] BYREF
  __int64 v41; // [rsp+A0h] [rbp-39h]
  __int64 v42; // [rsp+A8h] [rbp-31h]
  struct IManipulationContext **v43; // [rsp+B0h] [rbp-29h]
  struct IManipulationContext **v44; // [rsp+B8h] [rbp-21h]
  _QWORD v45[2]; // [rsp+C0h] [rbp-19h] BYREF

  v42 = a5;
  v35 = a6;
  v34[0] = a7;
  v38 = a2;
  *a8 = 3;
  v43 = a10;
  *a9 = 0LL;
  *a10 = 0LL;
  v11 = *(_QWORD *)a1;
  v41 = a4;
  v44 = a9;
  v12 = (*(__int64 (__fastcall **)(_anonymous_namespace_ *, struct IManipulationContext *))(v11 + 32))(a1, a2);
  v13 = *(_QWORD *)a1;
  v45[0] = v12;
  v37 = 0LL;
  v36 = 0;
  v14 = *(__int64 (__fastcall **)(_anonymous_namespace_ *))(v13 + 112);
  v39 = 0;
  v40 = 0;
  v15 = v14(a1);
  Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(&v37);
  v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v15 + 120LL))(v15, a3, &v37);
  if ( v16 < 0 )
    goto LABEL_28;
  v17 = v38;
  v16 = (*(__int64 (__fastcall **)(struct IManipulationContext *, __int64, __int64, unsigned int *, __int64, unsigned int *, unsigned __int64, int *))(*(_QWORD *)v38 + 24LL))(
          v38,
          v37,
          v41,
          &v36,
          v42,
          &v39,
          v35,
          &v40);
  if ( v16 < 0 )
    goto LABEL_28;
  if ( !v45[0] )
    goto LABEL_9;
  v18 = (*(__int64 (__fastcall **)(_anonymous_namespace_ *, _QWORD, _QWORD))(*(_QWORD *)a1 + 56LL))(a1, v45[0], a3);
  if ( (*(unsigned int (__fastcall **)(_anonymous_namespace_ *, struct IManipulationContext *, _QWORD))(*(_QWORD *)a1 + 56LL))(
         a1,
         v38,
         a3) > v18 )
  {
    v17 = v38;
    goto LABEL_9;
  }
  v19 = (*(__int64 (__fastcall **)(_anonymous_namespace_ *, _QWORD))(*(_QWORD *)a1 + 40LL))(a1, v45[0]);
  v17 = v38;
  if ( v19 )
  {
LABEL_9:
    v20 = a8;
    goto LABEL_10;
  }
  v20 = a8;
  if ( !(*(unsigned int (__fastcall **)(struct IManipulationContext *))(*(_QWORD *)v38 + 144LL))(v38) )
    v16 = CGestureTargetingManager::ProcessInteractionTree(
            (_DWORD)a1,
            v45[0],
            a3,
            v41,
            v42,
            v35,
            v34[0],
            (__int64)a8,
            (unsigned __int64)v44,
            (__int64)v43);
LABEL_10:
  if ( v16 >= 0 )
  {
    v21 = v40;
    v32 = v40;
    if ( v40 )
    {
      v22 = v35;
      do
      {
        v23 = *(_DWORD *)(v22 + 24);
        if ( v23 )
        {
          *(_DWORD *)(v22 + 24) = v23 - 1;
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x194u);
          v21 = v32;
          v22 = v35;
        }
        v24 = v21-- == 1;
        v32 = v21;
      }
      while ( !v24 );
    }
    if ( *v20 != 3 )
      goto LABEL_27;
    v45[0] = 0LL;
    v45[1] = 0LL;
    v16 = (*(__int64 (__fastcall **)(struct IManipulationContext *, __int64, __int64, __int64, unsigned __int64, __int64, _DWORD *, _QWORD *))(*(_QWORD *)v17 + 32LL))(
            v17,
            v34[0],
            v41,
            v42,
            v35,
            v37,
            a8,
            v45);
    v25 = (_OWORD *)CGestureTargetingManager::CombineInteractionFilter((__int64)v34, v34[0], (__int64)v45);
    *v28 = *v25;
    if ( v16 >= 0 && *a8 == 2 || *a8 == 1 && `anonymous namespace'::DisableBufferingForInteraction(a1, v17, v26, v27) )
    {
      *a8 = 2;
      v34[0] = (__int64)v17;
      Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(v34);
      Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(v34);
      v16 = 0;
      *v44 = v17;
      Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(v34);
    }
    if ( v16 >= 0 )
    {
      if ( *a8 == 4 )
      {
        *a8 = 3;
        v29 = v43;
        if ( !*v43 )
        {
          v34[0] = (__int64)v17;
          Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(v34);
          Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(v34);
          *v29 = v17;
          v16 = 0;
          Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(v34);
        }
      }
LABEL_27:
      RemoveCountFromEndOfArray_D2DVector3_(v36, v41 + 8);
      RemoveCountFromEndOfArray_D2DVector3_(v39, v42 + 8);
    }
  }
LABEL_28:
  Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(&v37);
  return (unsigned int)v16;
}
