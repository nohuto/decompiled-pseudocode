/*
 * XREFs of ?TargetPointer@CManipulationManager@@AEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEAPEAXPEAI@Z @ 0x1800A73BC
 * Callers:
 *     ?TargetFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180006FDC (-TargetFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800068B0 (--4-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?IsRoute@TargetingInfo@@QEBA_NXZ @ 0x180008834 (-IsRoute@TargetingInfo@@QEBA_NXZ.c)
 *     ?QpcToMicroSec@QpcTimeConverter@@QEBAH_KPEA_K@Z @ 0x180020C40 (-QpcToMicroSec@QpcTimeConverter@@QEBAH_KPEA_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A57F0 (-InternalRelease@-$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetPointerTarget@CGestureTargetingManager@@SAJAEBUtagPOINTER_INFO@@PEBUIManipulationContext@@PEAUTargetingInfo@@@Z @ 0x1800A6B00 (-GetPointerTarget@CGestureTargetingManager@@SAJAEBUtagPOINTER_INFO@@PEBUIManipulationContext@@PE.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     Template_qq @ 0x180106698 (Template_qq.c)
 *     ?GetHoverTarget@CManipulationContext@@QEBAPEAVCInteraction@@I@Z @ 0x1801106D4 (-GetHoverTarget@CManipulationContext@@QEBAPEAVCInteraction@@I@Z.c)
 *     ??$?4VCInteraction@@@?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x180112724 (--$-4VCInteraction@@@-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteractio.c)
 *     _TlgWrite @ 0x180114534 (_TlgWrite.c)
 */

