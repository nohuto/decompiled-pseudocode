/*
 * XREFs of ?MapGpuVirtualAddressToAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C01323B4
 * Callers:
 *     ?DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C005A740 (-DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIP.c)
 *     ?DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C005AA00 (-DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010C80 (memset.c)
 */

__int64 __fastcall MapGpuVirtualAddressToAllocation(
        struct ADAPTER_RENDER *a1,
        struct DXGDEVICE *a2,
        struct DXGALLOCATION *a3)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  int v7; // r14d
  int v8; // ebp
  __int64 v9; // rdi
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  int v16; // edx
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rax
  int v21; // [rsp+20h] [rbp-B8h]
  _QWORD v22[14]; // [rsp+40h] [rbp-98h] BYREF

  if ( *(_BYTE *)(*((_QWORD *)a2 + 36) + 352LL) )
  {
    memset(v22, 0, 0x68uLL);
    v6 = *((_QWORD *)a1 + 2);
    v22[7] |= 1uLL;
    if ( *(_BYTE *)(v6 + 1915) )
    {
      v7 = 0;
      v8 = 0;
      v9 = *(_QWORD *)(*((_QWORD *)a3 + 5) + 24LL);
      while ( v9 )
      {
        LOBYTE(v21) = 0;
        v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD *, int, int))(*(_QWORD *)(*((_QWORD *)a1 + 50)
                                                                                                + 8LL)
                                                                                    + 776LL))(
                *((_QWORD *)a1 + 51),
                0LL,
                *(_QWORD *)(v9 + 24),
                v22,
                v21,
                (*(_DWORD *)(v9 + 72) >> 9) & 0x3F);
        v15 = v10;
        if ( v10 < 0 )
          goto LABEL_13;
        v22[1] = v22[11];
        v5 = (*(_DWORD *)(v9 + 72) >> 9) & 0x3F;
        v16 = 1 << ((*(_DWORD *)(v9 + 72) >> 9) & 0x3F);
        if ( (v16 & v7) != 0 )
        {
          v17 = WdLogNewEntry5_WdError(v5);
          *(_QWORD *)(v17 + 24) = 1593LL;
          goto LABEL_10;
        }
        v9 = *(_QWORD *)(v9 + 64);
        v7 |= v16;
        ++v8;
      }
      if ( v8 == *(_DWORD *)(*((_QWORD *)a1 + 2) + 232LL) )
        return 0LL;
      v17 = WdLogNewEntry5_WdError(v5);
      *(_QWORD *)(v17 + 24) = 1602LL;
LABEL_10:
      WdLogEvent5_WdError(v17);
      LODWORD(v15) = -1073741811;
      return (unsigned int)v15;
    }
    v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD *, _BYTE, _DWORD))(*(_QWORD *)(*((_QWORD *)a1 + 50)
                                                                                                 + 8LL)
                                                                                     + 776LL))(
            *((_QWORD *)a1 + 51),
            0LL,
            *((_QWORD *)a3 + 3),
            v22,
            0,
            *(_DWORD *)(v6 + 1996));
    v15 = v18;
    if ( v18 < 0 )
    {
LABEL_13:
      v19 = WdLogNewEntry5_WdWarning(v12, v11, v13, v14);
      *(_QWORD *)(v19 + 24) = v15;
      WdLogEvent5_WdWarning(v19);
      return (unsigned int)v15;
    }
  }
  return 0LL;
}
