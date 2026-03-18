/*
 * XREFs of ?ProcessInteractions@CGestureTargetingManager@@SAXPEAUIManipulationContext@@K@Z @ 0x180003CFC
 * Callers:
 *     ?CalculateFrameTargets@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180004A0C (-CalculateFrameTargets@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x180002120 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInteractionResource@@@Z @ 0x180002178 (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInteractionResource@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ @ 0x180003F94 (-InternalRelease@-$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?BypassGestureTargeting@?A0x734f6366@@YA_NPEBUIManipulationContext@@K@Z @ 0x1800058D8 (-BypassGestureTargeting@-A0x734f6366@@YA_NPEBUIManipulationContext@@K@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180076CE4 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionResource@@KPEAUInteractionAxisGroup@@2PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@PEAPEAU3@6@Z @ 0x1800F2CE8 (-ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionR.c)
 */

void __fastcall CGestureTargetingManager::ProcessInteractions(
        struct IManipulationContext *this,
        struct IManipulationContext *a2)
{
  __int64 v2; // rax
  unsigned int v4; // r15d
  int v5; // ebx
  unsigned int v6; // r8d
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rdi
  int v11; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v12; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v13; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v14; // [rsp+68h] [rbp-98h] BYREF
  __int16 v15; // [rsp+70h] [rbp-90h] BYREF
  __int128 v16; // [rsp+78h] [rbp-88h] BYREF
  __int64 v17; // [rsp+88h] [rbp-78h]
  int v18; // [rsp+90h] [rbp-70h]
  __int16 v19; // [rsp+98h] [rbp-68h] BYREF
  __int128 v20; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v21; // [rsp+B0h] [rbp-50h]
  int v22; // [rsp+B8h] [rbp-48h]
  __int128 v23; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v24; // [rsp+D0h] [rbp-30h]
  int v25; // [rsp+D8h] [rbp-28h]
  BOOL v26; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v27; // [rsp+E8h] [rbp-18h] BYREF
  _WORD v28[2]; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int64 v29; // [rsp+F4h] [rbp-Ch]
  int v30; // [rsp+FCh] [rbp-4h]

  v2 = *(_QWORD *)this;
  v4 = (unsigned int)a2;
  v12 = 0LL;
  v13 = 0LL;
  v14 = (*(__int64 (__fastcall **)(struct IManipulationContext *))(v2 + 112))(this);
  v5 = v14;
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v14);
  LODWORD(v27) = 0;
  v29 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  v28[0] = 0;
  v20 = 0LL;
  v30 = 0;
  v16 = 0LL;
  v21 = 0LL;
  v23 = 0LL;
  v22 = 0;
  v19 = 0;
  v17 = 0LL;
  v18 = 0;
  v15 = 0;
  v24 = 0LL;
  v25 = 0;
  v11 = 3;
  if ( `anonymous namespace'::BypassGestureTargeting(this, (const struct IManipulationContext *)v4, v6) )
  {
    v7 = *(_QWORD *)this;
    v11 = 2;
    v8 = (*(__int64 (__fastcall **)(struct IManipulationContext *))(v7 + 16))(this);
    Microsoft::WRL::ComPtr<IInteractionResource>::operator=(&v12, v8);
  }
  v9 = v11;
  if ( v11 != 3 )
    goto LABEL_6;
  Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(&v13);
  Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(&v12);
  if ( (int)CGestureTargetingManager::ProcessInteractionTree(
              (_DWORD)this,
              v5,
              v4,
              (unsigned int)&v19,
              (__int64)&v15,
              (__int64)&v23,
              (__int64)v28,
              (__int64)&v11,
              (unsigned __int64)&v12,
              (__int64)&v13) >= 0 )
  {
    v9 = v11;
    if ( v11 == 3 )
    {
LABEL_11:
      v27 = v13;
      v26 = 1;
      Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v27);
      (*(void (__fastcall **)(struct IManipulationContext *, BOOL *))(*(_QWORD *)this + 104LL))(this, &v26);
      Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(&v27);
      goto LABEL_12;
    }
LABEL_6:
    if ( v9 != 4 )
    {
      v27 = v12;
      v26 = v9 != 1;
      Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v27);
      if ( v11 == 2 )
      {
        v10 = v12;
        if ( v10 == (*(__int64 (__fastcall **)(struct IManipulationContext *))(*(_QWORD *)this + 112LL))(this) )
          Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(&v27);
      }
      (*(void (__fastcall **)(struct IManipulationContext *, BOOL *))(*(_QWORD *)this + 88LL))(this, &v26);
      Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(&v27);
    }
    goto LABEL_11;
  }
LABEL_12:
  DynArrayImpl<1>::~DynArrayImpl<1>(&v23);
  DynArrayImpl<1>::~DynArrayImpl<1>(&v16);
  DynArrayImpl<1>::~DynArrayImpl<1>(&v20);
  Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(&v14);
  Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(&v13);
  Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(&v12);
}
