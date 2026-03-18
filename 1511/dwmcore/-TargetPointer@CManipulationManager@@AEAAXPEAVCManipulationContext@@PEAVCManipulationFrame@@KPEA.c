/*
 * XREFs of ?TargetPointer@CManipulationManager@@AEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEAPEAXPEAI@Z @ 0x1800A685C
 * Callers:
 *     ?TargetFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x1800048FC (-TargetFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?FindKey@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBAHAEBI@Z @ 0x180001C1C (-FindKey@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@.c)
 *     ?InternalRelease@?$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ @ 0x180003F94 (-InternalRelease@-$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180003FD4 (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _TlgWrite @ 0x18001D460 (_TlgWrite.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetPointerTarget@CGestureTargetingManager@@SAJAEBUtagPOINTER_INFO@@PEBUIManipulationContext@@PEAUTargetingInfo@@@Z @ 0x1800A7050 (-GetPointerTarget@CGestureTargetingManager@@SAJAEBUtagPOINTER_INFO@@PEBUIManipulationContext@@PE.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ??$?4VCInteraction@@@?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x1800FF2B8 (--$-4VCInteraction@@@-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteractio.c)
 *     Template_qq @ 0x180100238 (Template_qq.c)
 */

void __fastcall CManipulationManager::TargetPointer(
        CManipulationManager *this,
        struct CManipulationContext *a2,
        struct CManipulationFrame *a3,
        unsigned int a4,
        void **a5,
        unsigned int *a6)
{
  void **v6; // r13
  __int64 v9; // r12
  bool v10; // zf
  char *v11; // r14
  int *v12; // rsi
  __int64 *v13; // rcx
  int v14; // eax
  __int64 v15; // r10
  int Key; // eax
  __int64 v17; // r10
  __int64 v18; // rdx
  int PointerTarget; // eax
  const GUID *v20; // r9
  int v21; // r13d
  __int64 v22; // rcx
  int v23; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v24; // [rsp+38h] [rbp-C8h] BYREF
  int v25; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v26; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v27; // [rsp+50h] [rbp-B0h] BYREF
  void **v28; // [rsp+58h] [rbp-A8h]
  int v29; // [rsp+60h] [rbp-A0h] BYREF
  int v30; // [rsp+64h] [rbp-9Ch] BYREF
  int v31; // [rsp+68h] [rbp-98h] BYREF
  unsigned int *v32; // [rsp+70h] [rbp-90h]
  __int64 v33; // [rsp+78h] [rbp-88h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-80h] BYREF
  int *v35; // [rsp+A0h] [rbp-60h]
  __int64 v36; // [rsp+A8h] [rbp-58h]
  __int64 *v37; // [rsp+B0h] [rbp-50h]
  __int64 v38; // [rsp+B8h] [rbp-48h]
  int *v39; // [rsp+C0h] [rbp-40h]
  __int64 v40; // [rsp+C8h] [rbp-38h]
  int *v41; // [rsp+D0h] [rbp-30h]
  __int64 v42; // [rsp+D8h] [rbp-28h]
  int *v43; // [rsp+E0h] [rbp-20h]
  __int64 v44; // [rsp+E8h] [rbp-18h]
  int *v45; // [rsp+F0h] [rbp-10h]
  __int64 v46; // [rsp+F8h] [rbp-8h]

  v6 = a5;
  v32 = a6;
  v28 = a5;
  v23 = 1;
  *a5 = 0LL;
  *a6 = 0;
  v9 = 152LL * a4;
  v10 = (*((_BYTE *)a3 + 28) & 2) == 0;
  v24 = 0LL;
  v11 = (char *)a3 + v9;
  v12 = (int *)((char *)a3 + v9 + 36);
  if ( !v10 )
  {
    v13 = &v24;
LABEL_27:
    Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(v13);
    goto LABEL_28;
  }
  v14 = *((_DWORD *)v11 + 11);
  if ( (v14 & 0x40004) != 0 )
  {
    PointerTarget = CGestureTargetingManager::GetPointerTarget(
                      (const struct tagPOINTER_INFO *)(v11 + 32),
                      a2,
                      (struct TargetingInfo *)&v23);
    v21 = PointerTarget;
    if ( (unsigned int)pRelatedActivityId > 4 && (qword_18019E950 & 2) != 0 && (qword_18019E958 & 2) == qword_18019E958 )
    {
      v33 = v24;
      v37 = &v33;
      v25 = v23;
      v39 = &v25;
      v29 = *((_DWORD *)v11 + 16);
      v41 = &v29;
      v31 = *((_DWORD *)v11 + 17);
      v43 = &v31;
      v45 = &v30;
      v35 = v12;
      v36 = 4LL;
      v38 = 8LL;
      v40 = 4LL;
      v42 = 4LL;
      v44 = 4LL;
      v30 = PointerTarget;
      v46 = 4LL;
      TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_18017E1CC, (LPCGUID)4, v20, 8u, &pData);
    }
    v27 = 0LL;
    v26 = 0LL;
    (*(void (__fastcall **)(struct CManipulationContext *, _QWORD, __int64 *))(*(_QWORD *)a2 + 64LL))(
      a2,
      (unsigned int)*v12,
      &v26);
    if ( v21 < 0 )
      Microsoft::WRL::ComPtr<IInteractionResource>::operator=(&v24, &v27);
    if ( v23 )
    {
      if ( v24 != v27 && (_DWORD)v26 )
      {
        *((_BYTE *)a3 + v9 + 180) |= 1u;
        *((_BYTE *)a3 + 28) |= 4u;
      }
    }
    else
    {
      if ( (*((_DWORD *)v11 + 11) & 0x40000) == 0 )
      {
        v6 = v28;
        *v28 = (void *)-1LL;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          Template_qq(v22, &MANIPULATION_POINTER_BUFFERED, *((unsigned int *)v11 + 10), (unsigned int)*v12);
        goto LABEL_26;
      }
      v23 = 1;
      Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(&v24);
    }
    (*(void (__fastcall **)(struct CManipulationContext *, _QWORD, int *))(*(_QWORD *)a2 + 72LL))(
      a2,
      (unsigned int)*v12,
      &v23);
    v6 = v28;
LABEL_26:
    v13 = &v27;
    goto LABEL_27;
  }
  if ( (v14 & 2) == 0 )
  {
    v27 = 0LL;
    v26 = 0LL;
    (*(void (__fastcall **)(struct CManipulationContext *, _QWORD, __int64 *))(*(_QWORD *)a2 + 64LL))(
      a2,
      (unsigned int)*v12,
      &v26);
    Microsoft::WRL::ComPtr<IInteractionResource>::operator=(&v24, &v27);
    goto LABEL_26;
  }
  if ( (v14 & 0x20006) != 0x20002 )
    goto LABEL_30;
  v15 = *((_QWORD *)this + 34);
  v25 = *v12;
  Key = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey(
          v15 + 56,
          &v25);
  if ( Key == -1 )
    v18 = 0LL;
  else
    v18 = *(_QWORD *)(*(_QWORD *)(v17 + 64) + 8LL * Key);
  Microsoft::WRL::ComPtr<IInteractionResource>::operator=<CInteraction>(&v24, v18);
  (*(void (__fastcall **)(struct CManipulationContext *, _QWORD, int *))(*(_QWORD *)a2 + 72LL))(
    a2,
    (unsigned int)*v12,
    &v23);
LABEL_28:
  if ( v24 )
    (*(void (__fastcall **)(__int64, _QWORD, void **, unsigned int *))(*(_QWORD *)v24 + 72LL))(
      v24,
      *((unsigned int *)v11 + 8),
      v6,
      v32);
LABEL_30:
  Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(&v24);
}
