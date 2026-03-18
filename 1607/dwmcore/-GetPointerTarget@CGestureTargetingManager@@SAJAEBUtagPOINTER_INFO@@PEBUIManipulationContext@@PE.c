/*
 * XREFs of ?GetPointerTarget@CGestureTargetingManager@@SAJAEBUtagPOINTER_INFO@@PEBUIManipulationContext@@PEAUTargetingInfo@@@Z @ 0x1800A6B00
 * Callers:
 *     ?TargetPointer@CManipulationManager@@AEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEAPEAXPEAI@Z @ 0x1800A73BC (-TargetPointer@CManipulationManager@@AEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEA.c)
 * Callees:
 *     ??4?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800068B0 (--4-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A57F0 (-InternalRelease@-$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A5868 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     _anonymous_namespace_::AllSupportedWithSingleTarget @ 0x18017251C (_anonymous_namespace_--AllSupportedWithSingleTarget.c)
 */

__int64 __fastcall CGestureTargetingManager::GetPointerTarget(
        const struct tagPOINTER_INFO *a1,
        const struct IManipulationContext *a2,
        struct TargetingInfo *a3)
{
  _DWORD *v6; // rax
  __int64 v7; // rbx
  int v8; // ecx
  __int64 *v9; // rax
  int v10; // r15d
  unsigned int v11; // r14d
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rbx
  bool v19; // al
  int v20; // [rsp+30h] [rbp-69h]
  __int64 (__fastcall ***v21)(_QWORD); // [rsp+38h] [rbp-61h] BYREF
  int v22; // [rsp+40h] [rbp-59h] BYREF
  __int64 (__fastcall ***v23)(_QWORD); // [rsp+48h] [rbp-51h] BYREF
  __int64 v24; // [rsp+50h] [rbp-49h] BYREF
  __int64 (__fastcall ***v25)(_QWORD); // [rsp+58h] [rbp-41h] BYREF
  _BYTE v26[8]; // [rsp+60h] [rbp-39h] BYREF
  __int64 v27; // [rsp+68h] [rbp-31h] BYREF
  int v28; // [rsp+70h] [rbp-29h] BYREF
  char v29; // [rsp+74h] [rbp-25h]
  char v30; // [rsp+A8h] [rbp+Fh]

