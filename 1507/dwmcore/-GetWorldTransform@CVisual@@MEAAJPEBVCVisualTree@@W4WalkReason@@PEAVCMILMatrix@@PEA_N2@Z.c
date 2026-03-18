/*
 * XREFs of ?GetWorldTransform@CVisual@@MEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x1800372B0
 * Callers:
 *     ?GetCurrentNodeWorldTransform@CGraphIterator@@QEAAJPEAVCMILMatrix@@PEA_N0@Z @ 0x18000A6A8 (-GetCurrentNodeWorldTransform@CGraphIterator@@QEAAJPEAVCMILMatrix@@PEA_N0@Z.c)
 *     ?HitTestPoint@CHitTestContext@@QEAAJPEAVCVisual@@PEAVCVisualTree@@HHK_NPEAUHMONITOR__@@PEAPEAXPEAI4PEAU_LUID@@PEAVCMILMatrix@@5PEA_N5@Z @ 0x18000B398 (-HitTestPoint@CHitTestContext@@QEAAJPEAVCVisual@@PEAVCVisualTree@@HHK_NPEAUHMONITOR__@@PEAPEAXPE.c)
 *     ?PopulateWorldTransform@CHitTestContext@@AEAAJPEBVCVisualTree@@PEBVCVisual@@@Z @ 0x18000B938 (-PopulateWorldTransform@CHitTestContext@@AEAAJPEBVCVisualTree@@PEBVCVisual@@@Z.c)
 *     ?OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z @ 0x180130A3C (-OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z.c)
 * Callees:
 *     ?GetInputLuid@CVisual@@QEBA?AU_LUID@@XZ @ 0x18000BA6C (-GetInputLuid@CVisual@@QEBA-AU_LUID@@XZ.c)
 *     ?IsInTree@CVisualTree@@QEBA_NPEBVCVisual@@@Z @ 0x18000CF9C (-IsInTree@CVisualTree@@QEBA_NPEBVCVisual@@@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180031390 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z @ 0x180034EC0 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18003553C (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?SetWorldTransform@CTreeData@@MEAAJAEBVCMILMatrix@@_NPEAV2@@Z @ 0x1800598B0 (-SetWorldTransform@CTreeData@@MEAAJAEBVCMILMatrix@@_NPEAV2@@Z.c)
 *     ?GetInputHandle@CInteraction@@QEBAPEAXXZ @ 0x18005A05C (-GetInputHandle@CInteraction@@QEBAPEAXXZ.c)
 *     ?ReleaseWeakReference@CComposition@@QEAAXPEAVCWeakReferenceBase@@@Z @ 0x180067F90 (-ReleaseWeakReference@CComposition@@QEAAXPEAVCWeakReferenceBase@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     Template_xxffffffffffffffff @ 0x1800998F0 (Template_xxffffffffffffffff.c)
 *     memcmp_0 @ 0x180099BAE (memcmp_0.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x1800E2968 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAnalogCompositor@@@WRL@Microsoft@@IEAAKXZ @ 0x1801042EC (-InternalRelease@-$ComPtr@UIAnalogCompositor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z @ 0x18012A5D0 (-NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z.c)
 */

