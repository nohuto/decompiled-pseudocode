/*
 * XREFs of ?RfxVgpuResetCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0022C30
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x1C000173C (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000179C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RfxVgpuResetCallback(struct DXGADAPTER *a1, _DWORD *a2)
{
  __int64 v4; // rbx
  _DWORD *v5; // rsi
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  int v15; // eax
  _BYTE v17[16]; // [rsp+20h] [rbp-49h] BYREF
  char v18; // [rsp+30h] [rbp-39h]
  _BYTE v19[80]; // [rsp+40h] [rbp-29h] BYREF
  int v20[4]; // [rsp+90h] [rbp+27h] BYREF

  LODWORD(v4) = 0;
  v5 = 0LL;
  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v17, a1, 1);
  if ( *((_DWORD *)a1 + 44) == 1 )
  {
    v6 = *(_QWORD *)(*((_QWORD *)a1 + 24) + 64LL);
    if ( v6
      && *(_DWORD *)(v6 + 16) == 1953656900
      && (unsigned int)(*(_DWORD *)(v6 + 20) - 2) <= 1
      && *(_BYTE *)(v6 + 2558) )
    {
      if ( v18 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v17);
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v19, a1, 0LL);
      v5 = a2;
      v7 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v19);
      v4 = v7;
      if ( v7 < 0
        || (v13 = *((_QWORD *)a1 + 267),
            v14 = *(_QWORD *)(v13 + 384),
            v20[0] = 6,
            v15 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)(*(_QWORD *)(v13 + 376) + 8LL) + 64LL))(
                    v14,
                    v20),
            v4 = v15,
            v15 < 0) )
      {
        v12 = WdLogNewEntry5_WdWarning(v9, v8, v10, v11);
        *(_QWORD *)(v12 + 24) = a1;
        *(_QWORD *)(v12 + 32) = v4;
        WdLogEvent5_WdWarning(v12);
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v19);
    }
    else
    {
      if ( !v18 )
        return (unsigned int)v4;
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v17);
    }
    if ( v5 )
      *v5 = v4;
  }
  else if ( v18 )
  {
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v17);
  }
  return (unsigned int)v4;
}
