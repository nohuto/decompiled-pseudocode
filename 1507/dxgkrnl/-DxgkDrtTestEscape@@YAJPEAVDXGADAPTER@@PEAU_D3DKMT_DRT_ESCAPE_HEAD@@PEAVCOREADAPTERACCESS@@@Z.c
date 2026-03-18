/*
 * XREFs of ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C0124C68
 * Callers:
 *     DxgkEscape @ 0x1C009FD70 (DxgkEscape.c)
 * Callees:
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C00017B0 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0001890 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0001A8C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0001AF8 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BEC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0001CEC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001D84 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0002474 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0002714 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C0002810 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0002B98 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0002BC8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002E50 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00058F8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0005964 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ??0DXGPROCESSDEVICEITERATIONLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0017A90 (--0DXGPROCESSDEVICEITERATIONLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGPROCESSDEVICEITERATIONLOCK@@QEAA@XZ @ 0x1C0017B0C (--1DXGPROCESSDEVICEITERATIONLOCK@@QEAA@XZ.c)
 *     DxgkHandleMiracastDrtEscape @ 0x1C0026580 (DxgkHandleMiracastDrtEscape.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION@@@Z @ 0x1C0074DF0 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00811D0 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ??1?$PagedPoolZeroedArray@PEAU_DEVICE_OBJECT@@$07@@QEAA@XZ @ 0x1C011EE74 (--1-$PagedPoolZeroedArray@PEAU_DEVICE_OBJECT@@$07@@QEAA@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z @ 0x1C011F9A4 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z.c)
 *     ?ForcePState@DXGADAPTER@@QEAAXW4_D3DKMT_DRT_FORCE_PSTATE_BEHAVIOR@@II@Z @ 0x1C0126360 (-ForcePState@DXGADAPTER@@QEAAXW4_D3DKMT_DRT_FORCE_PSTATE_BEHAVIOR@@II@Z.c)
 *     ?ForcePStateAcrossNodes@DXGADAPTER@@QEAAXI@Z @ 0x1C01263CC (-ForcePStateAcrossNodes@DXGADAPTER@@QEAAXI@Z.c)
 *     ?QueryPStateEngineData@DXGADAPTER@@QEAAXIPEAU_DXGK_POWER_P_COMPONENT@@PEAI@Z @ 0x1C01277D8 (-QueryPStateEngineData@DXGADAPTER@@QEAAXIPEAU_DXGK_POWER_P_COMPONENT@@PEAI@Z.c)
 *     ?DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDEVICE@@@Z @ 0x1C012CD6C (-DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDE.c)
 *     ?DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z @ 0x1C012CF0C (-DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z.c)
 *     ?GetContexts@DXGDEVICE@@QEAAXPEAIQEAI@Z @ 0x1C01360E4 (-GetContexts@DXGDEVICE@@QEAAXPEAIQEAI@Z.c)
 *     DxgkHandleThermalCoolingDrtEscape @ 0x1C016B390 (DxgkHandleThermalCoolingDrtEscape.c)
 *     DmmDRTTest @ 0x1C0175778 (DmmDRTTest.c)
 *     MonitorDRTTest @ 0x1C0182198 (MonitorDRTTest.c)
 */

