/*
 * XREFs of ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C00D5DB0
 * Callers:
 *     ?CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C00DAA98 (-CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?GetVidSchSibmitDataSize@ADAPTER_RENDER@@QEAAIXZ @ 0x1C0001C78 (-GetVidSchSibmitDataSize@ADAPTER_RENDER@@QEAAIXZ.c)
 *     ?IsClockCalibrationSupported@ADAPTER_RENDER@@QEBAEXZ @ 0x1C0001CB8 (-IsClockCalibrationSupported@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0003150 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C000333C (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ?Leave@DXGCRITICALREGION@@QEAAXXZ @ 0x1C000C598 (-Leave@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x1C000C5BC (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEBU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C0079C70 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEBU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     ?DdiGetNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z @ 0x1C00D67F8 (-DdiGetNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z.c)
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@PEAPEAVDXGSYNCOBJECT@@@Z @ 0x1C00E8C00 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESY.c)
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
  unsigned int i; // r15d
  SIZE_T v19; // r8
  unsigned __int16 *v20; // r14
  unsigned int v21; // r12d
  bool v22; // of
  SIZE_T v23; // rax
  PVOID v24; // rax
  __int64 v25; // rbx
  unsigned int v26; // edi
  __int64 v27; // r13
  _BYTE *v28; // r12
  int v29; // edx
  __int64 v30; // rbx
  __int64 v31; // rdi
  struct DXGGLOBAL *v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  int v35; // eax
  __int64 v36; // rcx
  int *v37; // rcx
  unsigned int NumDifferentPhysicalAdapters; // eax
  __int64 v39; // rcx
  unsigned int v40; // r12d
  unsigned __int64 v41; // rbx
  SIZE_T v42; // rax
  unsigned int *v43; // rax
  __int64 v44; // r8
  unsigned int *v45; // rdi
  int v46; // r14d
  __int64 v47; // rcx
  __int64 v48; // r15
  unsigned int *v49; // r14
  __int64 v50; // rbx
  struct _LOOKASIDE_LIST_EX *v51; // rax
  __int64 v52; // rcx
  NTSTATUS v53; // eax
  __int64 v54; // rcx
  unsigned __int64 v56; // r15
  SIZE_T v57; // rax
  PVOID v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  unsigned int v63; // r14d
  _DWORD *v64; // rbx
  DXGADAPTER *v65; // rcx
  __int64 v66; // r8
  unsigned int v67; // eax
  DXGADAPTER *v68; // rcx
  __int64 v69; // r8
  __int64 v70; // rax
  _QWORD *v71; // rax
  __int64 v72; // rax
  _QWORD *v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  _QWORD *v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rax
  _QWORD v84[5]; // [rsp+40h] [rbp-99h] BYREF
  _QWORD v85[5]; // [rsp+68h] [rbp-71h] BYREF
  struct _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 v86; // [rsp+90h] [rbp-49h] BYREF
  char v87; // [rsp+140h] [rbp+67h] BYREF
  char v88; // [rsp+141h] [rbp+68h]
  unsigned int j; // [rsp+148h] [rbp+6Fh] BYREF
  int AdapterInfo; // [rsp+150h] [rbp+77h] BYREF
  __int64 v91; // [rsp+158h] [rbp+7Fh]

  v1 = *((_QWORD *)this + 2);
  *(_OWORD *)((char *)this + 248) = *(_OWORD *)(v1 + 888);
  *(_OWORD *)((char *)this + 264) = *(_OWORD *)(v1 + 904);
  *(_OWORD *)((char *)this + 280) = *(_OWORD *)(v1 + 992);
  *(_OWORD *)((char *)this + 296) = *(_OWORD *)(v1 + 1008);
  *(_OWORD *)((char *)this + 344) = *(_OWORD *)(v1 + 928);
  *((_OWORD *)this + 23) = *(_OWORD *)(v1 + 952);
  *((_DWORD *)this + 90) = *(_DWORD *)(v1 + 944);
  *((_DWORD *)this + 91) = *(_DWORD *)(v1 + 948);
  *((_DWORD *)this + 96) = *(_DWORD *)(v1 + 968);
  *((_DWORD *)this + 97) = *(_DWORD *)(v1 + 972);
  *(_OWORD *)((char *)this + 312) = *(_OWORD *)(v1 + 1024);
  *(_OWORD *)((char *)this + 328) = *(_OWORD *)(v1 + 1040);
  ExInitializeRundownProtection((PEX_RUNDOWN_REF)this + 123);
  LODWORD(Flags) = 0;
  if ( !*((_WORD *)this + 124) )
  {
    v70 = WdLogNewEntry5_WdError(v3);
    LODWORD(v25) = -1073741438;
    *(_QWORD *)(v70 + 24) = *((_QWORD *)this + 2);
    *(_QWORD *)(v70 + 32) = -1073741438LL;
    WdLogEvent5_WdError(v70);
    return (unsigned int)v25;
  }
  VidSchSibmitDataSize = ADAPTER_RENDER::GetVidSchSibmitDataSize((DXGADAPTER **)this);
  if ( ExInitializeLookasideListEx(
         (PLOOKASIDE_LIST_EX)((char *)this + 1024),
         0LL,
         0LL,
         PagedPool,
         0,
         VidSchSibmitDataSize,
         0x4B677844u,
         0) < 0 )
  {
    v71 = (_QWORD *)WdLogNewEntry5_WdWarning(v7, v6, v8, v9);
    LODWORD(v25) = -1073741801;
    v71[3] = this;
    v71[4] = -1073741801LL;
    v71[5] = 0LL;
    WdLogEvent5_WdWarning(v71);
    return (unsigned int)v25;
  }
  *((_BYTE *)this + 969) = 1;
  v88 = 0;
  DXGCRITICALREGION::Enter((DXGCRITICALREGION *)&v87);
  v10 = (DXGADAPTER *)*((_QWORD *)this + 2);
  v11 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v10 + 22) + 64LL) + 40LL) + 28LL);
  v12 = DXGADAPTER::IsDxgmms2(v10) != 0;
  *((_QWORD *)this + 53) = *((_QWORD *)DXGGLOBAL::GetGlobal(v13) + v12 + 13);
  Global = DXGGLOBAL::GetGlobal(v12);
  v15 = v12;
  v16 = *((_QWORD *)Global + v12 + 15);
  *((_QWORD *)this + 50) = v16;
  if ( !*((_QWORD *)this + 53) || !v16 )
  {
LABEL_92:
    v75 = WdLogNewEntry5_WdError(v15);
    v25 = -1073741438LL;
    goto LABEL_93;
  }
  v17 = *((_QWORD *)this + 2);
  if ( (*(_DWORD *)(v17 + 1388) & 0x40) == 0 )
    goto LABEL_6;
  v56 = *(unsigned int *)(v17 + 232);
  v57 = 144 * v56;
  if ( !is_mul_ok(v56, 0x90uLL) )
    v57 = -1LL;
  v58 = operator new[](v57, 0x4B677844u, PagedPool);
  *((_QWORD *)this + 113) = v58;
  if ( !v58 )
  {
    v72 = WdLogNewEntry5_WdLowResource(v60, v59, v61, v62);
    *(_QWORD *)(v72 + 24) = 17494LL;
    WdLogEvent5_WdLowResource(v72);
    goto LABEL_76;
  }
  memset(v58, 0, 144 * v56);
  v63 = 0;
  if ( !(_DWORD)v56 )
    goto LABEL_6;
  do
  {
    v64 = (_DWORD *)(*((_QWORD *)this + 113) + 144LL * v63);
    memset(v84, 0, sizeof(v84));
    v65 = (DXGADAPTER *)*((_QWORD *)this + 2);
    v84[1] = &AdapterInfo;
    LODWORD(v84[0]) = 13;
    v84[3] = v64;
    LODWORD(v84[4]) = 24;
    AdapterInfo = v63;
    LODWORD(v84[2]) = 4;
    if ( (int)DXGADAPTER::DdiQueryAdapterInfo(v65, (const struct _DXGKARG_QUERYADAPTERINFO *)v84, v66) < 0 )
      goto LABEL_92;
    v67 = v64[4];
    if ( v67 > 6 || v67 < 2 )
    {
      v74 = WdLogNewEntry5_WdError(v15);
      *(_QWORD *)(v74 + 24) = 17526LL;
      WdLogEvent5_WdError(v74);
      LODWORD(v25) = -1073741438;
      goto LABEL_95;
    }
    if ( v11 < 0x5014 )
      *v64 &= ~0x20u;
    v26 = 0;
    do
    {
      memset(v85, 0, sizeof(v85));
      LODWORD(v85[0]) = 14;
      LOWORD(j) = v26;
      HIWORD(j) = v63;
      LODWORD(v85[2]) = 4;
      v85[1] = &j;
      v68 = (DXGADAPTER *)*((_QWORD *)this + 2);
      LODWORD(v85[4]) = v11 < 0x5012 ? 16 : 20;
      v85[3] = &v64[4 * v26 + 6 + v26];
      if ( (int)DXGADAPTER::DdiQueryAdapterInfo(v68, (const struct _DXGKARG_QUERYADAPTERINFO *)v85, v69) < 0 )
        goto LABEL_92;
      v17 = (unsigned int)v64[4 * v26 + 10 + v26];
      if ( (((_DWORD)v17 - 1) & (unsigned int)v17) != 0 )
      {
        v73 = (_QWORD *)WdLogNewEntry5_WdError(v17);
LABEL_81:
        v73[4] = v26;
        v73[3] = this;
        WdLogEvent5_WdError(v73);
        LODWORD(v25) = -1073741811;
        goto LABEL_95;
      }
      ++v26;
    }
    while ( v26 < v64[4] );
    LODWORD(Flags) = 0;
    ++v63;
  }
  while ( v63 < (unsigned int)v56 );
LABEL_6:
  if ( *(int *)(*((_QWORD *)this + 2) + 1656LL) >= 4864 )
  {
    for ( i = 0; ; ++i )
    {
      if ( i >= (unsigned int)DXGADAPTER::GetNumDifferentPhysicalAdapters(*((DXGADAPTER **)this + 2)) )
        goto LABEL_25;
      v20 = (unsigned __int16 *)(*(_QWORD *)(v17 + 1904) + 48LL * i);
      v21 = *v20;
      v23 = 74LL * *v20;
      v22 = (*v20 * (unsigned __int128)0x4AuLL) >> 64 != 0;
      j = v21;
      if ( v22 )
        v23 = v19;
      v24 = operator new[](v23, 0x4B677844u, PagedPool);
      v91 = (__int64)v24;
      v25 = (__int64)v24;
      if ( !v24 )
        goto LABEL_76;
      memset(v24, 0, 74LL * v21);
      v26 = 0;
      *((_QWORD *)v20 + 3) = v25;
      v27 = *((_QWORD *)this + 2);
      if ( v21 )
        break;
LABEL_20:
      LODWORD(Flags) = 0;
    }
    v28 = (_BYTE *)(v25 + 73);
    v29 = i << 16;
    AdapterInfo = i << 16;
    while ( 1 )
    {
      LODWORD(v25) = DXGADAPTER::DdiGetNodeMetadata(
                       *((DXGADAPTER **)this + 2),
                       v26 | v29,
                       (struct _DXGK_NODEMETADATA *)(v25 + 74LL * v26));
      if ( (int)v25 < 0 )
        break;
      if ( *(v28 - 1) )
      {
        if ( (*(_DWORD *)(v27 + 1388) & 0x40) == 0 )
        {
          v73 = (_QWORD *)WdLogNewEntry5_WdError(0LL);
          v73[5] = 17622LL;
          goto LABEL_81;
        }
        if ( v26 == v20[1] && !*(_BYTE *)(*((_QWORD *)this + 2) + 1946LL) )
          *((_BYTE *)v20 + 40) = 1;
      }
      if ( *v28 )
      {
        if ( (*(_DWORD *)(v27 + 1388) & 0x80u) == 0 )
        {
          v73 = (_QWORD *)WdLogNewEntry5_WdError(0LL);
          v73[5] = 17635LL;
          goto LABEL_81;
        }
        if ( v26 == v20[1] && !*(_BYTE *)(*((_QWORD *)this + 2) + 1946LL) )
          *((_BYTE *)v20 + 40) = 1;
      }
      v25 = v91;
      ++v26;
      v29 = AdapterInfo;
      v28 += 74;
      if ( v26 >= j )
        goto LABEL_20;
    }
    v75 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v75 + 24) = this;
LABEL_94:
    WdLogEvent5_WdError(v75);
LABEL_95:
    LOBYTE(Flags) = 0;
    goto LABEL_53;
  }
LABEL_25:
  v30 = *((_QWORD *)this + 2);
  v31 = *((_QWORD *)this + 50);
  v32 = DXGGLOBAL::GetGlobal(v17);
  v33 = (*(__int64 (__fastcall **)(ADAPTER_RENDER *, _QWORD, __int64))(*(_QWORD *)(v31 + 8) + 32LL))(
          this,
          *(_QWORD *)(v30 + 176),
          (__int64)v32 + 96);
  *((_QWORD *)this + 51) = v33;
  if ( !v33
    || (v34 = (*(__int64 (__fastcall **)(ADAPTER_RENDER *))(*(_QWORD *)(*((_QWORD *)this + 53) + 8LL) + 24LL))(this),
        (*((_QWORD *)this + 54) = v34) == 0LL) )
  {
LABEL_76:
    LODWORD(v25) = -1073741801;
    goto LABEL_95;
  }
  v86.hDevice = 0;
  memset(&v86.Info, 0, 0x58uLL);
  v86.Info.Flags.Value |= 1u;
  v86.Info.Type = D3DDDI_FENCE;
  v35 = CreateSynchronizationObjectInternal(0LL, this, &v86, (struct DXGSYNCOBJECT **)this + 75);
  v25 = v35;
  if ( v35 < 0 )
  {
    v75 = WdLogNewEntry5_WdError(v36);
LABEL_93:
    *(_QWORD *)(v75 + 24) = this;
    *(_QWORD *)(v75 + 32) = v25;
    goto LABEL_94;
  }
  *((_QWORD *)this + 30) = (char *)this + 232;
  *((_QWORD *)this + 29) = (char *)this + 232;
  v37 = (int *)*((_QWORD *)this + 2);
  if ( v37[414] >= 4864 )
  {
    NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters((DXGADAPTER *)v37);
    v39 = 0LL;
    v40 = NumDifferentPhysicalAdapters;
    for ( j = 0; (unsigned int)v39 < v40; j = v39 )
    {
      v41 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1904LL) + 48 * v39);
      v42 = 4 * v41;
      Flags = v41;
      if ( !is_mul_ok(v41, 4uLL) )
        v42 = -1LL;
      v43 = (unsigned int *)operator new[](v42, 0x4B677844u, (POOL_TYPE)512);
      v45 = v43;
      if ( !v43 )
        goto LABEL_76;
      v84[1] = 0LL;
      LODWORD(v84[2]) = 0;
      LODWORD(v84[0]) = 10;
      v84[3] = v43;
      LODWORD(v84[4]) = 4 * v41;
      if ( v40 > 1 )
      {
        LODWORD(v84[2]) = 4;
        v84[1] = &j;
      }
      AdapterInfo = DXGADAPTER::DdiQueryAdapterInfo(
                      *((DXGADAPTER **)this + 2),
                      (const struct _DXGKARG_QUERYADAPTERINFO *)v84,
                      v44);
      v46 = AdapterInfo;
      LOBYTE(v47) = 1;
      if ( AdapterInfo < 0 )
      {
        LODWORD(Flags) = 0;
        LOBYTE(v47) = 0;
      }
      else
      {
        if ( !(_DWORD)v41 )
        {
          LODWORD(Flags) = 0;
          goto LABEL_45;
        }
        v48 = 0LL;
        v49 = v45;
        do
        {
          v50 = *v49;
          if ( (unsigned int)(v50 - 1) <= 0x1E || (unsigned int)v50 >= 0x41 )
          {
            v76 = (_QWORD *)WdLogNewEntry5_WdError(v47);
            v76[3] = this;
            v76[4] = v50;
            v76[5] = v48;
            WdLogEvent5_WdError(v76);
            LOBYTE(v47) = 0;
          }
          else if ( !(_DWORD)v50 )
          {
            *((_BYTE *)this + 656) = 1;
          }
          ++v48;
          ++v49;
          --Flags;
        }
        while ( Flags );
        v46 = AdapterInfo;
      }
      if ( !(_BYTE)v47 )
      {
        operator delete(v45);
        *((_BYTE *)this + 656) = 0;
        v45 = 0LL;
        if ( v46 >= 0 )
        {
          LODWORD(v25) = -1073741438;
          goto LABEL_53;
        }
        v81 = WdLogNewEntry5_WdEvent(v78, v77, v79, v80);
        *(_QWORD *)(v81 + 24) = this;
        WdLogEvent5_WdEvent(v81);
      }
LABEL_45:
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1904LL) + 48LL * j + 32) = v45;
      v39 = j + 1;
    }
    if ( ADAPTER_RENDER::IsClockCalibrationSupported(this) )
    {
      *((_QWORD *)this + 89) = -500000LL;
      KeInitializeTimer((PKTIMER)((char *)this + 720));
      KeInitializeDpc((PRKDPC)((char *)this + 784), (PKDEFERRED_ROUTINE)DxgkpCalibrateGpuTimerDpc, this);
    }
    if ( *((_BYTE *)this + 656) != (_BYTE)Flags )
      KeInitializeSpinLock((PKSPIN_LOCK)this + 112);
  }
  v51 = (struct _LOOKASIDE_LIST_EX *)operator new[](0x60uLL, 0x4B677844u, (POOL_TYPE)512);
  *((_QWORD *)this + 126) = v51;
  if ( v51 )
  {
    v53 = ExInitializeLookasideListEx(v51, 0LL, 0LL, PagedPool, Flags, 0x40uLL, 0x4B677844u, Flags);
    v25 = v53;
    if ( v53 < 0 )
    {
      v83 = WdLogNewEntry5_WdError(v54);
      *(_QWORD *)(v83 + 24) = this;
      *(_QWORD *)(v83 + 32) = v25;
      WdLogEvent5_WdError(v83);
    }
    else
    {
      LODWORD(v25) = Flags;
    }
  }
  else
  {
    v82 = WdLogNewEntry5_WdError(v52);
    *(_QWORD *)(v82 + 24) = this;
    WdLogEvent5_WdError(v82);
    LODWORD(v25) = -1073741801;
  }
LABEL_53:
  if ( v88 != (_BYTE)Flags )
    DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v87);
  return (unsigned int)v25;
}
