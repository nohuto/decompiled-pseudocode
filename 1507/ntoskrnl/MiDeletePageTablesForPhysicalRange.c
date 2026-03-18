/*
 * XREFs of MiDeletePageTablesForPhysicalRange @ 0x1402244DC
 * Callers:
 *     MiDeleteVad @ 0x14008B8E0 (MiDeleteVad.c)
 * Callees:
 *     MiDeletePageTableHierarchy @ 0x140039EA0 (MiDeletePageTableHierarchy.c)
 *     MI_DECREMENT_USED_PTES_BY_HANDLE_CLUSTER @ 0x14003A4E8 (MI_DECREMENT_USED_PTES_BY_HANDLE_CLUSTER.c)
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MI_GET_USED_PTES_HANDLE @ 0x140223A68 (MI_GET_USED_PTES_HANDLE.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 */

void __fastcall MiDeletePageTablesForPhysicalRange(__int64 a1)
{
  unsigned int v1; // r10d
  __int64 v2; // r11
  unsigned __int64 v3; // r15
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdi
  __int64 v11; // r8
  __int64 v12; // rax
  unsigned int v13; // ebp
  __int64 v14; // rbx
  ULONG_PTR v15; // rbx
  int v16; // [rsp+20h] [rbp-F8h] BYREF
  __int16 v17; // [rsp+24h] [rbp-F4h]
  __int64 v18; // [rsp+28h] [rbp-F0h]
  __int64 v19; // [rsp+30h] [rbp-E8h]
  __int64 v20; // [rsp+38h] [rbp-E0h]

  v1 = 0;
  v2 = 0xFFFFFFFFFLL;
  v3 = (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12;
  v4 = (*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) & 0xFFFFFFFFFLL;
  v18 = 20LL;
  v16 = 1;
  v17 = 0;
  v5 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v19 = 0LL;
  v20 = 0LL;
  v6 = 8 * v4 - 0x97FFFFFFFF8LL;
  v7 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( v5 < v6 )
  {
    v8 = v7 + 0x90482413000LL;
    do
    {
      v9 = *(_QWORD *)v7;
      v10 = 512 - ((v5 >> 3) & 0x1FF);
      if ( v10 > (__int64)(v6 - v5) >> 3 )
        v10 = (__int64)(v6 - v5) >> 3;
      if ( v8 <= 0x7F8
        && (unsigned int)MiPteHasShadow(v4, v9)
        && (v9 & 1) != 0
        && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
      {
        v11 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v11 )
        {
          v12 = *(_QWORD *)(v11 + 8 * ((v7 >> 3) & 0x1FF));
          if ( (v12 & 0x20) != 0 )
            v9 |= 0x20uLL;
          if ( (v12 & 0x42) != 0 )
            v9 |= 0x42uLL;
        }
      }
      v13 = v1;
      v14 = 48 * (v2 & (v9 >> 12)) - 0x58000000000LL;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v13 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v13);
        }
        while ( *(__int64 *)(v14 + 24) < 0 );
      }
      *(_QWORD *)(v14 + 24) ^= (*(_QWORD *)(v14 + 24) ^ (*(_QWORD *)(v14 + 24) - 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v15 = MI_GET_USED_PTES_HANDLE(v3);
      MI_DECREMENT_USED_PTES_BY_HANDLE_CLUSTER(v15, 1u);
      if ( (*(_DWORD *)(v15 + 16) & 0x3FF0000) == 0 )
        MiDeletePageTableHierarchy(&v16, v5);
      v5 += 8 * v10;
      v7 += 8LL;
      v8 += 8LL;
      v3 += v10 << 12;
      v1 = 0;
      v2 = 0xFFFFFFFFFLL;
    }
    while ( v5 < v6 );
  }
  MiFlushTbList((__int64)&v16);
}
