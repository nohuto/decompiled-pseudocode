/*
 * XREFs of ?DxgkCddCreateAllocation@@YAJIW4_D3DDDIFORMAT@@U_DXGKCDD_CREATE_ALLOCATION_FLAGS@@IIW4_D3DKMDT_GDISURFACETYPE@@P6APEAXPEBXI@ZPEAX5IPEAI6PEAPEAX6@Z @ 0x1C005E010
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00010D0 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0001CEC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001D84 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C0001E30 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0002714 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C0002810 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00058F8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0005964 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00811D0 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 */

__int64 __fastcall DxgkCddCreateAllocation(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        int a10,
        _DWORD *a11,
        _DWORD *a12,
        _QWORD *a13,
        _DWORD *a14)
{
  char v14; // bl
  __int64 v16; // rsi
  struct _KTHREAD **Current; // rax
  __int64 v18; // rcx
  struct _KTHREAD **v19; // r15
  __int64 v20; // rcx
  struct DXGDEVICE *v21; // r14
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rsi
  __int64 v28; // rax
  _QWORD *v29; // rcx
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // ebx
  unsigned int v34; // ebx
  unsigned int v35; // edi
  __int64 v36; // rcx
  __int64 v37; // r8
  int v39; // eax
  __int64 v40; // rbx
  _QWORD *v41; // rax
  _QWORD *v42; // rax
  int v43; // eax
  __int64 v44; // rax
  int v45; // eax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  _QWORD *v51; // rax
  struct DXGDEVICE *v53; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v54; // [rsp+30h] [rbp-D0h] BYREF
  char v55; // [rsp+38h] [rbp-C8h]
  _QWORD *v56; // [rsp+40h] [rbp-C0h]
  _DWORD *v57; // [rsp+48h] [rbp-B8h]
  _BYTE v58[8]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v59; // [rsp+58h] [rbp-A8h]
  __int64 v60; // [rsp+60h] [rbp-A0h]
  _BYTE v61[8]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v62[24]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v63[24]; // [rsp+90h] [rbp-70h] BYREF
  struct DXGDEVICE *v64; // [rsp+A8h] [rbp-58h]
  char v65; // [rsp+B0h] [rbp-50h]
  _QWORD v66[48]; // [rsp+C0h] [rbp-40h] BYREF
  _DWORD *v67; // [rsp+240h] [rbp+140h] BYREF
  __int64 v68; // [rsp+248h] [rbp+148h]
  _DWORD v69[3]; // [rsp+250h] [rbp+150h] BYREF
  __int64 v70; // [rsp+25Ch] [rbp+15Ch]
  int v71; // [rsp+264h] [rbp+164h]

  v14 = a3;
  v59 = a7;
  v60 = a8;
  v57 = a11;
  v67 = a12;
  v56 = a13;
  v16 = (unsigned int)a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 3017);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v19 = Current;
  if ( !Current )
  {
    v35 = -1073741811;
    v40 = WdLogNewEntry5_WdError(v18);
    *(_QWORD *)(v40 + 24) = -1073741811LL;
    *(_QWORD *)(v40 + 32) = PsGetCurrentProcess();
    WdLogEvent5_WdError(v40);
    goto LABEL_25;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v58, v16, Current, &v53);
  v21 = v53;
  if ( v53 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)&v53, v53);
    v22 = *((_QWORD *)v21 + 2);
    v55 = 0;
    v54 = *(_QWORD *)(v22 + 16);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&v54);
    COREACCESS::COREACCESS((COREACCESS *)v62, *(struct DXGADAPTER *const *)(*((_QWORD *)v21 + 2) + 16LL));
    COREACCESS::COREACCESS((COREACCESS *)v63, *(struct DXGADAPTER *const *)(*((_QWORD *)v21 + 2) + 16LL));
    v64 = v21;
    v65 = 0;
    v23 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v61);
    v27 = v23;
    if ( v23 < 0 )
    {
      v42 = (_QWORD *)WdLogNewEntry5_WdEvent();
      v42[3] = v27;
      v42[4] = v21;
      v42[5] = v19;
      WdLogEvent5_WdEvent(v42);
LABEL_66:
      v35 = v27;
LABEL_21:
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v61);
      if ( v55 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v54);
      ExReleaseResourceLite(*((PERESOURCE *)v53 + 10));
      KeLeaveCriticalRegion();
      goto LABEL_24;
    }
    memset(v66, 0, 376);
    LODWORD(v66[40]) = a10;
    v28 = *((_QWORD *)v21 + 2);
    v66[39] = a9;
    v29 = *(_QWORD **)(v28 + 16);
    v30 = *((_DWORD *)v29 + 341);
    if ( (v30 & 4) == 0 && ((v30 & 0x10000000) == 0 || ((a6 - 6) & 0xFFFFFFFD) != 0) )
    {
      if ( a6 == 1 )
      {
LABEL_53:
        v34 = a4;
        LODWORD(v66[2]) = 2;
        v67 = (_DWORD *)__PAIR64__(a5, a4);
        v66[3] = &v67;
        v68 = a2;
        LODWORD(v27) = DXGDEVICE::CreateStandardAllocation(
                         v21,
                         (struct _D3DKM_CREATESTANDARDALLOCATION *)v66,
                         (struct COREDEVICEACCESS *)v61);
        goto LABEL_15;
      }
      if ( a6 != 2 )
      {
        if ( a6 == 3 || a6 == 6 )
          goto LABEL_53;
LABEL_14:
        v34 = a4;
        goto LABEL_15;
      }
      v34 = a4;
      LODWORD(v66[0]) |= 2u;
      v66[3] = &v67;
      v67 = (_DWORD *)__PAIR64__(a5, a4);
      v68 = a2;
      LODWORD(v66[2]) = 2;
      LODWORD(v27) = DXGDEVICE::CreateStandardAllocation(
                       v21,
                       (struct _D3DKM_CREATESTANDARDALLOCATION *)v66,
                       (struct COREDEVICEACCESS *)v61);
      if ( (int)v27 >= 0 )
      {
        v43 = HIDWORD(v68);
        if ( !HIDWORD(v68) )
        {
          v44 = WdLogNewEntry5_WdAssertion(v29, v24, v25, v26);
          *(_QWORD *)(v44 + 24) = 1022LL;
          WdLogEvent5_WdAssertion(v44);
          v43 = HIDWORD(v68);
        }
        *a14 = v43;
LABEL_15:
        if ( (int)v27 >= 0 )
        {
          if ( v66 == (_QWORD *)-52LL )
          {
            v49 = WdLogNewEntry5_WdAssertion(v29, v24, v25, v26);
            *(_QWORD *)(v49 + 24) = 1038LL;
            WdLogEvent5_WdAssertion(v49);
          }
          if ( !LODWORD(v66[1]) )
          {
            v50 = WdLogNewEntry5_WdAssertion(v29, v24, v25, v26);
            *(_QWORD *)(v50 + 24) = 1039LL;
            WdLogEvent5_WdAssertion(v50);
          }
          v35 = 0;
          *v57 = HIDWORD(v66[6]);
          goto LABEL_21;
        }
      }
LABEL_65:
      v51 = (_QWORD *)WdLogNewEntry5_WdWarning(v29, v24, v25, v26);
      v51[3] = (int)v27;
      v51[5] = v34;
      v51[4] = v21;
      v51[6] = a5;
      WdLogEvent5_WdWarning(v51);
      goto LABEL_66;
    }
    v71 = 0;
    v69[0] = a4;
    v66[3] = v69;
    v69[1] = a5;
    v31 = (LOBYTE(v66[0]) ^ (unsigned __int8)(8 * v14)) & 0x18 ^ LODWORD(v66[0]);
    v69[2] = a2;
    v70 = (unsigned int)a6;
    LODWORD(v66[2]) = 4;
    LODWORD(v66[0]) = v31;
    switch ( a6 )
    {
      case 1:
        goto LABEL_7;
      case 2:
        v32 = v31 | 2;
        goto LABEL_8;
      case 5:
        LODWORD(v66[0]) = v31 | 4;
        v66[4] = v59;
        v66[5] = v60;
        break;
      case 6:
LABEL_7:
        v32 = v31 | 1;
LABEL_8:
        LODWORD(v66[0]) = v32;
        break;
      default:
        if ( a6 > 6 && a6 <= 8 )
        {
          v32 = v31 | 0x21;
          goto LABEL_8;
        }
        break;
    }
    LODWORD(v27) = DXGDEVICE::CreateStandardAllocation(
                     v21,
                     (struct _D3DKM_CREATESTANDARDALLOCATION *)v66,
                     (struct COREDEVICEACCESS *)v61);
    if ( (int)v27 < 0 )
    {
      v34 = a4;
      goto LABEL_65;
    }
    if ( a6 == 1 )
    {
LABEL_11:
      v33 = HIDWORD(v66[1]);
      if ( !HIDWORD(v66[1]) )
      {
        v48 = WdLogNewEntry5_WdAssertion(v29, v24, v25, v26);
        *(_QWORD *)(v48 + 24) = 977LL;
        WdLogEvent5_WdAssertion(v48);
      }
      *v67 = v33;
      goto LABEL_14;
    }
    if ( a6 == 2 || a6 == 5 )
    {
      v39 = v71;
      if ( !v71 )
      {
        v47 = WdLogNewEntry5_WdAssertion(v29, v24, v25, v26);
        *(_QWORD *)(v47 + 24) = 982LL;
        WdLogEvent5_WdAssertion(v47);
        v39 = v71;
      }
      *a14 = v39;
      goto LABEL_14;
    }
    if ( a6 != 6 )
    {
      if ( a6 == 7 )
        goto LABEL_11;
      if ( a6 != 8 )
        goto LABEL_14;
    }
    v29 = v56;
    *v56 = v66[41];
    v45 = v71;
    if ( !v71 )
    {
      v46 = WdLogNewEntry5_WdAssertion(v29, v24, v25, v26);
      *(_QWORD *)(v46 + 24) = 970LL;
      WdLogEvent5_WdAssertion(v46);
      v45 = v71;
    }
    *a14 = v45;
    goto LABEL_11;
  }
  v41 = (_QWORD *)WdLogNewEntry5_WdError(v20);
  v35 = -1073741811;
  v41[3] = -1073741811LL;
  v41[4] = v16;
  v41[5] = v19;
  WdLogEvent5_WdError(v41);
LABEL_24:
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v58);
LABEL_25:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v36, &EventProfilerExit, v37, 3017);
  return v35;
}
