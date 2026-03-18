/*
 * XREFs of ?RfxVgpuResetCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C001DA60
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C00019F0 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00058F8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0005964 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RfxVgpuResetCallback(struct DXGADAPTER *a1, _DWORD *a2)
{
  __int64 v3; // rbx
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
  struct DXGADAPTER *v17; // [rsp+20h] [rbp-60h] BYREF
  char v18; // [rsp+28h] [rbp-58h]
  _BYTE v19[56]; // [rsp+30h] [rbp-50h] BYREF
  int v20[4]; // [rsp+68h] [rbp-18h] BYREF

  v17 = a1;
  LODWORD(v3) = 0;
  v18 = 0;
  v5 = 0LL;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&v17);
  if ( *((_DWORD *)a1 + 40) == 1 )
  {
    v6 = *(_QWORD *)(*((_QWORD *)a1 + 22) + 64LL);
    if ( v6
      && *(_DWORD *)(v6 + 16) == 1953656900
      && (unsigned int)(*(_DWORD *)(v6 + 20) - 2) <= 1
      && *(_BYTE *)(v6 + 1438) )
    {
      if ( v18 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v17);
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v19, a1, 0LL);
      v5 = a2;
      v7 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v19);
      v3 = v7;
      if ( v7 < 0
        || (v13 = *((_QWORD *)a1 + 248),
            v14 = *(_QWORD *)(v13 + 384),
            v20[0] = 6,
            v15 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)(*(_QWORD *)(v13 + 376) + 8LL) + 64LL))(
                    v14,
                    v20),
            v3 = v15,
            v15 < 0) )
      {
        v12 = WdLogNewEntry5_WdWarning(v9, v8, v10, v11);
        *(_QWORD *)(v12 + 24) = a1;
        *(_QWORD *)(v12 + 32) = v3;
        WdLogEvent5_WdWarning(v12);
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v19);
    }
    else
    {
      if ( !v18 )
        return (unsigned int)v3;
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v17);
    }
    if ( v5 )
      *v5 = v3;
  }
  else if ( v18 )
  {
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v17);
  }
  return (unsigned int)v3;
}
