/*
 * XREFs of ?TargetPointer@CManipulationManager@@AEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEAPEAXPEAI@Z @ 0x18012C120
 * Callers:
 *     ?TargetFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x18012C014 (-TargetFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1800636A0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     Template_qq @ 0x1800E1F4C (Template_qq.c)
 *     ?ResolveInteractionHandle@CInteraction@@SAXI_KPEAPEAV1@@Z @ 0x18010D2D4 (-ResolveInteractionHandle@CInteraction@@SAXI_KPEAPEAV1@@Z.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1801298EC (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@IEAAKXZ @ 0x18012A2B4 (-InternalRelease@-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetPointerTarget@CGestureTargetingManager@@SAJAEBUtagPOINTER_INFO@@PEBUIManipulationContext@@PEAUTargetingInfo@@@Z @ 0x180132078 (-GetPointerTarget@CGestureTargetingManager@@SAJAEBUtagPOINTER_INFO@@PEBUIManipulationContext@@PE.c)
 */

void __fastcall CManipulationManager::TargetPointer(
        CManipulationManager *this,
        struct CManipulationContext *a2,
        struct CManipulationFrame *a3,
        unsigned int a4,
        void **a5,
        unsigned int *a6)
{
  struct CInteraction *v6; // r13
  __int64 v9; // r12
  bool v10; // zf
  char *v11; // rsi
  int *v12; // r14
  __int64 *v13; // rcx
  int v14; // eax
  int PointerTarget; // eax
  const GUID *v16; // r9
  int v17; // r13d
  __int64 v18; // rcx
  int v19; // [rsp+30h] [rbp-D0h] BYREF
  struct CInteraction *v20; // [rsp+38h] [rbp-C8h] BYREF
  struct CInteraction *v21; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+48h] [rbp-B8h] BYREF
  struct CInteraction *v23; // [rsp+50h] [rbp-B0h] BYREF
  int v24; // [rsp+58h] [rbp-A8h] BYREF
  int v25; // [rsp+5Ch] [rbp-A4h] BYREF
  int v26; // [rsp+60h] [rbp-A0h] BYREF
  int v27; // [rsp+64h] [rbp-9Ch] BYREF
  struct CInteraction *v28; // [rsp+68h] [rbp-98h] BYREF
  unsigned int *v29; // [rsp+70h] [rbp-90h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-80h] BYREF
  int *v31; // [rsp+A0h] [rbp-60h]
  __int64 v32; // [rsp+A8h] [rbp-58h]
  struct CInteraction **v33; // [rsp+B0h] [rbp-50h]
  __int64 v34; // [rsp+B8h] [rbp-48h]
  int *v35; // [rsp+C0h] [rbp-40h]
  __int64 v36; // [rsp+C8h] [rbp-38h]
  int *v37; // [rsp+D0h] [rbp-30h]
  __int64 v38; // [rsp+D8h] [rbp-28h]
  int *v39; // [rsp+E0h] [rbp-20h]
  __int64 v40; // [rsp+E8h] [rbp-18h]
  int *v41; // [rsp+F0h] [rbp-10h]
  __int64 v42; // [rsp+F8h] [rbp-8h]

  v6 = (struct CInteraction *)a5;
  v29 = a6;
  v21 = (struct CInteraction *)a5;
  v19 = 1;
  *a5 = 0LL;
  *a6 = 0;
  v9 = 152LL * a4;
  v10 = (*((_BYTE *)a3 + 28) & 2) == 0;
  v20 = 0LL;
  v11 = (char *)a3 + v9;
  v12 = (int *)((char *)a3 + v9 + 36);
  if ( !v10 )
  {
    v13 = (__int64 *)&v20;
LABEL_24:
    Microsoft::WRL::ComPtr<CManipulationFrame>::InternalRelease(v13);
    goto LABEL_25;
  }
  v14 = *((_DWORD *)v11 + 11);
  if ( (v14 & 0x40004) != 0 )
  {
    PointerTarget = CGestureTargetingManager::GetPointerTarget(
                      (const struct tagPOINTER_INFO *)(v11 + 32),
                      a2,
                      (struct TargetingInfo *)&v19);
    v17 = PointerTarget;
    if ( (unsigned int)pRelatedActivityId > 4 && (qword_180190AC0 & 2) != 0 && (qword_180190AC8 & 2) == qword_180190AC8 )
    {
      v28 = v20;
      v33 = &v28;
      v24 = v19;
      v35 = &v24;
      v27 = *((_DWORD *)v11 + 16);
      v37 = &v27;
      v25 = *((_DWORD *)v11 + 17);
      v39 = &v25;
      v41 = &v26;
      v31 = v12;
      v32 = 4LL;
      v34 = 8LL;
      v36 = 4LL;
      v38 = 4LL;
      v40 = 4LL;
      v26 = PointerTarget;
      v42 = 4LL;
      TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_18016EFE0, (LPCGUID)4, v16, 8u, &pData);
    }
    v23 = 0LL;
    v22 = 0LL;
    (*(void (__fastcall **)(struct CManipulationContext *, _QWORD, __int64 *))(*(_QWORD *)a2 + 64LL))(
      a2,
      (unsigned int)*v12,
      &v22);
    if ( v17 < 0 )
      Microsoft::WRL::ComPtr<IInteractionResource>::operator=((__int64 *)&v20, (__int64 *)&v23);
    if ( v19 )
    {
      if ( v20 != v23 && (_DWORD)v22 )
      {
        *((_BYTE *)a3 + v9 + 180) |= 1u;
        *((_BYTE *)a3 + 28) |= 4u;
      }
    }
    else
    {
      if ( (*((_DWORD *)v11 + 11) & 0x40000) == 0 )
      {
        v6 = v21;
        *(_QWORD *)v21 = -1LL;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          Template_qq(v18, &MANIPULATION_POINTER_BUFFERED, *((_DWORD *)v11 + 10), *v12);
        goto LABEL_23;
      }
      v19 = 1;
      Microsoft::WRL::ComPtr<CManipulationFrame>::InternalRelease((__int64 *)&v20);
    }
    (*(void (__fastcall **)(struct CManipulationContext *, _QWORD, int *))(*(_QWORD *)a2 + 72LL))(
      a2,
      (unsigned int)*v12,
      &v19);
    v6 = v21;
