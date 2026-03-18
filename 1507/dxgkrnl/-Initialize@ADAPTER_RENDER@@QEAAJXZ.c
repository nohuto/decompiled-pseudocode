/*
 * XREFs of ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C00C235C
 * Callers:
 *     ?CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C00DB5E4 (-CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0002474 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C0002654 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ?IsClockCalibrationSupported@ADAPTER_RENDER@@QEBAEXZ @ 0x1C0005818 (-IsClockCalibrationSupported@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ??1DXGCRITICALREGION@@QEAA@XZ @ 0x1C000A31C (--1DXGCRITICALREGION@@QEAA@XZ.c)
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x1C000A354 (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?GetVidSchSibmitDataSize@ADAPTER_RENDER@@QEAAIXZ @ 0x1C000CF44 (-GetVidSchSibmitDataSize@ADAPTER_RENDER@@QEAAIXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEBU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C007831C (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEBU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DdiGetNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z @ 0x1C00BE664 (-DdiGetNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z.c)
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@PEAPEAVDXGSYNCOBJECT@@@Z @ 0x1C00DD9A0 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESY.c)
 */

__int64 __fastcall ADAPTER_RENDER::Initialize(ADAPTER_RENDER *this)
{
  __int64 v1; // rdx
  __int64 v3; // rcx
  unsigned int v4; // r14d
  __int64 v5; // rax
  unsigned int v6; // ebx
  unsigned int VidSchSibmitDataSize; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rax
  DXGADAPTER *v14; // rcx
  unsigned int v15; // edi
  BOOL v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r9
  __int64 v28; // rcx
  __int64 v29; // r8
  unsigned __int64 v30; // r12
  SIZE_T v31; // rax
  PVOID v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rbx
  unsigned int v36; // r15d
  _DWORD *v37; // rbx
  DXGADAPTER *v38; // rcx
  __int64 v39; // r8
  unsigned int v40; // eax
  unsigned int v41; // edi
  DXGADAPTER *v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  int *v48; // rcx
  unsigned int v49; // r12d
  unsigned __int16 *v50; // r15
  unsigned int v51; // r13d
  bool v52; // of
  SIZE_T v53; // rax
  PVOID v54; // rax
  _BYTE *v55; // r13
  unsigned int v56; // edx
  __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rbx
  __int64 v61; // rdi
  struct DXGGLOBAL *Global; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  int v65; // eax
  __int64 v66; // rcx
  int *v67; // rcx
  unsigned int v68; // ecx
  unsigned int v69; // r13d
  unsigned __int64 v70; // rbx
  SIZE_T v71; // rax
  unsigned int *v72; // rax
  __int64 v73; // r8
  unsigned int *v74; // rdi
  int v75; // r15d
  __int64 v76; // rcx
  __int64 v77; // r12
  unsigned int *v78; // r15
  unsigned __int64 v79; // r13
  __int64 v80; // rbx
  _QWORD *v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  __int64 v86; // rax
  struct _LOOKASIDE_LIST_EX *v87; // rax
  __int64 v88; // rcx
  __int64 v89; // rax
  NTSTATUS v90; // eax
  __int64 v91; // [rsp+40h] [rbp-C0h]
  _QWORD v92[5]; // [rsp+48h] [rbp-B8h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v93; // [rsp+70h] [rbp-90h] BYREF
  struct _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 v94; // [rsp+A0h] [rbp-60h] BYREF
  char v95; // [rsp+150h] [rbp+50h] BYREF
  char v96; // [rsp+151h] [rbp+51h]
  unsigned int v97; // [rsp+158h] [rbp+58h] BYREF
  unsigned int NumDifferentPhysicalAdapters; // [rsp+160h] [rbp+60h]
  __int64 v99; // [rsp+168h] [rbp+68h] BYREF

  v1 = *((_QWORD *)this + 2);
  *((_OWORD *)this + 14) = *(_OWORD *)(v1 + 880);
  *((_OWORD *)this + 15) = *(_OWORD *)(v1 + 896);
  *((_OWORD *)this + 16) = *(_OWORD *)(v1 + 984);
  *((_OWORD *)this + 17) = *(_OWORD *)(v1 + 1000);
  *((_OWORD *)this + 20) = *(_OWORD *)(v1 + 920);
  *(_OWORD *)((char *)this + 344) = *(_OWORD *)(v1 + 944);
  *((_DWORD *)this + 84) = *(_DWORD *)(v1 + 936);
  *((_DWORD *)this + 85) = *(_DWORD *)(v1 + 940);
  *((_DWORD *)this + 90) = *(_DWORD *)(v1 + 960);
  *((_DWORD *)this + 91) = *(_DWORD *)(v1 + 964);
  *((_OWORD *)this + 18) = *(_OWORD *)(v1 + 1016);
  *((_OWORD *)this + 19) = *(_OWORD *)(v1 + 1032);
  ExInitializeRundownProtection((PEX_RUNDOWN_REF)this + 114);
  v4 = 0;
  if ( !*((_WORD *)this + 112) )
  {
    v5 = WdLogNewEntry5_WdError(v3);
    v6 = -1073741438;
    *(_QWORD *)(v5 + 24) = *((_QWORD *)this + 2);
    *(_QWORD *)(v5 + 32) = -1073741438LL;
    WdLogEvent5_WdError(v5);
    return v6;
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
    v13 = (_QWORD *)WdLogNewEntry5_WdWarning(v10, v9, v11, v12);
    v6 = -1073741801;
    v13[3] = this;
    v13[4] = -1073741801LL;
    v13[5] = 0LL;
    WdLogEvent5_WdWarning(v13);
    return v6;
  }
  *((_BYTE *)this + 897) = 1;
  v96 = 0;
  DXGCRITICALREGION::Enter((DXGCRITICALREGION *)&v95);
  v14 = (DXGADAPTER *)*((_QWORD *)this + 2);
  v15 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 22) + 64LL) + 40LL) + 28LL);
  NumDifferentPhysicalAdapters = v15;
  v16 = DXGADAPTER::IsDxgmms2(v14) != 0;
  v21 = *((_QWORD *)DXGGLOBAL::GetGlobal(v18, v17, v19, v20) + v16 + 13);
  *((_QWORD *)this + 50) = v21;
  v26 = *((_QWORD *)DXGGLOBAL::GetGlobal(v21, v22, v23, v24) + v16 + 15);
  *((_QWORD *)this + 47) = v26;
  if ( !*((_QWORD *)this + 50) || !v26 )
    goto LABEL_89;
  v28 = *((_QWORD *)this + 2);
  v29 = -1LL;
  if ( (*(_DWORD *)(v28 + 1380) & 0x40) != 0 )
  {
    v30 = *(unsigned int *)(v28 + 232);
    v31 = 144 * v30;
    if ( !is_mul_ok(v30, 0x90uLL) )
      v31 = -1LL;
    v32 = operator new[](v31, 0x4B677844u, PagedPool);
    *((_QWORD *)this + 104) = v32;
    if ( !v32 )
    {
      v34 = WdLogNewEntry5_WdLowResource(v33);
      *(_QWORD *)(v34 + 24) = 17116LL;
      WdLogEvent5_WdLowResource(v34);
      goto LABEL_13;
    }
    memset(v32, 0, 144 * v30);
    v36 = 0;
    if ( (_DWORD)v30 )
    {
      while ( 1 )
      {
        v37 = (_DWORD *)(*((_QWORD *)this + 104) + 144LL * v36);
        memset(v92, 0, sizeof(v92));
        v38 = (DXGADAPTER *)*((_QWORD *)this + 2);
        v92[1] = &v99;
        LODWORD(v92[0]) = 13;
        v92[3] = v37;
        LODWORD(v92[4]) = 24;
        LODWORD(v99) = v36;
        LODWORD(v92[2]) = 4;
        if ( (int)DXGADAPTER::DdiQueryAdapterInfo(v38, (const struct _DXGKARG_QUERYADAPTERINFO *)v92, v39) < 0 )
          break;
        v40 = v37[4];
        if ( v40 > 6 || v40 < 2 )
        {
          v47 = WdLogNewEntry5_WdError(v26);
          *(_QWORD *)(v47 + 24) = 17148LL;
          WdLogEvent5_WdError(v47);
LABEL_28:
          LODWORD(v35) = -1073741438;
          goto LABEL_92;
        }
        if ( v15 < 0x5014 )
          *v37 &= ~0x20u;
        v41 = 0;
        do
        {
          memset(&v93, 0, 0x28uLL);
          v93.Type = DXGKQAITYPE_PAGETABLELEVELDESC;
          LOWORD(v97) = v41;
          HIWORD(v97) = v36;
          v93.InputDataSize = 4;
          v93.pInputData = &v97;
          v42 = (DXGADAPTER *)*((_QWORD *)this + 2);
          v93.OutputDataSize = NumDifferentPhysicalAdapters < 0x5012 ? 16 : 20;
          v93.pOutputData = &v37[4 * v41 + 6 + v41];
          if ( (int)DXGADAPTER::DdiQueryAdapterInfo(v42, &v93, v43) < 0 )
            goto LABEL_89;
          v44 = (unsigned int)v37[4 * v41 + 10 + v41];
          if ( (((_DWORD)v44 - 1) & (unsigned int)v44) != 0 )
          {
            v45 = WdLogNewEntry5_WdError(v44);
            v46 = v45;
LABEL_52:
            *(_QWORD *)(v45 + 24) = this;
            *(_QWORD *)(v46 + 32) = v41;
            WdLogEvent5_WdError(v46);
            LODWORD(v35) = -1073741811;
            goto LABEL_92;
          }
          ++v41;
        }
        while ( v41 < v37[4] );
        if ( ++v36 >= (unsigned int)v30 )
          goto LABEL_29;
        v15 = NumDifferentPhysicalAdapters;
      }
LABEL_89:
      v59 = WdLogNewEntry5_WdError(v26);
      v35 = -1073741438LL;
LABEL_90:
      *(_QWORD *)(v59 + 24) = this;
      *(_QWORD *)(v59 + 32) = v35;
LABEL_91:
      WdLogEvent5_WdError(v59);
      goto LABEL_92;
    }
LABEL_29:
    v29 = -1LL;
  }
  v48 = (int *)*((_QWORD *)this + 2);
  if ( v48[412] >= 4864 )
  {
    v49 = 0;
    if ( (unsigned int)DXGADAPTER::GetNumDifferentPhysicalAdapters((DXGADAPTER *)v48) )
    {
      while ( 1 )
      {
        v50 = (unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1896LL) + 48LL * v49);
        v51 = *v50;
        v53 = 74LL * *v50;
        v52 = (*v50 * (unsigned __int128)0x4AuLL) >> 64 != 0;
        v97 = v51;
        if ( v52 )
          v53 = v29;
        v54 = operator new[](v53, 0x4B677844u, PagedPool);
        v91 = (__int64)v54;
        v35 = (__int64)v54;
        if ( !v54 )
          goto LABEL_13;
        memset(v54, 0, 74LL * v51);
        *((_QWORD *)v50 + 3) = v35;
        v41 = 0;
        v99 = *((_QWORD *)this + 2) + 1312LL;
        if ( v51 )
        {
          v55 = (_BYTE *)(v35 + 73);
          v56 = v49 << 16;
          NumDifferentPhysicalAdapters = v49 << 16;
          while ( 1 )
          {
            LODWORD(v35) = DXGADAPTER::DdiGetNodeMetadata(
                             *((DXGADAPTER **)this + 2),
                             v41 | v56,
                             (struct _DXGK_NODEMETADATA *)(v35 + 74LL * v41));
            if ( (int)v35 < 0 )
              break;
            v58 = v99;
            if ( *(v55 - 1) )
            {
              if ( (*(_DWORD *)(v99 + 68) & 0x40) == 0 )
              {
                v45 = WdLogNewEntry5_WdError(v99);
                v46 = v45;
                *(_QWORD *)(v45 + 40) = 17244LL;
                goto LABEL_52;
              }
              if ( v41 == v50[1] && !*(_BYTE *)(*((_QWORD *)this + 2) + 1938LL) )
                *((_BYTE *)v50 + 40) = 1;
            }
            if ( *v55 )
            {
              if ( (*(_DWORD *)(v58 + 68) & 0x80u) == 0 )
              {
                v45 = WdLogNewEntry5_WdError(v58);
                v46 = v45;
                *(_QWORD *)(v45 + 40) = 17257LL;
                goto LABEL_52;
              }
              if ( v41 == v50[1] && !*(_BYTE *)(*((_QWORD *)this + 2) + 1938LL) )
                *((_BYTE *)v50 + 40) = 1;
            }
            v35 = v91;
            ++v41;
            v56 = NumDifferentPhysicalAdapters;
            v55 += 74;
            if ( v41 >= v97 )
              goto LABEL_49;
          }
          v59 = WdLogNewEntry5_WdError(v57);
          *(_QWORD *)(v59 + 24) = this;
          goto LABEL_91;
        }
LABEL_49:
        if ( ++v49 >= (unsigned int)DXGADAPTER::GetNumDifferentPhysicalAdapters(*((DXGADAPTER **)this + 2)) )
          break;
        v29 = -1LL;
      }
    }
  }
  v60 = *((_QWORD *)this + 2);
  v61 = *((_QWORD *)this + 47);
  Global = DXGGLOBAL::GetGlobal((__int64)v48, v25, v29, v27);
  v63 = (*(__int64 (__fastcall **)(ADAPTER_RENDER *, _QWORD, __int64))(*(_QWORD *)(v61 + 8) + 32LL))(
          this,
          *(_QWORD *)(v60 + 176),
          (__int64)Global + 96);
  *((_QWORD *)this + 48) = v63;
  if ( !v63
    || (v64 = (*(__int64 (__fastcall **)(ADAPTER_RENDER *))(*(_QWORD *)(*((_QWORD *)this + 50) + 8LL) + 24LL))(this),
        (*((_QWORD *)this + 51) = v64) == 0LL) )
  {
LABEL_13:
    LODWORD(v35) = -1073741801;
LABEL_92:
    v4 = v35;
    goto LABEL_93;
  }
  v94.hDevice = 0;
  memset(&v94.Info, 0, 0x58uLL);
  v94.Info.Flags.Value |= 1u;
  v94.Info.Type = D3DDDI_FENCE;
  v65 = CreateSynchronizationObjectInternal(0LL, this, &v94, (struct DXGSYNCOBJECT **)this + 66);
  v35 = v65;
  if ( v65 < 0 )
  {
LABEL_58:
    v59 = WdLogNewEntry5_WdError(v66);
    goto LABEL_90;
  }
  *((_QWORD *)this + 27) = (char *)this + 208;
  *((_QWORD *)this + 26) = (char *)this + 208;
  v67 = (int *)*((_QWORD *)this + 2);
  if ( v67[412] >= 4864 )
  {
    NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters((DXGADAPTER *)v67);
    v68 = 0;
    v97 = 0;
    v69 = NumDifferentPhysicalAdapters;
    if ( NumDifferentPhysicalAdapters )
    {
      while ( 1 )
      {
        v70 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1896LL) + 48LL * v68);
        v71 = 4 * v70;
        if ( !is_mul_ok(v70, 4uLL) )
          v71 = -1LL;
        v72 = (unsigned int *)operator new[](v71, 0x4B677844u, (POOL_TYPE)512);
        v74 = v72;
        if ( !v72 )
          goto LABEL_13;
        v92[3] = v72;
        LODWORD(v92[0]) = 10;
        v92[1] = 0LL;
        LODWORD(v92[2]) = 0;
        LODWORD(v92[4]) = 4 * v70;
        if ( v69 > 1 )
        {
          LODWORD(v92[2]) = 4;
          v92[1] = &v97;
        }
        LODWORD(v99) = DXGADAPTER::DdiQueryAdapterInfo(
                         *((DXGADAPTER **)this + 2),
                         (const struct _DXGKARG_QUERYADAPTERINFO *)v92,
                         v73);
        v75 = v99;
        LOBYTE(v76) = 1;
        if ( (int)v99 < 0 )
          break;
        if ( (_DWORD)v70 )
        {
          v77 = 0LL;
          v78 = v74;
          v79 = v70;
          do
          {
            v80 = *v78;
            if ( (unsigned int)(v80 - 1) <= 0x1E || (unsigned int)v80 >= 0x41 )
            {
              v81 = (_QWORD *)WdLogNewEntry5_WdError(v76);
              v81[3] = this;
              v81[4] = v80;
              v81[5] = v77;
              WdLogEvent5_WdError(v81);
              LOBYTE(v76) = 0;
            }
            else if ( !(_DWORD)v80 )
            {
              *((_BYTE *)this + 584) = 1;
            }
            ++v77;
            ++v78;
            --v79;
          }
          while ( v79 );
          v69 = NumDifferentPhysicalAdapters;
          v75 = v99;
LABEL_77:
          if ( !(_BYTE)v76 )
          {
            operator delete(v74);
            *((_BYTE *)this + 584) = 0;
            v74 = 0LL;
            if ( v75 >= 0 )
              goto LABEL_28;
            v86 = WdLogNewEntry5_WdEvent(v83, v82, v84, v85);
            *(_QWORD *)(v86 + 24) = this;
            WdLogEvent5_WdEvent(v86);
          }
        }
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1896LL) + 48LL * v97 + 32) = v74;
        v68 = v97 + 1;
        v97 = v68;
        if ( v68 >= v69 )
          goto LABEL_81;
      }
      LOBYTE(v76) = 0;
      goto LABEL_77;
    }
