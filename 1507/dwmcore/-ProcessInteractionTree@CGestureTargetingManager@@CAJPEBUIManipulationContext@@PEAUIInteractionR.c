/*
 * XREFs of ?ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionResource@@KPEAUInteractionAxisGroup@@2PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@PEAPEAU3@@Z @ 0x1801324A0
 * Callers:
 *     ?ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionResource@@KPEAUInteractionAxisGroup@@2PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@PEAPEAU3@@Z @ 0x1801324A0 (-ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionR.c)
 *     ?ProcessInteractions@CGestureTargetingManager@@SAXPEAUIManipulationContext@@K@Z @ 0x18013281C (-ProcessInteractions@CGestureTargetingManager@@SAXPEAUIManipulationContext@@K@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEAAKXZ @ 0x1800594C8 (-InternalRelease@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x180059558 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@IEAAKXZ @ 0x18012A2B4 (-InternalRelease@-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@IEAAKXZ.c)
 *     RemoveCountFromEndOfArray_D2DVector3_ @ 0x180131FC0 (RemoveCountFromEndOfArray_D2DVector3_.c)
 *     ?CombineInteractionFilter@CGestureTargetingManager@@CA?AUInteractionAxis@@AEBU2@0@Z @ 0x180132014 (-CombineInteractionFilter@CGestureTargetingManager@@CA-AUInteractionAxis@@AEBU2@0@Z.c)
 *     ?ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionResource@@KPEAUInteractionAxisGroup@@2PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@PEAPEAU3@@Z @ 0x1801324A0 (-ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionR.c)
 */

__int64 __fastcall CGestureTargetingManager::ProcessInteractionTree(
        __int64 *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _OWORD *a7,
        _DWORD *a8,
        __int64 *a9)
{
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 (__fastcall *v14)(__int64 *); // rbx
  __int64 v15; // rdi
  int v16; // eax
  unsigned int v17; // edi
  _DWORD *v18; // rdi
  int v19; // ebx
  __int64 v20; // rcx
  int v21; // eax
  _OWORD *v22; // rdi
  __int128 v23; // xmm0
  _DWORD *v24; // rax
  int v25; // edi
  _DWORD *v27; // [rsp+30h] [rbp-91h]
  int v28; // [rsp+50h] [rbp-71h]
  __int64 v30; // [rsp+60h] [rbp-61h] BYREF
  int v31; // [rsp+68h] [rbp-59h] BYREF
  __int64 v32; // [rsp+70h] [rbp-51h]
  __int64 v33; // [rsp+78h] [rbp-49h] BYREF
  int v34; // [rsp+80h] [rbp-41h] BYREF
  int v35; // [rsp+84h] [rbp-3Dh] BYREF
  __int64 v36; // [rsp+88h] [rbp-39h]
  __int64 v37; // [rsp+90h] [rbp-31h]
  __int64 *v38; // [rsp+98h] [rbp-29h]
  _OWORD *v39; // [rsp+A0h] [rbp-21h] BYREF
  _QWORD v40[2]; // [rsp+B0h] [rbp-11h] BYREF

  v36 = a5;
  v32 = a6;
  v39 = a7;
  v40[0] = a1;
  *a8 = 3;
  v38 = a9;
  *a9 = 0LL;
  v11 = *a1;
  v37 = a4;
  v12 = (*(__int64 (__fastcall **)(__int64 *, __int64))(v11 + 32))(a1, a2);
  v13 = *a1;
  v30 = v12;
  v33 = 0LL;
  v34 = 0;
  v14 = *(__int64 (__fastcall **)(__int64 *))(v13 + 96);
  v35 = 0;
  v31 = 0;
  v15 = v14(a1);
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalRelease(&v33);
  v28 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v15 + 120LL))(v15, a3, &v33);
  if ( v28 < 0 )
    goto LABEL_28;
  v16 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, int *, __int64, int *, __int64, int *))(*(_QWORD *)a2 + 24LL))(
          a2,
          v33,
          v37,
          &v34,
          v36,
          &v35,
          v32,
          &v31);
  v28 = v16;
  if ( v16 < 0 )
    goto LABEL_28;
  if ( !v30 )
    goto LABEL_10;
  v17 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)v40[0] + 56LL))(v40[0], v30, a3);
  if ( (*(unsigned int (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)v40[0] + 56LL))(v40[0], a2, a3) > v17
    || (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v40[0] + 40LL))(v40[0], v30) )
  {
    v16 = v28;
LABEL_10:
    v18 = a8;
    goto LABEL_11;
  }
  v18 = a8;
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 144LL))(a2) )
  {
    v16 = v28;
  }
  else
  {
    v16 = CGestureTargetingManager::ProcessInteractionTree(
            v40[0],
            v30,
            a3,
            v37,
            v36,
            v32,
            (__int64)v39,
            (__int64)a8,
            (__int64)v38);
    v28 = v16;
  }
LABEL_11:
  if ( v16 < 0 )
    goto LABEL_28;
  v19 = v31;
  if ( v31 )
  {
    v20 = v32;
    do
    {
      v21 = *(_DWORD *)(v20 + 24);
      if ( v21 )
      {
        *(_DWORD *)(v20 + 24) = v21 - 1;
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x194u);
        v20 = v32;
      }
      --v19;
    }
    while ( v19 );
  }
  if ( *v18 != 3 )
    goto LABEL_25;
  v40[0] = 0LL;
  v40[1] = 0LL;
  v27 = v18;
  v22 = v39;
  v28 = (*(__int64 (__fastcall **)(__int64, _OWORD *, __int64, __int64, __int64, __int64, _DWORD *, _QWORD *))(*(_QWORD *)a2 + 32LL))(
          a2,
          v39,
          v37,
          v36,
          v32,
          v33,
          v27,
          v40);
  v23 = *(_OWORD *)CGestureTargetingManager::CombineInteractionFilter((__int64)&v39, (__int64)v22, (__int64)v40);
  v24 = a8;
  *v22 = v23;
  v25 = v28;
  if ( v28 >= 0 && *a8 == 2 )
  {
LABEL_24:
    *v24 = 2;
    v30 = a2;
    Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v30);
    Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v30);
    v28 = 0;
    *v38 = a2;
    Microsoft::WRL::ComPtr<CManipulationFrame>::InternalRelease(&v30);
LABEL_25:
    v25 = v28;
    goto LABEL_26;
  }
  if ( *a8 == 1 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 136LL))(a2) )
  {
    v24 = a8;
    goto LABEL_24;
  }
LABEL_26:
  if ( v25 >= 0 )
  {
    RemoveCountFromEndOfArray_D2DVector3_(v34, v37 + 8);
    RemoveCountFromEndOfArray_D2DVector3_(v35, v36 + 8);
  }
LABEL_28:
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalRelease(&v33);
  return (unsigned int)v28;
}
