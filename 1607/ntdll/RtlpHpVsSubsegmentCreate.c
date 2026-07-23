/*
 * XREFs of RtlpHpVsSubsegmentCreate @ 0x1800720F4
 * Callers:
 *     RtlpHpVsContextAllocate @ 0x18001D0F0 (RtlpHpVsContextAllocate.c)
 * Callees:
 *     RtlpHpSegLfhVsCommit @ 0x180043410 (RtlpHpSegLfhVsCommit.c)
 *     RtlpHpSegVsAllocate @ 0x180072240 (RtlpHpSegVsAllocate.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 __fastcall RtlpHpVsSubsegmentCreate(__int64 a1, int a2, unsigned int a3)
{
  __int64 v3; // rbx
  unsigned int v6; // ecx
  __int64 v7; // rcx
  __int64 (__fastcall *v8)(__int64, _QWORD); // rax
  __int64 v9; // rax
  __int64 v10; // rdi
  void *v11; // rcx
  __int64 (__fastcall *v12)(PVOID, __int64); // rax
  int v13; // eax
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rcx
  __int64 v16; // rbx

  v3 = (unsigned int)(2 * a2);
  if ( (((_DWORD)v3 - 1) & (unsigned int)v3) != 0 )
  {
    _BitScanReverse(&v6, v3);
    v3 = (unsigned int)(1 << (v6 + 1));
  }
  v7 = *(_QWORD *)(a1 + 56);
  if ( (unsigned int)v3 <= 0x10000 )
    v3 = 0x10000LL;
  if ( (unsigned int)v3 >= 0x40000 )
    v3 = 0x40000LL;
  v8 = (__int64 (__fastcall *)(__int64, _QWORD))(a1 ^ RtlpHeapKey ^ *(_QWORD *)(a1 + 64));
  if ( v8 == RtlpHpSegVsAllocate )
    v9 = RtlpHpSegVsAllocate(v7, (unsigned int)v3);
  else
    v9 = v8(v7, (unsigned int)v3);
  v10 = v9;
  if ( !v9 )
    return 0LL;
  v11 = *(void **)(a1 + 56);
  v12 = (__int64 (__fastcall *)(PVOID, __int64))(a1 ^ RtlpHeapKey ^ *(_QWORD *)(a1 + 80));
  if ( v12 == RtlpHpSegLfhVsCommit )
    v13 = RtlpHpSegLfhVsCommit(v11, v10);
  else
    v13 = ((__int64 (__fastcall *)(void *, __int64, __int64))v12)(v11, v10, 4096LL);
  if ( v13 < 0 )
  {
    v16 = 0LL;
  }
  else
  {
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 40));
    v14 = (unsigned __int64)(v3 - 48) >> 4;
    memset((void *)v10, 0, 0x28uLL);
    *(_WORD *)(v10 + 32) = v14;
    *(_QWORD *)(v10 + 16) = 1LL;
    *(_QWORD *)(v10 + 24) = 0LL;
    *(_WORD *)(v10 + 34) = v14 ^ 0xABED;
    v15 = v10 + 48;
    *(_QWORD *)(v10 + 48) = 0LL;
    *(_QWORD *)(v10 + 56) = 0LL;
    *(_WORD *)(v10 + 50) = v14;
    v16 = v10;
    *(_WORD *)(v10 + 52) = 0;
    v10 = 0LL;
    *(_QWORD *)v15 ^= v15 ^ RtlpLFHKey;
  }
  if ( v10 )
    ((void (__fastcall *)(_QWORD, __int64, _QWORD))(a1 ^ RtlpHeapKey ^ *(_QWORD *)(a1 + 72)))(
      *(_QWORD *)(a1 + 56),
      v10,
      a3);
  return v16;
}
