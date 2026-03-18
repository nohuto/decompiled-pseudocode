/*
 * XREFs of MiClearNonPagedPtes @ 0x1400D2B70
 * Callers:
 *     MiFreePoolPages @ 0x14003B78C (MiFreePoolPages.c)
 *     ExFreeLargePool @ 0x1400892D0 (ExFreeLargePool.c)
 * Callees:
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400606D0 (MiInsertTbFlushEntry.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLogNonPagedPoolReleaseEvent @ 0x1401DB93C (MiLogNonPagedPoolReleaseEvent.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

unsigned __int64 __fastcall MiClearNonPagedPtes(unsigned __int64 a1, _KPROCESS *a2)
{
  _KPROCESS *v2; // rbx
  unsigned __int64 v3; // rsi
  __int64 v4; // r14
  __int64 v5; // r12
  int v6; // r13d
  unsigned __int64 v7; // r15
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned __int64 v10; // rbx
  __int64 v11; // r8
  unsigned __int8 CurrentIrql; // bp
  __int64 v13; // rax
  char v14; // al
  int v15; // eax
  unsigned __int64 v16; // r15
  int v17; // esi
  unsigned __int64 v18; // rbx
  signed __int32 v20[8]; // [rsp+0h] [rbp-168h] BYREF
  int v21; // [rsp+20h] [rbp-148h]
  unsigned __int64 v22; // [rsp+28h] [rbp-140h]
  unsigned __int64 v23; // [rsp+30h] [rbp-138h]
  int v24; // [rsp+38h] [rbp-130h]
  int v25; // [rsp+3Ch] [rbp-12Ch] BYREF
  __int64 v26; // [rsp+40h] [rbp-128h] BYREF
  __int64 v27; // [rsp+48h] [rbp-120h]
  _KPROCESS *v28; // [rsp+50h] [rbp-118h]
  int v29; // [rsp+60h] [rbp-108h] BYREF
  __int16 v30; // [rsp+64h] [rbp-104h]
  __int64 v31; // [rsp+68h] [rbp-100h]
  __int64 v32; // [rsp+70h] [rbp-F8h]
  __int64 v33; // [rsp+78h] [rbp-F0h]

  v2 = a2;
  v3 = 0LL;
  v28 = a2;
  v4 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v22 = 0LL;
  v31 = 20LL;
  v5 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v29 = 0;
  v6 = 1;
  v27 = v5;
  v7 = 0LL;
  v24 = MmProtectFreedNonPagedPool;
  v30 = 0;
  v32 = 0LL;
  v33 = 0LL;
  v21 = 1;
  v23 = 0LL;
  if ( a2 )
  {
    do
    {
      if ( v6 != 1 && (v4 & 0xFFF) != 0 )
        goto LABEL_32;
      if ( !v6 )
      {
        v5 += 8LL;
        v27 = v5;
      }
      v21 = 0;
      v6 = 0;
      if ( (MI_READ_PTE_LOCK_FREE(v5) & 0x80u) == 0LL )
      {
LABEL_32:
        while ( 1 )
        {
          v26 = MI_READ_PTE_LOCK_FREE(v4);
          v10 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v26) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          v25 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v25, v9, v11);
            while ( (*(_QWORD *)(v10 + 24) & 0x8000000000000000uLL) != 0 );
          }
          v13 = MI_READ_PTE_LOCK_FREE(v4);
          if ( v26 == v13 )
            break;
          _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(CurrentIrql);
        }
        v14 = *(_BYTE *)(v10 + 34) & 0xF8 | 5;
        *(_QWORD *)v10 = v22;
        *(_BYTE *)(v10 + 34) = v14;
        *(_QWORD *)v4 = 0LL;
        v22 = v10;
        v15 = MiPteInShadowRange(v4);
        v16 = v23;
        v17 = v15;
        v5 = v27;
        v6 = v21;
        if ( v15 )
          MiWritePteShadow(v4, 0LL);
        if ( CurrentIrql != 17 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(CurrentIrql);
        }
        v18 = 0LL;
        if ( !v24 )
        {
          _InterlockedOr(v20, 0);
          v18 = (unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 32;
          *(_QWORD *)v4 = v18;
          if ( v17 )
            MiWritePteShadow(v4, v18);
        }
        if ( (v18 & 0xFFFFFFFF00000000uLL) == 0 )
          MiInsertTbFlushEntry((__int64)&v29, v4 << 25 >> 16, 1LL, 0);
        v3 = v22;
        v7 = v16 + 1;
        v2 = v28;
        v4 += 8LL;
      }
      else
      {
        v8 = (4096 - (unsigned int)(v4 & 0xFFF)) >> 3;
        if ( v7 + v8 > (unsigned __int64)v2 )
          v8 = (unsigned int)((_DWORD)v2 - v7);
        v4 += 8 * v8;
        v7 += (unsigned int)v8;
      }
      v23 = v7;
    }
    while ( v7 < (unsigned __int64)v2 );
  }
  MiFlushTbList((__int64)&v29, a2);
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 && v3 )
    MiLogNonPagedPoolReleaseEvent(v3);
  return v3;
}
