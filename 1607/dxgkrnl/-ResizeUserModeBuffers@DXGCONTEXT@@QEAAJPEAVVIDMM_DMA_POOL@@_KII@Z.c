/*
 * XREFs of ?ResizeUserModeBuffers@DXGCONTEXT@@QEAAJPEAVVIDMM_DMA_POOL@@_KII@Z @ 0x1C0156A7C
 * Callers:
 *     DxgkRender @ 0x1C0175270 (DxgkRender.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGCONTEXT::ResizeUserModeBuffers(
        DXGCONTEXT *this,
        struct VIDMM_DMA_POOL *a2,
        ULONG_PTR a3,
        __int64 a4,
        unsigned int a5)
{
  __int64 v5; // rdi
  __int64 v7; // rcx
  HANDLE v8; // r13
  __int64 v9; // r14
  NTSTATUS v10; // eax
  _QWORD *v11; // rax
  unsigned int v12; // eax
  NTSTATUS v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rbx
  unsigned __int64 v22; // rax
  NTSTATUS v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  _QWORD *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  ULONG_PTR v41; // [rsp+38h] [rbp-60h] BYREF
  ULONG_PTR Size; // [rsp+40h] [rbp-58h] BYREF
  PVOID v43; // [rsp+48h] [rbp-50h] BYREF
  PVOID Address; // [rsp+50h] [rbp-48h] BYREF
  HANDLE SecureHandle; // [rsp+58h] [rbp-40h]
  PVOID BaseAddress; // [rsp+60h] [rbp-38h] BYREF
  HANDLE v47; // [rsp+68h] [rbp-30h]
  ULONG_PTR RegionSize; // [rsp+B0h] [rbp+18h] BYREF
  int v49; // [rsp+B8h] [rbp+20h]

  v49 = a4;
  RegionSize = a3;
  v5 = (unsigned int)a4;
  v7 = *((_QWORD *)this + 2);
  if ( !*(_DWORD *)(v7 + 72) )
    ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v7 + 80));
  BaseAddress = 0LL;
  Size = 0LL;
  Address = 0LL;
  SecureHandle = 0LL;
  v41 = 0LL;
  v43 = 0LL;
  v8 = 0LL;
  v47 = 0LL;
  LODWORD(v9) = 0;
  if ( RegionSize )
  {
    v10 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x3000u, 4u);
    v9 = v10;
    if ( v10 < 0 )
    {
      v11 = (_QWORD *)WdLogNewEntry5_WdWarning(v7, a2, a3, a4);
      v11[3] = this;
      v11[4] = RegionSize;
      v11[5] = v9;
      WdLogEvent5_WdWarning(v11);
    }
  }
  if ( (int)v9 < 0 || !(_DWORD)v5 )
    goto LABEL_19;
  v12 = 8 * v5;
  if ( (unsigned __int64)(8 * v5) > 0xFFFFFFFF )
  {
    v12 = -1;
    LODWORD(v9) = -1073741675;
  }
  else
  {
    LODWORD(v9) = 0;
  }
  Size = v12;
  if ( (int)v9 < 0 )
  {
    v19 = WdLogNewEntry5_WdWarning(v7, a2, a3, a4);
    *(_QWORD *)(v19 + 24) = this;
    *(_QWORD *)(v19 + 32) = v5;
    v18 = (_QWORD *)v19;
    goto LABEL_15;
  }
  v13 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &Address, 0LL, &Size, 0x3000u, 4u);
  v9 = v13;
  if ( v13 < 0 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v15, v14, v16, v17);
    v18[3] = this;
    v18[4] = Size;
    v18[5] = v9;
LABEL_15:
    WdLogEvent5_WdWarning(v18);
  }
  if ( (int)v9 < 0 )
    goto LABEL_43;
  SecureHandle = MmSecureVirtualMemory(Address, Size, 4u);
  if ( !SecureHandle )
  {
    LODWORD(v9) = -1073741801;
    v20 = WdLogNewEntry5_WdWarning(v7, a2, a3, a4);
    *(_QWORD *)(v20 + 24) = this;
    *(_QWORD *)(v20 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v20);
  }
LABEL_19:
  if ( (int)v9 < 0 )
    goto LABEL_43;
  if ( !a5 )
    goto LABEL_32;
  v21 = a5;
  v22 = 24LL * a5;
  if ( v22 > 0xFFFFFFFF )
  {
    LODWORD(v22) = -1;
    LODWORD(v9) = -1073741675;
  }
  else
  {
    LODWORD(v9) = 0;
  }
  v41 = (unsigned int)v22;
  if ( (int)v9 < 0 )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdWarning(v7, a2, a3, a4);
    v28[3] = this;
    v28[4] = v21;
    goto LABEL_28;
  }
  v23 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v43, 0LL, &v41, 0x3000u, 4u);
  v9 = v23;
  if ( v23 < 0 )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdWarning(v25, v24, v26, v27);
    v28[3] = this;
    v28[4] = v41;
    v28[5] = v9;
LABEL_28:
    WdLogEvent5_WdWarning(v28);
  }
  if ( (int)v9 < 0 )
    goto LABEL_43;
  v8 = MmSecureVirtualMemory(v43, v41, 4u);
  v47 = v8;
  if ( !v8 )
  {
    LODWORD(v9) = -1073741801;
    v33 = WdLogNewEntry5_WdWarning(v30, v29, v31, v32);
    *(_QWORD *)(v33 + 24) = this;
    *(_QWORD *)(v33 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v33);
  }
LABEL_32:
  if ( (int)v9 >= 0 )
  {
    v34 = _guard_dispatch_icall_fptr();
    v9 = v34;
    if ( v34 < 0 )
    {
      v39 = WdLogNewEntry5_WdWarning(v36, v35, v37, v38);
      *(_QWORD *)(v39 + 24) = this;
      *(_QWORD *)(v39 + 32) = v9;
      WdLogEvent5_WdWarning(v39);
    }
    if ( (int)v9 >= 0 )
    {
      if ( RegionSize )
      {
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)this + 7, (PSIZE_T)this + 6, 0x8000u);
        *((_QWORD *)this + 7) = BaseAddress;
        *((_QWORD *)this + 6) = RegionSize;
      }
      if ( v49 )
      {
        MmUnsecureVirtualMemory(*((HANDLE *)this + 11));
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)this + 10, (PSIZE_T)this + 9, 0x8000u);
        *((_QWORD *)this + 11) = SecureHandle;
        *((_QWORD *)this + 10) = Address;
        *((_DWORD *)this + 16) = v49;
        *((_QWORD *)this + 9) = Size;
      }
      if ( a5 )
      {
        MmUnsecureVirtualMemory(*((HANDLE *)this + 15));
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)this + 14, (PSIZE_T)this + 13, 0x8000u);
        *((_QWORD *)this + 15) = v8;
        *((_QWORD *)this + 14) = v43;
        *((_DWORD *)this + 24) = a5;
        *((_QWORD *)this + 13) = v41;
      }
      return (unsigned int)v9;
    }
  }
LABEL_43:
  if ( v8 )
    MmUnsecureVirtualMemory(v8);
  if ( v43 )
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v43, &v41, 0x8000u);
  if ( SecureHandle )
    MmUnsecureVirtualMemory(SecureHandle);
  if ( Address )
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &Address, &Size, 0x8000u);
  if ( BaseAddress )
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
  return (unsigned int)v9;
}
