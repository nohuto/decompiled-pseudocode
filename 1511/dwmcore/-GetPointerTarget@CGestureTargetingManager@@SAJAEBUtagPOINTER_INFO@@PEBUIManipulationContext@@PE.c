/*
 * XREFs of ?GetPointerTarget@CGestureTargetingManager@@SAJAEBUtagPOINTER_INFO@@PEBUIManipulationContext@@PEAUTargetingInfo@@@Z @ 0x1800A7050
 * Callers:
 *     ?TargetPointer@CManipulationManager@@AEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEAPEAXPEAI@Z @ 0x1800A685C (-TargetPointer@CManipulationManager@@AEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEA.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x180002120 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ @ 0x180003F94 (-InternalRelease@-$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180003FD4 (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CGestureTargetingManager::GetPointerTarget(
        const struct tagPOINTER_INFO *a1,
        const struct IManipulationContext *a2,
        struct TargetingInfo *a3)
{
  __int64 v5; // rax
  __int64 v6; // rax
  int v7; // r13d
  __int64 v8; // rsi
  unsigned int v9; // r14d
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // r14
  __int64 v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // rdi
  bool v16; // al
  struct TargetingInfo *v17; // rcx
  int v19; // [rsp+20h] [rbp-49h]
  __int64 v20; // [rsp+28h] [rbp-41h] BYREF
  int v21; // [rsp+30h] [rbp-39h] BYREF
  __int64 v22; // [rsp+38h] [rbp-31h] BYREF
  __int64 v23; // [rsp+40h] [rbp-29h] BYREF
  __int64 v24; // [rsp+48h] [rbp-21h] BYREF
  struct TargetingInfo *v25; // [rsp+50h] [rbp-19h]
  int v26; // [rsp+58h] [rbp-11h] BYREF
  char v27; // [rsp+5Ch] [rbp-Dh]
  char v28; // [rsp+84h] [rbp+1Bh]

  v25 = a3;
  v20 = 0LL;
  v22 = 0LL;
  v5 = *(_QWORD *)a2;
  v21 = 1;
  v6 = (*(__int64 (__fastcall **)(const struct IManipulationContext *, __int64 *))(v5 + 80))(a2, &v23);
  v19 = *(_DWORD *)v6;
  Microsoft::WRL::ComPtr<IInteractionResource>::operator=(&v20, (__int64 *)(v6 + 8));
  Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(&v24);
  v7 = (*(__int64 (__fastcall **)(const struct IManipulationContext *, _QWORD, int *))(*(_QWORD *)a2 + 64LL))(
         a2,
         *((unsigned int *)a1 + 1),
         &v21);
  if ( v7 >= 0 )
  {
    v8 = v20;
    if ( v20 )
    {
      v9 = (*(__int64 (__fastcall **)(const struct IManipulationContext *, __int64, _QWORD))(*(_QWORD *)a2 + 56LL))(
             a2,
             v20,
             *(unsigned int *)a1);
      if ( !v9
        || (v10 = *(_QWORD *)a2,
            v11 = (*(__int64 (__fastcall **)(const struct IManipulationContext *))(*(_QWORD *)a2 + 16LL))(a2),
            (*(unsigned int (__fastcall **)(const struct IManipulationContext *, __int64, _QWORD))(v10 + 56))(
              a2,
              v11,
              *(unsigned int *)a1) > v9) )
      {
        v19 = 0;
        Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(&v20);
        v8 = v20;
      }
    }
    v12 = v22;
    if ( (*((_DWORD *)a1 + 3) & 0x40000) != 0 && v21 && v22 != v8 )
    {
      v19 = 1;
      Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(&v20);
      v8 = v20;
      v12 = v22;
    }
    if ( v12 )
    {
      if ( v12 != v8 && v21 == 1 )
      {
        v13 = *(_QWORD *)a2;
        v14 = (*(__int64 (__fastcall **)(const struct IManipulationContext *))(*(_QWORD *)a2 + 16LL))(a2);
        LODWORD(v13) = (*(__int64 (__fastcall **)(const struct IManipulationContext *, __int64, _QWORD))(v13 + 56))(
                         a2,
                         v14,
                         *(unsigned int *)a1);
        if ( (*(unsigned int (__fastcall **)(const struct IManipulationContext *, __int64, _QWORD))(*(_QWORD *)a2 + 56LL))(
               a2,
               v12,
               *(unsigned int *)a1) == (_DWORD)v13 )
        {
          if ( (*(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v22 + 80LL))(
                 v22,
                 *(unsigned int *)a1,
                 0LL,
                 1LL) )
          {
            v23 = 0LL;
            v15 = v22;
            Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(&v23);
            if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v15 + 120LL))(
                   v15,
                   *(unsigned int *)a1,
                   &v23) >= 0 )
            {
              (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v23 + 40LL))(v23, &v26);
              v16 = v26 == 1 && ((v27 & 1) != 0 || (v27 & 2) != 0);
              if ( ((v28 & 1) == 0 || v16) && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v22 + 128LL))(v22) )
              {
                Microsoft::WRL::ComPtr<IInteractionResource>::operator=(&v20, &v22);
                v8 = v20;
                v19 = v21;
              }
            }
            Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(&v23);
          }
        }
      }
    }
    if ( !v19 )
    {
      if ( !v21 && (*((_DWORD *)a1 + 3) & 0x40000) == 0 )
      {
LABEL_35:
        v17 = v25;
        *(_DWORD *)v25 = v19;
        Microsoft::WRL::ComPtr<IInteractionResource>::operator=((__int64 *)v17 + 1, &v20);
        goto LABEL_36;
      }
      v19 = 1;
      Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(&v20);
      v8 = v20;
    }
    if ( v19 == 1 && !v8 )
    {
      (*(void (__fastcall **)(const struct IManipulationContext *, __int64 *))(*(_QWORD *)a2 + 96LL))(a2, &v23);
      if ( v24 )
      {
        Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(&v20);
        Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v24);
        v7 = 0;
        v20 = v24;
      }
      Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(&v24);
    }
    goto LABEL_35;
  }
LABEL_36:
  Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(&v22);
  Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(&v20);
  return (unsigned int)v7;
}
