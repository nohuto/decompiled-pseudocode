/*
 * XREFs of ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1C0084EB4
 * Callers:
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C006DABC (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 * Callees:
 *     ?AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x1C0001AB8 (-AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z @ 0x1C0003040 (-NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0003150 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     Template_pqqqqqqqqppp @ 0x1C001CDB8 (Template_pqqqqqqqqppp.c)
 *     ?DdiCreateContext@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_CREATECONTEXT@@@Z @ 0x1C0068C88 (-DdiCreateContext@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_CREATECONTEXT@@@Z.c)
 *     ?EnsurePriviledgedDmaPool@DXGCONTEXT@@QEAAJII@Z @ 0x1C00854C4 (-EnsurePriviledgedDmaPool@DXGCONTEXT@@QEAAJII@Z.c)
 */

__int64 __fastcall DXGCONTEXT::Initialize(DXGCONTEXT *this, _QWORD *a2, int a3)
{
  unsigned __int64 v3; // rbp
  int v7; // eax
  _QWORD *v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // r8
  __int64 v11; // r9
  int Context; // esi
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  __m128i v17; // xmm2
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // r10
  __int64 v21; // r8
  __int64 v22; // r10
  char v23; // al
  int v24; // edx
  __int64 v25; // rcx
  int v26; // r8d
  __int64 v27; // rax
  __int64 v28; // rcx
  SIZE_T *v29; // rsi
  ULONG64 v30; // rcx
  __int64 v31; // rax
  unsigned __int64 v32; // rax
  SIZE_T *v33; // r15
  NTSTATUS v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // r12
  __int64 v40; // rax
  __int64 v41; // rcx
  NTSTATUS v42; // eax
  __int64 v43; // r15
  __int64 result; // rax
  NTSTATUS VirtualMemory; // eax
  _QWORD *v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int128 v50; // xmm0
  __m128i v51; // xmm2
  __m128i v52; // xmm2
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  _QWORD *v59; // rax
  NTSTATUS v60; // eax
  __int64 v61; // rax
  __int64 v62; // rcx
  _QWORD *v63; // rax
  __int64 v64; // [rsp+C0h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_QWORD *)((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) = this;
  DXGADAPTER::NotifyContextCreation(
    *(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
    this,
    1,
    *((_DWORD *)this + 80));
  v7 = DXGPROCESS::AllocHandleSafe(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL), (__int64)this, 7u);
  *((_DWORD *)this + 6) = v7;
  if ( !v7 )
    goto LABEL_63;
  Context = 0;
  memset((void *)(v3 + 48), 0, 0x48uLL);
  *(_QWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = this;
  *(_DWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = *((_DWORD *)this + 80);
  *(_DWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3C) = *((_DWORD *)this + 81);
  *(_QWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = a2;
  *(_DWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = a3;
  v14 = *((_QWORD *)this + 2);
  if ( *(_DWORD *)(v14 + 280) == 2 )
    *(_DWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) |= 2u;
  *(_DWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) ^= (*(_DWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                     + 0x40) ^ (4
                                                                                              * *((unsigned __int8 *)this
                                                                                                + 350))) & 4;
  v15 = *(_QWORD *)(*(_QWORD *)(v14 + 16) + 16LL);
  if ( (*(_DWORD *)(v15 + 1384) & 1) != 0 )
  {
    if ( (*((_DWORD *)this + 83) & 8) != 0 )
      *(_QWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = 0LL;
    else
      Context = ADAPTER_RENDER::DdiCreateContext(
                  *(ADAPTER_RENDER **)(v14 + 16),
                  *(void **)(v14 + 360),
                  (struct _DXGKARG_CREATECONTEXT *)(v3 + 48));
    *((_DWORD *)this + 10) |= 1u;
    v16 = *(unsigned int *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60);
  }
  else
  {
    *(_QWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = *(_QWORD *)(v14 + 360);
    v50 = *(_OWORD *)(v14 + 368);
    *(_QWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = *(_QWORD *)(v14 + 384);
    *(_DWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x54) = v50;
    *(_QWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = *(_QWORD *)(v14 + 384);
    *(_DWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = HIDWORD(*(_QWORD *)(v14 + 368));
    v51 = *(__m128i *)(v14 + 368);
    *(_QWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = *(_QWORD *)(v14 + 384);
    v51.m128i_i64[0] = _mm_srli_si128(v51, 8).m128i_u64[0];
    v16 = HIDWORD(v51.m128i_i64[0]);
    *(_DWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = v51.m128i_i32[1];
    *(_OWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = *(_OWORD *)(v14 + 368);
    *(_QWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = *(_QWORD *)(v14 + 384);
    *(_DWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x64) = *(_DWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                     + 0x20);
    v52 = *(__m128i *)(v14 + 368);
    *(_QWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = *(_QWORD *)(v14 + 384);
    *(_DWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x5C) = _mm_cvtsi128_si32(_mm_srli_si128(v52, 8));
    *((_DWORD *)this + 10) &= ~1u;
  }
  if ( Context < 0 )
    return (unsigned int)Context;
  if ( *(_DWORD *)(*((_QWORD *)this + 2) + 280LL) == 2 && (_DWORD)v16 != 256 )
  {
    v48 = WdLogNewEntry5_WdWarning(v15, v16, v14, v13);
    *(_QWORD *)(v48 + 24) = 256LL;
    *(_QWORD *)(v48 + 32) = *(unsigned int *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60);
    WdLogEvent5_WdWarning(v48);
    *(_DWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = 256;
  }
  *((_QWORD *)this + 21) = *(_QWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
  *((_OWORD *)this + 11) = *(_OWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x54);
  v17 = *(__m128i *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x64);
  *((__m128i *)this + 12) = v17;
  v18 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v17, 8));
  if ( (v18 & 2) != 0 )
  {
    v19 = *((_QWORD *)this + 2);
    *(_BYTE *)(v19 + 2850) = 1;
    *(_BYTE *)(*(_QWORD *)(v19 + 40) + 264LL) = 1;
    v18 = *(unsigned int *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x6C);
  }
  if ( *((_BYTE *)this + 350) )
  {
    v20 = *((_QWORD *)this + 2);
    v21 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v20 + 16) + 16LL) + 1904LL)
                    + 48LL * *((unsigned int *)this + 82)
                    + 24);
    if ( v21 )
      LOBYTE(v21) = *(_BYTE *)(74LL * *((unsigned int *)this + 80) + v21 + 73);
    else
      v21 = 0LL;
    v15 = *(_QWORD *)(*(_QWORD *)(v20 + 16) + 16LL);
    v22 = *(_QWORD *)(*(_QWORD *)(v15 + 1904) + 48LL * *((unsigned int *)this + 82) + 24);
    if ( v22 )
    {
      v15 = 74LL * *((unsigned int *)this + 80);
      v23 = *(_BYTE *)(v15 + v22 + 72);
    }
    else
    {
      v23 = 0;
    }
    if ( (v18 & 4) != 0 || (_BYTE)v21 && !v23 )
    {
      if ( !(_BYTE)v21 )
      {
        v53 = WdLogNewEntry5_WdWarning(v15, 6LL * *((unsigned int *)this + 82), v21, v18);
        *(_QWORD *)(v53 + 24) = 763LL;
        WdLogEvent5_WdWarning(v53);
        return 3221225473LL;
      }
      *((_BYTE *)this + 351) = 1;
    }
    else
    {
      *((_BYTE *)this + 352) = 1;
    }
  }
  else if ( !*((_DWORD *)this + 44) )
  {
    v55 = WdLogNewEntry5_WdAssertion(v15);
    *(_QWORD *)(v55 + 24) = 774LL;
    WdLogEvent5_WdAssertion(v55);
  }
  if ( !*((_BYTE *)this + 350) )
  {
    if ( !*((_DWORD *)this + 47) )
    {
      v56 = WdLogNewEntry5_WdAssertion(v15);
      *(_QWORD *)(v56 + 24) = 775LL;
      WdLogEvent5_WdAssertion(v56);
    }
    if ( !*((_BYTE *)this + 350) && !*((_DWORD *)this + 48) )
    {
      v57 = WdLogNewEntry5_WdAssertion(v15);
      *(_QWORD *)(v57 + 24) = 776LL;
      WdLogEvent5_WdAssertion(v57);
    }
  }
  if ( bTracingEnabled )
  {
    *(_OWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = *((_OWORD *)this + 11);
    *(_OWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = *((_OWORD *)this + 12);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
      Template_pqqqqqqqqppp(
        HIDWORD(*(_QWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10)),
        &EventCreateContext,
        *(_QWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
        *((_QWORD *)this + 2),
        *((_DWORD *)this + 80),
        *((_DWORD *)this + 81),
        *(_QWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
        HIDWORD(*(_QWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10)),
        *(_QWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18),
        HIDWORD(*(_QWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18)),
        *(_DWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20),
        0,
        this,
        *((unsigned int *)this + 6),
        0LL);
  }
  *(_QWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) = 0LL;
  *(_DWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = 0;
  *(_DWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                               + 40LL)
                                                                                   + 316LL);
  *(_DWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x84) = *((_DWORD *)this + 80);
  *(_DWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) = *((_DWORD *)this + 82);
  *(_DWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = 2 * (*((_DWORD *)this + 83) & 1);
  if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    if ( (v26 & 0xFFFFFFF0) == 0 )
    {
      *(_DWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = ((unsigned __int8)v24 ^ (unsigned __int8)(8 * v26)) & 0x20 ^ v24;
      goto LABEL_25;
    }
    v54 = WdLogNewEntry5_WdError(v25);
    *(_QWORD *)(v54 + 24) = 810LL;
    WdLogEvent5_WdError(v54);
    return 3221225473LL;
  }
LABEL_25:
  v27 = _guard_dispatch_icall_fptr();
  *((_QWORD *)this + 27) = v27;
  if ( !v27 )
    return 3221225495LL;
  if ( *((_BYTE *)this + 350) && *(_DWORD *)(*((_QWORD *)this + 2) + 280LL) != 2
    || (result = DXGCONTEXT::EnsurePriviledgedDmaPool(this, *((_DWORD *)this + 47), *((_DWORD *)this + 48)),
        (int)result >= 0) )
  {
    v29 = (SIZE_T *)((char *)this + 48);
    *((_QWORD *)this + 6) = *((unsigned int *)this + 44);
    *((_DWORD *)this + 16) = *((_DWORD *)this + 47);
    *((_DWORD *)this + 24) = *((_DWORD *)this + 48);
    if ( *((_BYTE *)this + 350) )
    {
      if ( *((_QWORD *)this + 35) )
      {
        v58 = WdLogNewEntry5_WdAssertion(v28);
        *(_QWORD *)(v58 + 24) = 854LL;
        WdLogEvent5_WdAssertion(v58);
      }
      v30 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 284LL);
      if ( (v30 & 0x10) != 0 && a2 && a3 == 16 )
      {
        VirtualMemory = ZwAllocateVirtualMemory(
                          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                          (PVOID *)this + 7,
                          0LL,
                          (PSIZE_T)this + 6,
                          0x3000u,
                          4u);
        v43 = VirtualMemory;
        if ( VirtualMemory < 0 )
          goto LABEL_81;
        v8 = (_QWORD *)a2[1];
        v10 = (_QWORD *)*a2;
        *(_QWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL;
        v30 = MmUserProbeAddress;
        v46 = v8;
        if ( (unsigned __int64)v8 >= MmUserProbeAddress )
          v46 = (_QWORD *)MmUserProbeAddress;
        *(_QWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = *v46;
        if ( !v8 || *(_QWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 8) < 8uLL || !v10 )
        {
          v47 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v8, v10, v11);
          *(_QWORD *)(v47 + 24) = this;
          *(_QWORD *)(v47 + 32) = -1073741811LL;
          WdLogEvent5_WdWarning(v47);
          return 3221225485LL;
        }
        if ( (unsigned __int64)v10 >= MmUserProbeAddress )
          v10 = (_QWORD *)MmUserProbeAddress;
        *v10 = *((_QWORD *)this + 7);
        if ( (unsigned __int64)v8 >= MmUserProbeAddress )
          v8 = (_QWORD *)MmUserProbeAddress;
        *v8 = *v29;
      }
    }
    else
    {
      v60 = ZwAllocateVirtualMemory(
              (HANDLE)0xFFFFFFFFFFFFFFFFLL,
              (PVOID *)this + 7,
              0LL,
              (PSIZE_T)this + 6,
              0x3000u,
              4u);
      v43 = v60;
      if ( v60 < 0 )
        goto LABEL_81;
    }
    v31 = *((unsigned int *)this + 16);
    if ( !(_DWORD)v31 )
      goto LABEL_36;
    v32 = 8 * v31;
    if ( v32 > 0xFFFFFFFF )
    {
      v61 = WdLogNewEntry5_WdWarning(v30, v8, v10, v11);
      *(_QWORD *)(v61 + 24) = this;
      v62 = *((unsigned int *)this + 16);
      goto LABEL_86;
    }
    v33 = (SIZE_T *)((char *)this + 72);
    *((_QWORD *)this + 9) = (unsigned int)v32;
    v34 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)this + 10, 0LL, (PSIZE_T)this + 9, 0x3000u, 4u);
    v39 = v34;
    if ( v34 < 0 )
    {
      v63 = (_QWORD *)WdLogNewEntry5_WdWarning(v36, v35, v37, v38);
      v63[3] = this;
      v63[4] = *v33;
      v63[5] = v39;
      WdLogEvent5_WdWarning(v63);
      return (unsigned int)v39;
    }
    *((_QWORD *)this + 11) = MmSecureVirtualMemory(*((PVOID *)this + 10), *v33, 4u);
    if ( *((_QWORD *)this + 11) )
    {
LABEL_36:
      v40 = *((unsigned int *)this + 24);
      if ( !(_DWORD)v40 )
        return 0LL;
      v41 = 24 * v40;
      if ( (unsigned __int64)(24 * v40) <= 0xFFFFFFFF )
      {
        v29 = (SIZE_T *)((char *)this + 104);
        *((_QWORD *)this + 13) = (unsigned int)v41;
        v42 = ZwAllocateVirtualMemory(
                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                (PVOID *)this + 14,
                0LL,
                (PSIZE_T)this + 13,
                0x3000u,
                4u);
        v43 = v42;
        if ( v42 >= 0 )
        {
          *((_QWORD *)this + 15) = MmSecureVirtualMemory(*((PVOID *)this + 14), *v29, 4u);
          if ( *((_QWORD *)this + 15) )
            return 0LL;
          goto LABEL_63;
        }
LABEL_81:
        v59 = (_QWORD *)WdLogNewEntry5_WdWarning(v30, v8, v10, v11);
        v59[3] = this;
        v59[4] = *v29;
        v59[5] = v43;
        WdLogEvent5_WdWarning(v59);
        return (unsigned int)v43;
      }
      v61 = WdLogNewEntry5_WdWarning(v41, v8, v10, v11);
      *(_QWORD *)(v61 + 24) = this;
      v62 = *((unsigned int *)this + 24);
LABEL_86:
      *(_QWORD *)(v61 + 32) = v62;
      WdLogEvent5_WdWarning(v61);
      return 3221225621LL;
    }
LABEL_63:
    v49 = WdLogNewEntry5_WdWarning(v9, v8, v10, v11);
    *(_QWORD *)(v49 + 24) = this;
    *(_QWORD *)(v49 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v49);
    return 3221225495LL;
  }
  return result;
}
