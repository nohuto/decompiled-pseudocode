/*
 * XREFs of ?DxgkTrimProcessCommitmentAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0173560
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x1C000173C (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000179C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkTrimProcessCommitmentAdapterCallback(struct DXGADAPTER *a1, _QWORD *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 **v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 *v15; // rcx
  __int64 v16; // rcx
  __int64 v18; // [rsp+40h] [rbp-39h] BYREF
  __int64 *v19; // [rsp+48h] [rbp-31h]
  __int64 v20; // [rsp+50h] [rbp-29h]
  _BYTE v21[24]; // [rsp+58h] [rbp-21h] BYREF
  _BYTE v22[80]; // [rsp+70h] [rbp-9h] BYREF
  __int64 v23; // [rsp+E8h] [rbp+6Fh] BYREF

  if ( a2[3] < a2[2] )
  {
    DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v21, a1, 1);
    if ( *((_DWORD *)a1 + 44) == 1 )
    {
      v4 = *a2;
      v18 = 0LL;
      v19 = 0LL;
      v4 += 320LL;
      v20 = 0LL;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v4, 0LL);
      *(_QWORD *)(v4 + 8) = KeGetCurrentThread();
      v5 = *a2 + 336LL;
      v6 = *(__int64 ***)(*a2 + 344LL);
      if ( *v6 != (__int64 *)v5 )
        __fastfail(3u);
      v19 = *(__int64 **)(*a2 + 344LL);
      v18 = v5;
      *v6 = &v18;
      *(_QWORD *)(v5 + 8) = &v18;
      v7 = *a2 + 320LL;
      *(_QWORD *)(v7 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v7, 0LL);
      KeLeaveCriticalRegion();
      if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD, __int64 *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 267) + 400LL)
                                                                                         + 8LL)
                                                                             + 1112LL))(
             *(_QWORD *)(*((_QWORD *)a1 + 267) + 408LL),
             *a2,
             &v18,
             *((unsigned int *)a2 + 2)) == -1071775484 )
      {
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v22, a1, 0LL);
        if ( (a2[1] & 2) != 0 || (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v22) >= 0 )
        {
          v23 = 0LL;
          (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, _QWORD, _QWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 267) + 400LL) + 8LL)
                                                                                       + 1104LL))(
            *(_QWORD *)(*((_QWORD *)a1 + 267) + 408LL),
            *a2,
            &v18,
            *((unsigned int *)a2 + 2),
            a2[2] - a2[3],
            &v23);
          a2[3] += v23;
        }
        else
        {
          v12 = WdLogNewEntry5_WdWarning(v9, v8, v10, v11);
          *(_QWORD *)(v12 + 24) = a1;
          WdLogEvent5_WdWarning(v12);
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v22);
      }
      v13 = *a2 + 320LL;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v13, 0LL);
      *(_QWORD *)(v13 + 8) = KeGetCurrentThread();
      v14 = v18;
      v15 = v19;
      if ( *(__int64 **)(v18 + 8) != &v18 || (__int64 *)*v19 != &v18 )
        __fastfail(3u);
      *v19 = v18;
      *(_QWORD *)(v14 + 8) = v15;
      v16 = *a2 + 320LL;
      *(_QWORD *)(v16 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v16, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( v21[16] )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v21);
  }
  return 0LL;
}