__int64 __fastcall DxgkDrtTestEscape(
        struct DXGADAPTER *this,
        struct _D3DKMT_DRT_ESCAPE_HEAD *a2,
        DXGADAPTER **a3,
        __int64 a4)
{
  struct _D3DKMT_DRT_ESCAPE_HEAD *v5; // rsi
  __int64 v7; // rdi
  unsigned int StandardAllocation; // ebx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rax
  struct DXGPROCESS *Current; // rax
  __int64 v26; // rcx
  struct DXGPROCESS *v27; // r15
  __int64 v28; // rax
  __int64 v29; // rcx
  struct DXGDEVICE *v30; // r14
  unsigned int v31; // edx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // r14
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v38; // r8
  char *v39; // rsi
  __int64 v40; // r9
  __int64 v41; // rdx
  char *v42; // rax
  _OWORD *v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rcx
  int v46; // ecx
  __int64 v47; // rcx
  int v48; // ecx
  __int64 v49; // rcx
  struct _KTHREAD **v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rcx
  struct DXGDEVICE *v53; // rax
  __int64 v54; // rax
  DXGDEVICEBYHANDLE *v55; // rcx
  struct DXGPROCESS *v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rcx
  struct DXGCONTEXT *v59; // r15
  __int64 v60; // rax
  struct DXGDEVICE *v61; // rbx
  __int64 v62; // r9
  __int64 v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rax
  struct _D3DDDI_ALLOCATIONLIST *v66; // r12
  unsigned int v67; // edx
  unsigned __int8 IsDxgmms2; // r14
  struct DXGALLOCATION **v69; // rsi
  struct DXGALLOCATION **Elements; // rax
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rax
  struct _KTHREAD **v77; // rax
  __int64 v78; // rcx
  __int64 v79; // rcx
  struct DXGDEVICE *v80; // r14
  __int64 v81; // rax
  __int64 v82; // r9
  int v83; // eax
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // rcx
  unsigned int v87; // [rsp+34h] [rbp-604h] BYREF
  int v88; // [rsp+38h] [rbp-600h] BYREF
  struct DXGCONTEXT *v89; // [rsp+40h] [rbp-5F8h] BYREF
  struct DXGALLOCATION **v90; // [rsp+48h] [rbp-5F0h] BYREF
  unsigned int v91; // [rsp+50h] [rbp-5E8h]
  struct DXGADAPTER *v92; // [rsp+58h] [rbp-5E0h] BYREF
  char v93; // [rsp+60h] [rbp-5D8h]
  char v94[8]; // [rsp+68h] [rbp-5D0h] BYREF
  char v95[8]; // [rsp+70h] [rbp-5C8h] BYREF
  __int64 v96; // [rsp+78h] [rbp-5C0h] BYREF
  char v97; // [rsp+80h] [rbp-5B8h]
  _QWORD v98[2]; // [rsp+88h] [rbp-5B0h] BYREF
  struct DXGDEVICE *v99; // [rsp+98h] [rbp-5A0h] BYREF
  char v100[8]; // [rsp+A0h] [rbp-598h] BYREF
  struct DXGDEVICE *v101; // [rsp+A8h] [rbp-590h] BYREF
  struct DXGDEVICE *v102; // [rsp+B0h] [rbp-588h] BYREF
  _BYTE v103[16]; // [rsp+B8h] [rbp-580h] BYREF
  _QWORD v104[3]; // [rsp+C8h] [rbp-570h] BYREF
  __int64 v105; // [rsp+E0h] [rbp-558h] BYREF
  int v106; // [rsp+E8h] [rbp-550h]
  const wchar_t *v107; // [rsp+F0h] [rbp-548h]
  int *v108; // [rsp+F8h] [rbp-540h]
  int v109; // [rsp+100h] [rbp-538h]
  int *v110; // [rsp+108h] [rbp-530h]
  int v111; // [rsp+110h] [rbp-528h]
  __int64 v112; // [rsp+118h] [rbp-520h]
  int v113; // [rsp+120h] [rbp-518h]
  __int64 v114; // [rsp+128h] [rbp-510h]
  _BYTE v115[32]; // [rsp+130h] [rbp-508h] BYREF
  _BYTE v116[80]; // [rsp+150h] [rbp-4E8h] BYREF
  PERESOURCE *v117[10]; // [rsp+1A0h] [rbp-498h] BYREF
  struct _D3DKMT_RENDER v118; // [rsp+1F0h] [rbp-448h] BYREF
  PVOID v119[33]; // [rsp+360h] [rbp-2D8h] BYREF
  int v120; // [rsp+468h] [rbp-1D0h]
  _QWORD v121[48]; // [rsp+470h] [rbp-1C8h] BYREF

  v5 = a2;
  v7 = 0LL;
  StandardAllocation = 0;
  v91 = 0;
  v9 = *((unsigned int *)a2 + 2);
  if ( !(_DWORD)v9 )
  {
    if ( *((_DWORD *)a2 + 1) < 0x10u )
    {
      v17 = WdLogNewEntry5_WdWarning(v9, a2, a3, a4);
      *(_QWORD *)(v17 + 24) = *((unsigned int *)v5 + 1);
      WdLogEvent5_WdWarning(v17);
      return (unsigned int)-1073741789;
    }
    if ( *((_DWORD *)a2 + 3) )
    {
      v88 = 0;
      v105 = 0LL;
      v106 = 288;
      v107 = L"DRTTestEnable";
      v108 = &v88;
      v109 = 67108868;
      v110 = &v88;
      v111 = 4;
      v112 = 0LL;
      v113 = 0;
      v114 = 0LL;
      memset(v115, 0, sizeof(v115));
      RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v105, 0LL, 0LL);
      if ( v88 == 1484026436 )
      {
        _InterlockedIncrement(&dword_1C0046BE8);
        v14 = WdLogNewEntry5_WdEvent(v11, v10, v12, v13);
        *(_QWORD *)(v14 + 24) = 6499LL;
LABEL_10:
        WdLogEvent5_WdEvent(v14);
        return StandardAllocation;
      }
      v15 = WdLogNewEntry5_WdEvent(v11, v10, v12, v13);
      *(_QWORD *)(v15 + 24) = 6505LL;
      WdLogEvent5_WdEvent(v15);
      return (unsigned int)-1073741823;
    }
    else
    {
      if ( _InterlockedDecrement(&dword_1C0046BE8) >= 0 )
      {
        v14 = WdLogNewEntry5_WdEvent(v9, a2, a3, a4);
        *(_QWORD *)(v14 + 24) = 6525LL;
        goto LABEL_10;
      }
      dword_1C0046BE8 = 0;
      v16 = WdLogNewEntry5_WdError(v9);
      *(_QWORD *)(v16 + 24) = 6521LL;
      WdLogEvent5_WdError(v16);
    }
    return StandardAllocation;
  }
  if ( !dword_1C0046BE8 )
  {
    v24 = WdLogNewEntry5_WdWarning(v9, a2, a3, a4);
    *(_QWORD *)(v24 + 24) = 7028LL;
    goto LABEL_153;
  }
  if ( (int)v9 <= 11 )
  {
    if ( (_DWORD)v9 == 11 )
    {
      v38 = *((unsigned int *)this + 538);
      if ( (_DWORD)v38 )
      {
        v9 = (unsigned int)(v38 - 1);
        a2 = (struct _D3DKMT_DRT_ESCAPE_HEAD *)(344 * v9 + 360);
        if ( *((unsigned int *)v5 + 1) >= (unsigned __int64)a2 )
        {
          v39 = (char *)v5 + 352;
          v40 = (unsigned int)v38;
          do
          {
            v41 = *((_QWORD *)this + 251);
            v42 = v39 - 336;
            v43 = (_OWORD *)(v7 + v41 + 8);
            v44 = 2LL;
            do
            {
              *(_OWORD *)v42 = *v43;
              *((_OWORD *)v42 + 1) = v43[1];
              *((_OWORD *)v42 + 2) = v43[2];
              *((_OWORD *)v42 + 3) = v43[3];
              *((_OWORD *)v42 + 4) = v43[4];
              *((_OWORD *)v42 + 5) = v43[5];
              *((_OWORD *)v42 + 6) = v43[6];
              v42 += 128;
              *((_OWORD *)v42 - 1) = v43[7];
              v43 += 8;
              --v44;
            }
            while ( v44 );
            *(_OWORD *)v42 = *v43;
            *((_OWORD *)v42 + 1) = v43[1];
            *((_OWORD *)v42 + 2) = v43[2];
            *((_OWORD *)v42 + 3) = v43[3];
            *((_OWORD *)v42 + 4) = v43[4];
            *(_DWORD *)v39 = *(_DWORD *)(v7 + v41 + 344);
            v39[4] = *(_BYTE *)(v7 + v41 + 356);
            v7 += 520LL;
            v39 += 344;
            --v40;
          }
          while ( v40 );
          return StandardAllocation;
        }
      }
      v24 = WdLogNewEntry5_WdWarning(v9, a2, v38, a4);
      *(_QWORD *)(v24 + 24) = 6653LL;
      goto LABEL_153;
    }
    v18 = v9 - 1;
    if ( v18 )
    {
      v19 = v18 - 1;
      if ( v19 )
      {
        v20 = v19 - 1;
        if ( !v20 )
        {
          if ( DXGADAPTER::IsCoreResourceSharedOwner(a3[2]) )
            COREADAPTERACCESS::Release((COREADAPTERACCESS *)a3);
          StandardAllocation = COREADAPTERACCESS::AcquireExclusive(a3);
          if ( (StandardAllocation & 0x80000000) == 0 )
            COREADAPTERACCESS::Release((COREADAPTERACCESS *)a3);
          return StandardAllocation;
        }
        v21 = (unsigned int)(v20 - 1);
        if ( !(_DWORD)v21 )
        {
          if ( *((_DWORD *)a2 + 1) >= 0x10u )
          {
            v36 = *((unsigned int *)a2 + 3);
            if ( (unsigned int)(v36 - 1) <= 0x3FF )
            {
              g_HmgrTableSizeIncrement = *((_DWORD *)a2 + 3);
              return StandardAllocation;
            }
            v24 = WdLogNewEntry5_WdWarning(v36, a2, a3, a4);
            *(_QWORD *)(v24 + 24) = 6603LL;
          }
          else
          {
            v24 = WdLogNewEntry5_WdWarning(v21, a2, a3, a4);
            *(_QWORD *)(v24 + 24) = 6594LL;
          }
          goto LABEL_153;
        }
        v22 = (unsigned int)(v21 - 1);
        if ( !(_DWORD)v22 )
        {
          if ( *((_DWORD *)a2 + 1) >= 0x14u )
          {
            g_DxgkDestroyAllocationNumAllocOnStack = *((_DWORD *)a2 + 3);
            g_DxgkDestroyAllocationFailMemoryAlloc = *((_DWORD *)a2 + 4);
            return StandardAllocation;
          }
          v24 = WdLogNewEntry5_WdWarning(v22, a2, a3, a4);
          *(_QWORD *)(v24 + 24) = 6617LL;
          goto LABEL_153;
        }
        v23 = (unsigned int)(v22 - 1);
        if ( (_DWORD)v23 )
        {
          if ( (_DWORD)v23 == 4 )
          {
            if ( *((_DWORD *)a2 + 1) >= 0x10u )
            {
              *((_DWORD *)a2 + 3) = *((_DWORD *)this + 538);
              return StandardAllocation;
            }
            v24 = WdLogNewEntry5_WdWarning(v23, a2, a3, a4);
            *(_QWORD *)(v24 + 24) = 6634LL;
            goto LABEL_153;
          }
          goto LABEL_72;
        }
        if ( *((_DWORD *)a2 + 1) < 0x114u )
        {
          v24 = WdLogNewEntry5_WdWarning(v23, a2, a3, a4);
          *(_QWORD *)(v24 + 24) = 6691LL;
LABEL_153:
          WdLogEvent5_WdWarning(v24);
          return (unsigned int)-1073741811;
        }
        Current = DXGPROCESS::GetCurrent(v23);
        v27 = Current;
        if ( !Current )
        {
          v28 = WdLogNewEntry5_WdError(v26);
          *(_QWORD *)(v28 + 24) = 6699LL;
LABEL_29:
          WdLogEvent5_WdError(v28);
          return (unsigned int)-1073741811;
        }
        DXGPROCESSDEVICEITERATIONLOCK::DXGPROCESSDEVICEITERATIONLOCK((DXGPROCESSDEVICEITERATIONLOCK *)v94, Current);
        v30 = 0LL;
        v102 = 0LL;
        v31 = *((_DWORD *)v5 + 3);
        if ( v31 )
        {
          DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v100, v31, (struct _KTHREAD **)v27, &v102);
          v30 = v102;
          if ( !v102 )
          {
            v33 = WdLogNewEntry5_WdError(v32);
            *(_QWORD *)(v33 + 24) = *((unsigned int *)v5 + 3);
            WdLogEvent5_WdError(v33);
            StandardAllocation = -1073741811;
            DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v100);
LABEL_33:
            DXGPROCESSDEVICEITERATIONLOCK::~DXGPROCESSDEVICEITERATIONLOCK((DXGPROCESSDEVICEITERATIONLOCK *)v94);
            return StandardAllocation;
          }
          DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v100);
        }
        if ( v30 || ((v34 = *((_QWORD *)v27 + 31)) == 0 ? (v30 = 0LL) : (v30 = (struct DXGDEVICE *)(v34 - 24)), v30) )
        {
          DXGDEVICE::GetContexts(v30, (unsigned int *)v5 + 4, (unsigned int *const)v5 + 5);
          *((_DWORD *)v5 + 3) = *((_DWORD *)v30 + 71);
        }
        else
        {
          v35 = WdLogNewEntry5_WdError(v29);
          *(_QWORD *)(v35 + 24) = 6726LL;
          WdLogEvent5_WdError(v35);
          StandardAllocation = -1073741811;
        }
        goto LABEL_33;
      }
      return (unsigned int)DmmDRTTest(this);
    }
    else
    {
      return (unsigned int)MonitorDRTTest(this, a2);
    }
  }
  v45 = (unsigned int)(v9 - 12);
  if ( !(_DWORD)v45 )
  {
    if ( *((_DWORD *)a2 + 1) >= 0x10u )
    {
      v86 = *((_QWORD *)this + 248);
      if ( v86 )
        *(_BYTE *)(v86 + 632) = *((_BYTE *)a2 + 12);
      return StandardAllocation;
    }
    v24 = WdLogNewEntry5_WdWarning(v45, a2, a3, a4);
    *(_QWORD *)(v24 + 24) = 6672LL;
    goto LABEL_153;
  }
  v46 = v45 - 1;
  if ( !v46 )
  {
    v85 = *((unsigned int *)a2 + 1);
    if ( (unsigned int)v85 < 0x38 )
    {
      v24 = WdLogNewEntry5_WdWarning(v85, a2, a3, a4);
      *(_QWORD *)(v24 + 24) = 6951LL;
      goto LABEL_153;
    }
    return (unsigned int)DxgkHandleMiracastDrtEscape(v85, (__int64)a2);
  }
  v47 = (unsigned int)(v46 - 1);
  if ( !(_DWORD)v47 )
  {
    if ( *((_DWORD *)a2 + 1) < 0x14u )
    {
      v24 = WdLogNewEntry5_WdWarning(v47, a2, a3, a4);
      *(_QWORD *)(v24 + 24) = 6966LL;
      goto LABEL_153;
    }
    return (unsigned int)DxgkHandleThermalCoolingDrtEscape(*((_QWORD *)this + 22));
  }
  v48 = v47 - 1;
  if ( !v48 )
  {
    if ( *((_DWORD *)a2 + 1) < 0xA8u )
      return 3221225485LL;
    v84 = *((unsigned int *)a2 + 3);
    if ( !(_DWORD)v84 )
    {
      DXGADAPTER::ForcePStateAcrossNodes(this, *((_DWORD *)v5 + 6));
      return StandardAllocation;
    }
    if ( (int)v84 <= 0 )
      return 3221225485LL;
    if ( (int)v84 <= 3 )
    {
      DXGADAPTER::ForcePState(this, v84, *((unsigned int *)v5 + 4), *((unsigned int *)v5 + 6));
      return StandardAllocation;
    }
    if ( (_DWORD)v84 == 4 )
    {
      *((_DWORD *)v5 + 7) = *((_DWORD *)this + 730);
      return StandardAllocation;
    }
    if ( (_DWORD)v84 != 5 )
      return 3221225485LL;
    DXGADAPTER::QueryPStateEngineData(
      this,
      *((_DWORD *)v5 + 5),
      (struct _DXGK_POWER_P_COMPONENT *)((char *)v5 + 32),
      (unsigned int *)v5 + 4);
    return StandardAllocation;
  }
  v49 = (unsigned int)(v48 - 1);
  if ( !(_DWORD)v49 )
  {
    if ( *((_DWORD *)a2 + 1) < 0x3Cu )
    {
      v24 = WdLogNewEntry5_WdWarning(v49, a2, a3, a4);
      *(_QWORD *)(v24 + 24) = 6741LL;
      goto LABEL_153;
    }
    v77 = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v49);
    if ( !v77 )
    {
      v28 = WdLogNewEntry5_WdError(v78);
      *(_QWORD *)(v28 + 24) = 6749LL;
      goto LABEL_29;
    }
    v99 = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v95, *((_DWORD *)v5 + 3), v77, &v99);
    v80 = v99;
    if ( v99 )
    {
      COREADAPTERACCESS::Release((COREADAPTERACCESS *)a3);
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v104, v80);
      v96 = *(_QWORD *)(*((_QWORD *)v80 + 2) + 16LL);
      v97 = 0;
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&v96);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v117, (__int64)v80, 0, v82, 0);
      StandardAllocation = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v117);
      if ( (StandardAllocation & 0x80000000) == 0 )
      {
        memset(v121, 0, 0x178uLL);
        HIDWORD(v121[0]) = *((_DWORD *)v5 + 3);
        LODWORD(v121[2]) = 4;
        v121[3] = (char *)v5 + 16;
        v83 = LODWORD(v121[0]) | 0x200;
        LODWORD(v121[0]) |= 0x200u;
        if ( *((_BYTE *)v5 + 56) )
        {
          v83 |= 1u;
          LODWORD(v121[0]) = v83;
        }
        if ( *((_BYTE *)v5 + 57) )
          LODWORD(v121[0]) = v83 | 0x400;
        HIDWORD(v121[46]) = *((_DWORD *)v5 + 10);
        StandardAllocation = DXGDEVICE::CreateStandardAllocation(
                               v80,
                               (struct _D3DKM_CREATESTANDARDALLOCATION *)v121,
                               v117);
        if ( (StandardAllocation & 0x80000000) == 0 )
        {
          *((_DWORD *)v5 + 11) = HIDWORD(v121[6]);
          *((_QWORD *)v5 + 6) = v121[1];
        }
        else
        {
          StandardAllocation = -1073741811;
        }
      }
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v117);
      if ( v97 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v96);
      if ( v104[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v104);
    }
    else
    {
      v81 = WdLogNewEntry5_WdError(v79);
      *(_QWORD *)(v81 + 24) = *((unsigned int *)v5 + 3);
      WdLogEvent5_WdError(v81);
      StandardAllocation = -1073741811;
    }
    v55 = (DXGDEVICEBYHANDLE *)v95;
    goto LABEL_118;
  }
  v23 = (unsigned int)(v49 - 1);
  if ( (_DWORD)v23 )
  {
    if ( (_DWORD)v23 != 1 )
    {
LABEL_72:
      v24 = WdLogNewEntry5_WdWarning(v23, a2, a3, a4);
      *(_QWORD *)(v24 + 24) = *((int *)v5 + 2);
      goto LABEL_153;
    }
    if ( *((_DWORD *)a2 + 1) < 0x10u )
    {
      v24 = WdLogNewEntry5_WdWarning(v23, a2, a3, a4);
      *(_QWORD *)(v24 + 24) = 6920LL;
      goto LABEL_153;
    }
    v50 = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v23);
    if ( !v50 )
    {
      v28 = WdLogNewEntry5_WdError(v51);
      *(_QWORD *)(v28 + 24) = 6928LL;
      goto LABEL_29;
    }
    v101 = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v90, *((_DWORD *)v5 + 3), v50, &v101);
    v53 = v101;
    if ( v101 )
    {
      *((_BYTE *)v101 + 18722) = 1;
      *(_BYTE *)(*((_QWORD *)v53 + 5) + 264LL) = 1;
    }
    else
    {
      v54 = WdLogNewEntry5_WdError(v52);
      *(_QWORD *)(v54 + 24) = *((unsigned int *)v5 + 3);
      WdLogEvent5_WdError(v54);
      StandardAllocation = -1073741811;
    }
    v55 = (DXGDEVICEBYHANDLE *)&v90;