  v22 = 1;
  v23 = 0LL;
  Microsoft::WRL::ComPtr<CInteraction>::InternalRelease((__int64 *)&v23);
  v6 = (_DWORD *)(*(__int64 (__fastcall **)(const struct IManipulationContext *, _BYTE *))(*(_QWORD *)a2 + 80LL))(
                   a2,
                   v26);
  v7 = 0LL;
  v8 = *v6;
  v9 = (__int64 *)(v6 + 2);
  v20 = v8;
  if ( &v24 != v9 )
  {
    v7 = *v9;
    *v9 = 0LL;
  }
  v24 = 0LL;
  v21 = (__int64 (__fastcall ***)(_QWORD))v7;
  Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(&v24);
  Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(&v27);
  v10 = (*(__int64 (__fastcall **)(const struct IManipulationContext *, _QWORD, int *))(*(_QWORD *)a2 + 64LL))(
          a2,
          *((unsigned int *)a1 + 1),
          &v22);
  if ( v10 >= 0 )
  {
    if ( v7 )
    {
      v11 = (*(__int64 (__fastcall **)(const struct IManipulationContext *, __int64, _QWORD))(*(_QWORD *)a2 + 56LL))(
              a2,
              v7,
              *(unsigned int *)a1);
      if ( !v11
        || (v12 = *(_QWORD *)a2,
            v13 = (*(__int64 (__fastcall **)(const struct IManipulationContext *))(*(_QWORD *)a2 + 16LL))(a2),
            (*(unsigned int (__fastcall **)(const struct IManipulationContext *, __int64, _QWORD))(v12 + 56))(
              a2,
              v13,
              *(unsigned int *)a1) > v11) )
      {
        v20 = 0;
        Microsoft::WRL::ComPtr<CInteraction>::InternalRelease((__int64 *)&v21);
      }
    }
    if ( (*((_DWORD *)a1 + 3) & 0x40000) != 0 )
    {
      if ( v22
        && v23 != v21
        && !(unsigned __int8)anonymous_namespace_::AllSupportedWithSingleTarget(a2, *(unsigned int *)a1) )
      {
        v20 = 1;
        Microsoft::WRL::ComPtr<CInteraction>::InternalRelease((__int64 *)&v21);
      }
      if ( (*((_DWORD *)a1 + 3) & 0x40000) != 0 && v22 == 2 && v20 == 1 && v21 )
      {
        v20 = 1;
        Microsoft::WRL::ComPtr<CInteraction>::InternalRelease((__int64 *)&v21);
      }
    }
    v14 = (__int64)v23;
    if ( v23 )
    {
      if ( v23 != v21 )
      {
        v16 = *(_QWORD *)a2;
        v17 = (*(__int64 (__fastcall **)(const struct IManipulationContext *))(*(_QWORD *)a2 + 16LL))(a2);
        LODWORD(v16) = (*(__int64 (__fastcall **)(const struct IManipulationContext *, __int64, _QWORD))(v16 + 56))(
                         a2,
                         v17,
                         *(unsigned int *)a1);
        if ( (*(unsigned int (__fastcall **)(const struct IManipulationContext *, __int64, _QWORD))(*(_QWORD *)a2 + 56LL))(
               a2,
               v14,
               *(unsigned int *)a1) == (_DWORD)v16 )
        {
          if ( ((unsigned int (__fastcall *)(__int64 (__fastcall ***)(_QWORD), _QWORD, _QWORD, __int64))(*v23)[10])(
                 v23,
                 *(unsigned int *)a1,
                 0LL,
                 1LL) )
          {
            v24 = 0LL;
            v18 = (__int64)v23;
            Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(&v24);
            if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v18 + 120LL))(
                   v18,
                   *(unsigned int *)a1,
                   &v24) >= 0 )
            {
              (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v24 + 40LL))(v24, &v28);
              v19 = v28 == 1 && ((v29 & 1) != 0 || (v29 & 2) != 0);
              if ( ((v30 & 1) == 0 || v19) && (unsigned int)(*v23)[16](v23) )
              {
                Microsoft::WRL::ComPtr<CInteraction>::operator=((__int64 *)&v21, (__int64 *)&v23);
                v20 = v22;
              }
            }
            Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(&v24);
          }
        }
      }
    }
    if ( !v20 )
    {
      if ( !v22 && (*((_DWORD *)a1 + 3) & 0x40000) == 0 )
      {
LABEL_12:
        *(_DWORD *)a3 = v20;
        Microsoft::WRL::ComPtr<CInteraction>::operator=((__int64 *)a3 + 1, (__int64 *)&v21);
        goto LABEL_13;
      }
      v20 = 1;
      Microsoft::WRL::ComPtr<CInteraction>::InternalRelease((__int64 *)&v21);
    }
    if ( !v21 && v20 == 1 )
    {
      (*(void (__fastcall **)(const struct IManipulationContext *, __int64 *))(*(_QWORD *)a2 + 96LL))(a2, &v24);
      if ( v25 )
      {
        Microsoft::WRL::ComPtr<CInteraction>::InternalRelease((__int64 *)&v21);
        Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v25);
        v10 = 0;
        v21 = v25;
      }
      Microsoft::WRL::ComPtr<CInteraction>::InternalRelease((__int64 *)&v25);
    }
    goto LABEL_12;
  }
LABEL_13:
  Microsoft::WRL::ComPtr<CInteraction>::InternalRelease((__int64 *)&v23);
  Microsoft::WRL::ComPtr<CInteraction>::InternalRelease((__int64 *)&v21);
  return (unsigned int)v10;
}
