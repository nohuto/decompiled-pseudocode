/*
 * XREFs of DxgkTrimProcessCommitment @ 0x1C0174760
 * Callers:
 *     <none>
 * Callees:
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C000C49C (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memmove @ 0x1C0012480 (memmove.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00A3D30 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x1C00CE1D0 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C00CE1EC (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C014478C (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkTrimProcessCommitment(ULONG64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r9
  unsigned int *v4; // rax
  unsigned int v5; // eax
  size_t v6; // r8
  __int64 v7; // rax
  const void *v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // esi
  __int64 v15; // rax
  void *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // r14d
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  struct DXGPROCESS *Process; // rbx
  __int64 v26; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v28; // r8
  _QWORD *v29; // rdx
  _QWORD v30[4]; // [rsp+28h] [rbp-B0h] BYREF
  void *v31[5]; // [rsp+48h] [rbp-90h] BYREF
  _BYTE v32[80]; // [rsp+70h] [rbp-68h] BYREF

  memset(v31, 0, sizeof(v31));
  v4 = (unsigned int *)a1;
  if ( a1 >= MmUserProbeAddress )
    v4 = (unsigned int *)MmUserProbeAddress;
  v5 = *v4;
  v6 = v5;
  if ( v5 >= 0x28 )
  {
    if ( v5 > 0x28 )
      v6 = 40LL;
    v9 = (const void *)a1;
    if ( a1 >= MmUserProbeAddress )
      v9 = (const void *)MmUserProbeAddress;
    memmove(v31, v9, v6);
    v14 = (int)v31[2];
    if ( ((__int64)v31[2] & 0xFFFFFFFC) != 0 )
    {
      v15 = WdLogNewEntry5_WdWarning(v11, v10, v12, v13);
      *(_QWORD *)(v15 + 24) = 603LL;
      WdLogEvent5_WdWarning(v15);
      return 3221225485LL;
    }
    else
    {
      v16 = v31[1];
      DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v32, v31[1], 1024);
      v21 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v32, 1);
      if ( v21 >= 0 )
      {
        Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v32);
        memset(v30, 0, sizeof(v30));
        v30[0] = Process;
        LODWORD(v30[1]) = v14;
        v30[2] = v31[3];
        Global = DXGGLOBAL::GetGlobal(v26);
        DXGGLOBAL::IterateAdaptersWithCallback(
          (__int64)Global,
          (__int64 (__fastcall *)(_QWORD *, __int64))DxgkTrimProcessCommitmentAdapterCallback,
          (__int64)v30,
          2);
        v29 = (_QWORD *)(a1 + 32);
        if ( a1 + 32 >= MmUserProbeAddress )
          v29 = (_QWORD *)MmUserProbeAddress;
        *v29 = v30[3];
        DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v32, (__int64)v29, v28);
        return 0LL;
      }
      else
      {
        v22 = WdLogNewEntry5_WdWarning(v18, v17, v19, v20);
        *(_QWORD *)(v22 + 24) = v16;
        WdLogEvent5_WdWarning(v22);
        DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v32, v23, v24);
        return (unsigned int)v21;
      }
    }
  }
  else
  {
    v7 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v2, v5, v3);
    *(_QWORD *)(v7 + 24) = 581LL;
    WdLogEvent5_WdWarning(v7);
    return 3221225485LL;
  }
}