LABEL_118:
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE(v55);
    return StandardAllocation;
  }
  if ( *((_DWORD *)a2 + 1) < 0xA8u )
  {
    v24 = WdLogNewEntry5_WdWarning(v23, a2, a3, a4);
    *(_QWORD *)(v24 + 24) = 6806LL;
    goto LABEL_153;
  }
  v56 = DXGPROCESS::GetCurrent(v23);
  if ( !v56 )
  {
    v28 = WdLogNewEntry5_WdError(v57);
    *(_QWORD *)(v28 + 24) = 6814LL;
    goto LABEL_29;
  }
  v89 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v103, *((_DWORD *)v5 + 3), v56, &v89, 0);
  v59 = v89;
  if ( !v89 )
  {
    v60 = WdLogNewEntry5_WdError(v58);
    *(_QWORD *)(v60 + 24) = 6824LL;
    WdLogEvent5_WdError(v60);
    StandardAllocation = -1073741811;
LABEL_87:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v103);
    return StandardAllocation;
  }
  COREADAPTERACCESS::Release((COREADAPTERACCESS *)a3);
  v61 = (struct DXGDEVICE *)*((_QWORD *)v59 + 2);
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v98, v61);
  DXGPUSHLOCK::AcquireExclusive((struct DXGCONTEXT *)((char *)v59 + 360));
  v92 = this;
  v93 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&v92);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v116, (__int64)v61, 0, v62, 0);
  StandardAllocation = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v116);
  if ( (StandardAllocation & 0x80000000) != 0 )
  {
    *((_QWORD *)v59 + 46) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v59 + 360, 0LL);
    KeLeaveCriticalRegion();
