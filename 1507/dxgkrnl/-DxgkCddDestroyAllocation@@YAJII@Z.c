/*
 * XREFs of ?DxgkCddDestroyAllocation@@YAJII@Z @ 0x1C005E330
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00010D0 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0001CEC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001E0C (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C0001E30 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0002714 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C0002810 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002AA8 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002B00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00058F8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0005964 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0081B5C (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     DxgkDestroyClientAllocation @ 0x1C012E524 (DxgkDestroyClientAllocation.c)
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
  __int64 v10; // rax
  unsigned int v11; // ecx
  struct _KTHREAD *v12; // r8
  unsigned int v13; // edx
  __int64 v14; // rdi
  unsigned int v15; // ecx
  __int64 v16; // rcx
  __int64 v17; // rcx
  unsigned int v18; // edi
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v22; // rbx
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // [rsp+30h] [rbp-59h] BYREF
  char v27; // [rsp+38h] [rbp-51h]
  _BYTE v28[16]; // [rsp+40h] [rbp-49h] BYREF
  char v29[8]; // [rsp+50h] [rbp-39h] BYREF
  char v30[24]; // [rsp+58h] [rbp-31h] BYREF
  char v31[24]; // [rsp+70h] [rbp-19h] BYREF
  struct DXGDEVICE *v32; // [rsp+88h] [rbp-1h]
  char v33; // [rsp+90h] [rbp+7h]
  _BYTE v34[64]; // [rsp+A0h] [rbp+17h] BYREF
  struct DXGDEVICE *v35; // [rsp+100h] [rbp+77h] BYREF
  __int64 v36; // [rsp+108h] [rbp+7Fh] BYREF

  v3 = a2;
  v4 = (unsigned int)a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 3018);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v7 = Current;
  if ( !Current )
  {
    v18 = -1073741811;
    v22 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v22 + 24) = -1073741811LL;
    *(_QWORD *)(v22 + 32) = PsGetCurrentProcess();
    WdLogEvent5_WdError(v22);
    goto LABEL_24;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v28, v4, Current, &v35);
  v9 = v35;
  if ( v35 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)&v36, v35);
    v10 = *((_QWORD *)v9 + 2);
    v27 = 0;
    v26 = *(_QWORD *)(v10 + 16);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&v26);
    COREACCESS::COREACCESS((COREACCESS *)v30, *(struct DXGADAPTER *const *)(*((_QWORD *)v9 + 2) + 16LL));
    COREACCESS::COREACCESS((COREACCESS *)v31, *(struct DXGADAPTER *const *)(*((_QWORD *)v9 + 2) + 16LL));
    v32 = v9;
    v33 = 0;
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v29);
    if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v9 + 2) + 16LL) + 160LL) != 4 )
    {
      DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
        (DXGHANDLETABLELOCKEXCLUSIVE *)v34,
        (struct DXGPROCESS *)v7);
      v11 = ((unsigned int)v3 >> 6) & 0xFFFFFF;
      if ( v11 < *((_DWORD *)v7 + 58)
        && (v12 = v7[27], v13 = *((_DWORD *)v12 + 4 * v11 + 2), (unsigned int)v3 >> 30 == ((v13 >> 4) & 3))
        && (v13 & 0x1000) == 0
        && (v13 & 0xF) != 0
        && (*((_BYTE *)v12 + 16 * v11 + 8) & 0xF) == 5 )
      {
        v14 = *((_QWORD *)v12 + 2 * v11);
        if ( v14 )
        {
          if ( v11 < *((_DWORD *)v7 + 58) )
          {
            v15 = *((_DWORD *)v12 + 4 * v11 + 2);
            if ( (unsigned int)v3 >> 30 == ((v15 >> 4) & 3) && (v15 & 0x1000) == 0 && (v15 & 0xF) != 0 )
              *((_DWORD *)v12 + 4 * (((unsigned __int64)(unsigned int)v3 >> 6) & 0xFFFFFF) + 2) |= 0x1000u;
          }
        }
      }
      else
      {
        v14 = 0LL;
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v34);
      if ( !v14 )
      {
        v24 = (_QWORD *)WdLogNewEntry5_WdError(v16);
        v25 = *(_QWORD *)(*((_QWORD *)v9 + 2) + 16LL);
        v24[4] = v35;
        v24[3] = v25;
        v24[5] = v3;
        WdLogEvent5_WdError(v24);
        v18 = -1073741811;
        goto LABEL_20;
      }
      v17 = *((unsigned int *)v35 + 88);
      if ( (_DWORD)v17 == 4 )
        DxgkDestroyClientAllocation(v17, v35, 0LL, 0LL, *(_QWORD *)(v14 + 40));
      else
        DXGDEVICE::DestroyAllocationInternal(
          v35,
          0,
          0LL,
          *(struct DXGRESOURCE **)(v14 + 40),
          (struct COREDEVICEACCESS *)v29,
          DXGDEVICE::DestroyFlagsDefault);
    }
    v18 = 0;
LABEL_20:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v29);
    if ( v27 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v26);
    ExReleaseResourceLite(*(PERESOURCE *)(v36 + 80));
    KeLeaveCriticalRegion();
    goto LABEL_23;
  }
  v23 = (_QWORD *)WdLogNewEntry5_WdError(v8);
  v18 = -1073741811;
  v23[3] = -1073741811LL;
  v23[4] = v4;
  v23[5] = v7;
  WdLogEvent5_WdError(v23);
LABEL_23:
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v28);
LABEL_24:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v19, &EventProfilerExit, v20, 3018);
  return v18;
}
