/*
 * XREFs of MiResolveSharedZeroFault @ 0x140041B80
 * Callers:
 *     MmAccessFault @ 0x14003E320 (MmAccessFault.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     MiGetProtoPteAddress @ 0x140041FE0 (MiGetProtoPteAddress.c)
 *     MiFillPteWithProto @ 0x14009F84C (MiFillPteWithProto.c)
 *     MiAdvanceFaultList @ 0x1400BE040 (MiAdvanceFaultList.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MiGetUsedPtesHandle @ 0x1401EF60C (MiGetUsedPtesHandle.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakePrototypePteDirect @ 0x1401F2584 (MiMakePrototypePteDirect.c)
 *     MiMakePrototypePteVadLookup @ 0x1401F2594 (MiMakePrototypePteVadLookup.c)
 */

unsigned __int64 __fastcall MiResolveSharedZeroFault(unsigned int *a1)
{
  unsigned __int64 v1; // rsi
  unsigned int v3; // r10d
  __int64 v4; // rdi
  __int64 v5; // r14
  unsigned __int64 v6; // rax
  unsigned int v7; // ecx
  __int64 UsedPtesHandle; // rax
  int v9; // r11d
  __int64 v10; // rbx
  int v11; // r9d
  char v12; // al
  unsigned __int64 v13; // r12
  __int64 PrototypePteDirect; // rax
  unsigned __int64 result; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r11
  __int64 v19; // r15
  unsigned __int64 v20; // r14
  unsigned __int64 v21; // r13
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rsi
  __int16 *v24; // rbx
  unsigned __int64 v25; // rcx
  bool v26; // zf
  __int64 v27; // rbp
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // r11
  unsigned __int64 v30; // rcx
  __int64 v31; // rdi
  unsigned __int64 v32; // rbp
  __int64 ProtoPteAddress; // rax
  _QWORD *v34; // rcx
  __int64 v35; // r11
  unsigned int v36; // [rsp+20h] [rbp-F8h]
  unsigned __int64 v37; // [rsp+28h] [rbp-F0h] BYREF
  __int64 v38; // [rsp+30h] [rbp-E8h]
  unsigned __int64 v39; // [rsp+38h] [rbp-E0h]
  _QWORD v40[2]; // [rsp+40h] [rbp-D8h] BYREF
  char v41[16]; // [rsp+50h] [rbp-C8h] BYREF
  __int16 v42; // [rsp+60h] [rbp-B8h] BYREF
  _QWORD *v43; // [rsp+68h] [rbp-B0h]
  __int64 v44; // [rsp+70h] [rbp-A8h]
  __int64 v45; // [rsp+78h] [rbp-A0h]
  __int64 v46; // [rsp+80h] [rbp-98h]
  unsigned __int64 v47; // [rsp+C0h] [rbp-58h]
  unsigned __int64 v48; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v49; // [rsp+D0h] [rbp-48h]
  __int64 v50; // [rsp+D8h] [rbp-40h]

  v1 = *((_QWORD *)a1 + 1);
  v3 = a1[8];
  v4 = ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = *((_QWORD *)a1 + 3);
  v36 = v3;
  v6 = v4 << 25 >> 16;
  v7 = 0;
  while ( v6 > 0x7FFFFFFEFFFFLL )
  {
    ++v7;
    v6 = (__int64)(v6 << 25) >> 16;
    if ( v7 >= 3 )
      goto LABEL_14;
  }
  UsedPtesHandle = MiGetUsedPtesHandle(v4 << 25 >> 16);
  LODWORD(v37) = v9;
  v10 = UsedPtesHandle;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(UsedPtesHandle + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v37);
      while ( (*(_QWORD *)(v10 + 24) & 0x8000000000000000uLL) != 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) );
    v3 = v36;
  }
  *(_QWORD *)(v10 + 16) ^= ((unsigned int)*(_QWORD *)(v10 + 16) ^ ((*(_QWORD *)(v10 + 16) & 0xFFFF0000) + 0x10000)) & 0x3FF0000;
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (__int64)(*(_QWORD *)(v10 + 8) | 0x8000000000000000uLL) >> 47 == -1
    || (__int64)(*(_QWORD *)(v10 + 8) | 0x8000000000000000uLL) >> 47 == 0 )
  {
    v47 = (((*(_QWORD *)(v10 + 8) | 0x8000000000000000uLL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v48 = ((v47 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v49 = ((v48 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v11 = 4;
    v50 = ((v49 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    do
      v12 = MI_READ_PTE_LOCK_FREE(*(&v47 + (unsigned int)(v11 - 1)));
    while ( (v12 & 1) != 0 && v12 >= 0 && v11 );
  }
LABEL_14:
  v13 = 256LL;
  if ( v3 == 256 )
    PrototypePteDirect = MiMakePrototypePteDirect(v5);
  else
    PrototypePteDirect = MiMakePrototypePteVadLookup(v3);
  *(_QWORD *)v4 = PrototypePteDirect;
  result = MiPteInShadowRange(v4, PrototypePteDirect);
  if ( (_DWORD)result )
    result = MiWritePteShadow(v17, v16);
  v19 = *((_QWORD *)a1 + 8);
  if ( v19 )
  {
    v20 = 1LL;
    v21 = *(unsigned int *)(v19 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 32) << 32);
    v22 = *(unsigned int *)(v19 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 33) << 32);
    if ( (*(_DWORD *)(v19 + 48) & 0x100000) != 0 )
    {
      v23 = v1 & 0xFFFFFFFFFFFF0000uLL;
      v40[1] = 0x10000LL;
      v40[0] = v23;
      result = v23 >> 12;
      if ( v23 >> 12 < v21 )
        return result;
      result = (v23 + 0xFFFF) >> 12;
      if ( result > v22 )
        return result;
      v42 = 2;
      v43 = v40;
      v24 = &v42;
      v44 = 1LL;
      v13 = 16LL;
      v45 = v18;
      v1 = v23 - 4096;
      v46 = v18;
    }
    else
    {
      result = *a1;
      if ( (result & 2) == 0 )
        return result;
      v24 = (__int16 *)*((_QWORD *)a1 + 7);
      v25 = v22 - (v1 >> 12);
      result = v25 + 1;
      if ( v25 + 1 < 0x100 )
        v13 = v25 + 1;
      if ( !v24 )
        return result;
    }
    v26 = (*(_DWORD *)(v19 + 48) & 0x100000) == 0;
    v27 = *((_QWORD *)v24 + 3);
    v28 = *((_QWORD *)v24 + 4);
    v29 = *((_QWORD *)v24 + 2);
    v38 = v27;
    v39 = v28;
    v37 = v29;
    if ( v26 )
      MiAdvanceFaultList(v24);
    v30 = *((_QWORD *)v24 + 3);
    if ( v30 < v29 )
    {
      v31 = ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x97FFFFFFFF8LL;
      if ( v13 > 1 )
      {
        while ( (v31 & 0xFFF) != 0 || v24 == &v42 )
        {
          v32 = *(_QWORD *)(*((_QWORD *)v24 + 1) + 16 * v30) + (*((_QWORD *)v24 + 4) << 12);
          if ( (v32 & 0xFFFFFFFFFFFFF000uLL) - 4096 != (v1 & 0xFFFFFFFFFFFFF000uLL) )
            break;
          if ( !MI_READ_PTE_LOCK_FREE(v31) )
          {
            ProtoPteAddress = MiGetProtoPteAddress(v19, v32 >> 12, 0LL, v41);
            if ( !ProtoPteAddress )
              break;
            v34 = *(_QWORD **)(v19 + 120);
            if ( (__int64)v34 < 0 && (v32 >> 12) - v21 > (unsigned __int64)(*v34 - 1LL) >> 12 )
              break;
            MiFillPteWithProto(v31, ProtoPteAddress, v36);
          }
          ++v20;
          v31 += 8LL;
          MiAdvanceFaultList(v24);
          v30 = *((_QWORD *)v24 + 3);
          if ( v30 != v35 )
          {
            v1 = v32;
            if ( v20 < v13 )
              continue;
          }
          break;
        }
        v27 = v38;
      }
    }
    result = v39;
    *((_QWORD *)v24 + 4) = v39;
    *((_QWORD *)v24 + 3) = v27;
  }
  return result;
}
