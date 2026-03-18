/*
 * XREFs of ?ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionResource@@KPEAUInteractionAxisGroup@@2PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@PEAPEAU3@6@Z @ 0x18010670C
 * Callers:
 *     ?ProcessInteractions@CGestureTargetingManager@@SAXPEAUIManipulationContext@@K@Z @ 0x18000662C (-ProcessInteractions@CGestureTargetingManager@@SAXPEAUIManipulationContext@@K@Z.c)
 *     ?ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionResource@@KPEAUInteractionAxisGroup@@2PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@PEAPEAU3@6@Z @ 0x18010670C (-ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionR.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A57F0 (-InternalRelease@-$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A5868 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?CombineInteractionFilter@CGestureTargetingManager@@CA?AUInteractionAxis@@AEBU2@0@Z @ 0x1800B7DE0 (-CombineInteractionFilter@CGestureTargetingManager@@CA-AUInteractionAxis@@AEBU2@0@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionResource@@KPEAUInteractionAxisGroup@@2PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@PEAPEAU3@6@Z @ 0x18010670C (-ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionR.c)
 *     RemoveCountFromEndOfArray_D2DVector3_ @ 0x1801724C8 (RemoveCountFromEndOfArray_D2DVector3_.c)
 *     _anonymous_namespace_::DisableBufferingForInteraction @ 0x180172594 (_anonymous_namespace_--DisableBufferingForInteraction.c)
 *     RemoveCountFromEndOfArrayAndFree @ 0x18017260C (RemoveCountFromEndOfArrayAndFree.c)
 */

__int64 __fastcall CGestureTargetingManager::ProcessInteractionTree(
        _QWORD *a1,
        __int64 (__fastcall ***a2)(_QWORD),
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 (__fastcall ***a7)(_QWORD),
        _DWORD *a8,
        _QWORD *a9,
        _QWORD *a10)
{
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rbx
  int v17; // edi
  unsigned int v18; // ebx
  int v19; // eax
  _DWORD *v20; // rbx
  _OWORD *v21; // rax
  _OWORD *v22; // rdx
  _QWORD *v23; // rbx
  __int64 (__fastcall ***v26[2])(_QWORD); // [rsp+58h] [rbp-71h] BYREF
  unsigned int v27; // [rsp+68h] [rbp-61h] BYREF
  unsigned int v28; // [rsp+6Ch] [rbp-5Dh] BYREF
  unsigned int v29; // [rsp+70h] [rbp-59h] BYREF
  _DWORD *v30; // [rsp+78h] [rbp-51h]
  _QWORD *v31; // [rsp+80h] [rbp-49h]
  __int64 v32; // [rsp+88h] [rbp-41h] BYREF
  __int64 v33; // [rsp+90h] [rbp-39h]
  __int64 v34; // [rsp+98h] [rbp-31h]
  __int64 v35; // [rsp+A0h] [rbp-29h]
  _QWORD *v36; // [rsp+A8h] [rbp-21h]
  _QWORD *v37; // [rsp+B0h] [rbp-19h]
  _QWORD v38[2]; // [rsp+B8h] [rbp-11h] BYREF

  v35 = a5;
  v33 = a6;
  v26[0] = a7;
  v31 = a1;
  v30 = a8;
  *a8 = 3;
  *a9 = 0LL;
  *a10 = 0LL;
  v13 = *a1;
  v36 = a9;
  v37 = a10;
  v34 = a4;
  v14 = (*(__int64 (__fastcall **)(_QWORD *, __int64 (__fastcall ***)(_QWORD)))(v13 + 32))(a1, a2);
  v15 = *a1;
  v38[0] = v14;
  v32 = 0LL;
  v28 = 0;
  v29 = 0;
  v27 = 0;
  v16 = (*(__int64 (__fastcall **)(_QWORD *))(v15 + 112))(a1);
  Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(&v32);
  v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v16 + 120LL))(v16, a3, &v32);
  if ( v17 >= 0 )
  {
    v17 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD), __int64, __int64, unsigned int *, __int64, unsigned int *, __int64, unsigned int *))(*a2)[3])(
            a2,
            v32,
            v34,
            &v28,
            v35,
            &v29,
            v33,
            &v27);
    if ( v17 >= 0 )
    {
      if ( !v38[0]
        || (v18 = (*(__int64 (__fastcall **)(_QWORD *, __int64 (__fastcall ***)(_QWORD), _QWORD))(*v31 + 56LL))(
                    v31,
                    a2,
                    a3),
            v18 > (*(unsigned int (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*v31 + 56LL))(v31, v38[0], a3))
        || (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*v31 + 40LL))(v31, v38[0]) )
      {
        v20 = v30;
      }
      else
      {
        v19 = (*a2)[18](a2);
        v20 = v30;
        if ( !v19 )
          v17 = CGestureTargetingManager::ProcessInteractionTree(
                  (_DWORD)v31,
                  v38[0],
                  a3,
                  v34,
                  v35,
                  v33,
                  (__int64)v26[0],
                  (__int64)v30,
                  (__int64)v36,
                  (__int64)v37);
      }
      if ( v17 >= 0 )
      {
        RemoveCountFromEndOfArrayAndFree(v27, v33);
        if ( *v20 != 3 )
        {
LABEL_20:
          RemoveCountFromEndOfArray_D2DVector3_(v28, v34 + 8);
          RemoveCountFromEndOfArray_D2DVector3_(v29, v35 + 8);
          goto LABEL_21;
        }
        v38[0] = 0LL;
        v38[1] = 0LL;
        v17 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD), __int64 (__fastcall ***)(_QWORD), __int64, __int64, __int64, __int64, _DWORD *, _QWORD *))(*a2)[4])(
                a2,
                v26[0],
                v34,
                v35,
                v33,
                v32,
                v20,
                v38);
        v21 = (_OWORD *)CGestureTargetingManager::CombineInteractionFilter((__int64)v26, (__int64)v26[0], (__int64)v38);
        *v22 = *v21;
        if ( v17 >= 0 && *v20 == 2
          || *v20 == 1 && (unsigned __int8)anonymous_namespace_::DisableBufferingForInteraction(v31, a2, a3) )
        {
          *v20 = 2;
          v26[0] = a2;
          Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(v26);
          Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(v26);
          v17 = 0;
          *v36 = a2;
          Microsoft::WRL::ComPtr<CInteraction>::InternalRelease((__int64 *)v26);
        }
        if ( v17 >= 0 )
        {
          if ( *v20 == 4 )
          {
            *v20 = 3;
            v23 = v37;
            if ( !*v37 )
            {
              v26[0] = a2;
              Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(v26);
              Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(v26);
              *v23 = a2;
              v17 = 0;
              Microsoft::WRL::ComPtr<CInteraction>::InternalRelease((__int64 *)v26);
            }
          }
          goto LABEL_20;
        }
      }
    }
  }
LABEL_21:
  Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(&v32);
  return (unsigned int)v17;
}
