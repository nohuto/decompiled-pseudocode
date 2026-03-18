/*
 * XREFs of ?ProcessInteractions@CGestureTargetingManager@@SAXPEAUIManipulationContext@@K@Z @ 0x18000662C
 * Callers:
 *     ?CalculateFrameTargets@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x1800071BC (-CalculateFrameTargets@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     _anonymous_namespace_::BypassGestureTargeting @ 0x180007844 (_anonymous_namespace_--BypassGestureTargeting.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A57F0 (-InternalRelease@-$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInteractionResource@@@Z @ 0x1800A5818 (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInteractionResource@@@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A5868 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionResource@@KPEAUInteractionAxisGroup@@2PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@PEAPEAU3@6@Z @ 0x18010670C (-ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionR.c)
 */

void __fastcall CGestureTargetingManager::ProcessInteractions(struct IManipulationContext *a1, unsigned int a2)
{
  __int64 v2; // rax
  int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // r8
  int v16; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v17; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v18; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v19; // [rsp+68h] [rbp-98h] BYREF
  __int16 v20; // [rsp+70h] [rbp-90h] BYREF
  __int128 v21; // [rsp+78h] [rbp-88h] BYREF
  __int64 v22; // [rsp+88h] [rbp-78h]
  int v23; // [rsp+90h] [rbp-70h]
  __int16 v24; // [rsp+98h] [rbp-68h] BYREF
  __int128 v25; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v26; // [rsp+B0h] [rbp-50h]
  int v27; // [rsp+B8h] [rbp-48h]
  __int128 v28; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v29; // [rsp+D0h] [rbp-30h]
  int v30; // [rsp+D8h] [rbp-28h]
  BOOL v31; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v32; // [rsp+E8h] [rbp-18h] BYREF
  _WORD v33[2]; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int64 v34; // [rsp+F4h] [rbp-Ch]
  int v35; // [rsp+FCh] [rbp-4h]

  v2 = *(_QWORD *)a1;
  v17 = 0LL;
  v18 = 0LL;
  v19 = (*(__int64 (__fastcall **)(struct IManipulationContext *))(v2 + 112))(a1);
  v5 = v19;
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v19);
  LODWORD(v32) = 0;
  v34 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  v33[0] = 0;
  v25 = 0LL;
  v35 = 0;
  v21 = 0LL;
  v26 = 0LL;
  v28 = 0LL;
  v27 = 0;
  v24 = 0;
  v22 = 0LL;
  v23 = 0;
  v20 = 0;
  v29 = 0LL;
  v30 = 0;
  v16 = 3;
  if ( (unsigned __int8)anonymous_namespace_::BypassGestureTargeting(a1, a2) )
  {
    v6 = *(_QWORD *)a1;
    v16 = 2;
    v7 = (*(__int64 (__fastcall **)(struct IManipulationContext *))(v6 + 16))(a1);
    Microsoft::WRL::ComPtr<IInteractionResource>::operator=(&v17, v7);
  }
  v8 = v16;
  if ( v16 != 3 )
    goto LABEL_4;
  Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(&v18);
  Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(&v17);
  if ( (int)CGestureTargetingManager::ProcessInteractionTree(
              (_DWORD)a1,
              v5,
              a2,
              (unsigned int)&v24,
              (__int64)&v20,
              (__int64)&v28,
              (__int64)v33,
              (__int64)&v16,
              (__int64)&v17,
              (__int64)&v18) < 0 )
    goto LABEL_10;
  v8 = v16;
  if ( v16 != 3 )
  {
LABEL_4:
    if ( v8 != 4 )
    {
      v32 = v17;
      v31 = v8 != 1;
      Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v32);
      if ( v16 == 2 )
      {
        v9 = v17;
        if ( v9 == (*(__int64 (__fastcall **)(struct IManipulationContext *))(*(_QWORD *)a1 + 112LL))(a1) )
          Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(&v32);
      }
      (*(void (__fastcall **)(struct IManipulationContext *, BOOL *))(*(_QWORD *)a1 + 88LL))(a1, &v31);
      Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(&v32);
    }
  }
  v32 = v18;
  v31 = 1;
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v32);
  (*(void (__fastcall **)(struct IManipulationContext *, BOOL *))(*(_QWORD *)a1 + 104LL))(a1, &v31);
  Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(&v32);
LABEL_10:
  DynArrayImpl<1>::~DynArrayImpl<1>(&v28, v10, v11);
  DynArrayImpl<1>::~DynArrayImpl<1>(&v21, v12, v13);
  DynArrayImpl<1>::~DynArrayImpl<1>(&v25, v14, v15);
  Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(&v19);
  Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(&v18);
  Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(&v17);
}
