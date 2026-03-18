/*
 * XREFs of ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C012AD88
 * Callers:
 *     DxgkEscape @ 0x1C007AB10 (DxgkEscape.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001BC8 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0003150 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00037BC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000388C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0003ADC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0003B48 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x1C0003DC0 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003E1C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0003F7C (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003FA8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00040BC (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00041F4 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C000C6F0 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C000C7D0 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ??0DXGPROCESSDEVICEITERATIONLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0019564 (--0DXGPROCESSDEVICEITERATIONLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGPROCESSDEVICEITERATIONLOCK@@QEAA@XZ @ 0x1C00195E0 (--1DXGPROCESSDEVICEITERATIONLOCK@@QEAA@XZ.c)
 *     DxgkHandleMiracastDrtEscape @ 0x1C00260D0 (DxgkHandleMiracastDrtEscape.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00753B0 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION@@@Z @ 0x1C0086EC0 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION.c)
 *     ?DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@@Z @ 0x1C0088FD0 (-DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@@Z.c)
 *     ??1?$PagedPoolZeroedArray@PEAU_DEVICE_OBJECT@@$07@@QEAA@XZ @ 0x1C009D388 (--1-$PagedPoolZeroedArray@PEAU_DEVICE_OBJECT@@$07@@QEAA@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z @ 0x1C01249EC (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z.c)
 *     ?ForcePState@DXGADAPTER@@QEAAXW4_D3DKMT_DRT_FORCE_PSTATE_BEHAVIOR@@II@Z @ 0x1C012C540 (-ForcePState@DXGADAPTER@@QEAAXW4_D3DKMT_DRT_FORCE_PSTATE_BEHAVIOR@@II@Z.c)
 *     ?ForcePStateAcrossNodes@DXGADAPTER@@QEAAXI@Z @ 0x1C012C5AC (-ForcePStateAcrossNodes@DXGADAPTER@@QEAAXI@Z.c)
 *     ?QueryPStateEngineData@DXGADAPTER@@QEAAXIPEAU_DXGK_POWER_P_COMPONENT@@PEAI@Z @ 0x1C012D9B8 (-QueryPStateEngineData@DXGADAPTER@@QEAAXIPEAU_DXGK_POWER_P_COMPONENT@@PEAI@Z.c)
 *     ?DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z @ 0x1C0133254 (-DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z.c)
 *     ?GetContexts@DXGDEVICE@@QEAAXPEAIQEAI@Z @ 0x1C013A814 (-GetContexts@DXGDEVICE@@QEAAXPEAIQEAI@Z.c)
 *     DxgkHandleThermalCoolingDrtEscape @ 0x1C016FBA0 (DxgkHandleThermalCoolingDrtEscape.c)
 *     DmmDRTTest @ 0x1C0179D10 (DmmDRTTest.c)
 *     MonitorDRTTest @ 0x1C01867E0 (MonitorDRTTest.c)
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
  __int64 v24; // rcx
  __int64 v25; // r8
  char *v26; // rsi
  __int64 v27; // r9
  __int64 v28; // rdx
  char *v29; // rax
  _OWORD *v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rax
  struct DXGPROCESS *Current; // rax
  __int64 v34; // rcx
  struct DXGPROCESS *v35; // r15
  __int64 v36; // rax
  __int64 v37; // rcx
  struct DXGDEVICE *v38; // r14
  unsigned int v39; // edx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // r14
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v46; // rcx
  int v47; // ecx
  __int64 v48; // rcx
  int v49; // ecx
  __int64 v50; // rcx
  __int64 v51; // rcx
  bool v52; // bl
  struct _KTHREAD **v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rcx
  struct DXGDEVICE *v56; // rax
  __int64 v57; // rax
  DXGDEVICEBYHANDLE *v58; // rcx
  struct DXGPROCESS *v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rcx
  struct DXGCONTEXT *v62; // r15
  __int64 v63; // rax
  struct DXGDEVICE *v64; // rbx
  __int64 v65; // r9
  __int64 v66; // rcx
  __int64 v67; // rax
  __int64 v68; // rax
  struct _D3DDDI_ALLOCATIONLIST *v69; // r12
  unsigned int v70; // edx
  unsigned __int8 IsDxgmms2; // r14
  struct DXGALLOCATION **v72; // rsi
  struct DXGALLOCATION **Elements; // rax
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // rax
  struct _KTHREAD **v80; // rax
  __int64 v81; // rcx
  __int64 v82; // rcx
  struct DXGDEVICE *v83; // r14
  __int64 v84; // rax
  __int64 v85; // r9
  int v86; // eax
  unsigned int *v87; // r9
  __int64 v88; // r8
  __int64 v89; // rdx
  __int64 v90; // rcx
  int v91; // [rsp+34h] [rbp-614h] BYREF
  unsigned int v92; // [rsp+38h] [rbp-610h] BYREF
  struct DXGCONTEXT *v93; // [rsp+40h] [rbp-608h] BYREF
  unsigned int v94; // [rsp+48h] [rbp-600h]
  struct DXGALLOCATION **v95; // [rsp+50h] [rbp-5F8h] BYREF
  char v96[8]; // [rsp+58h] [rbp-5F0h] BYREF
  char v97[8]; // [rsp+60h] [rbp-5E8h] BYREF
  _QWORD v98[2]; // [rsp+68h] [rbp-5E0h] BYREF
  char v99[8]; // [rsp+78h] [rbp-5D0h] BYREF
  char v100; // [rsp+80h] [rbp-5C8h]
  struct DXGDEVICE *v101; // [rsp+88h] [rbp-5C0h] BYREF
  struct DXGDEVICE *v102; // [rsp+90h] [rbp-5B8h] BYREF
  char v103[8]; // [rsp+98h] [rbp-5B0h] BYREF
  struct DXGDEVICE *v104; // [rsp+A0h] [rbp-5A8h] BYREF
  _QWORD v105[2]; // [rsp+A8h] [rbp-5A0h] BYREF
  _BYTE v106[16]; // [rsp+B8h] [rbp-590h] BYREF
  _BYTE v107[24]; // [rsp+C8h] [rbp-580h] BYREF
  __int64 v108; // [rsp+E0h] [rbp-568h] BYREF
  int v109; // [rsp+E8h] [rbp-560h]
  const wchar_t *v110; // [rsp+F0h] [rbp-558h]
  int *v111; // [rsp+F8h] [rbp-550h]
  int v112; // [rsp+100h] [rbp-548h]
  int *v113; // [rsp+108h] [rbp-540h]
  int v114; // [rsp+110h] [rbp-538h]
  __int64 v115; // [rsp+118h] [rbp-530h]
  int v116; // [rsp+120h] [rbp-528h]
  __int64 v117; // [rsp+128h] [rbp-520h]
  _BYTE v118[32]; // [rsp+130h] [rbp-518h] BYREF
  _BYTE v119[80]; // [rsp+150h] [rbp-4F8h] BYREF
  PERESOURCE *v120[10]; // [rsp+1A0h] [rbp-4A8h] BYREF
  _D3DKMT_RENDER v121; // [rsp+1F0h] [rbp-458h] BYREF
  PVOID v122[33]; // [rsp+360h] [rbp-2E8h] BYREF
  int v123; // [rsp+468h] [rbp-1E0h]
  _QWORD v124[50]; // [rsp+470h] [rbp-1D8h] BYREF

  v5 = a2;
  v7 = 0LL;
  StandardAllocation = 0;
  v94 = 0;
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
      v91 = 0;
      v108 = 0LL;
      v109 = 288;
      v110 = L"DRTTestEnable";
      v111 = &v91;
      v112 = 67108868;
      v113 = &v91;
      v114 = 4;
      v115 = 0LL;
      v116 = 0;
      v117 = 0LL;
      memset(v118, 0, sizeof(v118));
      RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v108, 0LL, 0LL);
      if ( v91 == 1484026436 )
      {
        _InterlockedIncrement(&dword_1C0046C18);
        v14 = WdLogNewEntry5_WdEvent(v11, v10, v12, v13);
        *(_QWORD *)(v14 + 24) = 6651LL;
LABEL_10:
        WdLogEvent5_WdEvent(v14);
        return StandardAllocation;
      }
      v15 = WdLogNewEntry5_WdEvent(v11, v10, v12, v13);
      *(_QWORD *)(v15 + 24) = 6657LL;
      WdLogEvent5_WdEvent(v15);
      return (unsigned int)-1073741823;
    }
    else
    {
      if ( _InterlockedDecrement(&dword_1C0046C18) >= 0 )
      {
        v14 = WdLogNewEntry5_WdEvent(v9, a2, a3, a4);
        *(_QWORD *)(v14 + 24) = 6677LL;
        goto LABEL_10;
      }
      dword_1C0046C18 = 0;
      v16 = WdLogNewEntry5_WdError(v9);
      *(_QWORD *)(v16 + 24) = 6673LL;
      WdLogEvent5_WdError(v16);
    }
    return StandardAllocation;
  }
  if ( !dword_1C0046C18 )
  {
    v32 = WdLogNewEntry5_WdWarning(v9, a2, a3, a4);
    *(_QWORD *)(v32 + 24) = 7221LL;
    goto LABEL_165;
  }
  if ( (int)v9 <= 12 )
  {
    if ( (_DWORD)v9 == 12 )
    {
      if ( *((_DWORD *)a2 + 1) >= 0x10u )
      {
        v46 = *((_QWORD *)this + 249);
        if ( v46 )
          *(_BYTE *)(v46 + 704) = *((_BYTE *)a2 + 12);
        return StandardAllocation;
      }
      v32 = WdLogNewEntry5_WdWarning(v9, a2, a3, a4);
      *(_QWORD *)(v32 + 24) = 6824LL;
      goto LABEL_165;
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
            v44 = *((unsigned int *)a2 + 3);
            if ( (unsigned int)(v44 - 1) <= 0x3FF )
            {
              g_HmgrTableSizeIncrement = *((_DWORD *)a2 + 3);
              return StandardAllocation;
            }
            v32 = WdLogNewEntry5_WdWarning(v44, a2, a3, a4);
            *(_QWORD *)(v32 + 24) = 6755LL;
          }
          else
          {
            v32 = WdLogNewEntry5_WdWarning(v21, a2, a3, a4);
            *(_QWORD *)(v32 + 24) = 6746LL;
          }
          goto LABEL_165;
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
          v32 = WdLogNewEntry5_WdWarning(v22, a2, a3, a4);
          *(_QWORD *)(v32 + 24) = 6769LL;
          goto LABEL_165;
        }
        v23 = (unsigned int)(v22 - 1);
        if ( (_DWORD)v23 )
        {
          v24 = (unsigned int)(v23 - 4);
          if ( !(_DWORD)v24 )
          {
            if ( *((_DWORD *)a2 + 1) >= 0x10u )
            {
              *((_DWORD *)a2 + 3) = *((_DWORD *)this + 542);
              return StandardAllocation;
            }
            v32 = WdLogNewEntry5_WdWarning(v24, a2, a3, a4);
            *(_QWORD *)(v32 + 24) = 6786LL;
            goto LABEL_165;
          }
          if ( (_DWORD)v24 == 1 )
          {
            v25 = *((unsigned int *)this + 542);
            if ( (_DWORD)v25 )
            {
              v24 = (unsigned int)(v25 - 1);
              a2 = (struct _D3DKMT_DRT_ESCAPE_HEAD *)(344 * v24 + 360);
              if ( *((unsigned int *)v5 + 1) >= (unsigned __int64)a2 )
              {
                v26 = (char *)v5 + 352;
                v27 = (unsigned int)v25;
                do
                {
                  v28 = *((_QWORD *)this + 253);
                  v29 = v26 - 336;
                  v30 = (_OWORD *)(v7 + v28 + 8);
                  v31 = 2LL;
                  do
                  {
                    *(_OWORD *)v29 = *v30;
                    *((_OWORD *)v29 + 1) = v30[1];
                    *((_OWORD *)v29 + 2) = v30[2];
                    *((_OWORD *)v29 + 3) = v30[3];
                    *((_OWORD *)v29 + 4) = v30[4];
                    *((_OWORD *)v29 + 5) = v30[5];
                    *((_OWORD *)v29 + 6) = v30[6];
                    v29 += 128;
                    *((_OWORD *)v29 - 1) = v30[7];
                    v30 += 8;
                    --v31;
                  }
                  while ( v31 );
                  *(_OWORD *)v29 = *v30;
                  *((_OWORD *)v29 + 1) = v30[1];
                  *((_OWORD *)v29 + 2) = v30[2];
                  *((_OWORD *)v29 + 3) = v30[3];
                  *((_OWORD *)v29 + 4) = v30[4];
                  *(_DWORD *)v26 = *(_DWORD *)(v7 + v28 + 344);
                  v26[4] = *(_BYTE *)(v7 + v28 + 356);
                  v7 += 520LL;
                  v26 += 344;
                  --v27;
                }
                while ( v27 );
                return StandardAllocation;
              }
            }
            v32 = WdLogNewEntry5_WdWarning(v24, a2, v25, a4);
            *(_QWORD *)(v32 + 24) = 6805LL;
            goto LABEL_165;
          }
          goto LABEL_76;
        }
        if ( *((_DWORD *)a2 + 1) < 0x114u )
        {
          v32 = WdLogNewEntry5_WdWarning(v23, a2, a3, a4);
          *(_QWORD *)(v32 + 24) = 6843LL;
LABEL_165:
          WdLogEvent5_WdWarning(v32);
          return (unsigned int)-1073741811;
        }
        Current = DXGPROCESS::GetCurrent();
        v35 = Current;
        if ( !Current )
        {
          v36 = WdLogNewEntry5_WdError(v34);
          *(_QWORD *)(v36 + 24) = 6851LL;
LABEL_38:
          WdLogEvent5_WdError(v36);
          return (unsigned int)-1073741811;
        }
        DXGPROCESSDEVICEITERATIONLOCK::DXGPROCESSDEVICEITERATIONLOCK((DXGPROCESSDEVICEITERATIONLOCK *)v97, Current);
        v38 = 0LL;
        v104 = 0LL;
        v39 = *((_DWORD *)v5 + 3);
        if ( v39 )
        {
          DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v103, v39, (struct _KTHREAD **)v35, &v104);
          v38 = v104;
          if ( !v104 )
          {
            v41 = WdLogNewEntry5_WdError(v40);
            *(_QWORD *)(v41 + 24) = *((unsigned int *)v5 + 3);
            WdLogEvent5_WdError(v41);
            StandardAllocation = -1073741811;
            DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v103);
LABEL_42:
            DXGPROCESSDEVICEITERATIONLOCK::~DXGPROCESSDEVICEITERATIONLOCK((DXGPROCESSDEVICEITERATIONLOCK *)v97);
            return StandardAllocation;
          }
          DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v103);
        }
        if ( v38 || ((v42 = *((_QWORD *)v35 + 31)) == 0 ? (v38 = 0LL) : (v38 = (struct DXGDEVICE *)(v42 - 24)), v38) )
        {
          DXGDEVICE::GetContexts(v38, (unsigned int *)v5 + 4, (unsigned int *const)v5 + 5);
          *((_DWORD *)v5 + 3) = *((_DWORD *)v38 + 71);
        }
        else
        {
          v43 = WdLogNewEntry5_WdError(v37);
          *(_QWORD *)(v43 + 24) = 6878LL;
          WdLogEvent5_WdError(v43);
          StandardAllocation = -1073741811;
        }
        goto LABEL_42;
      }
      return (unsigned int)DmmDRTTest(this);
    }
    else
    {
      return (unsigned int)MonitorDRTTest(this, a2);
    }
  }
  v47 = v9 - 13;
  if ( !v47 )
  {
    v90 = *((unsigned int *)a2 + 1);
    if ( (unsigned int)v90 < 0x38 )
    {
      v32 = WdLogNewEntry5_WdWarning(v90, a2, a3, a4);
      *(_QWORD *)(v32 + 24) = 7118LL;
      goto LABEL_165;
    }
    return (unsigned int)DxgkHandleMiracastDrtEscape(v90, (__int64)a2);
  }
  v48 = (unsigned int)(v47 - 1);
  if ( !(_DWORD)v48 )
  {
    if ( *((_DWORD *)a2 + 1) < 0x14u )
    {
      v32 = WdLogNewEntry5_WdWarning(v48, a2, a3, a4);
      *(_QWORD *)(v32 + 24) = 7133LL;
      goto LABEL_165;
    }
    return (unsigned int)DxgkHandleThermalCoolingDrtEscape(*((_QWORD *)this + 22));
  }
  v49 = v48 - 1;
  if ( !v49 )
  {
    if ( *((_DWORD *)a2 + 1) >= 0xA8u )
    {
      v87 = (unsigned int *)((char *)a2 + 16);
      v88 = *((unsigned int *)a2 + 4);
      if ( (unsigned int)v88 < *((_DWORD *)this + 542) )
      {
        v89 = *((unsigned int *)a2 + 3);
        if ( !(_DWORD)v89 )
        {
          DXGADAPTER::ForcePStateAcrossNodes(this, *((_DWORD *)v5 + 6));
          return StandardAllocation;
        }
        if ( (int)v89 > 0 )
        {
          if ( (int)v89 <= 3 )
          {
            DXGADAPTER::ForcePState(this, v89, v88, *((unsigned int *)v5 + 6));
            return StandardAllocation;
          }
          if ( (_DWORD)v89 == 4 )
          {
            *((_DWORD *)v5 + 7) = *((_DWORD *)this + 734);
            return StandardAllocation;
          }
          if ( (_DWORD)v89 == 5 )
          {
            DXGADAPTER::QueryPStateEngineData(
              this,
              *((_DWORD *)v5 + 5),
              (struct _DXGK_POWER_P_COMPONENT *)((char *)v5 + 32),
              v87);
            return StandardAllocation;
          }
        }
      }
    }
    return 3221225485LL;
  }
  v50 = (unsigned int)(v49 - 1);
  if ( !(_DWORD)v50 )
  {
    if ( *((_DWORD *)a2 + 1) < 0x48u )
    {
      v32 = WdLogNewEntry5_WdWarning(v50, a2, a3, a4);
      *(_QWORD *)(v32 + 24) = 6893LL;
      goto LABEL_165;
    }
    v80 = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
    if ( !v80 )
    {
      v36 = WdLogNewEntry5_WdError(v81);
      *(_QWORD *)(v36 + 24) = 6901LL;
      goto LABEL_38;
    }
    v101 = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v96, *((_DWORD *)v5 + 3), v80, &v101);
    v83 = v101;
    if ( v101 )
    {
      COREADAPTERACCESS::Release((COREADAPTERACCESS *)a3);
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v105, v83);
      DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
        (DXGADAPTERSTOPRESETLOCKSHARED *)v107,
        *(struct DXGADAPTER **)(*((_QWORD *)v83 + 2) + 16LL),
        1);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v120, (__int64)v83, 0, v85, 0);
      StandardAllocation = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v120);
      if ( (StandardAllocation & 0x80000000) == 0 )
      {
        memset(v124, 0, 0x188uLL);
        HIDWORD(v124[0]) = *((_DWORD *)v5 + 3);
        LODWORD(v124[2]) = 4;
        v124[3] = (char *)v5 + 16;
        v86 = LODWORD(v124[0]) | 0x200;
        LODWORD(v124[0]) |= 0x200u;
        if ( *((_BYTE *)v5 + 60) )
        {
          v86 |= 1u;
          LODWORD(v124[0]) = v86;
        }
        if ( *((_BYTE *)v5 + 65) )
        {
          v86 |= 0x20u;
          LODWORD(v124[0]) = v86;
        }
        if ( *((_BYTE *)v5 + 61) )
        {
          v86 |= 0x400u;
          LODWORD(v124[0]) = v86;
        }
        if ( *((_BYTE *)v5 + 62) )
        {
          v86 |= 0x1000u;
          LODWORD(v124[0]) = v86;
        }
        if ( *((_BYTE *)v5 + 63) )
          LODWORD(v124[0]) = v86 | 0x2000;
        LOBYTE(v124[48]) = *((_BYTE *)v5 + 64);
        LODWORD(v124[47]) = *((_DWORD *)v5 + 14);
        HIDWORD(v124[47]) = *((_DWORD *)v5 + 17);
        HIDWORD(v124[46]) = *((_DWORD *)v5 + 10);
        StandardAllocation = DXGDEVICE::CreateStandardAllocation(
                               v83,
                               (struct _D3DKM_CREATESTANDARDALLOCATION *)v124,
                               v120);
        if ( (StandardAllocation & 0x80000000) == 0 )
        {
          *((_DWORD *)v5 + 11) = HIDWORD(v124[6]);
          *((_QWORD *)v5 + 6) = v124[1];
        }
        else
        {
          StandardAllocation = -1073741811;
        }
      }
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v120);
      if ( v107[8] )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v107);
      if ( v105[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v105);
    }
    else
    {
      v84 = WdLogNewEntry5_WdError(v82);
      *(_QWORD *)(v84 + 24) = *((unsigned int *)v5 + 3);
      WdLogEvent5_WdError(v84);
      StandardAllocation = -1073741811;
    }
    v58 = (DXGDEVICEBYHANDLE *)v96;
    goto LABEL_126;
  }
  v51 = (unsigned int)(v50 - 1);
  if ( (_DWORD)v51 )
  {
    v24 = (unsigned int)(v51 - 1);
    if ( (_DWORD)v24 )
    {
      if ( (_DWORD)v24 != 1 )
      {
LABEL_76:
        v32 = WdLogNewEntry5_WdWarning(v24, a2, a3, a4);
        *(_QWORD *)(v32 + 24) = *((int *)v5 + 2);
        goto LABEL_165;
      }
      if ( *((_DWORD *)a2 + 1) >= 0x10u )
      {
        if ( g_OSTestSigningEnabled )
        {
          v52 = *((_DWORD *)a2 + 3) != 0;
          *((_BYTE *)DXGGLOBAL::GetGlobal(v24) + 1208) = v52;
          return 0;
        }
        else
        {
          return (unsigned int)-1073741637;
        }
      }
      return 3221225485LL;
    }
    if ( *((_DWORD *)a2 + 1) < 0x10u )
    {
      v32 = WdLogNewEntry5_WdWarning(v24, a2, a3, a4);
      *(_QWORD *)(v32 + 24) = 7087LL;
      goto LABEL_165;
    }
    v53 = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
    if ( !v53 )
    {
      v36 = WdLogNewEntry5_WdError(v54);
      *(_QWORD *)(v36 + 24) = 7095LL;
      goto LABEL_38;
    }
    v102 = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v95, *((_DWORD *)v5 + 3), v53, &v102);
    v56 = v102;
    if ( v102 )
    {
      *((_BYTE *)v102 + 2850) = 1;
      *(_BYTE *)(*((_QWORD *)v56 + 5) + 264LL) = 1;
    }
    else
    {
      v57 = WdLogNewEntry5_WdError(v55);
      *(_QWORD *)(v57 + 24) = *((unsigned int *)v5 + 3);
      WdLogEvent5_WdError(v57);
      StandardAllocation = -1073741811;
    }
    v58 = (DXGDEVICEBYHANDLE *)&v95;
LABEL_126:
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE(v58);
    return StandardAllocation;
  }
  if ( *((_DWORD *)a2 + 1) < 0xA8u )
  {
    v32 = WdLogNewEntry5_WdWarning(v51, a2, a3, a4);
    *(_QWORD *)(v32 + 24) = 6973LL;
    goto LABEL_165;
  }
  v59 = DXGPROCESS::GetCurrent();
  if ( !v59 )
  {
    v36 = WdLogNewEntry5_WdError(v60);
    *(_QWORD *)(v36 + 24) = 6981LL;
    goto LABEL_38;
  }
  v93 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v106, *((_DWORD *)v5 + 3), v59, &v93, 0);
  v62 = v93;
  if ( !v93 )
  {
    v63 = WdLogNewEntry5_WdError(v61);
    *(_QWORD *)(v63 + 24) = 6991LL;
    WdLogEvent5_WdError(v63);
    StandardAllocation = -1073741811;
LABEL_95:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v106);
    return StandardAllocation;
  }
  COREADAPTERACCESS::Release((COREADAPTERACCESS *)a3);
  v64 = (struct DXGDEVICE *)*((_QWORD *)v62 + 2);
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v98, v64);
  DXGPUSHLOCK::AcquireExclusive((struct DXGCONTEXT *)((char *)v62 + 360));
  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v99, this, 1);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v119, (__int64)v64, 0, v65, 0);
  StandardAllocation = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v119);
  if ( (StandardAllocation & 0x80000000) != 0 )
  {
    *((_QWORD *)v62 + 46) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v62 + 360, 0LL);
    KeLeaveCriticalRegion();
LABEL_98:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v119);
    if ( v100 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v99);
    if ( v98[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v98);
    goto LABEL_95;
  }
  if ( *((_DWORD *)v5 + 8) > 0x10u )
  {
    v67 = WdLogNewEntry5_WdError(v66);
    *(_QWORD *)(v67 + 24) = 7012LL;
    WdLogEvent5_WdError(v67);
    StandardAllocation = -1073741811;
  }
  if ( !*((_DWORD *)v5 + 4) )
  {
    v68 = WdLogNewEntry5_WdError(v66);
    *(_QWORD *)(v68 + 24) = 7017LL;
    WdLogEvent5_WdError(v68);
    StandardAllocation = -1073741811;
  }
  memset(&v121, 0, sizeof(v121));
  v121.hDevice = *((_DWORD *)v5 + 3);
  v121.AllocationCount = *((_DWORD *)v5 + 8);
  v121.CommandLength = *((_DWORD *)v5 + 4);
  v121.pNewCommandBuffer = (void *)*((_QWORD *)v5 + 3);
  v69 = (struct _D3DDDI_ALLOCATIONLIST *)((char *)v5 + 36);
  v121.pNewAllocationList = (D3DDDI_ALLOCATIONLIST *)((char *)v5 + 36);
  *(_DWORD *)&v121.Flags |= 0x20u;
  IsDxgmms2 = DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v62 + 2) + 16LL) + 16LL));
  v92 = v70;
  v122[0] = 0LL;
  v123 = 0;
  v72 = 0LL;
  v95 = 0LL;
  if ( !IsDxgmms2 )
  {
LABEL_114:
    if ( (StandardAllocation & 0x80000000) == 0 )
    {
      StandardAllocation = DXGCONTEXT::Render(v62, &v121, (struct COREDEVICEACCESS *)v119, &v93, v72);
      v94 = StandardAllocation;
      v62 = v93;
    }
    if ( IsDxgmms2 )
      DxgkUnreferenceAllocationList(v92, v72);
    *((_QWORD *)v62 + 46) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v62 + 360, 0LL);
    KeLeaveCriticalRegion();
    PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>(v122);
    goto LABEL_98;
  }
  Elements = (struct DXGALLOCATION **)PagedPoolZeroedArray<DXGALLOCATION *,32>::AllocateElements(v122, v70);
  v72 = Elements;
  v95 = Elements;
  if ( Elements )
  {
    StandardAllocation = DxgkReferenceAllocationList(&v92, v69, Elements);
    goto LABEL_114;
  }
  v78 = WdLogNewEntry5_WdWarning(v75, v74, v76, v77);
  *(_QWORD *)(v78 + 24) = 7046LL;
  WdLogEvent5_WdWarning(v78);
  PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>(v122);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v119);
  if ( v100 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v99);
  if ( v98[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v98);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v106);
  return 3221225495LL;
}
