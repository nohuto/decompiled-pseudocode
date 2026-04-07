/*
 * XREFs of ?GetDcompTargetsForNewGroup@CDesktopManager@@AEAAJPEAV?$DynArray@PEAUIDCompositionRenderTargetPartner@@$0A@@@PEAPEBVCDWMDisplay@@PEA_NPEAH3@Z @ 0x18001E910
 * Callers:
 *     ?CreateRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18001E778 (-CreateRenderTargets@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z @ 0x18001ECC0 (-EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18002AA44 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002AD08 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z @ 0x18003EA98 (-IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z.c)
 *     ?GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV?$DynArray@PEAVCDWMDisplay@@$0A@@@@Z @ 0x18003EC90 (-GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV-$DynArray@PEAVCDWMDisplay@@$0A@@@@Z.c)
 *     ?Release@CDWMDisplaySet@@QEBAXXZ @ 0x18003F06C (-Release@CDWMDisplaySet@@QEBAXXZ.c)
 *     ?GetDcompTarget@CDWMDisplay@@QEAAPEAUIDCompositionRenderTargetPartner@@XZ @ 0x18003F2D0 (-GetDcompTarget@CDWMDisplay@@QEAAPEAUIDCompositionRenderTargetPartner@@XZ.c)
 *     ?SetDcompTarget@CDWMDisplay@@QEAAXPEAUIDCompositionRenderTargetPartner@@@Z @ 0x18003F300 (-SetDcompTarget@CDWMDisplay@@QEAAXPEAUIDCompositionRenderTargetPartner@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ?CalculateRotationAngles@CDWMDisplaySet@@SAJPEBV1@0PEAH1@Z @ 0x180072C00 (-CalculateRotationAngles@CDWMDisplaySet@@SAJPEBV1@0PEAH1@Z.c)
 */

