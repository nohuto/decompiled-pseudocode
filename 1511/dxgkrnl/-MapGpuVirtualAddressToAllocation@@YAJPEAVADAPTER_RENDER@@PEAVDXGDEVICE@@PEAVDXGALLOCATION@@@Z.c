/*
 * XREFs of ?MapGpuVirtualAddressToAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C005BC6C
 * Callers:
 *     ?DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C005BA30 (-DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z.c)
 *     ?DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C01361B0 (-DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIP.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0012400 (memset.c)
 */

__int64 __fastcall MapGpuVirtualAddressToAllocation(
        struct ADAPTER_RENDER *a1,
        struct DXGDEVICE *a2,
        struct DXGALLOCATION *a3)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  int v14; // r14d
  int v15; // ebp
  __int64 v16; // rdi
  int v17; // eax
  int v18; // edx
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // [rsp+20h] [rbp-B8h]
  _QWORD v22[14]; // [rsp+40h] [rbp-98h] BYREF

  if ( !*(_BYTE *)(*((_QWORD *)a2 + 36) + 352LL) )
    return 0LL;
  memset(v22, 0, 0x68uLL);
  v6 = *((_QWORD *)a1 + 2);
  v22[7] |= 1uLL;
  if ( *(_BYTE *)(v6 + 1923) )
  {
    v14 = 0;
    v15 = 0;
    v16 = *(_QWORD *)(*((_QWORD *)a3 + 5) + 24LL);
    while ( v16 )
    {
      LOBYTE(v21) = 0;
      v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD *, int, int))(*(_QWORD *)(*((_QWORD *)a1 + 53)
                                                                                              + 8LL)
                                                                                  + 776LL))(
              *((_QWORD *)a1 + 54),
              0LL,
              *(_QWORD *)(v16 + 24),
              v22,
              v21,
              (*(_DWORD *)(v16 + 72) >> 12) & 0x3F);
      v12 = v17;
      if ( v17 < 0 )
        goto LABEL_14;
      v22[1] = v22[11];
      v5 = (*(_DWORD *)(v16 + 72) >> 12) & 0x3F;
      v18 = 1 << ((*(_DWORD *)(v16 + 72) >> 12) & 0x3F);
      if ( (v18 & v14) != 0 )
      {
        v19 = WdLogNewEntry5_WdError(v5);
        *(_QWORD *)(v19 + 24) = 1600LL;
        goto LABEL_13;
      }
      v16 = *(_QWORD *)(v16 + 64);
      v14 |= v18;
      ++v15;
    }
    if ( v15 == *(_DWORD *)(*((_QWORD *)a1 + 2) + 232LL) )
      return 0LL;
    v19 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v19 + 24) = 1609LL;
LABEL_13:
    WdLogEvent5_WdError(v19);
    LODWORD(v12) = -1073741811;
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD *, _BYTE, _DWORD))(*(_QWORD *)(*((_QWORD *)a1 + 53)
                                                                                                + 8LL)
                                                                                    + 776LL))(
           *((_QWORD *)a1 + 54),
           0LL,
           *((_QWORD *)a3 + 3),
           v22,
           0,
           *(_DWORD *)(v6 + 2012));
    v12 = v7;
    if ( v7 >= 0 )
      return 0LL;
LABEL_14:
    v20 = WdLogNewEntry5_WdWarning(v9, v8, v10, v11);
    *(_QWORD *)(v20 + 24) = v12;
    WdLogEvent5_WdWarning(v20);
  }
  return (unsigned int)v12;
}
