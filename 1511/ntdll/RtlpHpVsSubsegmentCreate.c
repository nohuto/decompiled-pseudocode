/*
 * XREFs of RtlpHpVsSubsegmentCreate @ 0x180057DFC
 * Callers:
 *     RtlpHpVsContextAllocate @ 0x18002B090 (RtlpHpVsContextAllocate.c)
 * Callees:
 *     RtlpHpSegLfhVsCommit @ 0x18001B510 (RtlpHpSegLfhVsCommit.c)
 *     RtlpHpSegVsAllocate @ 0x180057F60 (RtlpHpSegVsAllocate.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

__int64 __fastcall RtlpHpVsSubsegmentCreate(__int64 a1, int a2, unsigned int a3)
{
  __int64 v3; // rbx
  unsigned int v6; // ecx
  __int64 (__fastcall *v7)(_QWORD, _QWORD); // rdi
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(PVOID, __int64); // rbp
  int v11; // eax
  unsigned __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rbp

  v3 = (unsigned int)(2 * a2);
  if ( (((_DWORD)v3 - 1) & (unsigned int)v3) != 0 )
  {
    _BitScanReverse(&v6, v3);
    v3 = (unsigned int)(1 << (v6 + 1));
  }
  if ( (unsigned int)v3 <= 0x10000 )
    v3 = 0x10000LL;
  if ( (unsigned int)v3 >= 0x40000 )
    v3 = 0x40000LL;
  v7 = (__int64 (__fastcall *)(_QWORD, _QWORD))(a1 ^ RtlpHeapKey ^ *(_QWORD *)(a1 + 64));
  if ( v7 == RtlpHpSegVsAllocate )
    v8 = RtlpHpSegVsAllocate(*(_QWORD *)(a1 + 56), (unsigned int)v3);
  else
    v8 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v7)(*(_QWORD *)(a1 + 56), (unsigned int)v3, a3);
  v9 = v8;
  if ( !v8 )
    return 0LL;
  v10 = (__int64 (__fastcall *)(PVOID, __int64))(a1 ^ RtlpHeapKey ^ *(_QWORD *)(a1 + 80));
  if ( v10 == RtlpHpSegLfhVsCommit )
    v11 = RtlpHpSegLfhVsCommit(*(PVOID *)(a1 + 56), v8);
  else
    v11 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64))v10)(*(_QWORD *)(a1 + 56), v8, 4096LL);
  if ( v11 < 0 )
  {
    v14 = 0LL;
  }
  else
  {
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 40));
    v12 = (unsigned __int64)(v3 - 48) >> 4;
    memset((void *)v9, 0, 0x28uLL);
    *(_QWORD *)(v9 + 16) = 1LL;
    *(_QWORD *)(v9 + 24) = 0LL;
    *(_WORD *)(v9 + 32) = v12;
    *(_WORD *)(v9 + 34) = v12 ^ 0xABED;
    v13 = v9 + 48;
    v14 = v9;
    *(_QWORD *)(v9 + 48) = 0LL;
    v9 = 0LL;
    *(_QWORD *)(v13 + 8) = 0LL;
    *(_DWORD *)(v13 + 2) = (unsigned __int16)v12;
    *(_QWORD *)v13 ^= v13 ^ RtlpLFHKey;
  }
  if ( v9 )
    ((void (__fastcall *)(_QWORD, __int64, _QWORD))(a1 ^ RtlpHeapKey ^ *(_QWORD *)(a1 + 72)))(
      *(_QWORD *)(a1 + 56),
      v9,
      a3);
  return v14;
}