LABEL_23:
    v13 = (__int64 *)&v23;
    goto LABEL_24;
  }
  if ( (v14 & 2) == 0 )
  {
    v23 = 0LL;
    v22 = 0LL;
    (*(void (__fastcall **)(struct CManipulationContext *, _QWORD, __int64 *))(*(_QWORD *)a2 + 64LL))(
      a2,
      (unsigned int)*v12,
      &v22);
    Microsoft::WRL::ComPtr<IInteractionResource>::operator=((__int64 *)&v20, (__int64 *)&v23);
    goto LABEL_23;
  }
  if ( (v14 & 0x20006) != 0x20002 )
    goto LABEL_27;
  CInteraction::ResolveInteractionHandle(*((_DWORD *)v11 + 14), *((_QWORD *)v11 + 14), &v21);
  v20 = v21;
  (*(void (__fastcall **)(struct CManipulationContext *, _QWORD, int *))(*(_QWORD *)a2 + 72LL))(
    a2,
    (unsigned int)*v12,
    &v19);
LABEL_25:
  if ( v20 )
    (*(void (__fastcall **)(struct CInteraction *, _QWORD, struct CInteraction *, unsigned int *))(*(_QWORD *)v20 + 72LL))(
      v20,
      *((unsigned int *)v11 + 8),
      v6,
      v29);
LABEL_27:
  Microsoft::WRL::ComPtr<CManipulationFrame>::InternalRelease((__int64 *)&v20);
}
