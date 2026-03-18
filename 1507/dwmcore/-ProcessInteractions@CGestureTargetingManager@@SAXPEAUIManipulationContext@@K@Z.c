/*
 * XREFs of ?ProcessInteractions@CGestureTargetingManager@@SAXPEAUIManipulationContext@@K@Z @ 0x18013281C
 * Callers:
 *     ?CalculateFrameTargets@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180129C20 (-CalculateFrameTargets@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18003FDC0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x180059558 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??4?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z @ 0x18012989C (--4-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@IEAAKXZ @ 0x18012A2B4 (-InternalRelease@-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionResource@@KPEAUInteractionAxisGroup@@2PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@PEAPEAU3@@Z @ 0x1801324A0 (-ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionR.c)
 */

void __fastcall CGestureTargetingManager::ProcessInteractions(struct IManipulationContext *a1, unsigned int a2)
{
  __int64 v2; // rax
  int v4; // r15d
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rdi
  int v14; // [rsp+50h] [rbp-79h] BYREF
  __int64 v15; // [rsp+58h] [rbp-71h] BYREF
  __int64 v16; // [rsp+60h] [rbp-69h] BYREF
  int v17; // [rsp+68h] [rbp-61h] BYREF
  __int64 v18; // [rsp+70h] [rbp-59h] BYREF
  __int16 v19; // [rsp+78h] [rbp-51h] BYREF
  __int128 v20; // [rsp+80h] [rbp-49h] BYREF
  __int64 v21; // [rsp+90h] [rbp-39h]
  int v22; // [rsp+98h] [rbp-31h]
  __int16 v23; // [rsp+A0h] [rbp-29h] BYREF
  __int128 v24; // [rsp+A8h] [rbp-21h] BYREF
  __int64 v25; // [rsp+B8h] [rbp-11h]
  int v26; // [rsp+C0h] [rbp-9h]
  __int128 v27; // [rsp+C8h] [rbp-1h] BYREF
  __int64 v28; // [rsp+D8h] [rbp+Fh]
  int v29; // [rsp+E0h] [rbp+17h]
  __int128 v30; // [rsp+E8h] [rbp+1Fh] BYREF

  v2 = *(_QWORD *)a1;
  v4 = 0;
  v15 = 0LL;
  v16 = (*(__int64 (__fastcall **)(struct IManipulationContext *))(v2 + 96))(a1);
  v6 = v16;
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v16);
  v7 = *(_QWORD *)a1;
  *(_QWORD *)((char *)&v30 + 4) = 0LL;
  HIDWORD(v30) = 0;
  LOWORD(v30) = 0;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0;
  v19 = 0;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0;
  v23 = 0;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0;
  v14 = 3;
  v8 = (*(__int64 (__fastcall **)(struct IManipulationContext *))(v7 + 16))(a1);
  if ( !(*(__int64 (__fastcall **)(struct IManipulationContext *, __int64))(v7 + 32))(a1, v8) )
  {
    v9 = (*(__int64 (__fastcall **)(struct IManipulationContext *))(*(_QWORD *)a1 + 16LL))(a1);
    if ( (*(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v9 + 80LL))(v9, a2, 0LL, 2LL) )
    {
      if ( !(*(unsigned int (__fastcall **)(struct IManipulationContext *))(*(_QWORD *)a1 + 104LL))(a1) )
      {
        v10 = *(_QWORD *)a1;
        v14 = 2;
        v11 = (*(__int64 (__fastcall **)(struct IManipulationContext *))(v10 + 16))(a1);
        Microsoft::WRL::ComPtr<CManipulationContext>::operator=(&v15, v11);
      }
    }
  }
  v12 = v14;
  if ( v14 != 3
    || (Microsoft::WRL::ComPtr<CManipulationFrame>::InternalRelease(&v15),
        (int)CGestureTargetingManager::ProcessInteractionTree(
               (__int64 *)a1,
               v6,
               a2,
               (__int64)&v19,
               (__int64)&v23,
               (__int64)&v27,
               &v30,
               &v14,
               &v15) >= 0)
    && (v12 = v14, v14 != 3) )
  {
    LOBYTE(v4) = v12 != 1;
    v18 = v15;
    v17 = v4;
    Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v18);
    if ( v14 == 2 )
    {
      v13 = v15;
      if ( v13 == (*(__int64 (__fastcall **)(struct IManipulationContext *))(*(_QWORD *)a1 + 96LL))(a1) )
        Microsoft::WRL::ComPtr<CManipulationFrame>::InternalRelease(&v18);
    }
    (*(void (__fastcall **)(struct IManipulationContext *, int *))(*(_QWORD *)a1 + 88LL))(a1, &v17);
    Microsoft::WRL::ComPtr<CManipulationFrame>::InternalRelease(&v18);
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v27);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v24);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v20);
  Microsoft::WRL::ComPtr<CManipulationFrame>::InternalRelease(&v16);
  Microsoft::WRL::ComPtr<CManipulationFrame>::InternalRelease(&v15);
}