LABEL_90:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v116);
    if ( v93 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v92);
    if ( v98[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v98);
    goto LABEL_87;
  }
  if ( *((_DWORD *)v5 + 8) > 0x10u )
  {
    v64 = WdLogNewEntry5_WdError(v63);
    *(_QWORD *)(v64 + 24) = 6845LL;
    WdLogEvent5_WdError(v64);
    StandardAllocation = -1073741811;
  }
  if ( !*((_DWORD *)v5 + 4) )
  {
    v65 = WdLogNewEntry5_WdError(v63);
    *(_QWORD *)(v65 + 24) = 6850LL;
    WdLogEvent5_WdError(v65);
    StandardAllocation = -1073741811;
  }
  memset(&v118, 0, sizeof(v118));
  v118.hDevice = *((_DWORD *)v5 + 3);
  v118.AllocationCount = *((_DWORD *)v5 + 8);
  v118.CommandLength = *((_DWORD *)v5 + 4);
  v118.pNewCommandBuffer = (void *)*((_QWORD *)v5 + 3);
  v66 = (struct _D3DDDI_ALLOCATIONLIST *)((char *)v5 + 36);
  v118.pNewAllocationList = (D3DDDI_ALLOCATIONLIST *)((char *)v5 + 36);
  *(_DWORD *)&v118.Flags |= 0x20u;
  IsDxgmms2 = DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v59 + 2) + 16LL) + 16LL));
  v87 = v67;
  v119[0] = 0LL;
  v120 = 0;
  v69 = 0LL;
  v90 = 0LL;
  if ( !IsDxgmms2 )
  {
LABEL_106:
    if ( (StandardAllocation & 0x80000000) == 0 )
    {
      StandardAllocation = DXGCONTEXT::Render(v59, &v118, (struct COREDEVICEACCESS *)v116, &v89, v69);
      v91 = StandardAllocation;
      v59 = v89;
    }
    if ( IsDxgmms2 )
      DxgkUnreferenceAllocationList(v87, v69);
    *((_QWORD *)v59 + 46) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v59 + 360, 0LL);
    KeLeaveCriticalRegion();
    PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>(v119);
    goto LABEL_90;
  }
  Elements = (struct DXGALLOCATION **)PagedPoolZeroedArray<DXGALLOCATION *,32>::AllocateElements(v119, v67);
  v69 = Elements;
  v90 = Elements;
  if ( Elements )
  {
    StandardAllocation = DxgkReferenceAllocationList(&v87, v66, Elements, *((struct DXGDEVICE **)v59 + 2));
    goto LABEL_106;
  }
  v75 = WdLogNewEntry5_WdWarning(v72, v71, v73, v74);
  *(_QWORD *)(v75 + 24) = 6879LL;
  WdLogEvent5_WdWarning(v75);
  PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>(v119);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v116);
  if ( v93 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v92);
  if ( v98[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v98);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v103);
  return 3221225495LL;
}