__int64 __fastcall CDesktopManager::GetDcompTargetsForNewGroup(
        const struct CDWMDisplaySet **this,
        __int64 a2,
        volatile signed __int32 **a3,
        char *a4,
        int *a5,
        int *a6)
{
  unsigned int v6; // r13d
  __int64 (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // rcx
  CDWMDisplaySet *v10; // r14
  __int64 (__fastcall **v11)(_QWORD, GUID *, __int64 *); // rax
  struct IDCompositionRenderTargetPartner *DcompTarget; // r12
  __int64 (__fastcall *v13)(_QWORD, GUID *, __int64 *); // rax
  int AllDisplaysNoRef; // eax
  unsigned int v15; // ebx
  int v16; // eax
  char v17; // dl
  __int64 v18; // r15
  __int64 v19; // rsi
  char v20; // cl
  CDWMDisplay *v21; // rbx
  unsigned int v22; // r15d
  unsigned int v23; // eax
  unsigned int v24; // edx
  int v25; // eax
  int v26; // esi
  const struct CDWMDisplaySet *v28; // rax
  __int64 v29; // rcx
  volatile signed __int32 *v30; // rdx
  unsigned int v31; // [rsp+28h] [rbp-79h]
  char v32; // [rsp+58h] [rbp-49h]
  char v33; // [rsp+59h] [rbp-48h]
  struct IDCompositionRenderTargetPartner *v34; // [rsp+60h] [rbp-41h] BYREF
  int v35; // [rsp+68h] [rbp-39h] BYREF
  int v36; // [rsp+6Ch] [rbp-35h] BYREF
  CDWMDisplaySet *v37; // [rsp+70h] [rbp-31h] BYREF
  __int64 v38; // [rsp+78h] [rbp-29h] BYREF
  __int128 v39; // [rsp+80h] [rbp-21h] BYREF
  __int64 v40; // [rsp+90h] [rbp-11h]
  unsigned int v41; // [rsp+98h] [rbp-9h]
  __int128 v42; // [rsp+A0h] [rbp-1h] BYREF
  __int64 v43; // [rsp+B0h] [rbp+Fh]
  unsigned int v44; // [rsp+B8h] [rbp+17h]

  v6 = 0;
  v32 = 1;
  v38 = 0LL;
  v34 = 0LL;
  v8 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 21);
  v37 = 0LL;
  v10 = 0LL;
  v43 = 0LL;
  v42 = 0LL;
  v11 = *v8;
  DcompTarget = 0LL;
  v44 = 0;
  v39 = 0LL;
  v40 = 0LL;
  v13 = *v11;
  v41 = 0;
  v35 = 0;
  v36 = 0;
  v33 = 0;
  AllDisplaysNoRef = v13(v8, &GUID_0ab6bdb3_4d49_46a8_b90b_1a86b0cd4e41, &v38);
  v15 = AllDisplaysNoRef;
  if ( AllDisplaysNoRef < 0 )
  {
    v31 = 831;
    goto LABEL_62;
  }
  v16 = CDesktopManager::EnumerateMonitors((CDesktopManager *)this, &v37);
  v15 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x341u);
    v10 = v37;
  }
  else
  {
    v10 = v37;
    if ( v37 )
    {
      AllDisplaysNoRef = CDWMDisplaySet::GetAllDisplaysNoRef(v37, &v42);
      v15 = AllDisplaysNoRef;
      if ( AllDisplaysNoRef < 0 )
      {
        v31 = 837;
        goto LABEL_62;
      }
    }
    AllDisplaysNoRef = CDWMDisplaySet::GetAllDisplaysNoRef(this[16], &v39);
    v15 = AllDisplaysNoRef;
    if ( AllDisplaysNoRef < 0 )
    {
      v31 = 840;
      goto LABEL_62;
    }
    if ( v10 && CDWMDisplaySet::IsEquivalentRotated(this[16], v10) )
    {
      v28 = this[16];
      v29 = *((unsigned int *)v28 + 8);
      if ( (unsigned int)v29 < *((_DWORD *)v28 + 16) )
      {
        v30 = *(volatile signed __int32 **)(*((_QWORD *)v28 + 5) + 8 * v29);
        *a3 = v30;
        _InterlockedIncrement(v30);
        v10 = v37;
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292412, 0xC8u);
      }
      CDWMDisplaySet::CalculateRotationAngles(v10, this[16], &v35, &v36);
      v17 = 0;
      v33 = 1;
      v32 = 0;
    }
    else
    {
      v17 = 1;
    }
    if ( v41 )
    {
      do
      {
        v18 = 0LL;
        v19 = *(_QWORD *)(v39 + 8LL * v6);
        v20 = 0;
        if ( v44 )
        {
          while ( !v20 )
          {
            v21 = *(CDWMDisplay **)(v42 + 8 * v18);
            if ( *(_DWORD *)(v19 + 176) == *((_DWORD *)v21 + 44) && !*(_BYTE *)(v19 + 164) )
            {
              DcompTarget = CDWMDisplay::GetDcompTarget(*(CDWMDisplay **)(v42 + 8 * v18));
              CDWMDisplay::SetDcompTarget((CDWMDisplay *)v19, DcompTarget);
              CDWMDisplay::SetDcompTarget(v21, 0LL);
              if ( DcompTarget )
              {
                if ( !v33 || !*(_BYTE *)(v19 + 212) || !*(_BYTE *)(v19 + 213) )
                {
                  AllDisplaysNoRef = (*(__int64 (__fastcall **)(struct IDCompositionRenderTargetPartner *, __int64, __int64, _QWORD))(*(_QWORD *)DcompTarget + 24LL))(
                                       DcompTarget,
                                       v19 + 56,
                                       v19 + 40,
                                       *(unsigned int *)(v19 + 208));
                  v15 = AllDisplaysNoRef;
                  if ( AllDisplaysNoRef < 0 )
                  {
                    v31 = 887;
                    goto LABEL_62;
                  }
                }
                (*(void (__fastcall **)(struct IDCompositionRenderTargetPartner *))(*(_QWORD *)DcompTarget + 16LL))(DcompTarget);
                DcompTarget = 0LL;
              }
              v20 = 1;
            }
            v18 = (unsigned int)(v18 + 1);
            if ( (unsigned int)v18 >= v44 )
              break;
          }
        }
        if ( *(_QWORD *)(v19 + 8) )
        {
          v17 = v32;
        }
        else
        {
          AllDisplaysNoRef = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _DWORD, __int64, __int64, _DWORD, struct IDCompositionRenderTargetPartner **))(*(_QWORD *)v38 + 632LL))(
                               v38,
                               66584LL,
                               *(_QWORD *)(*(_QWORD *)(v19 + 88) + 16LL),
                               *(_QWORD *)(v19 + 168),
                               *(_DWORD *)(v19 + 176),
                               v19 + 56,
                               v19 + 40,
                               *(_DWORD *)(v19 + 208),
                               &v34);
          v15 = AllDisplaysNoRef;
          if ( AllDisplaysNoRef < 0 )
          {
            v31 = 909;
            goto LABEL_62;
          }
          CDWMDisplay::SetDcompTarget((CDWMDisplay *)v19, v34);
          if ( v34 )
          {
            (*(void (__fastcall **)(struct IDCompositionRenderTargetPartner *))(*(_QWORD *)v34 + 16LL))(v34);
            v34 = 0LL;
          }
          v17 = 1;
          v32 = 1;
        }
        ++v6;
      }
      while ( v6 < v41 );
    }
    if ( v17 && (v22 = 0, v41) )
    {
      while ( 1 )
      {
        v34 = CDWMDisplay::GetDcompTarget(*(CDWMDisplay **)(v39 + 8LL * v22));
        v23 = *(_DWORD *)(a2 + 24);
        v24 = v23 + 1;
        if ( v23 + 1 < v23 )
          break;
        if ( v24 <= *(_DWORD *)(a2 + 20) )
        {
          *(_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 24)) = v34;
          *(_DWORD *)(a2 + 24) = v24;
        }
        else
        {
          v25 = DynArrayImpl<0>::AddMultipleAndSet(a2, 8LL, 1LL, &v34);
          v26 = v25;
          if ( v25 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0xC0u);
          v15 = v26;
          if ( v26 < 0 )
            goto LABEL_60;
        }
        if ( v34 )
        {
          (*(void (__fastcall **)(struct IDCompositionRenderTargetPartner *))(*(_QWORD *)v34 + 16LL))(v34);
          v34 = 0LL;
        }
        if ( ++v22 >= v41 )
          goto LABEL_33;
      }
      v26 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v15 = -2147024362;
LABEL_60:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0x39Cu);
    }
    else
    {
LABEL_33:
      AllDisplaysNoRef = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                              + 21)
                                                           + 24LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                    + 21));
      v15 = AllDisplaysNoRef;
      if ( AllDisplaysNoRef < 0 )
      {
        v31 = 929;
LABEL_62:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, AllDisplaysNoRef, v31);
      }
    }
  }
  *a5 = v35;
  *a6 = v36;
  *a4 = v33;
  if ( DcompTarget )
    (*(void (__fastcall **)(struct IDCompositionRenderTargetPartner *))(*(_QWORD *)DcompTarget + 16LL))(DcompTarget);
  if ( v10 )
    CDWMDisplaySet::Release(v10);
  if ( v34 )
    (*(void (__fastcall **)(struct IDCompositionRenderTargetPartner *))(*(_QWORD *)v34 + 16LL))(v34);
  DynArrayImpl<0>::~DynArrayImpl<0>(&v39);
  DynArrayImpl<0>::~DynArrayImpl<0>(&v42);
  return v15;
}
