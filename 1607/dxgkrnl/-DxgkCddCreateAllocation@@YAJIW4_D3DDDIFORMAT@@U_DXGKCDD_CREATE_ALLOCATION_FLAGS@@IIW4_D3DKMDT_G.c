/*
 * XREFs of ?DxgkCddCreateAllocation@@YAJIW4_D3DDDIFORMAT@@U_DXGKCDD_CREATE_ALLOCATION_FLAGS@@IIW4_D3DKMDT_GDISURFACETYPE@@P6APEAXPEBXI@ZPEAX5IPEAI6PEAPEAX6@Z @ 0x1C0072BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C0001480 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00014CC (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00016F4 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000179C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0007F80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00080A0 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0008304 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00084E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C009E2E4 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
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
  __int64 CurrentProcess; // rax
  __int64 v18; // rdx
  struct _KTHREAD **ProcessDxgProcess; // rax
  __int64 v20; // rcx
  struct _KTHREAD **v21; // r15
  __int64 v22; // rcx
  struct DXGDEVICE *v23; // r14
  char *v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  _QWORD *v33; // rcx
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // ebx
  unsigned int v38; // ebx
  unsigned int v39; // edi
  __int64 v40; // rcx
  __int64 v41; // r8
  int v43; // eax
  __int64 v44; // rbx
  _QWORD *v45; // rax
  _QWORD *v46; // rax
  int v47; // eax
  __int64 v48; // rax
  int v49; // eax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  _QWORD *v55; // rax
  struct DXGDEVICE *v57; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v58; // [rsp+30h] [rbp-D0h]
  __int64 v59; // [rsp+38h] [rbp-C8h]
  __int64 v60; // [rsp+40h] [rbp-C0h]
  _QWORD *v61; // [rsp+48h] [rbp-B8h]
  _DWORD *v62; // [rsp+50h] [rbp-B0h]
  _DWORD *v63; // [rsp+58h] [rbp-A8h]
  _BYTE v64[8]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v65[8]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v66; // [rsp+70h] [rbp-90h]
  char v67; // [rsp+78h] [rbp-88h]
  _BYTE v68[16]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v69; // [rsp+90h] [rbp-70h]
  __int64 v70; // [rsp+98h] [rbp-68h]
  char v71; // [rsp+A0h] [rbp-60h]
  __int64 v72; // [rsp+B0h] [rbp-50h]
  __int64 v73; // [rsp+B8h] [rbp-48h]
  char v74; // [rsp+C0h] [rbp-40h]
  struct DXGDEVICE *v75; // [rsp+C8h] [rbp-38h]
  char v76; // [rsp+D0h] [rbp-30h]
  _BYTE v77[16]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v78[52]; // [rsp+F0h] [rbp-10h] BYREF
  _DWORD v79[2]; // [rsp+290h] [rbp+190h] BYREF
  __int64 v80; // [rsp+298h] [rbp+198h]
  _DWORD v81[3]; // [rsp+2A0h] [rbp+1A0h] BYREF
  __int64 v82; // [rsp+2ACh] [rbp+1ACh]
  int v83; // [rsp+2B4h] [rbp+1B4h]
  _DWORD v84[2]; // [rsp+2B8h] [rbp+1B8h] BYREF
  __int64 v85; // [rsp+2C0h] [rbp+1C0h]

  v14 = a3;
  v59 = a7;
  v60 = a8;
  v58 = a9;
  v63 = a11;
  v62 = a12;
  v61 = a13;
  v16 = (unsigned int)a1;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 3017);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = (struct _KTHREAD **)PsGetProcessDxgProcess(CurrentProcess, v18);
  v21 = ProcessDxgProcess;
  if ( !ProcessDxgProcess )
  {
    v39 = -1073741811;
    v44 = WdLogNewEntry5_WdError(v20);
    *(_QWORD *)(v44 + 24) = -1073741811LL;
    *(_QWORD *)(v44 + 32) = PsGetCurrentProcess();
    WdLogEvent5_WdError(v44);
    goto LABEL_29;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v64, v16, ProcessDxgProcess, &v57);
  v23 = v57;
  if ( v57 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v77, v57);
    v24 = (char *)v23 + 16;
    v25 = *((_QWORD *)v23 + 2);
    v67 = 0;
    v66 = *(_QWORD *)(v25 + 16);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v65);
    v26 = *(_QWORD *)(*((_QWORD *)v23 + 2) + 16LL);
    v70 = v26;
    v71 = 0;
    if ( v26 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v26 + 24));
      v23 = v57;
      v69 = -1LL;
    }
    v27 = *(_QWORD *)(*(_QWORD *)v24 + 16LL);
    v73 = v27;
    v74 = 0;
    if ( v27 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v27 + 24));
      v23 = v57;
      v72 = -1LL;
    }
    v75 = v23;
    v76 = 0;
    v28 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v68);
    v29 = v28;
    if ( v28 < 0 )
    {
      v46 = (_QWORD *)WdLogNewEntry5_WdEvent();
      v46[3] = v29;
      v46[4] = v23;
      v46[5] = v21;
      WdLogEvent5_WdEvent(v46);
LABEL_70:
      v39 = v29;
LABEL_25:
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v68);
      if ( v67 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v65);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v77);
      goto LABEL_28;
    }
    memset(v78, 0, 0x198uLL);
    v78[39] = v58;
    LODWORD(v78[40]) = a10;
    v33 = *(_QWORD **)(*(_QWORD *)v24 + 16LL);
    v34 = *((_DWORD *)v33 + 377);
    if ( (v34 & 4) == 0 && ((v34 & 0x10000000) == 0 || ((a6 - 6) & 0xFFFFFFFD) != 0) )
    {
      if ( a6 == 1 )
      {
LABEL_57:
        v38 = a4;
        LODWORD(v78[2]) = 2;
        v84[0] = a4;
        v78[3] = v84;
        v84[1] = a5;
        v85 = a2;
        LODWORD(v29) = DXGDEVICE::CreateStandardAllocation(
                         v23,
                         (struct _D3DKM_CREATESTANDARDALLOCATION *)v78,
                         (struct COREDEVICEACCESS *)v68);
        goto LABEL_19;
      }
      if ( a6 != 2 )
      {
        if ( a6 == 3 || a6 == 6 )
          goto LABEL_57;
LABEL_18:
        v38 = a4;
        goto LABEL_19;
      }
      v38 = a4;
      LODWORD(v78[0]) |= 2u;
      LODWORD(v78[2]) = 2;
      v78[3] = v79;
      v79[0] = a4;
      v79[1] = a5;
      v80 = a2;
      LODWORD(v29) = DXGDEVICE::CreateStandardAllocation(
                       v23,
                       (struct _D3DKM_CREATESTANDARDALLOCATION *)v78,
                       (struct COREDEVICEACCESS *)v68);
      if ( (int)v29 >= 0 )
      {
        v47 = HIDWORD(v80);
        if ( !HIDWORD(v80) )
        {
          v48 = WdLogNewEntry5_WdAssertion(v33);
          *(_QWORD *)(v48 + 24) = 1025LL;
          WdLogEvent5_WdAssertion(v48);
          v47 = HIDWORD(v80);
        }
        *a14 = v47;
LABEL_19:
        if ( (int)v29 >= 0 )
        {
          if ( v78 == (_QWORD *)-52LL )
          {
            v53 = WdLogNewEntry5_WdAssertion(v33);
            *(_QWORD *)(v53 + 24) = 1041LL;
            WdLogEvent5_WdAssertion(v53);
          }
          if ( !LODWORD(v78[1]) )
          {
            v54 = WdLogNewEntry5_WdAssertion(v33);
            *(_QWORD *)(v54 + 24) = 1042LL;
            WdLogEvent5_WdAssertion(v54);
          }
          v39 = 0;
          *v63 = HIDWORD(v78[6]);
          goto LABEL_25;
        }
      }
LABEL_69:
      v55 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, v30, v31, v32);
      v55[3] = (int)v29;
      v55[5] = v38;
      v55[4] = v23;
      v55[6] = a5;
      WdLogEvent5_WdWarning(v55);
      goto LABEL_70;
    }
    v83 = 0;
    v81[0] = a4;
    v78[3] = v81;
    v81[1] = a5;
    v35 = (LOBYTE(v78[0]) ^ (unsigned __int8)(8 * v14)) & 0x18 ^ LODWORD(v78[0]);
    v81[2] = a2;
    v82 = (unsigned int)a6;
    LODWORD(v78[2]) = 4;
    LODWORD(v78[0]) = v35;
    switch ( a6 )
    {
      case 1:
        goto LABEL_11;
      case 2:
        v36 = v35 | 2;
        goto LABEL_12;
      case 5:
        LODWORD(v78[0]) = v35 | 4;
        v78[4] = v59;
        v78[5] = v60;
        break;
      case 6:
LABEL_11:
        v36 = v35 | 1;
LABEL_12:
        LODWORD(v78[0]) = v36;
        break;
      default:
        if ( a6 > 6 && a6 <= 8 )
        {
          v36 = v35 | 0x21;
          goto LABEL_12;
        }
        break;
    }
    LODWORD(v29) = DXGDEVICE::CreateStandardAllocation(
                     v23,
                     (struct _D3DKM_CREATESTANDARDALLOCATION *)v78,
                     (struct COREDEVICEACCESS *)v68);
    if ( (int)v29 < 0 )
    {
      v38 = a4;
      goto LABEL_69;
    }
    if ( a6 == 1 )
    {
LABEL_15:
      v37 = HIDWORD(v78[1]);
      if ( !HIDWORD(v78[1]) )
      {
        v52 = WdLogNewEntry5_WdAssertion(v33);
        *(_QWORD *)(v52 + 24) = 980LL;
        WdLogEvent5_WdAssertion(v52);
      }
      *v62 = v37;
      goto LABEL_18;
    }
    if ( a6 == 2 || a6 == 5 )
    {
      v43 = v83;
      if ( !v83 )
      {
        v51 = WdLogNewEntry5_WdAssertion(v33);
        *(_QWORD *)(v51 + 24) = 985LL;
        WdLogEvent5_WdAssertion(v51);
        v43 = v83;
      }
      *a14 = v43;
      goto LABEL_18;
    }
    if ( a6 != 6 )
    {
      if ( a6 == 7 )
        goto LABEL_15;
      if ( a6 != 8 )
        goto LABEL_18;
    }
    v33 = v61;
    *v61 = v78[41];
    v49 = v83;
    if ( !v83 )
    {
      v50 = WdLogNewEntry5_WdAssertion(v33);
      *(_QWORD *)(v50 + 24) = 973LL;
      WdLogEvent5_WdAssertion(v50);
      v49 = v83;
    }
    *a14 = v49;
    goto LABEL_15;
  }
  v45 = (_QWORD *)WdLogNewEntry5_WdError(v22);
  v39 = -1073741811;
  v45[3] = -1073741811LL;
  v45[4] = v16;
  v45[5] = v21;
  WdLogEvent5_WdError(v45);
LABEL_28:
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v64);
LABEL_29:
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v40, &EventProfilerExit, v41, 3017);
  return v39;
}
