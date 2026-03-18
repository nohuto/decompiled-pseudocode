/*
 * XREFs of ?ProcessInput@CGestureTargetingManager@@SAJPEBUIManipulationContext@@AEBUtagPOINTER_INFO@@@Z @ 0x180132378
 * Callers:
 *     ?CalculateFrameTargets@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180129C20 (-CalculateFrameTargets@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x180059558 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@IEAAKXZ @ 0x18012A2B4 (-InternalRelease@-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CGestureTargetingManager::ProcessInput(
        const struct IManipulationContext *a1,
        const struct tagPOINTER_INFO *a2)
{
  int v4; // edi
  __int64 *v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 *v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 *v12; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  v5 = (__int64 *)(*(__int64 (__fastcall **)(const struct IManipulationContext *, _QWORD))(*(_QWORD *)a1 + 24LL))(
                    a1,
                    *((unsigned int *)a2 + 1));
  if ( v5 )
  {
    while ( v4 >= 0 )
    {
      v6 = *v5;
      v7 = (*(unsigned int (__fastcall **)(const struct IManipulationContext *, __int64 *, _QWORD))(*(_QWORD *)a1 + 56LL))(
             a1,
             v5,
             *(unsigned int *)a2);
      v4 = (*(__int64 (__fastcall **)(__int64 *, const struct tagPOINTER_INFO *, __int64))(v6 + 16))(v5, a2, v7);
      v5 = (__int64 *)(*(__int64 (__fastcall **)(const struct IManipulationContext *, __int64 *))(*(_QWORD *)a1 + 48LL))(
                        a1,
                        v5);
      if ( !v5 )
      {
        if ( v4 < 0 )
          return (unsigned int)v4;
        goto LABEL_5;
      }
    }
  }
  else
  {
LABEL_5:
    v12 = (__int64 *)(*(__int64 (__fastcall **)(const struct IManipulationContext *))(*(_QWORD *)a1 + 96LL))(a1);
    v8 = v12;
    Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v12);
    v9 = *v8;
    v10 = (*(unsigned int (__fastcall **)(const struct IManipulationContext *, __int64 *, _QWORD))(*(_QWORD *)a1 + 56LL))(
            a1,
            v8,
            *(unsigned int *)a2);
    v4 = (*(__int64 (__fastcall **)(__int64 *, const struct tagPOINTER_INFO *, __int64))(v9 + 16))(v8, a2, v10);
    Microsoft::WRL::ComPtr<CManipulationFrame>::InternalRelease((__int64 *)&v12);
  }
  return (unsigned int)v4;
}
