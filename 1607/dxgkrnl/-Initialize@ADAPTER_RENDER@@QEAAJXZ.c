/*
 * XREFs of ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C00E3BDC
 * Callers:
 *     ?CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C00E7A7C (-CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?GetVidSchSibmitDataSize@ADAPTER_RENDER@@QEAAIXZ @ 0x1C0007928 (-GetVidSchSibmitDataSize@ADAPTER_RENDER@@QEAAIXZ.c)
 *     ?IsClockCalibrationSupported@ADAPTER_RENDER@@QEBAEXZ @ 0x1C0007974 (-IsClockCalibrationSupported@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C0008728 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000911C (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?Leave@DXGCRITICALREGION@@QEAAXXZ @ 0x1C000CC84 (-Leave@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x1C000CCA8 (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEBU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C009F708 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEBU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00B4048 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@PEAPEAVDXGSYNCOBJECT@@@Z @ 0x1C00E3A78 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESY.c)
 *     ?DdiGetNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z @ 0x1C00E7634 (-DdiGetNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::Initialize(ADAPTER_RENDER *this)
{
  __int64 v1; // rdx
  __int64 v3; // rcx
  unsigned __int64 Flags; // r13
  unsigned int VidSchSibmitDataSize; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  DXGADAPTER *v10; // rcx
  unsigned int v11; // r12d
  BOOL v12; // ebx
  __int64 v13; // rcx
  struct DXGGLOBAL *Global; // rax
  _BOOL8 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned __int64 v18; // r15
  SIZE_T v19; // rax
  PVOID v20; // rax
  __int64 v21; // rcx
  unsigned int v22; // r14d
  _DWORD *v23; // rbx
  DXGADAPTER *v24; // rcx
  __int64 v25; // r8
  unsigned int v26; // eax
  unsigned int v27; // edi
  DXGADAPTER *v28; // rcx
  __int64 v29; // r8
  unsigned int i; // r15d
  SIZE_T v31; // r8
  unsigned __int16 *v32; // r14
  unsigned int v33; // r12d
  bool v34; // of
  SIZE_T v35; // rax
  PVOID v36; // rax
  __int64 v37; // rbx
  __int64 v38; // r13
  _BYTE *v39; // r12
  int v40; // edx
  __int64 v41; // rbx
  __int64 v42; // rdi
  struct DXGGLOBAL *v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  int v46; // eax
  __int64 v47; // rcx
  int *v48; // rcx
  unsigned int NumDifferentPhysicalAdapters; // eax
  __int64 v50; // rcx
  unsigned int v51; // r12d
  unsigned __int64 v52; // rbx
  SIZE_T v53; // rax
  unsigned int *v54; // rax
  __int64 v55; // r8
  unsigned int *v56; // rdi
  int v57; // r14d
  __int64 v58; // rcx
  __int64 v59; // r15
  unsigned int *v60; // r14
  __int64 v61; // rbx
  struct _LOOKASIDE_LIST_EX *v62; // rax
  __int64 v63; // rcx
  NTSTATUS v64; // eax
  __int64 v65; // rcx
  __int64 v67; // rax
  _QWORD *v68; // rax
  __int64 v69; // rax
  _QWORD *v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  _QWORD *v73; // rax
  __int64 v74; // rcx
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  _QWORD v78[5]; // [rsp+40h] [rbp-99h] BYREF
  _QWORD v79[5]; // [rsp+68h] [rbp-71h] BYREF
  struct _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 v80; // [rsp+90h] [rbp-49h] BYREF
  char v81; // [rsp+140h] [rbp+67h] BYREF
  char v82; // [rsp+141h] [rbp+68h]
  unsigned int j; // [rsp+148h] [rbp+6Fh] BYREF
  int AdapterInfo; // [rsp+150h] [rbp+77h] BYREF
  __int64 v85; // [rsp+158h] [rbp+7Fh]

  v1 = *((_QWORD *)this + 2);
  *((_OWORD *)this + 14) = *(_OWORD *)(v1 + 976);
  *((_OWORD *)this + 15) = *(_OWORD *)(v1 + 992);
  *((_OWORD *)this + 16) = *(_OWORD *)(v1 + 1080);
  *((_OWORD *)this + 17) = *(_OWORD *)(v1 + 1096);
  *((_OWORD *)this + 20) = *(_OWORD *)(v1 + 1016);
  *(_OWORD *)((char *)this + 344) = *(_OWORD *)(v1 + 1040);
  *((_DWORD *)this + 84) = *(_DWORD *)(v1 + 1032);
  *((_DWORD *)this + 85) = *(_DWORD *)(v1 + 1036);
  *((_DWORD *)this + 90) = *(_DWORD *)(v1 + 1056);
  *((_DWORD *)this + 91) = *(_DWORD *)(v1 + 1060);
  *((_OWORD *)this + 18) = *(_OWORD *)(v1 + 1112);
  *((_OWORD *)this + 19) = *(_OWORD *)(v1 + 1128);
  ExInitializeRundownProtection((PEX_RUNDOWN_REF)this + 114);
  LODWORD(Flags) = 0;
  if ( !*((_WORD *)this + 112) )
  {
    v67 = WdLogNewEntry5_WdError(v3);
    LODWORD(v37) = -1073741438;
    *(_QWORD *)(v67 + 24) = *((_QWORD *)this + 2);
    *(_QWORD *)(v67 + 32) = -1073741438LL;
    WdLogEvent5_WdError(v67);
    return (unsigned int)v37;
  }
  VidSchSibmitDataSize = ADAPTER_RENDER::GetVidSchSibmitDataSize((DXGADAPTER **)this);
  if ( ExInitializeLookasideListEx(
         (PLOOKASIDE_LIST_EX)((char *)this + 944),
         0LL,
         0LL,
         PagedPool,
         0,
         VidSchSibmitDataSize,
         0x4B677844u,
         0) < 0 )
  {
    v68 = (_QWORD *)WdLogNewEntry5_WdWarning(v7, v6, v8, v9);
    LODWORD(v37) = -1073741801;
    v68[3] = this;
    v68[4] = -1073741801LL;
    v68[5] = 0LL;
    WdLogEvent5_WdWarning(v68);
    return (unsigned int)v37;
  }
  *((_BYTE *)this + 897) = 1;
  v82 = 0;
  DXGCRITICALREGION::Enter((DXGCRITICALREGION *)&v81);
  v10 = (DXGADAPTER *)*((_QWORD *)this + 2);
  v11 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v10 + 24) + 64LL) + 40LL) + 28LL);
  v12 = DXGADAPTER::IsDxgmms2(v10) != 0;
  *((_QWORD *)this + 50) = *((_QWORD *)DXGGLOBAL::GetGlobal(v13) + v12 + 13);
  Global = DXGGLOBAL::GetGlobal(v12);
  v15 = v12;
  v16 = *((_QWORD *)Global + v12 + 15);
  *((_QWORD *)this + 47) = v16;
  if ( !*((_QWORD *)this + 50) || !v16 )
  {
LABEL_91:
    v72 = WdLogNewEntry5_WdError(v15);
    v37 = -1073741438LL;
    goto LABEL_92;
  }
  v17 = *((_QWORD *)this + 2);
  if ( (*(_DWORD *)(v17 + 1524) & 0x40) == 0 )
    goto LABEL_20;
  v18 = *(unsigned int *)(v17 + 248);
  v19 = 144 * v18;
  if ( !is_mul_ok(v18, 0x90uLL) )
    v19 = -1LL;
  v20 = operator new(v19, 0x4B677844u, PagedPool);
  *((_QWORD *)this + 104) = v20;
  if ( !v20 )
  {
    v69 = WdLogNewEntry5_WdLowResource(v21);
    *(_QWORD *)(v69 + 24) = 868LL;
    WdLogEvent5_WdLowResource(v69);
    goto LABEL_75;
  }
  memset(v20, 0, 144 * v18);
  v22 = 0;
  if ( !(_DWORD)v18 )
    goto LABEL_20;
  do
  {
    v23 = (_DWORD *)(*((_QWORD *)this + 104) + 144LL * v22);
    memset(v78, 0, sizeof(v78));
    v24 = (DXGADAPTER *)*((_QWORD *)this + 2);
    v78[1] = &AdapterInfo;
    LODWORD(v78[0]) = 13;
    v78[3] = v23;
    LODWORD(v78[4]) = 24;
    AdapterInfo = v22;
    LODWORD(v78[2]) = 4;
    if ( (int)DXGADAPTER::DdiQueryAdapterInfo(v24, (const struct _DXGKARG_QUERYADAPTERINFO *)v78, v25) < 0 )
      goto LABEL_91;
    v26 = v23[4];
    if ( v26 > 6 || v26 < 2 )
    {
      v71 = WdLogNewEntry5_WdError(v15);
      *(_QWORD *)(v71 + 24) = 900LL;
      WdLogEvent5_WdError(v71);
      LODWORD(v37) = -1073741438;
      goto LABEL_94;
    }
    if ( v11 < 0x5014 )
      *v23 &= ~0x20u;
    v27 = 0;
    do
    {
      memset(v79, 0, sizeof(v79));
      LODWORD(v79[0]) = 14;
      LOWORD(j) = v27;
      HIWORD(j) = v22;
      LODWORD(v79[2]) = 4;
      v79[1] = &j;
      v28 = (DXGADAPTER *)*((_QWORD *)this + 2);
      LODWORD(v79[4]) = v11 < 0x5012 ? 16 : 20;
      v79[3] = &v23[4 * v27 + 6 + v27];
      if ( (int)DXGADAPTER::DdiQueryAdapterInfo(v28, (const struct _DXGKARG_QUERYADAPTERINFO *)v79, v29) < 0 )
        goto LABEL_91;
      v17 = (unsigned int)v23[4 * v27 + 10 + v27];
      if ( (((_DWORD)v17 - 1) & (unsigned int)v17) != 0 )
      {
        v70 = (_QWORD *)WdLogNewEntry5_WdError(v17);
LABEL_80:
        v70[4] = v27;
        v70[3] = this;
        WdLogEvent5_WdError(v70);
        LODWORD(v37) = -1073741811;
        goto LABEL_94;
      }
      ++v27;
    }
    while ( v27 < v23[4] );
    LODWORD(Flags) = 0;
    ++v22;
  }
  while ( v22 < (unsigned int)v18 );
LABEL_20:
  if ( *(int *)(*((_QWORD *)this + 2) + 1792LL) >= 4864 )
  {
    for ( i = 0; ; ++i )
    {
      if ( i >= (unsigned int)DXGADAPTER::GetNumDifferentPhysicalAdapters(*((DXGADAPTER **)this + 2)) )
        goto LABEL_39;
      v32 = (unsigned __int16 *)(*(_QWORD *)(v17 + 2040) + 48LL * i);
      v33 = *v32;
      v35 = 74LL * *v32;
      v34 = (*v32 * (unsigned __int128)0x4AuLL) >> 64 != 0;
      j = v33;
      if ( v34 )
        v35 = v31;
      v36 = operator new[](v35, 0x4B677844u, PagedPool);
      v85 = (__int64)v36;
      v37 = (__int64)v36;
      if ( !v36 )
        goto LABEL_75;
      memset(v36, 0, 74LL * v33);
      v27 = 0;
      *((_QWORD *)v32 + 3) = v37;
      v38 = *((_QWORD *)this + 2);
      if ( v33 )
        break;
LABEL_34:
      LODWORD(Flags) = 0;
    }
    v39 = (_BYTE *)(v37 + 73);
    v40 = i << 16;
    AdapterInfo = i << 16;
    while ( 1 )
    {
      LODWORD(v37) = DXGADAPTER::DdiGetNodeMetadata(
                       *((DXGADAPTER **)this + 2),
                       v27 | v40,
                       (struct _DXGK_NODEMETADATA *)(v37 + 74LL * v27));
      if ( (int)v37 < 0 )
        break;
      if ( *(v39 - 1) )
      {
        if ( (*(_DWORD *)(v38 + 1524) & 0x40) == 0 )
        {
          v70 = (_QWORD *)WdLogNewEntry5_WdError(0LL);
          v70[5] = 996LL;
          goto LABEL_80;
        }
        if ( v27 == v32[1] && !*(_BYTE *)(*((_QWORD *)this + 2) + 2082LL) )
          *((_BYTE *)v32 + 40) = 1;
      }
      if ( *v39 )
      {
        if ( (*(_DWORD *)(v38 + 1524) & 0x80u) == 0 )
        {
          v70 = (_QWORD *)WdLogNewEntry5_WdError(0LL);
          v70[5] = 1009LL;
          goto LABEL_80;
        }
        if ( v27 == v32[1] && !*(_BYTE *)(*((_QWORD *)this + 2) + 2082LL) )
          *((_BYTE *)v32 + 40) = 1;
      }
      v37 = v85;
      ++v27;
      v40 = AdapterInfo;
      v39 += 74;
      if ( v27 >= j )
        goto LABEL_34;
    }
    v72 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v72 + 24) = this;
LABEL_93:
    WdLogEvent5_WdError(v72);
LABEL_94:
    LOBYTE(Flags) = 0;
    goto LABEL_67;
  }
LABEL_39:
  v41 = *((_QWORD *)this + 2);
  v42 = *((_QWORD *)this + 47);
  v43 = DXGGLOBAL::GetGlobal(v17);
  v44 = (*(__int64 (__fastcall **)(ADAPTER_RENDER *, _QWORD, __int64))(*(_QWORD *)(v42 + 8) + 32LL))(
          this,
          *(_QWORD *)(v41 + 192),
          (__int64)v43 + 96);
  *((_QWORD *)this + 48) = v44;
  if ( !v44
    || (v45 = (*(__int64 (__fastcall **)(ADAPTER_RENDER *))(*(_QWORD *)(*((_QWORD *)this + 50) + 8LL) + 24LL))(this),
        (*((_QWORD *)this + 51) = v45) == 0LL) )
  {
LABEL_75:
    LODWORD(v37) = -1073741801;
    goto LABEL_94;
  }
  v80.hDevice = 0;
  memset(&v80.Info, 0, 0x58uLL);
  v80.Info.Flags.Value |= 1u;
  v80.Info.Type = D3DDDI_FENCE;
  v46 = CreateSynchronizationObjectInternal(0LL, (DXGADAPTER **)this, &v80, (D3DKMT_HANDLE **)this + 66);
  v37 = v46;
  if ( v46 < 0 )
  {
    v72 = WdLogNewEntry5_WdError(v47);
LABEL_92:
    *(_QWORD *)(v72 + 24) = this;
    *(_QWORD *)(v72 + 32) = v37;
    goto LABEL_93;
  }
  *((_QWORD *)this + 27) = (char *)this + 208;
  *((_QWORD *)this + 26) = (char *)this + 208;
  v48 = (int *)*((_QWORD *)this + 2);
  if ( v48[448] >= 4864 )
  {
    NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters((DXGADAPTER *)v48);
    v50 = 0LL;
    v51 = NumDifferentPhysicalAdapters;
    for ( j = 0; (unsigned int)v50 < v51; j = v50 )
    {
      v52 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)this + 2) + 2040LL) + 48 * v50);
      v53 = 4 * v52;
      Flags = v52;
      if ( !is_mul_ok(v52, 4uLL) )
        v53 = -1LL;
      v54 = (unsigned int *)operator new[](v53, 0x4B677844u, (POOL_TYPE)512);
      v56 = v54;
      if ( !v54 )
        goto LABEL_75;
      v78[1] = 0LL;
      LODWORD(v78[2]) = 0;
      LODWORD(v78[0]) = 10;
      v78[3] = v54;
      LODWORD(v78[4]) = 4 * v52;
      if ( v51 > 1 )
      {
        LODWORD(v78[2]) = 4;
        v78[1] = &j;
      }
      AdapterInfo = DXGADAPTER::DdiQueryAdapterInfo(
                      *((DXGADAPTER **)this + 2),
                      (const struct _DXGKARG_QUERYADAPTERINFO *)v78,
                      v55);
      v57 = AdapterInfo;
      LOBYTE(v58) = 1;
      if ( AdapterInfo < 0 )
      {
        LODWORD(Flags) = 0;
        LOBYTE(v58) = 0;
      }
      else
      {
        if ( !(_DWORD)v52 )
        {
          LODWORD(Flags) = 0;
          goto LABEL_59;
        }
        v59 = 0LL;
        v60 = v56;
        do
        {
          v61 = *v60;
          if ( (unsigned int)(v61 - 1) <= 0x1E || (unsigned int)v61 >= 0x41 )
          {
            v73 = (_QWORD *)WdLogNewEntry5_WdError(v58);
            v73[3] = this;
            v73[4] = v61;
            v73[5] = v59;
            WdLogEvent5_WdError(v73);
            LOBYTE(v58) = 0;
          }
          else if ( !(_DWORD)v61 )
          {
            *((_BYTE *)this + 584) = 1;
          }
          ++v59;
          ++v60;
          --Flags;
        }
        while ( Flags );
        v57 = AdapterInfo;
      }
      if ( !(_BYTE)v58 )
      {
        operator delete(v56);
        *((_BYTE *)this + 584) = 0;
        v56 = 0LL;
        if ( v57 >= 0 )
        {
          LODWORD(v37) = -1073741438;
          goto LABEL_67;
        }
        v75 = WdLogNewEntry5_WdEvent(v74);
        *(_QWORD *)(v75 + 24) = this;
        WdLogEvent5_WdEvent(v75);
      }
LABEL_59:
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 2040LL) + 48LL * j + 32) = v56;
      v50 = j + 1;
    }
    if ( ADAPTER_RENDER::IsClockCalibrationSupported(this) )
    {
      *((_QWORD *)this + 80) = -500000LL;
      KeInitializeTimer((PKTIMER)((char *)this + 648));
      KeInitializeDpc((PRKDPC)((char *)this + 712), (PKDEFERRED_ROUTINE)DxgkpCalibrateGpuTimerDpc, this);
    }
    if ( *((_BYTE *)this + 584) != (_BYTE)Flags )
      KeInitializeSpinLock((PKSPIN_LOCK)this + 103);
  }
  v62 = (struct _LOOKASIDE_LIST_EX *)operator new(0x60uLL, 0x4B677844u, (POOL_TYPE)512);
  *((_QWORD *)this + 117) = v62;
  if ( v62 )
  {
    v64 = ExInitializeLookasideListEx(v62, 0LL, 0LL, PagedPool, Flags, 0x40uLL, 0x4B677844u, Flags);
    v37 = v64;
    if ( v64 < 0 )
    {
      v77 = WdLogNewEntry5_WdError(v65);
      *(_QWORD *)(v77 + 24) = this;
      *(_QWORD *)(v77 + 32) = v37;
      WdLogEvent5_WdError(v77);
    }
    else
    {
      LODWORD(v37) = Flags;
    }
  }
  else
  {
    v76 = WdLogNewEntry5_WdError(v63);
    *(_QWORD *)(v76 + 24) = this;
    WdLogEvent5_WdError(v76);
    LODWORD(v37) = -1073741801;
  }
LABEL_67:
  if ( v82 != (_BYTE)Flags )
    DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v81);
  return (unsigned int)v37;
}
