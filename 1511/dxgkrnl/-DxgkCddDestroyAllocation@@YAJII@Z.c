/*
 * XREFs of ?DxgkCddDestroyAllocation@@YAJII@Z @ 0x1C00B0EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003574 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00037BC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0003914 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C0003BC0 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x1C0003DC0 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003E1C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00040BC (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00041F4 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0004214 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C000AEAC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000AED8 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0075D88 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkDestroyClientAllocation @ 0x1C0133CB4 (DxgkDestroyClientAllocation.c)
 */

__int64 __fastcall DxgkCddDestroyAllocation(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 v4; // rsi
  struct _KTHREAD **Current; // rax
  __int64 v6; // rcx
  struct _KTHREAD **v7; // rbx
  __int64 v8; // rcx
  struct DXGDEVICE *v9; // r14
  unsigned int v10; // ecx
  struct _KTHREAD *v11; // r8
  unsigned int v12; // edx
  __int64 v13; // rdi
  unsigned int v14; // ecx
  __int64 v15; // rcx
  __int64 v16; // rcx
  unsigned int v17; // edi
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v21; // rbx
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rdx
  _BYTE v25[16]; // [rsp+30h] [rbp-59h] BYREF
  _BYTE v26[16]; // [rsp+40h] [rbp-49h] BYREF
  DXGADAPTER *v27; // [rsp+50h] [rbp-39h] BYREF
  char v28[24]; // [rsp+58h] [rbp-31h] BYREF
  char v29[24]; // [rsp+70h] [rbp-19h] BYREF
  struct DXGDEVICE *v30; // [rsp+88h] [rbp-1h]
  char v31; // [rsp+90h] [rbp+7h]
  _BYTE v32[64]; // [rsp+A0h] [rbp+17h] BYREF
  struct DXGDEVICE *v33; // [rsp+100h] [rbp+77h] BYREF
  char v34; // [rsp+108h] [rbp+7Fh] BYREF

  v3 = a2;
  v4 = (unsigned int)a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 3018);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v7 = Current;
  if ( !Current )
  {
    v17 = -1073741811;
    v21 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v21 + 24) = -1073741811LL;
    *(_QWORD *)(v21 + 32) = PsGetCurrentProcess();
    WdLogEvent5_WdError(v21);
    goto LABEL_24;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v34, v4, Current, &v33);
  v9 = v33;
  if ( v33 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v26, v33);
    DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
      (DXGADAPTERSTOPRESETLOCKSHARED *)v25,
      *(struct DXGADAPTER **)(*((_QWORD *)v9 + 2) + 16LL),
      1);
    COREACCESS::COREACCESS((COREACCESS *)v28, *(struct DXGADAPTER *const *)(*((_QWORD *)v9 + 2) + 16LL));
    COREACCESS::COREACCESS((COREACCESS *)v29, *(struct DXGADAPTER *const *)(*((_QWORD *)v9 + 2) + 16LL));
    v30 = v9;
    v31 = 0;
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)&v27);
    if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v9 + 2) + 16LL) + 160LL) != 4 )
    {
      DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
        (DXGHANDLETABLELOCKEXCLUSIVE *)v32,
        (struct DXGPROCESS *)v7);
      v10 = ((unsigned int)v3 >> 6) & 0xFFFFFF;
      if ( v10 < *((_DWORD *)v7 + 58)
        && (v11 = v7[27], v12 = *((_DWORD *)v11 + 4 * v10 + 2), (unsigned int)v3 >> 30 == ((v12 >> 4) & 3))
        && (v12 & 0x1000) == 0
        && (v12 & 0xF) != 0
        && (*((_BYTE *)v11 + 16 * v10 + 8) & 0xF) == 5 )
      {
        v13 = *((_QWORD *)v11 + 2 * v10);
        if ( v13 )
        {
          if ( v10 < *((_DWORD *)v7 + 58) )
          {
            v14 = *((_DWORD *)v11 + 4 * v10 + 2);
            if ( (unsigned int)v3 >> 30 == ((v14 >> 4) & 3) && (v14 & 0x1000) == 0 && (v14 & 0xF) != 0 )
              *((_DWORD *)v11 + 4 * (((unsigned __int64)(unsigned int)v3 >> 6) & 0xFFFFFF) + 2) |= 0x1000u;
          }
        }
      }
      else
      {
        v13 = 0LL;
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v32);
      if ( !v13 )
      {
        v23 = (_QWORD *)WdLogNewEntry5_WdError(v15);
        v24 = *(_QWORD *)(*((_QWORD *)v9 + 2) + 16LL);
        v23[4] = v33;
        v23[3] = v24;
        v23[5] = v3;
        WdLogEvent5_WdError(v23);
        v17 = -1073741811;
        goto LABEL_20;
      }
      v16 = *((unsigned int *)v33 + 88);
      if ( (_DWORD)v16 == 4 )
        DxgkDestroyClientAllocation(v16, v33, 0LL, 0LL, *(_QWORD *)(v13 + 40));
      else
        DXGDEVICE::DestroyAllocationInternal(
          v33,
          0,
          0LL,
          *(struct DXGRESOURCE **)(v13 + 40),
          &v27,
          DXGDEVICE::DestroyFlagsDefault);
    }
    v17 = 0;
LABEL_20:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)&v27);
    if ( v25[8] )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v25);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v26);
    goto LABEL_23;
  }
  v22 = (_QWORD *)WdLogNewEntry5_WdError(v8);
  v17 = -1073741811;
  v22[3] = -1073741811LL;
  v22[4] = v4;
  v22[5] = v7;
  WdLogEvent5_WdError(v22);
LABEL_23:
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v34);
LABEL_24:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v18, &EventProfilerExit, v19, 3018);
  return v17;
}