__int64 __fastcall CVisual::GetWorldTransform(__int64 a1, __int64 a2, int a3, __int64 a4, bool *a5, __int64 a6)
{
  bool v6; // zf
  __int64 v7; // r14
  __int64 v9; // r9
  _QWORD *v12; // rsi
  bool v13; // r8
  CVisual *v14; // rax
  bool v15; // di
  struct CWeakReferenceBase *v16; // rdx
  __int64 v17; // rcx
  __int64 **TreeData; // rax
  unsigned __int64 v19; // rcx
  __int64 result; // rax
  _OWORD *v21; // rcx
  _OWORD *v22; // rbx
  _BYTE *v23; // rax
  bool v24; // bl
  struct CManipulationManager *v25; // rcx
  __int64 v26; // rax
  int (*v27)(CDesktopTreeData *__hidden, const struct CMILMatrix *, bool, struct CMILMatrix *); // rdi
  CVisual *v28; // rdi
  CInteraction *v29; // rcx
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  int v32; // edi
  struct CManipulationManager *v33; // rbx
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  _QWORD *v36; // rcx
  _QWORD *v37; // rdx
  CVisual *v38; // r8
  CVisual *v39; // rcx
  _OWORD *v40; // rax
  int v41; // eax
  int v42; // edx
  int v43; // ecx
  LPVOID (__fastcall *v44)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  int ManipulationManager; // eax
  char v46; // [rsp+A0h] [rbp-80h]
  char v47[7]; // [rsp+A1h] [rbp-7Fh] BYREF
  struct CManipulationManager *v48; // [rsp+A8h] [rbp-78h] BYREF
  LPVOID (__fastcall *InputHandle)(WPF::ProcessHeapImpl *, SIZE_T); // [rsp+B0h] [rbp-70h]
  int v50; // [rsp+C0h] [rbp-60h] BYREF
  __int64 v51; // [rsp+C8h] [rbp-58h]
  __int128 Buf2; // [rsp+D0h] [rbp-50h] BYREF
  __int128 v53; // [rsp+E0h] [rbp-40h]
  __int128 v54; // [rsp+F0h] [rbp-30h]
  __int128 v55; // [rsp+100h] [rbp-20h]
  _BYTE v56[64]; // [rsp+110h] [rbp-10h] BYREF

  v6 = *(_BYTE *)(a2 + 32) == 0;
  v7 = a1 - 64;
  v9 = a6;
  v51 = a6;
  if ( v6 )
  {
    v36 = *(_QWORD **)(v7 + 432);
    if ( v36 == (_QWORD *)(v7 + 432) )
      return 2291674884LL;
    while ( 1 )
    {
      v12 = v36 - 33;
      if ( v36[4] == a2 )
        break;
      v36 = (_QWORD *)*v36;
      if ( v36 == (_QWORD *)(v7 + 432) )
        return 2291674884LL;
    }
  }
  else
  {
    v12 = (_QWORD *)(v7 + 448);
  }
  if ( !v12 )
    return 2291674884LL;
  v13 = 0;
  if ( a3 == 5 && (!v12[14] || !CVisualTree::IsInTree((const struct CVisual **)a2, (const struct CVisual *)v7)) )
  {
    *(_DWORD *)(a4 + 60) = 1065353216;
    *(_QWORD *)(a4 + 52) = 0LL;
    *(_QWORD *)(a4 + 44) = 0LL;
    *(_QWORD *)(a4 + 32) = 0LL;
    *(_QWORD *)(a4 + 24) = 0LL;
    *(_QWORD *)(a4 + 12) = 0LL;
    *(_QWORD *)(a4 + 4) = 0LL;
    *(_DWORD *)(a4 + 40) = 1065353216;
    *(_DWORD *)(a4 + 20) = 1065353216;
    *(_DWORD *)a4 = 1065353216;
    if ( v9 )
    {
      *(_QWORD *)(v9 + 52) = 0LL;
      *(_QWORD *)(v9 + 44) = 0LL;
      *(_QWORD *)(v9 + 32) = 0LL;
      *(_QWORD *)(v9 + 24) = 0LL;
      *(_QWORD *)(v9 + 12) = 0LL;
      *(_QWORD *)(v9 + 4) = 0LL;
      *(_DWORD *)(v9 + 60) = 1065353216;
      *(_DWORD *)(v9 + 40) = 1065353216;
      *(_DWORD *)(v9 + 20) = 1065353216;
      *(_DWORD *)v9 = 1065353216;
    }
    goto LABEL_16;
  }
  v14 = *(CVisual **)(a2 + 24);
  v15 = v14 == (CVisual *)v7;
  v16 = *(struct CWeakReferenceBase **)(v7 + 360);
  v46 = 0;
  if ( !v16 )
    goto LABEL_6;
  v38 = *(CVisual **)v16;
  if ( !*(_QWORD *)v16 )
  {
    CComposition::ReleaseWeakReference(*(CComposition **)(v7 + 16), v16);
    v9 = v51;
    *(_QWORD *)(v7 + 360) = 0LL;
    goto LABEL_6;
  }
  v39 = (CVisual *)v7;
  if ( (CVisual *)v7 == v38 || (CVisual *)v7 == v14 )
  {
LABEL_6:
    if ( *(_QWORD *)(a2 + 24) == v7 || (v17 = *(_QWORD *)(v7 + 80)) == 0 )
    {
      TreeData = 0LL;
    }
    else
    {
      TreeData = 0LL;
      if ( *(_BYTE *)(a2 + 32) )
      {
        TreeData = (__int64 **)(v17 + 448);
      }
      else
      {
        v37 = *(_QWORD **)(v17 + 432);
        if ( v37 != (_QWORD *)(v17 + 432) )
        {
          while ( v37[4] != a2 )
          {
            v37 = (_QWORD *)*v37;
            if ( v37 == (_QWORD *)(v17 + 432) )
              goto LABEL_10;
          }
          TreeData = (__int64 **)(v37 - 33);
        }
      }
    }
    goto LABEL_10;
  }
  while ( 1 )
  {
    v39 = (CVisual *)*((_QWORD *)v39 + 10);
    if ( v39 == v38 )
      break;
    if ( v39 == v14 )
      goto LABEL_6;
  }
  v46 = 1;
  TreeData = CVisual::FindTreeData(v38, (const struct CVisualTree *)a2);
LABEL_10:
  v19 = 1LL;
  if ( TreeData )
    v19 = (unsigned __int64)TreeData[14];
  if ( v12[14] < v19 )
  {
    v22 = 0LL;
    if ( TreeData )
      v22 = TreeData + 5;
    if ( *(_QWORD *)(v7 + 368) )
      v23 = v56;
    else
      v23 = 0LL;
    CVisual::CalcEffectiveTransform(v7, 4, v22, v47, (struct D2DMatrix *)&Buf2, (__int64)v23);
    v24 = v15 || v46 || v47[0] && memcmp_0(v22, &Buf2, 0x40uLL);
    if ( *(_QWORD *)(v7 + 368) )
      v25 = (struct CManipulationManager *)v56;
    else
      v25 = 0LL;
    v26 = *v12;
    v48 = v25;
    v27 = *(int (**)(CDesktopTreeData *__hidden, const struct CMILMatrix *, bool, struct CMILMatrix *))(v26 + 48);
    if ( v27 != CDesktopTreeData::SetWorldTransform )
    {
      if ( (char *)v27 == (char *)CTreeData::SetWorldTransform )
        v41 = CTreeData::SetWorldTransform((CTreeData *)v12, (const struct CMILMatrix *)&Buf2, v24, v25);
      else
        v41 = ((__int64 (__fastcall *)(_QWORD *, __int128 *, bool, struct CManipulationManager *))v27)(
                v12,
                &Buf2,
                v24,
                v48);
      v32 = v41;
      goto LABEL_33;
    }
    v28 = (CVisual *)v12[3];
    v29 = (CInteraction *)*((_QWORD *)v28 + 52);
    if ( v29 )
    {
      InputHandle = (LPVOID (__fastcall *)(WPF::ProcessHeapImpl *, SIZE_T))CInteraction::GetInputHandle(v29);
      if ( InputHandle )
      {
        if ( memcmp_0(&Buf2, v12 + 5, 0x40uLL) )
        {
          CVisual::GetInputLuid(v28, &v50);
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
            Template_xxffffffffffffffff(
              v43,
              v42,
              (_DWORD)InputHandle,
              v50,
              Buf2,
              SBYTE4(Buf2),
              SBYTE8(Buf2),
              SBYTE12(Buf2),
              v53,
              SBYTE4(v53),
              SBYTE8(v53),
              SBYTE12(v53),
              v54,
              SBYTE4(v54),
              SBYTE8(v54),
              SBYTE12(v54),
              v55,
              SBYTE4(v55),
              SBYTE8(v55),
              SBYTE12(v55));
          *((_BYTE *)v12 + 264) |= 4u;
        }
      }
    }
    v30 = Buf2;
    v31 = v53;
    *((_BYTE *)v12 + 16) &= ~2u;
    v32 = 0;
    *((_BYTE *)v12 + 16) |= 2 * v24;
    v33 = v48;
    *(_OWORD *)(v12 + 5) = v30;
    v34 = v54;
    *(_OWORD *)(v12 + 7) = v31;
    v35 = v55;
    *(_OWORD *)(v12 + 9) = v34;
    *(_OWORD *)(v12 + 11) = v35;
    if ( v33 )
    {
      v40 = (_OWORD *)v12[13];
      if ( v40 )
      {
        *v40 = *(_OWORD *)v33;
        v40[1] = *((_OWORD *)v33 + 1);
        v40[2] = *((_OWORD *)v33 + 2);
        v40[3] = *((_OWORD *)v33 + 3);
      }
      else
      {
        InputHandle = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
        if ( InputHandle == WPF::ProcessHeapImpl::Alloc )
          v44 = (LPVOID (__fastcall *)(WPF::ProcessHeapImpl *, SIZE_T))WPF::ProcessHeapImpl::Alloc(
                                                                         WPF::g_pProcessHeap,
                                                                         0x40uLL);
        else
          v44 = (LPVOID (__fastcall *)(WPF::ProcessHeapImpl *, SIZE_T))InputHandle(WPF::g_pProcessHeap, 64LL);
        InputHandle = v44;
        if ( !v44 )
        {
          v32 = -2147024882;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x3Eu);
          goto LABEL_33;
        }
        *(_OWORD *)v44 = *(_OWORD *)v33;
        *((_OWORD *)v44 + 1) = *((_OWORD *)v33 + 1);
        *((_OWORD *)v44 + 2) = *((_OWORD *)v33 + 2);
        *((_OWORD *)v44 + 3) = *((_OWORD *)v33 + 3);
        if ( _InterlockedCompareExchange64(v12 + 13, (signed __int64)v44, 0LL) )
        {
          (*(void (__fastcall **)(WPF::ProcessHeapImpl *, LPVOID (__fastcall *)(WPF::ProcessHeapImpl *, SIZE_T)))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
            WPF::g_pProcessHeap,
            InputHandle);
          v32 = 0;
        }
      }
    }
    v12[14] = *(_QWORD *)(*(_QWORD *)(v12[3] + 16LL) + 352LL);
LABEL_33:
    if ( v32 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v32, 0x599u);
    }
    else if ( *(_QWORD *)(v7 + 416) && (*(_BYTE *)(v7 + 90) & 8) != 0 )
    {
      v48 = 0LL;
      Microsoft::WRL::ComPtr<IAnalogCompositor>::InternalRelease(&v48);
      ManipulationManager = CComposition::GetManipulationManager(*(CComposition **)(v7 + 16), &v48);
      if ( ManipulationManager >= 0 )
        CManipulationManager::NotifyVisualPropertyChange(v48, (struct CVisual *)v7, (const struct CMILMatrix *)&Buf2);
      Microsoft::WRL::ComPtr<IAnalogCompositor>::InternalRelease(&v48);
    }
    if ( v32 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v32, 0x4BCu);
      return (unsigned int)v32;
    }
    v9 = v51;
  }
  if ( !v12[14] )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292412, 0x6Eu);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292412, 0x4C3u);
    return 2291674884LL;
  }
  *(_OWORD *)a4 = *(_OWORD *)(v12 + 5);
  *(_OWORD *)(a4 + 16) = *(_OWORD *)(v12 + 7);
  *(_OWORD *)(a4 + 32) = *(_OWORD *)(v12 + 9);
  *(_OWORD *)(a4 + 48) = *(_OWORD *)(v12 + 11);
  v13 = (v12[2] & 2) != 0;
  if ( v9 )
  {
    v21 = (_OWORD *)v12[13];
    *(_OWORD *)v9 = *v21;
    *(_OWORD *)(v9 + 16) = v21[1];
    *(_OWORD *)(v9 + 32) = v21[2];
    *(_OWORD *)(v9 + 48) = v21[3];
  }
LABEL_16:
  result = 0LL;
  if ( a5 )
    *a5 = v13;
  return result;
}
