/*
 * XREFs of ?ProcessHandledInteractions@CInteractionProcessor@@QEAAJPEAUIManipulationResource@@_K_NW4InertiaFrameType@@PEAW4PointerResult@@@Z @ 0x18016E9F8
 * Callers:
 *     ?ProcessHandledInteractions@CInteraction@@UEAAJ_K_NW4InertiaFrameType@@PEAW4PointerResult@@@Z @ 0x18000D8E0 (-ProcessHandledInteractions@CInteraction@@UEAAJ_K_NW4InertiaFrameType@@PEAW4PointerResult@@@Z.c)
 * Callees:
 *     ?GetInteractionContext@CInteractionProcessor@@QEBAJW4InputType@@PEAPEAUIInteractionContextWrapper@@@Z @ 0x18000DD9C (-GetInteractionContext@CInteractionProcessor@@QEBAJW4InputType@@PEAPEAUIInteractionContextWrappe.c)
 *     ?InternalRelease@?$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A57F0 (-InternalRelease@-$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?ProcessOutput@CInteractionProcessor@@QEAAXPEAUIManipulationResource@@_N1AEAUInteractionOutput@@@Z @ 0x18016ECE4 (-ProcessOutput@CInteractionProcessor@@QEAAXPEAUIManipulationResource@@_N1AEAUInteractionOutput@@.c)
 */

__int64 __fastcall CInteractionProcessor::ProcessHandledInteractions(
        __int64 a1,
        struct IManipulationResource *a2,
        __int64 a3,
        bool a4,
        int a5,
        _DWORD *a6)
{
  int v6; // r12d
  bool v11; // r15
  char v12; // al
  unsigned __int8 v13; // dl
  __int64 v14; // rbx
  bool v15; // r9
  bool v16; // r9
  bool v17; // r8
  __int64 v18; // rax
  char v19; // cl
  char v20; // cl
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v24; // [rsp+30h] [rbp-89h] BYREF
  _OWORD v25[3]; // [rsp+38h] [rbp-81h] BYREF
  __int64 v26; // [rsp+68h] [rbp-51h]
  int v27; // [rsp+70h] [rbp-49h]
  _BYTE v28[64]; // [rsp+78h] [rbp-41h] BYREF

  v6 = 0;
  if ( a6 )
    *a6 = 1;
  v11 = (*(_BYTE *)(a1 + 408) & 0x20) != 0 && *(_DWORD *)(a1 + 384) != 1
     || (*(unsigned __int8 (__fastcall **)(struct IManipulationResource *))(*(_QWORD *)a2 + 24LL))(a2);
  if ( !(*(unsigned int (__fastcall **)(struct IManipulationResource *))(*(_QWORD *)a2 + 16LL))(a2)
    || (*(unsigned int (__fastcall **)(struct IManipulationResource *))(*(_QWORD *)a2 + 16LL))(a2) == 2
    && *(_DWORD *)(a1 + 388) == 2
    || v11 )
  {
    if ( a6 )
      *a6 = 2;
    v12 = *(_BYTE *)(a1 + 408);
    if ( (v12 & 0x10) == 0 )
    {
      v13 = v12 ^ (v12 ^ (16 * a4)) & 0x10;
      *(_BYTE *)(a1 + 408) = v13;
      if ( !a5 )
      {
        v24 = 0LL;
        Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(&v24);
        CInteractionProcessor::GetInteractionContext((_QWORD *)a1, *(_DWORD *)(a1 + 388), &v24);
        v14 = v24;
        if ( v24 )
        {
          memset_0(v25, 0, 0x3CuLL);
          if ( a4 )
          {
            if ( (*(_BYTE *)(a1 + 408) & 0x20) != 0
              && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v14 + 80LL))(v14) )
            {
              if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 88LL))(v14, 0LL) )
              {
                if ( (*(unsigned int (__fastcall **)(__int64, _QWORD, __int64, __int64, _OWORD *))(*(_QWORD *)v14 + 112LL))(
                       v14,
                       *(_QWORD *)(a1 + 424),
                       a3,
                       a1 + 772,
                       v25) )
                {
                  CInteractionProcessor::ProcessOutput(
                    (CInteractionProcessor *)a1,
                    a2,
                    a4,
                    v15,
                    (struct InteractionOutput *)v25);
                }
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 120LL))(v14);
              }
              (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 72LL))(v14, 0LL);
            }
            v6 = (*(__int64 (__fastcall **)(__int64, __int64, _OWORD *))(*(_QWORD *)v14 + 56LL))(v14, a1 + 772, v25);
            if ( v6 < 0 )
              goto LABEL_29;
            v17 = a4;
          }
          else
          {
            v18 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v14 + 40LL))(v14, v28);
            v17 = 0;
            v25[0] = *(_OWORD *)v18;
            v25[1] = *(_OWORD *)(v18 + 16);
            v25[2] = *(_OWORD *)(v18 + 32);
            v26 = *(_QWORD *)(v18 + 48);
            v27 = *(_DWORD *)(v18 + 56);
          }
          CInteractionProcessor::ProcessOutput(
            (CInteractionProcessor *)a1,
            a2,
            v17,
            v16,
            (struct InteractionOutput *)v25);
        }
LABEL_29:
        Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(&v24);
        return (unsigned int)v6;
      }
      v19 = *(_BYTE *)(a1 + 409);
      v24 = 0LL;
      v20 = (v13 >> 6) | *(_BYTE *)(a1 + 144) & 0x18 | (4 * (v19 & 1 | 8));
      LODWORD(v24) = 3;
      v21 = *(_QWORD *)a2;
      BYTE4(v24) = v20;
      (*(void (__fastcall **)(struct IManipulationResource *, __int64 *))(v21 + 8))(a2, &v24);
      if ( a5 == 2 )
      {
        v22 = *(_QWORD *)a2;
        LODWORD(v24) = 0;
        (*(void (__fastcall **)(struct IManipulationResource *, __int64 *))(v22 + 8))(a2, &v24);
      }
    }
  }
  return (unsigned int)v6;
}