void __fastcall CManipulationManager::TargetPointer(
        CManipulationContext **this,
        struct CManipulationContext *a2,
        struct CManipulationFrame *a3,
        unsigned int a4,
        void **a5,
        unsigned int *a6)
{
  __int64 v8; // rbx
  __int64 v10; // r13
  char *v11; // rsi
  unsigned int *v12; // rbx
  unsigned __int64 v13; // r12
  int v14; // eax
  int PointerTarget; // eax
  const GUID *v16; // r8
  const GUID *v17; // r9
  __int64 v18; // r10
  int v19; // r15d
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  void **v23; // rdi
  __int64 v24; // r10
  char IsRoute; // al
  char v26; // dl
  __int64 v27; // rdx
  __int64 *v28; // rcx
  struct CInteraction *HoverTarget; // rax
  struct CInteraction *v30; // rax
  int v31; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v32; // [rsp+38h] [rbp-C8h] BYREF
  void **v33; // [rsp+40h] [rbp-C0h]
  __int64 v34; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v35; // [rsp+50h] [rbp-B0h] BYREF
  int v36; // [rsp+58h] [rbp-A8h] BYREF
  int v37; // [rsp+5Ch] [rbp-A4h] BYREF
  int v38; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v39; // [rsp+68h] [rbp-98h] BYREF
  __int64 v40; // [rsp+70h] [rbp-90h] BYREF
  unsigned int *v41; // [rsp+78h] [rbp-88h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-80h] BYREF
  char *v43; // [rsp+A0h] [rbp-60h]
  __int64 v44; // [rsp+A8h] [rbp-58h]
  __int64 *v45; // [rsp+B0h] [rbp-50h]
  __int64 v46; // [rsp+B8h] [rbp-48h]
  int *v47; // [rsp+C0h] [rbp-40h]
  __int64 v48; // [rsp+C8h] [rbp-38h]
  int *v49; // [rsp+D0h] [rbp-30h]
  __int64 v50; // [rsp+D8h] [rbp-28h]
  int *v51; // [rsp+E0h] [rbp-20h]
  __int64 v52; // [rsp+E8h] [rbp-18h]
  unsigned __int64 *v53; // [rsp+F0h] [rbp-10h]
  __int64 v54; // [rsp+F8h] [rbp-8h]

  v41 = a6;
  v8 = a4;
  *a5 = 0LL;
  *a6 = 0;
  v33 = a5;
  v32 = 0LL;
  v31 = 1;
  Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(&v32);
  v10 = 152 * v8;
  v11 = (char *)a3 + 152 * v8;
  v12 = (unsigned int *)(v11 + 36);
  if ( (unsigned int)QpcTimeConverter::QpcToMicroSec((QpcTimeConverter *)(this + 38), *((_QWORD *)v11 + 14), &v39) )
    v13 = v39;
  else
    v13 = 1000LL * *((unsigned int *)v11 + 24);
  if ( (*((_BYTE *)a3 + 28) & 2) != 0 )
  {
    v28 = &v32;
    goto LABEL_32;
  }
  v14 = *((_DWORD *)v11 + 11);
  if ( (v14 & 0x40004) == 0 )
  {
    if ( (v14 & 0x800002) != 0 )
    {
      if ( (v14 & 0x20006) == 0x20002 )
      {
        HoverTarget = CManipulationContext::GetHoverTarget(this[34], *v12);
        Microsoft::WRL::ComPtr<IInteractionResource>::operator=<CInteraction>(&v32, HoverTarget);
        (*(void (__fastcall **)(struct CManipulationContext *, _QWORD, int *))(*(_QWORD *)a2 + 72LL))(a2, *v12, &v31);
      }
      goto LABEL_23;
    }
    v27 = *v12;
    v35 = 0LL;
    v34 = 0LL;
    (*(void (__fastcall **)(struct CManipulationContext *, __int64, __int64 *))(*(_QWORD *)a2 + 64LL))(a2, v27, &v34);
    Microsoft::WRL::ComPtr<CInteraction>::operator=(&v32, &v35);
    if ( !v35 && !(_DWORD)v34 )
    {
      v30 = CManipulationContext::GetHoverTarget(this[34], *v12);
      Microsoft::WRL::ComPtr<IInteractionResource>::operator=<CInteraction>(&v32, v30);
    }
    v28 = &v35;
LABEL_32:
    Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(v28);
LABEL_23:
    v23 = v33;
    goto LABEL_16;
  }
  PointerTarget = CGestureTargetingManager::GetPointerTarget(
                    (const struct tagPOINTER_INFO *)(v11 + 32),
                    a2,
                    (struct TargetingInfo *)&v31);
  v18 = v32;
  v19 = PointerTarget;
  if ( PointerTarget >= 0 && v32 && v31 )
  {
    LOBYTE(v16) = 1;
    v20 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, const GUID *, _QWORD, int *))(*(_QWORD *)v32 + 176LL))(
            v32,
            v13,
            v16,
            0LL,
            &v31);
    v18 = v32;
    v19 = v20;
  }
  if ( (unsigned int)pRelatedActivityId > 4 && (qword_1801EAA90 & 2) != 0 && (qword_1801EAA98 & 2) == qword_1801EAA98 )
  {
    v43 = v11 + 36;
    v45 = &v40;
    v36 = v31;
    v47 = &v36;
    v37 = *((_DWORD *)v11 + 16);
    v49 = &v37;
    v38 = *((_DWORD *)v11 + 17);
    v51 = &v38;
    v53 = &v39;
    v44 = 4LL;
    v40 = v18;
    v46 = 8LL;
    v48 = 4LL;
    v50 = 4LL;
    v52 = 4LL;
    LODWORD(v39) = v19;
    v54 = 4LL;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1801C5322, v16, v17, 8u, &pData);
  }
  v21 = *v12;
  v35 = 0LL;
  v34 = 0LL;
  (*(void (__fastcall **)(struct CManipulationContext *, __int64, __int64 *))(*(_QWORD *)a2 + 64LL))(a2, v21, &v34);
  if ( v19 < 0 )
    Microsoft::WRL::ComPtr<CInteraction>::operator=(&v32, &v35);
  if ( v31 )
  {
    if ( v32 != v35 )
    {
      if ( (_DWORD)v34 )
      {
        TargetingInfo::IsRoute((TargetingInfo *)&v34);
        IsRoute = TargetingInfo::IsRoute((TargetingInfo *)&v31);
        if ( v26 != IsRoute )
        {
          *((_BYTE *)a3 + v10 + 180) |= 1u;
          *((_BYTE *)a3 + 28) |= 4u;
        }
      }
    }
  }
  else
  {
    if ( (*((_DWORD *)v11 + 11) & 0x40000) == 0 )
    {
      v23 = v33;
      *v33 = (void *)-1LL;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        Template_qq(v22, &MANIPULATION_POINTER_BUFFERED, *((unsigned int *)v11 + 10), *v12);
      goto LABEL_15;
    }
    v31 = 1;
    Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(&v32);
  }
  (*(void (__fastcall **)(struct CManipulationContext *, _QWORD, int *))(*(_QWORD *)a2 + 72LL))(a2, *v12, &v31);
  v23 = v33;
LABEL_15:
  Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(&v35);
LABEL_16:
  if ( v32 && (unsigned __int8)TargetingInfo::IsRoute((TargetingInfo *)&v31) )
    (*(void (__fastcall **)(__int64, _QWORD, void **, unsigned int *))(*(_QWORD *)v24 + 72LL))(
      v24,
      *((unsigned int *)v11 + 8),
      v23,
      v41);
  Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(&v32);
}
