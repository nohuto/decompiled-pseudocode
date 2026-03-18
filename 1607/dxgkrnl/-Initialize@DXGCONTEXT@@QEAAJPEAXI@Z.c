/*
 * XREFs of ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1C00B04D4
 * Callers:
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C00960C4 (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 * Callees:
 *     ?NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z @ 0x1C0008E04 (-NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000911C (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x1C00097B4 (-AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     Template_pqqqqqqqqppp @ 0x1C0021CD0 (Template_pqqqqqqqqppp.c)
 *     ?DdiCreateContext@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_CREATECONTEXT@@@Z @ 0x1C0091688 (-DdiCreateContext@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_CREATECONTEXT@@@Z.c)
 *     ?EnsurePriviledgedDmaPool@DXGCONTEXT@@QEAAJII@Z @ 0x1C00B0B3C (-EnsurePriviledgedDmaPool@DXGCONTEXT@@QEAAJII@Z.c)
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
  int v25; // edx
  __int64 v26; // rcx
  int v27; // r8d
  __int64 v28; // rax
  __int64 v29; // rcx
  SIZE_T *v30; // rsi
  ULONG64 v31; // rcx
  __int64 v32; // rax
  unsigned __int64 v33; // rax
  SIZE_T *v34; // r15
  NTSTATUS v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // r12
  __int64 v41; // rax
  __int64 v42; // rcx
  NTSTATUS v43; // eax
  __int64 v44; // r15
  __int64 result; // rax
  NTSTATUS VirtualMemory; // eax
  _QWORD *v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int128 v51; // xmm0
  __m128i v52; // xmm2
  __m128i v53; // xmm2
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  _QWORD *v60; // rax
  NTSTATUS v61; // eax
  __int64 v62; // rax
  __int64 v63; // rcx
  _QWORD *v64; // rax
  __int64 v65; // [rsp+C0h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_QWORD *)((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) = this;
  DXGADAPTER::NotifyContextCreation(
    *(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
    this,
    1,
    *((_DWORD *)this + 80));
  v7 = DXGPROCESS::AllocHandleSafe(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL), (__int64)this, 7u);
  *((_DWORD *)this + 6) = v7;
  if ( !v7 )
    goto LABEL_68;
  Context = 0;
  memset((void *)(v3 + 48), 0, 0x48uLL);
  *(_QWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = this;
  *(_DWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = *((_DWORD *)this + 80);
  *(_DWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3C) = *((_DWORD *)this + 81);
  *(_QWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = a2;
  *(_DWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = a3;
  v14 = *((_QWORD *)this + 2);
  if ( *(_DWORD *)(v14 + 304) == 2 || *((_DWORD *)this + 32) == 2 )
    *(_DWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) |= 2u;
  *(_DWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) ^= (*(_DWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                     + 0x40) ^ (4
                                                                                              * *((unsigned __int8 *)this
                                                                                                + 350))) & 4;
  v15 = *(_QWORD *)(*(_QWORD *)(v14 + 16) + 16LL);
  if ( (*(_DWORD *)(v15 + 1520) & 1) != 0 )
  {
    if ( (*((_DWORD *)this + 83) & 8) != 0 )
      *(_QWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = 0LL;
    else
      Context = ADAPTER_RENDER::DdiCreateContext(
                  *(ADAPTER_RENDER **)(v14 + 16),
                  *(void **)(v14 + 384),
                  (struct _DXGKARG_CREATECONTEXT *)(v3 + 48));
    *((_DWORD *)this + 10) |= 1u;
    v16 = *(unsigned int *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60);
  }
  else
  {
    *(_QWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = *(_QWORD *)(v14 + 384);
    v51 = *(_OWORD *)(v14 + 392);
    *(_QWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = *(_QWORD *)(v14 + 408);
    *(_DWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x54) = v51;
    *(_QWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = *(_QWORD *)(v14 + 408);
    *(_DWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = HIDWORD(*(_QWORD *)(v14 + 392));
    v52 = *(__m128i *)(v14 + 392);
    *(_QWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = *(_QWORD *)(v14 + 408);
    v52.m128i_i64[0] = _mm_srli_si128(v52, 8).m128i_u64[0];
    v16 = HIDWORD(v52.m128i_i64[0]);
    *(_DWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = v52.m128i_i32[1];
    *(_OWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = *(_OWORD *)(v14 + 392);
    *(_QWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = *(_QWORD *)(v14 + 408);
    *(_DWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x64) = *(_DWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                     + 0x20);
    v53 = *(__m128i *)(v14 + 392);
    *(_QWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = *(_QWORD *)(v14 + 408);
    *(_DWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x5C) = _mm_cvtsi128_si32(_mm_srli_si128(v53, 8));
    *((_DWORD *)this + 10) &= ~1u;
  }
  if ( Context < 0 )
    return (unsigned int)Context;
  if ( (*(_DWORD *)(*((_QWORD *)this + 2) + 304LL) == 2 || *((_DWORD *)this + 32) == 2) && (_DWORD)v16 != 256 )
  {
    v49 = WdLogNewEntry5_WdWarning(v15, v16, v14, v13);
    *(_QWORD *)(v49 + 24) = 256LL;
    *(_QWORD *)(v49 + 32) = *(unsigned int *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60);
    WdLogEvent5_WdWarning(v49);
    *(_DWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = 256;
  }
  *((_QWORD *)this + 21) = *(_QWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
  *((_OWORD *)this + 11) = *(_OWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x54);
  v17 = *(__m128i *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x64);
  *((__m128i *)this + 12) = v17;
  v18 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v17, 8));
  if ( (v18 & 2) != 0 )
  {
    v19 = *((_QWORD *)this + 2);
    *(_BYTE *)(v19 + 2874) = 1;
    *(_BYTE *)(*(_QWORD *)(v19 + 40) + 256LL) = 1;
    v18 = *(unsigned int *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x6C);
  }
  if ( *((_BYTE *)this + 350) )
  {
    v20 = *((_QWORD *)this + 2);
    v21 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v20 + 16) + 16LL) + 2040LL)
                    + 48LL * *((unsigned int *)this + 82)
                    + 24);
    if ( v21 )
      LOBYTE(v21) = *(_BYTE *)(74LL * *((unsigned int *)this + 80) + v21 + 73);
    else
      v21 = 0LL;
    v15 = *(_QWORD *)(*(_QWORD *)(v20 + 16) + 16LL);
    v22 = *(_QWORD *)(*(_QWORD *)(v15 + 2040) + 48LL * *((unsigned int *)this + 82) + 24);
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
        v54 = WdLogNewEntry5_WdWarning(v15, 6LL * *((unsigned int *)this + 82), v21, v18);
        *(_QWORD *)(v54 + 24) = 768LL;
        WdLogEvent5_WdWarning(v54);
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
    v56 = WdLogNewEntry5_WdAssertion(v15);
    *(_QWORD *)(v56 + 24) = 779LL;
    WdLogEvent5_WdAssertion(v56);
  }
  if ( !*((_BYTE *)this + 350) )
  {
    if ( !*((_DWORD *)this + 47) )
    {
      v57 = WdLogNewEntry5_WdAssertion(v15);
      *(_QWORD *)(v57 + 24) = 780LL;
      WdLogEvent5_WdAssertion(v57);
    }
    if ( !*((_BYTE *)this + 350) && !*((_DWORD *)this + 48) )
    {
      v58 = WdLogNewEntry5_WdAssertion(v15);
      *(_QWORD *)(v58 + 24) = 781LL;
      WdLogEvent5_WdAssertion(v58);
    }
  }
  if ( bTracingEnabled )
  {
    *(_OWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = *((_OWORD *)this + 11);
    *(_OWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = *((_OWORD *)this + 12);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      Template_pqqqqqqqqppp(
        HIDWORD(*(_QWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10)),
        &EventCreateContext,
        *(_QWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
        *((_QWORD *)this + 2),
        *((_DWORD *)this + 80),
        *((_DWORD *)this + 81),
        *(_QWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
        HIDWORD(*(_QWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10)),
        *(_QWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18),
        HIDWORD(*(_QWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18)),
        *(_DWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20),
        0,
        this,
        *((unsigned int *)this + 6),
        0LL);
  }
  *(_DWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = 0;
  *(_QWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x84) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x8C) = 0LL;
  *(_DWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x94) = 0;
  *(_DWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x8C) = 0;
  *(_DWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                               + 40LL)
                                                                                   + 292LL);
  *(_DWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x84) = *((_DWORD *)this + 80);
  *(_DWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) = *((_DWORD *)this + 82);
  v24 = (*(_DWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) ^ (2 * *((_DWORD *)this + 83))) & 2 ^ *(_DWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80);
  *(_DWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = v24;
  if ( *((_BYTE *)this + 350) )
    *(_DWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = v24 | 0x80;
  if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    if ( (v27 & 0xFFFFFFF0) == 0 )
    {
      *(_DWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = ((unsigned __int8)v25 ^ (unsigned __int8)(8 * v27)) & 0x20 ^ v25;
      goto LABEL_28;
    }
    v55 = WdLogNewEntry5_WdError(v26);
    *(_QWORD *)(v55 + 24) = 819LL;
    WdLogEvent5_WdError(v55);
    return 3221225473LL;
  }
LABEL_28:
  v28 = _guard_dispatch_icall_fptr();
  *((_QWORD *)this + 27) = v28;
  if ( !v28 )
    return 3221225495LL;
  if ( *((_BYTE *)this + 350) && *(_DWORD *)(*((_QWORD *)this + 2) + 304LL) != 2 && *((_DWORD *)this + 32) != 2
    || (result = DXGCONTEXT::EnsurePriviledgedDmaPool(this, *((_DWORD *)this + 47), *((_DWORD *)this + 48)),
        (int)result >= 0) )
  {
    v30 = (SIZE_T *)((char *)this + 48);
    *((_QWORD *)this + 6) = *((unsigned int *)this + 44);
    *((_DWORD *)this + 16) = *((_DWORD *)this + 47);
    *((_DWORD *)this + 24) = *((_DWORD *)this + 48);
    if ( *((_BYTE *)this + 350) )
    {
      if ( *((_QWORD *)this + 35) )
      {
        v59 = WdLogNewEntry5_WdAssertion(v29);
        *(_QWORD *)(v59 + 24) = 861LL;
        WdLogEvent5_WdAssertion(v59);
      }
      v31 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 300LL);
      if ( (v31 & 0x10) != 0 && a2 && a3 == 16 )
      {
        VirtualMemory = ZwAllocateVirtualMemory(
                          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                          (PVOID *)this + 7,
                          0LL,
                          (PSIZE_T)this + 6,
                          0x3000u,
                          4u);
        v44 = VirtualMemory;
        if ( VirtualMemory < 0 )
          goto LABEL_86;
        v8 = (_QWORD *)a2[1];
        v10 = (_QWORD *)*a2;
        *(_QWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL;
        v31 = MmUserProbeAddress;
        v47 = v8;
        if ( (unsigned __int64)v8 >= MmUserProbeAddress )
          v47 = (_QWORD *)MmUserProbeAddress;
        *(_QWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = *v47;
        if ( !v8 || *(_QWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 8) < 8uLL || !v10 )
        {
          v48 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v8, v10, v11);
          *(_QWORD *)(v48 + 24) = this;
          *(_QWORD *)(v48 + 32) = -1073741811LL;
          WdLogEvent5_WdWarning(v48);
          return 3221225485LL;
        }
        if ( (unsigned __int64)v10 >= MmUserProbeAddress )
          v10 = (_QWORD *)MmUserProbeAddress;
        *v10 = *((_QWORD *)this + 7);
        if ( (unsigned __int64)v8 >= MmUserProbeAddress )
          v8 = (_QWORD *)MmUserProbeAddress;
        *v8 = *v30;
      }
    }
    else
    {
      v61 = ZwAllocateVirtualMemory(
              (HANDLE)0xFFFFFFFFFFFFFFFFLL,
              (PVOID *)this + 7,
              0LL,
              (PSIZE_T)this + 6,
              0x3000u,
              4u);
      v44 = v61;
      if ( v61 < 0 )
        goto LABEL_86;
    }
    v32 = *((unsigned int *)this + 16);
    if ( !(_DWORD)v32 )
      goto LABEL_40;
    v33 = 8 * v32;
    if ( v33 > 0xFFFFFFFF )
    {
      v62 = WdLogNewEntry5_WdWarning(v31, v8, v10, v11);
      *(_QWORD *)(v62 + 24) = this;
      v63 = *((unsigned int *)this + 16);
      goto LABEL_91;
    }
    v34 = (SIZE_T *)((char *)this + 72);
    *((_QWORD *)this + 9) = (unsigned int)v33;
    v35 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)this + 10, 0LL, (PSIZE_T)this + 9, 0x3000u, 4u);
    v40 = v35;
    if ( v35 < 0 )
    {
      v64 = (_QWORD *)WdLogNewEntry5_WdWarning(v37, v36, v38, v39);
      v64[3] = this;
      v64[4] = *v34;
      v64[5] = v40;
      WdLogEvent5_WdWarning(v64);
      return (unsigned int)v40;
    }
    *((_QWORD *)this + 11) = MmSecureVirtualMemory(*((PVOID *)this + 10), *v34, 4u);
    if ( *((_QWORD *)this + 11) )
    {
LABEL_40:
      v41 = *((unsigned int *)this + 24);
      if ( !(_DWORD)v41 )
        return 0LL;
      v42 = 24 * v41;
      if ( (unsigned __int64)(24 * v41) <= 0xFFFFFFFF )
      {
        v30 = (SIZE_T *)((char *)this + 104);
        *((_QWORD *)this + 13) = (unsigned int)v42;
        v43 = ZwAllocateVirtualMemory(
                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                (PVOID *)this + 14,
                0LL,
                (PSIZE_T)this + 13,
                0x3000u,
                4u);
        v44 = v43;
        if ( v43 >= 0 )
        {
          *((_QWORD *)this + 15) = MmSecureVirtualMemory(*((PVOID *)this + 14), *v30, 4u);
          if ( *((_QWORD *)this + 15) )
            return 0LL;
          goto LABEL_68;
        }
LABEL_86:
        v60 = (_QWORD *)WdLogNewEntry5_WdWarning(v31, v8, v10, v11);
        v60[3] = this;
        v60[4] = *v30;
        v60[5] = v44;
        WdLogEvent5_WdWarning(v60);
        return (unsigned int)v44;
      }
      v62 = WdLogNewEntry5_WdWarning(v42, v8, v10, v11);
      *(_QWORD *)(v62 + 24) = this;
      v63 = *((unsigned int *)this + 24);
LABEL_91:
      *(_QWORD *)(v62 + 32) = v63;
      WdLogEvent5_WdWarning(v62);
      return 3221225621LL;
    }
LABEL_68:
    v50 = WdLogNewEntry5_WdWarning(v9, v8, v10, v11);
    *(_QWORD *)(v50 + 24) = this;
    *(_QWORD *)(v50 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v50);
    return 3221225495LL;
  }
  return result;
}
