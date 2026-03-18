/*
 * XREFs of ?DxgkCddDestroyAllocation@@YAJII@Z @ 0x1C0072F00
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C0001480 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00014CC (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x1C000173C (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000179C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0007F80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00080A0 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00084E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0008570 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0009910 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0009964 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C009E864 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     DxgkDestroyClientAllocation @ 0x1C0153078 (DxgkDestroyClientAllocation.c)
 */

__int64 __fastcall DxgkCddDestroyAllocation(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 v4; // r14
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  struct _KTHREAD **ProcessDxgProcess; // rax
  __int64 v8; // rcx
  struct _KTHREAD **v9; // rsi
  __int64 v10; // rcx
  struct DXGDEVICE *v11; // rbx
  char *v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned int v15; // ecx
  struct _KTHREAD *v16; // r8
  unsigned int v17; // edx
  __int64 v18; // rbx
  unsigned int v19; // ecx
  __int64 v20; // rcx
  __int64 v21; // rcx
  unsigned int v22; // edi
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v26; // rbx
  _QWORD *v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // rdx
  _BYTE v30[16]; // [rsp+30h] [rbp-79h] BYREF
  _BYTE v31[32]; // [rsp+40h] [rbp-69h] BYREF
  _BYTE v32[16]; // [rsp+60h] [rbp-49h] BYREF
  __int64 v33; // [rsp+70h] [rbp-39h]
  __int64 v34; // [rsp+78h] [rbp-31h]
  char v35; // [rsp+80h] [rbp-29h]
  __int64 v36; // [rsp+90h] [rbp-19h]
  __int64 v37; // [rsp+98h] [rbp-11h]
  char v38; // [rsp+A0h] [rbp-9h]
  struct DXGDEVICE *v39; // [rsp+A8h] [rbp-1h]
  char v40; // [rsp+B0h] [rbp+7h]
  _BYTE v41[64]; // [rsp+C0h] [rbp+17h] BYREF
  struct DXGDEVICE *v42; // [rsp+120h] [rbp+77h] BYREF
  char v43; // [rsp+128h] [rbp+7Fh] BYREF

  v3 = a2;
  v4 = (unsigned int)a1;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 3018);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = (struct _KTHREAD **)PsGetProcessDxgProcess(CurrentProcess, v6);
  v9 = ProcessDxgProcess;
  if ( !ProcessDxgProcess )
  {
    v22 = -1073741811;
    v26 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v26 + 24) = -1073741811LL;
    *(_QWORD *)(v26 + 32) = PsGetCurrentProcess();
    WdLogEvent5_WdError(v26);
    goto LABEL_28;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v43, v4, ProcessDxgProcess, &v42);
  v11 = v42;
  if ( v42 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v30, v42);
    v12 = (char *)v11 + 16;
    DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
      (DXGADAPTERSTOPRESETLOCKSHARED *)v31,
      *(struct DXGADAPTER **)(*((_QWORD *)v11 + 2) + 16LL),
      1);
    v13 = *(_QWORD *)(*((_QWORD *)v11 + 2) + 16LL);
    v34 = v13;
    v35 = 0;
    if ( v13 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v13 + 24));
      v11 = v42;
      v33 = -1LL;
    }
    v14 = *(_QWORD *)(*(_QWORD *)v12 + 16LL);
    v37 = v14;
    v38 = 0;
    if ( v14 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v14 + 24));
      v11 = v42;
      v36 = -1LL;
    }
    v39 = v11;
    v40 = 0;
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v32);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v12 + 16LL) + 176LL) != 4 )
    {
      DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
        (DXGHANDLETABLELOCKEXCLUSIVE *)v41,
        (struct DXGPROCESS *)v9);
      v15 = ((unsigned int)v3 >> 6) & 0xFFFFFF;
      if ( v15 < *((_DWORD *)v9 + 56)
        && (v16 = v9[26], v17 = *((_DWORD *)v16 + 4 * v15 + 2), (unsigned int)v3 >> 30 == ((v17 >> 4) & 3))
        && (v17 & 0x1000) == 0
        && (v17 & 0xF) != 0
        && (*((_BYTE *)v16 + 16 * v15 + 8) & 0xF) == 5 )
      {
        v18 = *((_QWORD *)v16 + 2 * v15);
        if ( v18 )
        {
          if ( v15 < *((_DWORD *)v9 + 56) )
          {
            v19 = *((_DWORD *)v16 + 4 * v15 + 2);
            if ( (unsigned int)v3 >> 30 == ((v19 >> 4) & 3) && (v19 & 0x1000) == 0 && (v19 & 0xF) != 0 )
              *((_DWORD *)v16 + 4 * (((unsigned __int64)(unsigned int)v3 >> 6) & 0xFFFFFF) + 2) |= 0x1000u;
          }
        }
      }
      else
      {
        v18 = 0LL;
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v41);
      if ( !v18 )
      {
        v28 = (_QWORD *)WdLogNewEntry5_WdError(v20);
        v29 = *(_QWORD *)(*(_QWORD *)v12 + 16LL);
        v28[4] = v42;
        v28[3] = v29;
        v28[5] = v3;
        WdLogEvent5_WdError(v28);
        v22 = -1073741811;
        goto LABEL_24;
      }
      v21 = *((unsigned int *)v42 + 94);
      if ( (_DWORD)v21 == 4 )
        DxgkDestroyClientAllocation(v21, v42, 0LL, 0LL, *(_QWORD *)(v18 + 40));
      else
        DXGDEVICE::DestroyAllocationInternal(
          v42,
          0,
          0LL,
          *(struct DXGRESOURCE **)(v18 + 40),
          (struct COREDEVICEACCESS *)v32,
          DXGDEVICE::DestroyFlagsDefault);
    }
    v22 = 0;
LABEL_24:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v32);
    if ( v31[16] )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v31);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v30);
    goto LABEL_27;
  }
  v27 = (_QWORD *)WdLogNewEntry5_WdError(v10);
  v22 = -1073741811;
  v27[3] = -1073741811LL;
  v27[4] = v4;
  v27[5] = v9;
  WdLogEvent5_WdError(v27);
LABEL_27:
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v43);
LABEL_28:
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v23, &EventProfilerExit, v24, 3018);
  return v22;
}
