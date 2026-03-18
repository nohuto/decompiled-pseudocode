/*
 * XREFs of ?ProcessInput@CGestureTargetingManager@@SAJPEBUIManipulationContext@@AEBUtagPOINTER_INFO@@@Z @ 0x180004E5C
 * Callers:
 *     ?CalculateFrameTargets@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180004A0C (-CalculateFrameTargets@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x180002120 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ @ 0x180003F94 (-InternalRelease@-$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?BypassGestureTargeting@?A0x734f6366@@YA_NPEBUIManipulationContext@@K@Z @ 0x1800058D8 (-BypassGestureTargeting@-A0x734f6366@@YA_NPEBUIManipulationContext@@K@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

__int64 __fastcall CGestureTargetingManager::ProcessInput(
        const struct IManipulationContext *a1,
        const struct tagPOINTER_INFO *a2,
        unsigned int a3)
{
  bool v5; // zf
  __int64 v6; // rax
  __int64 v7; // rdi
  int v9; // edi
  __int64 v10; // rbp
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // rbx
  __int64 v15; // rbp
  __int64 v16; // rsi
  __int64 v17; // rdi
  _BYTE v18[64]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v19; // [rsp+88h] [rbp+10h] BYREF

  v5 = !`anonymous namespace'::BypassGestureTargeting(a1, (const struct IManipulationContext *)*(unsigned int *)a2, a3);
  v6 = *(_QWORD *)a1;
  if ( v5 )
  {
    v9 = 0;
    v10 = (*(__int64 (__fastcall **)(const struct IManipulationContext *, _QWORD))(v6 + 24))(
            a1,
            *((unsigned int *)a2 + 1));
    if ( v10 )
    {
      while ( v9 >= 0 )
      {
        v11 = *(_QWORD *)v10;
        v12 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v10 + 168LL))(v10, v18);
        v13 = (*(unsigned int (__fastcall **)(const struct IManipulationContext *, __int64, _QWORD))(*(_QWORD *)a1 + 56LL))(
                a1,
                v10,
                *(unsigned int *)a2);
        v9 = (*(__int64 (__fastcall **)(__int64, const struct tagPOINTER_INFO *, __int64, __int64))(v11 + 16))(
               v10,
               a2,
               v13,
               v12);
        v10 = (*(__int64 (__fastcall **)(const struct IManipulationContext *, __int64))(*(_QWORD *)a1 + 48LL))(a1, v10);
        if ( !v10 )
        {
          if ( v9 < 0 )
            return (unsigned int)v9;
          goto LABEL_7;
        }
      }
    }
    else
    {
LABEL_7:
      v19 = (*(__int64 (__fastcall **)(const struct IManipulationContext *))(*(_QWORD *)a1 + 112LL))(a1);
      v14 = v19;
      Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v19);
      v15 = *(_QWORD *)v14;
      v16 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v14 + 168LL))(v14, v18);
      v17 = (*(unsigned int (__fastcall **)(const struct IManipulationContext *, __int64, _QWORD))(*(_QWORD *)a1 + 56LL))(
              a1,
              v14,
              *(unsigned int *)a2);
      v9 = (*(__int64 (__fastcall **)(__int64, const struct tagPOINTER_INFO *, __int64, __int64))(v15 + 16))(
             v14,
             a2,
             v17,
             v16);
      Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(&v19);
    }
    return (unsigned int)v9;
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(const struct IManipulationContext *))(v6 + 16))(a1);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 152LL))(v7);
    return 0LL;
  }
}
