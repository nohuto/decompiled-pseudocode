/*
 * XREFs of ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1C0073374
 * Callers:
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C007A574 (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 * Callees:
 *     ?NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z @ 0x1C000239C (-NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002E50 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     Template_pqqqqqqqqppp @ 0x1C001CAA4 (Template_pqqqqqqqqppp.c)
 *     ?EnsurePriviledgedDmaPool@DXGCONTEXT@@QEAAJII@Z @ 0x1C00739F8 (-EnsurePriviledgedDmaPool@DXGCONTEXT@@QEAAJII@Z.c)
 *     ?DdiCreateContext@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_CREATECONTEXT@@@Z @ 0x1C0092470 (-DdiCreateContext@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_CREATECONTEXT@@@Z.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C01406A8 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 */

__int64 __fastcall DXGCONTEXT::Initialize(DXGCONTEXT *this, _QWORD *a2, int a3)
{
  unsigned __int64 v3; // rbp
  __int64 v7; // rbx
  __int64 v8; // rdi
  _QWORD *v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // r8
  __int64 v12; // r9
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 result; // rax
  unsigned __int64 v17; // rdx
  __m128i v18; // xmm2
  __int64 v19; // r9
  int v20; // edx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rcx
  SIZE_T *v25; // rdi
  NTSTATUS v26; // eax
  ULONG64 v27; // rcx
  __int64 v28; // r15
  __int64 v29; // rax
  unsigned __int64 v30; // rax
  SIZE_T *v31; // r15
  NTSTATUS v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // r12
  __int64 v38; // rax
  __int64 v39; // rcx
  NTSTATUS v40; // eax
  NTSTATUS VirtualMemory; // eax
  _QWORD *v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // r10
  __int64 v46; // r10
  char v47; // al
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
  __int64 v60; // rax
  __int64 v61; // rcx
  _QWORD *v62; // rax
  __int64 v63; // [rsp+C0h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_QWORD *)((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL) = this;
  DXGADAPTER::NotifyContextCreation(
    *(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
    this,
    1,
    *((_DWORD *)this + 80));
  v7 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
  v8 = v7 + 192;
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v7 + 192));
  LODWORD(v7) = HMGRTABLE::AllocHandle(v7 + 216, this, 7LL);
  *(_QWORD *)(v8 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v8, 0LL);
  KeLeaveCriticalRegion();
  *((_DWORD *)this + 6) = v7;
  if ( !(_DWORD)v7 )
    goto LABEL_67;
  memset((void *)(v3 + 48), 0, 0x48uLL);
  *(_QWORD *)(((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = this;
  *(_DWORD *)(((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = *((_DWORD *)this + 80);
  *(_DWORD *)(((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3C) = *((_DWORD *)this + 81);
  *(_QWORD *)(((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = a2;
  *(_DWORD *)(((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = a3;
  v14 = *((_QWORD *)this + 2);
  if ( *(_DWORD *)(v14 + 280) == 2 )
    *(_DWORD *)(((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) |= 2u;
  *(_DWORD *)(((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) ^= (*(_DWORD *)(((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                     + 0x40) ^ (4
                                                                                              * *((unsigned __int8 *)this
                                                                                                + 350))) & 4;
  v15 = *(_QWORD *)(*(_QWORD *)(v14 + 16) + 16LL);
  if ( (*(_DWORD *)(v15 + 1376) & 1) != 0 )
  {
    result = ADAPTER_RENDER::DdiCreateContext(
               *(ADAPTER_RENDER **)(v14 + 16),
               *(void **)(v14 + 360),
               (struct _DXGKARG_CREATECONTEXT *)(v3 + 48));
    *((_DWORD *)this + 10) |= 1u;
    v17 = *(unsigned int *)(((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60);
  }
  else
  {
    *(_QWORD *)(((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = *(_QWORD *)(v14 + 360);
    v50 = *(_OWORD *)(v14 + 368);
    *(_QWORD *)(((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = *(_QWORD *)(v14 + 384);
    *(_DWORD *)(((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x54) = v50;
    *(_QWORD *)(((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = *(_QWORD *)(v14 + 384);
    *(_DWORD *)(((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = HIDWORD(*(_QWORD *)(v14 + 368));
    v51 = *(__m128i *)(v14 + 368);
    *(_QWORD *)(((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = *(_QWORD *)(v14 + 384);
    v51.m128i_i64[0] = _mm_srli_si128(v51, 8).m128i_u64[0];
    v17 = HIDWORD(v51.m128i_i64[0]);
    *(_DWORD *)(((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = v51.m128i_i32[1];
    *(_OWORD *)(((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = *(_OWORD *)(v14 + 368);
    *(_QWORD *)(((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = *(_QWORD *)(v14 + 384);
    *(_DWORD *)(((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x64) = *(_DWORD *)(((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                     + 0x20);
    v52 = *(__m128i *)(v14 + 368);
    *(_QWORD *)(((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = *(_QWORD *)(v14 + 384);
    *(_DWORD *)(((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x5C) = _mm_cvtsi128_si32(_mm_srli_si128(v52, 8));
    *((_DWORD *)this + 10) &= ~1u;
    result = 0LL;
  }
  if ( (int)result >= 0 )
  {
    if ( *(_DWORD *)(*((_QWORD *)this + 2) + 280LL) == 2 && (_DWORD)v17 != 256 )
    {
      v48 = WdLogNewEntry5_WdWarning(v15, v17, v14, v13);
      *(_QWORD *)(v48 + 24) = 256LL;
      *(_QWORD *)(v48 + 32) = *(unsigned int *)(((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60);
      WdLogEvent5_WdWarning(v48);
      *(_DWORD *)(((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = 256;
    }
    *((_QWORD *)this + 21) = *(_QWORD *)(((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
    *((_OWORD *)this + 11) = *(_OWORD *)(((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x54);
    v18 = *(__m128i *)(((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x64);
    *((__m128i *)this + 12) = v18;
    v19 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v18, 8));
    if ( (v19 & 2) != 0 )
    {
      v44 = *((_QWORD *)this + 2);
      *(_BYTE *)(v44 + 18722) = 1;
      *(_BYTE *)(*(_QWORD *)(v44 + 40) + 264LL) = 1;
      v19 = *(unsigned int *)(((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x6C);
    }
    if ( *((_BYTE *)this + 350) )
    {
      v45 = *((_QWORD *)this + 2);
      v17 = 6LL * *((unsigned int *)this + 82);
      v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v45 + 16) + 16LL) + 1896LL)
                      + 48LL * *((unsigned int *)this + 82)
                      + 24);
      if ( v14 )
        LOBYTE(v14) = *(_BYTE *)(74LL * *((unsigned int *)this + 80) + v14 + 73);
      else
        v14 = 0LL;
      v15 = *(_QWORD *)(*(_QWORD *)(v45 + 16) + 16LL);
      v46 = *(_QWORD *)(*(_QWORD *)(v15 + 1896) + 48LL * *((unsigned int *)this + 82) + 24);
      if ( v46 )
      {
        v15 = 74LL * *((unsigned int *)this + 80);
        v47 = *(_BYTE *)(v15 + v46 + 72);
      }
      else
      {
        v47 = 0;
      }
      if ( (v19 & 4) != 0 || (_BYTE)v14 && !v47 )
      {
        if ( !(_BYTE)v14 )
        {
          v53 = WdLogNewEntry5_WdWarning(v15, v17, v14, v19);
          *(_QWORD *)(v53 + 24) = 752LL;
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
      v55 = WdLogNewEntry5_WdAssertion(v15, v17, v14, v19);
      *(_QWORD *)(v55 + 24) = 763LL;
      WdLogEvent5_WdAssertion(v55);
    }
    if ( !*((_BYTE *)this + 350) )
    {
      if ( !*((_DWORD *)this + 47) )
      {
        v56 = WdLogNewEntry5_WdAssertion(v15, v17, v14, v19);
        *(_QWORD *)(v56 + 24) = 764LL;
        WdLogEvent5_WdAssertion(v56);
      }
      if ( !*((_BYTE *)this + 350) && !*((_DWORD *)this + 48) )
      {
        v57 = WdLogNewEntry5_WdAssertion(v15, v17, v14, v19);
        *(_QWORD *)(v57 + 24) = 765LL;
        WdLogEvent5_WdAssertion(v57);
      }
    }
    if ( bTracingEnabled )
    {
      *(_OWORD *)(((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = *((_OWORD *)this + 11);
      *(_OWORD *)(((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = *((_OWORD *)this + 12);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
        Template_pqqqqqqqqppp(
          HIDWORD(*(_QWORD *)(((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10)),
          &EventCreateContext,
          *(_QWORD *)(((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
          *((_QWORD *)this + 2),
          *((_DWORD *)this + 80),
          *((_DWORD *)this + 81),
          *(_QWORD *)(((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
          HIDWORD(*(_QWORD *)(((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10)),
          *(_QWORD *)(((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18),
          HIDWORD(*(_QWORD *)(((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18)),
          *(_DWORD *)(((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20),
          0,
          this,
          *((unsigned int *)this + 6),
          0LL);
    }
    *(_QWORD *)(((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = 0LL;
    *(_QWORD *)(((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) = 0LL;
    *(_DWORD *)(((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = 0;
    *(_DWORD *)(((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                                 + 40LL)
                                                                                     + 316LL);
    *(_DWORD *)(((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x84) = *((_DWORD *)this + 80);
    *(_DWORD *)(((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) = *((_DWORD *)this + 82);
    v20 = *((_DWORD *)this + 83);
    v21 = 2 * (v20 & 1u);
    *(_DWORD *)(((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = v21;
    v22 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
    if ( *(int *)(v22 + 1648) < 0x2000 && !*(_BYTE *)(v22 + 1932) )
    {
LABEL_22:
      v23 = _guard_dispatch_icall_fptr();
      *((_QWORD *)this + 27) = v23;
      if ( !v23 )
        return 3221225495LL;
      if ( *((_BYTE *)this + 350) && *(_DWORD *)(*((_QWORD *)this + 2) + 280LL) != 2
        || (result = DXGCONTEXT::EnsurePriviledgedDmaPool(this, *((_DWORD *)this + 47), *((_DWORD *)this + 48)),
            (int)result >= 0) )
      {
        v25 = (SIZE_T *)((char *)this + 48);
        *((_QWORD *)this + 6) = *((unsigned int *)this + 44);
        *((_DWORD *)this + 16) = *((_DWORD *)this + 47);
        *((_DWORD *)this + 24) = *((_DWORD *)this + 48);
        if ( *((_BYTE *)this + 350) )
        {
          if ( *((_QWORD *)this + 35) )
          {
            v58 = WdLogNewEntry5_WdAssertion(v24, v9, v11, v12);
            *(_QWORD *)(v58 + 24) = 843LL;
            WdLogEvent5_WdAssertion(v58);
          }
          v27 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 284LL);
          if ( (v27 & 8) != 0 && a2 && a3 == 16 )
          {
            VirtualMemory = ZwAllocateVirtualMemory(
                              (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                              (PVOID *)this + 7,
                              0LL,
                              (PSIZE_T)this + 6,
                              0x3000u,
                              4u);
            v28 = VirtualMemory;
            if ( VirtualMemory < 0 )
              goto LABEL_80;
            v9 = (_QWORD *)a2[1];
            v11 = (_QWORD *)*a2;
            *(_QWORD *)(((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL;
            v27 = MmUserProbeAddress;
            v42 = v9;
            if ( (unsigned __int64)v9 >= MmUserProbeAddress )
              v42 = (_QWORD *)MmUserProbeAddress;
            *(_QWORD *)(((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = *v42;
            if ( !v9 || *(_QWORD *)(((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL) + 8) < 8uLL || !v11 )
            {
              v43 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v9, v11, v12);
              *(_QWORD *)(v43 + 24) = this;
              *(_QWORD *)(v43 + 32) = -1073741811LL;
              WdLogEvent5_WdWarning(v43);
              return 3221225485LL;
            }
            if ( (unsigned __int64)v11 >= MmUserProbeAddress )
              v11 = (_QWORD *)MmUserProbeAddress;
            *v11 = *((_QWORD *)this + 7);
            if ( (unsigned __int64)v9 >= MmUserProbeAddress )
              v9 = (_QWORD *)MmUserProbeAddress;
            *v9 = *v25;
          }
        }
        else
        {
          v26 = ZwAllocateVirtualMemory(
                  (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                  (PVOID *)this + 7,
                  0LL,
                  (PSIZE_T)this + 6,
                  0x3000u,
                  4u);
          v28 = v26;
          if ( v26 < 0 )
            goto LABEL_80;
        }
        v29 = *((unsigned int *)this + 16);
        if ( !(_DWORD)v29 )
          goto LABEL_31;
        v30 = 8 * v29;
        if ( v30 > 0xFFFFFFFF )
        {
          v60 = WdLogNewEntry5_WdWarning(v27, v9, v11, v12);
          *(_QWORD *)(v60 + 24) = this;
          v61 = *((unsigned int *)this + 16);
          goto LABEL_83;
        }
        v31 = (SIZE_T *)((char *)this + 72);
        *((_QWORD *)this + 9) = (unsigned int)v30;
        v32 = ZwAllocateVirtualMemory(
                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                (PVOID *)this + 10,
                0LL,
                (PSIZE_T)this + 9,
                0x3000u,
                4u);
        v37 = v32;
        if ( v32 < 0 )
        {
          v62 = (_QWORD *)WdLogNewEntry5_WdWarning(v34, v33, v35, v36);
          v62[3] = this;
          v62[4] = *v31;
          v62[5] = v37;
          WdLogEvent5_WdWarning(v62);
          return (unsigned int)v37;
        }
        *((_QWORD *)this + 11) = MmSecureVirtualMemory(*((PVOID *)this + 10), *v31, 4u);
        if ( *((_QWORD *)this + 11) )
        {
LABEL_31:
          v38 = *((unsigned int *)this + 24);
          if ( !(_DWORD)v38 )
            return 0LL;
          v39 = 24 * v38;
          if ( (unsigned __int64)(24 * v38) <= 0xFFFFFFFF )
          {
            v25 = (SIZE_T *)((char *)this + 104);
            *((_QWORD *)this + 13) = (unsigned int)v39;
            v40 = ZwAllocateVirtualMemory(
                    (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                    (PVOID *)this + 14,
                    0LL,
                    (PSIZE_T)this + 13,
                    0x3000u,
                    4u);
            v28 = v40;
            if ( v40 >= 0 )
            {
              *((_QWORD *)this + 15) = MmSecureVirtualMemory(*((PVOID *)this + 14), *v25, 4u);
              if ( *((_QWORD *)this + 15) )
                return 0LL;
              goto LABEL_67;
            }
LABEL_80:
            v59 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v9, v11, v12);
            v59[3] = this;
            v59[4] = *v25;
            v59[5] = v28;
            WdLogEvent5_WdWarning(v59);
            return (unsigned int)v28;
          }
          v60 = WdLogNewEntry5_WdWarning(v39, v9, v11, v12);
          *(_QWORD *)(v60 + 24) = this;
          v61 = *((unsigned int *)this + 24);
LABEL_83:
          *(_QWORD *)(v60 + 32) = v61;
          WdLogEvent5_WdWarning(v60);
          return 3221225621LL;
        }
LABEL_67:
        v49 = WdLogNewEntry5_WdWarning(v10, v9, v11, v12);
        *(_QWORD *)(v49 + 24) = this;
        *(_QWORD *)(v49 + 32) = -1073741801LL;
        WdLogEvent5_WdWarning(v49);
        return 3221225495LL;
      }
      return result;
    }
    if ( (v20 & 0xFFFFFFF8) == 0 )
    {
      *(_DWORD *)(((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = ((unsigned __int8)(2 * (v20 & 1)) ^ (unsigned __int8)(8 * v20)) & 0x20 ^ (2 * (v20 & 1));
      goto LABEL_22;
    }
    v54 = WdLogNewEntry5_WdError(v21);
    *(_QWORD *)(v54 + 24) = 799LL;
    WdLogEvent5_WdError(v54);
    return 3221225473LL;
  }
  return result;
}
