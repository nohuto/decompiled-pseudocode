/*
 * XREFs of ?ResizeUserModeBuffers@DXGCONTEXT@@QEAAJPEAVVIDMM_DMA_POOL@@_KII@Z @ 0x1C0072CDC
 * Callers:
 *     DxgkRender @ 0x1C00763F0 (DxgkRender.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
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
  unsigned int v11; // eax
  NTSTATUS v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbx
  unsigned __int64 v18; // rax
  NTSTATUS v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  _QWORD *v34; // rax
  _QWORD *v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rax
  _QWORD *v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
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
      v34 = (_QWORD *)WdLogNewEntry5_WdWarning(v7, a2, a3, a4);
      v34[3] = this;
      v34[4] = RegionSize;
      v34[5] = v9;
      WdLogEvent5_WdWarning(v34);
    }
  }
  if ( (int)v9 < 0 || !(_DWORD)v5 )
    goto LABEL_15;
  v11 = 8 * v5;
  if ( (unsigned __int64)(8 * v5) > 0xFFFFFFFF )
  {
    v11 = -1;
    LODWORD(v9) = -1073741675;
  }
  else
  {
    LODWORD(v9) = 0;
  }
  Size = v11;
  if ( (int)v9 < 0 )
  {
    v36 = WdLogNewEntry5_WdWarning(v7, a2, a3, a4);
    *(_QWORD *)(v36 + 24) = this;
    *(_QWORD *)(v36 + 32) = v5;
    v35 = (_QWORD *)v36;
    goto LABEL_38;
  }
  v12 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &Address, 0LL, &Size, 0x3000u, 4u);
  v9 = v12;
  if ( v12 < 0 )
  {
    v35 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
    v35[3] = this;
    v35[4] = Size;
    v35[5] = v9;
LABEL_38:
    WdLogEvent5_WdWarning(v35);
  }
  if ( (int)v9 < 0 )
    goto LABEL_44;
  SecureHandle = MmSecureVirtualMemory(Address, Size, 4u);
  if ( !SecureHandle )
  {
    LODWORD(v9) = -1073741801;
    v37 = WdLogNewEntry5_WdWarning(v7, a2, a3, a4);
    *(_QWORD *)(v37 + 24) = this;
    *(_QWORD *)(v37 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v37);
  }
LABEL_15:
  if ( (int)v9 < 0 )
    goto LABEL_44;
  if ( !a5 )
    goto LABEL_24;
  v17 = a5;
  v18 = 24LL * a5;
  if ( v18 > 0xFFFFFFFF )
  {
    LODWORD(v18) = -1;
    LODWORD(v9) = -1073741675;
  }
  else
  {
    LODWORD(v9) = 0;
  }
  v41 = (unsigned int)v18;
  if ( (int)v9 < 0 )
  {
    v38 = (_QWORD *)WdLogNewEntry5_WdWarning(v7, a2, a3, a4);
    v38[3] = this;
    v38[4] = v17;
    goto LABEL_43;
  }
  v19 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v43, 0LL, &v41, 0x3000u, 4u);
  v9 = v19;
  if ( v19 < 0 )
  {
    v38 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v22, v23);
    v38[3] = this;
    v38[4] = v41;
    v38[5] = v9;
LABEL_43:
    WdLogEvent5_WdWarning(v38);
  }
  if ( (int)v9 < 0 )
    goto LABEL_44;
  v8 = MmSecureVirtualMemory(v43, v41, 4u);
  v47 = v8;
  if ( !v8 )
  {
    LODWORD(v9) = -1073741801;
    v39 = WdLogNewEntry5_WdWarning(v25, v24, v26, v27);
    *(_QWORD *)(v39 + 24) = this;
    *(_QWORD *)(v39 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v39);
  }
LABEL_24:
  if ( (int)v9 >= 0 )
  {
    v28 = _guard_dispatch_icall_fptr();
    v9 = v28;
    if ( v28 < 0 )
    {
      v40 = WdLogNewEntry5_WdWarning(v30, v29, v31, v32);
      *(_QWORD *)(v40 + 24) = this;
      *(_QWORD *)(v40 + 32) = v9;
      WdLogEvent5_WdWarning(v40);
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
LABEL_44:
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
