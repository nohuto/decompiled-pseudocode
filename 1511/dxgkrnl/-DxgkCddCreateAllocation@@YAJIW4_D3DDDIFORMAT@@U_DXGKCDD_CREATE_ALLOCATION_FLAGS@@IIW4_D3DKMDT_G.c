/*
 * XREFs of ?DxgkCddCreateAllocation@@YAJIW4_D3DDDIFORMAT@@U_DXGKCDD_CREATE_ALLOCATION_FLAGS@@IIW4_D3DKMDT_GDISURFACETYPE@@P6APEAXPEBXI@ZPEAX5IPEAI6PEAPEAX6@Z @ 0x1C00B0BD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00037BC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000388C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C0003BC0 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x1C0003DC0 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003E1C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00040BC (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00041F4 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C000AEAC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000AED8 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00753B0 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
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
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
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
  char v54; // [rsp+30h] [rbp-D0h]
  _QWORD *v55; // [rsp+38h] [rbp-C8h]
  _DWORD *v56; // [rsp+40h] [rbp-C0h]
  __int64 v57; // [rsp+48h] [rbp-B8h]
  _BYTE v58[8]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v59; // [rsp+58h] [rbp-A8h]
  _BYTE v60[16]; // [rsp+60h] [rbp-A0h] BYREF
  PERESOURCE *v61; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v62[24]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v63[24]; // [rsp+90h] [rbp-70h] BYREF
  struct DXGDEVICE *v64; // [rsp+A8h] [rbp-58h]
  char v65; // [rsp+B0h] [rbp-50h]
  _QWORD v66[50]; // [rsp+C0h] [rbp-40h] BYREF
  _DWORD *v67; // [rsp+250h] [rbp+150h] BYREF
  __int64 v68; // [rsp+258h] [rbp+158h]
  _DWORD v69[3]; // [rsp+260h] [rbp+160h] BYREF
  __int64 v70; // [rsp+26Ch] [rbp+16Ch]
  int v71; // [rsp+274h] [rbp+174h]

  v14 = a3;
  v59 = a7;
  v57 = a8;
  v56 = a11;
  v67 = a12;
  v55 = a13;
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
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v60, v53);
    DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
      (DXGADAPTERSTOPRESETLOCKSHARED *)&v53,
      *(struct DXGADAPTER **)(*((_QWORD *)v21 + 2) + 16LL),
      1);
    COREACCESS::COREACCESS((COREACCESS *)v62, *(struct DXGADAPTER *const *)(*((_QWORD *)v21 + 2) + 16LL));
    COREACCESS::COREACCESS((COREACCESS *)v63, *(struct DXGADAPTER *const *)(*((_QWORD *)v21 + 2) + 16LL));
    v64 = v21;
    v65 = 0;
    v22 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)&v61);
    v27 = v22;
    if ( v22 < 0 )
    {
      v42 = (_QWORD *)WdLogNewEntry5_WdEvent(v24, v23, v25, v26);
      v42[3] = v27;
      v42[4] = v21;
      v42[5] = v19;
      WdLogEvent5_WdEvent(v42);
LABEL_66:
      v35 = v27;
LABEL_21:
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)&v61);
      if ( v54 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v53);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v60);
      goto LABEL_24;
    }
    memset(v66, 0, 392);
    LODWORD(v66[40]) = a10;
    v28 = *((_QWORD *)v21 + 2);
    v66[39] = a9;
    v29 = *(_QWORD **)(v28 + 16);
    v30 = *((_DWORD *)v29 + 343);
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
        LODWORD(v27) = DXGDEVICE::CreateStandardAllocation(v21, (struct _D3DKM_CREATESTANDARDALLOCATION *)v66, &v61);
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
      LODWORD(v27) = DXGDEVICE::CreateStandardAllocation(v21, (struct _D3DKM_CREATESTANDARDALLOCATION *)v66, &v61);
      if ( (int)v27 >= 0 )
      {
        v43 = HIDWORD(v68);
        if ( !HIDWORD(v68) )
        {
          v44 = WdLogNewEntry5_WdAssertion(v29);
          *(_QWORD *)(v44 + 24) = 1028LL;
          WdLogEvent5_WdAssertion(v44);
          v43 = HIDWORD(v68);
        }
        *a14 = v43;
LABEL_15:
        if ( (int)v27 >= 0 )
        {
          if ( v66 == (_QWORD *)-52LL )
          {
            v49 = WdLogNewEntry5_WdAssertion(v29);
            *(_QWORD *)(v49 + 24) = 1044LL;
            WdLogEvent5_WdAssertion(v49);
          }
          if ( !LODWORD(v66[1]) )
          {
            v50 = WdLogNewEntry5_WdAssertion(v29);
            *(_QWORD *)(v50 + 24) = 1045LL;
            WdLogEvent5_WdAssertion(v50);
          }
          v35 = 0;
          *v56 = HIDWORD(v66[6]);
          goto LABEL_21;
        }
      }
LABEL_65:
      v51 = (_QWORD *)WdLogNewEntry5_WdWarning(v29, v23, v25, v26);
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
        v66[5] = v57;
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
    LODWORD(v27) = DXGDEVICE::CreateStandardAllocation(v21, (struct _D3DKM_CREATESTANDARDALLOCATION *)v66, &v61);
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
        v48 = WdLogNewEntry5_WdAssertion(v29);
        *(_QWORD *)(v48 + 24) = 983LL;
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
        v47 = WdLogNewEntry5_WdAssertion(v29);
        *(_QWORD *)(v47 + 24) = 988LL;
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
    v29 = v55;
    *v55 = v66[41];
    v45 = v71;
    if ( !v71 )
    {
      v46 = WdLogNewEntry5_WdAssertion(v29);
      *(_QWORD *)(v46 + 24) = 976LL;
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
