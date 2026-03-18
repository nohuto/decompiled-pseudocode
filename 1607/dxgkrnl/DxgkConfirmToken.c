/*
 * XREFs of DxgkConfirmToken @ 0x1C0156F60
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DxgkConfirmToken(
        struct DXGADAPTER *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  unsigned int v7; // ebp
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  _BYTE v20[80]; // [rsp+40h] [rbp-58h] BYREF

  v7 = a3;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2095);
  if ( !a1 )
  {
    v10 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v10 + 24) = 1749LL;
    WdLogEvent5_WdAssertion(v10);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v20, a1, 0LL);
  v11 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v20);
  v16 = v11;
  if ( v11 >= 0 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 267) + 376LL)
                                                                                          + 8LL)
                                                                              + 296LL))(
      *(_QWORD *)(*((_QWORD *)a1 + 267) + 384LL),
      a2,
      v7,
      a4,
      a5,
      a6);
  }
  else
  {
    v17 = WdLogNewEntry5_WdWarning(v13, v12, v14, v15);
    *(_QWORD *)(v17 + 24) = a1;
    *(_QWORD *)(v17 + 32) = v16;
    WdLogEvent5_WdWarning(v17);
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v20);
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v18, &EventProfilerExit, v19, 2095);
}
