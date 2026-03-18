/*
 * XREFs of ?GetPointerTarget@CGestureTargetingManager@@SAJAEBUtagPOINTER_INFO@@PEBUIManipulationContext@@PEAUTargetingInfo@@@Z @ 0x180132078
 * Callers:
 *     ?TargetPointer@CManipulationManager@@AEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEAPEAXPEAI@Z @ 0x18012C120 (-TargetPointer@CManipulationManager@@AEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEAAKXZ @ 0x1800594C8 (-InternalRelease@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1801298EC (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@IEAAKXZ @ 0x18012A2B4 (-InternalRelease@-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CGestureTargetingManager::GetPointerTarget(
        const struct tagPOINTER_INFO *a1,
        const struct IManipulationContext *a2,
        struct TargetingInfo *a3)
{
  __int64 v6; // rax
  __int64 v7; // r14
  unsigned int v8; // esi
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // rdi
  bool v15; // al
  int v17; // [rsp+20h] [rbp-60h]
  __int64 v18; // [rsp+28h] [rbp-58h] BYREF
  int v19; // [rsp+30h] [rbp-50h] BYREF
  __int64 v20; // [rsp+38h] [rbp-48h] BYREF
  int v21; // [rsp+40h] [rbp-40h]
  __int64 v22; // [rsp+48h] [rbp-38h] BYREF
  __int64 v23; // [rsp+50h] [rbp-30h] BYREF
  int v24; // [rsp+58h] [rbp-28h] BYREF
  char v25; // [rsp+5Ch] [rbp-24h]
  char v26; // [rsp+70h] [rbp-10h]

  v19 = 1;
  v18 = 0LL;
  v20 = 0LL;
  v6 = (*(__int64 (__fastcall **)(const struct IManipulationContext *, __int64 *))(*(_QWORD *)a2 + 80LL))(a2, &v22);
  v17 = *(_DWORD *)v6;
  Microsoft::WRL::ComPtr<IInteractionResource>::operator=(&v18, (__int64 *)(v6 + 8));
  Microsoft::WRL::ComPtr<CManipulationFrame>::InternalRelease(&v23);
  v21 = (*(__int64 (__fastcall **)(const struct IManipulationContext *, _QWORD, int *))(*(_QWORD *)a2 + 64LL))(
          a2,
          *((unsigned int *)a1 + 1),
          &v19);
  if ( v21 >= 0 )
  {
    v7 = v18;
    if ( v18 )
    {
      v8 = (*(__int64 (__fastcall **)(const struct IManipulationContext *, __int64, _QWORD))(*(_QWORD *)a2 + 56LL))(
             a2,
             v18,
             *(unsigned int *)a1);
      if ( !v8
        || (v9 = *(_QWORD *)a2,
            v10 = (*(__int64 (__fastcall **)(const struct IManipulationContext *))(*(_QWORD *)a2 + 16LL))(a2),
            (*(unsigned int (__fastcall **)(const struct IManipulationContext *, __int64, _QWORD))(v9 + 56))(
              a2,
              v10,
              *(unsigned int *)a1) > v8) )
      {
        v17 = 0;
        Microsoft::WRL::ComPtr<CManipulationFrame>::InternalRelease(&v18);
        v7 = v18;
      }
    }
    v11 = v20;
    if ( (*((_DWORD *)a1 + 3) & 0x40000) != 0 && v19 && v20 != v7 )
    {
      v17 = 1;
      Microsoft::WRL::ComPtr<CManipulationFrame>::InternalRelease(&v18);
      v7 = v18;
      v11 = v20;
    }
    if ( v11 )
    {
      if ( v11 != v7 && v19 == 1 )
      {
        v12 = *(_QWORD *)a2;
        v13 = (*(__int64 (__fastcall **)(const struct IManipulationContext *))(*(_QWORD *)a2 + 16LL))(a2);
        LODWORD(v12) = (*(__int64 (__fastcall **)(const struct IManipulationContext *, __int64, _QWORD))(v12 + 56))(
                         a2,
                         v13,
                         *(unsigned int *)a1);
        if ( (*(unsigned int (__fastcall **)(const struct IManipulationContext *, __int64, _QWORD))(*(_QWORD *)a2 + 56LL))(
               a2,
               v11,
               *(unsigned int *)a1) == (_DWORD)v12 )
        {
          if ( (*(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v20 + 80LL))(
                 v20,
                 *(unsigned int *)a1,
                 0LL,
                 1LL) )
          {
            v22 = 0LL;
            v14 = v20;
            Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalRelease(&v22);
            if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v14 + 120LL))(
                   v14,
                   *(unsigned int *)a1,
                   &v22) >= 0 )
            {
              (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v22 + 40LL))(v22, &v24);
              v15 = v24 == 1 && (v25 & 1) != 0;
              if ( ((v26 & 1) == 0 || v15) && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v20 + 128LL))(v20) )
              {
                Microsoft::WRL::ComPtr<IInteractionResource>::operator=(&v18, &v20);
                v17 = v19;
              }
            }
            Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalRelease(&v22);
          }
        }
      }
    }
    if ( !v17 && (v19 || (*((_DWORD *)a1 + 3) & 0x40000) != 0) )
    {
      v17 = 1;
      Microsoft::WRL::ComPtr<CManipulationFrame>::InternalRelease(&v18);
    }
    *(_DWORD *)a3 = v17;
    Microsoft::WRL::ComPtr<IInteractionResource>::operator=((__int64 *)a3 + 1, &v18);
  }
  Microsoft::WRL::ComPtr<CManipulationFrame>::InternalRelease(&v20);
  Microsoft::WRL::ComPtr<CManipulationFrame>::InternalRelease(&v18);
  return (unsigned int)v21;
}
