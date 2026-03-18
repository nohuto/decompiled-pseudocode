/*
 * XREFs of ?ProcessInput@CGestureTargetingManager@@SAJPEBUIManipulationContext@@AEBUtagPOINTER_INFO@@@Z @ 0x180007678
 * Callers:
 *     ?CalculateFrameTargets@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x1800071BC (-CalculateFrameTargets@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     _anonymous_namespace_::BypassGestureTargeting @ 0x180007844 (_anonymous_namespace_--BypassGestureTargeting.c)
 *     ?InternalRelease@?$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A57F0 (-InternalRelease@-$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A5868 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGestureTargetingManager::ProcessInput(
        const struct IManipulationContext *a1,
        const struct tagPOINTER_INFO *a2)
{
  bool v4; // zf
  __int64 v5; // rax
  __int64 v6; // rax
  int v8; // ebx
  __int64 v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rdi
  unsigned int v13; // eax
  __int64 v14; // rdi
  __int64 v15; // rbx
  unsigned int v16; // eax
  _BYTE v17[80]; // [rsp+30h] [rbp-68h] BYREF
  char v18; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v19; // [rsp+B0h] [rbp+18h] BYREF

  v4 = (unsigned __int8)anonymous_namespace_::BypassGestureTargeting(a1, *(unsigned int *)a2) == 0;
  v5 = *(_QWORD *)a1;
  if ( v4 )
  {
    v8 = 0;
    v9 = (*(__int64 (__fastcall **)(const struct IManipulationContext *, _QWORD))(v5 + 24))(
           a1,
           *((unsigned int *)a2 + 1));
    if ( v9 )
    {
      while ( v8 >= 0 )
      {
        v14 = *(_QWORD *)v9;
        v15 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v9 + 168LL))(v9, v17);
        v16 = (*(__int64 (__fastcall **)(const struct IManipulationContext *, __int64, _QWORD))(*(_QWORD *)a1 + 56LL))(
                a1,
                v9,
                *(unsigned int *)a2);
        v8 = (*(__int64 (__fastcall **)(__int64, const struct tagPOINTER_INFO *, _QWORD, __int64, char *))(v14 + 16))(
               v9,
               a2,
               v16,
               v15,
               &v18);
        if ( v8 >= 0 )
        {
          if ( v18 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 200LL))(v9);
        }
        v9 = (*(__int64 (__fastcall **)(const struct IManipulationContext *, __int64))(*(_QWORD *)a1 + 48LL))(a1, v9);
        if ( !v9 )
        {
          if ( v8 >= 0 )
            goto LABEL_4;
          return (unsigned int)v8;
        }
      }
    }
    else
    {
LABEL_4:
      v19 = (*(__int64 (__fastcall **)(const struct IManipulationContext *))(*(_QWORD *)a1 + 112LL))(a1);
      v10 = v19;
      Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v19);
      v11 = *(_QWORD *)v10;
      v12 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v10 + 168LL))(v10, v17);
      v13 = (*(__int64 (__fastcall **)(const struct IManipulationContext *, __int64, _QWORD))(*(_QWORD *)a1 + 56LL))(
              a1,
              v10,
              *(unsigned int *)a2);
      v8 = (*(__int64 (__fastcall **)(__int64, const struct tagPOINTER_INFO *, _QWORD, __int64, char *))(v11 + 16))(
             v10,
             a2,
             v13,
             v12,
             &v18);
      Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(&v19);
    }
    return (unsigned int)v8;
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(const struct IManipulationContext *))(v5 + 16))(a1);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 152LL))(v6);
    return 0LL;
  }
}