LABEL_81:
    if ( ADAPTER_RENDER::IsClockCalibrationSupported(this) )
    {
      *((_QWORD *)this + 80) = -500000LL;
      KeInitializeTimer((PKTIMER)((char *)this + 648));
      KeInitializeDpc((PRKDPC)((char *)this + 712), (PKDEFERRED_ROUTINE)DxgkpCalibrateGpuTimerDpc, this);
    }
    if ( *((_BYTE *)this + 584) )
      KeInitializeSpinLock((PKSPIN_LOCK)this + 103);
  }
  v87 = (struct _LOOKASIDE_LIST_EX *)operator new[](0x60uLL, 0x4B677844u, (POOL_TYPE)512);
  *((_QWORD *)this + 117) = v87;
  if ( !v87 )
  {
    v89 = WdLogNewEntry5_WdError(v88);
    *(_QWORD *)(v89 + 24) = this;
    WdLogEvent5_WdError(v89);
    goto LABEL_13;
  }
  v90 = ExInitializeLookasideListEx(v87, 0LL, 0LL, PagedPool, 0, 0x40uLL, 0x4B677844u, 0);
  v35 = v90;
  if ( v90 < 0 )
    goto LABEL_58;
LABEL_93:
  DXGCRITICALREGION::~DXGCRITICALREGION((DXGCRITICALREGION *)&v95);
  return v4;
}
