/*
 * XREFs of IrqArbpFindSuitableRangeMsi @ 0x1C006E4C8
 * Callers:
 *     IrqArbFindSuitableRange @ 0x1C006E280 (IrqArbFindSuitableRange.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00237F0 (_guard_dispatch_icall_nop.c)
 *     ArbFindSuitableRange @ 0x1C006E310 (ArbFindSuitableRange.c)
 *     ProcessorMsiSupported @ 0x1C006E5B8 (ProcessorMsiSupported.c)
 */

char __fastcall IrqArbpFindSuitableRangeMsi(__int64 a1, _DWORD *a2)
{
  _QWORD *v3; // rdx
  __int64 v5; // r10
  __int64 v6; // rbp
  __int64 v7; // rax
  unsigned int v8; // esi
  BOOL v9; // ebx
  int v10; // eax
  int v11; // eax
  bool v12; // cl
  BOOL v14; // [rsp+78h] [rbp+10h] BYREF

  v14 = 0;
  v3 = (_QWORD *)*((_QWORD *)a2 + 7);
  v5 = *((_QWORD *)a2 + 5);
  v6 = *((_QWORD *)a2 + 9);
  v7 = *(_QWORD *)(v5 + 40);
  LOBYTE(v14) = *(_BYTE *)(v3[5] + 4LL) & 1;
  v8 = *(_DWORD *)(v7 + 12) - *(_DWORD *)(v7 + 8) + 1;
  if ( a2[12] == 1 && v3[2] == 1LL && v3[3] == 1LL )
    *((_WORD *)a2 + 32) |= 0x40u;
  v9 = v14;
  v10 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD, _DWORD, BOOL, _DWORD, int))ProcessorFindIdtEntries)(
          *(_QWORD *)(*((_QWORD *)a2 + 4) + 32LL),
          *(_QWORD *)(v5 + 40),
          v6,
          v8,
          *a2,
          v14,
          0,
          1);
  if ( v10 < 0 )
  {
    if ( v8 > 1 )
      v10 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, __int64, _DWORD, BOOL, _DWORD, int))ProcessorFindIdtEntries)(
              *(_QWORD *)(*((_QWORD *)a2 + 4) + 32LL),
              *(_QWORD *)(*((_QWORD *)a2 + 5) + 40LL),
              v6,
              1LL,
              *a2,
              v9,
              0,
              1);
    if ( v10 < 0 )
      return 0;
  }
  v11 = ProcessorMsiSupported(v6 + 16, &v14);
  if ( v11 < 0 )
  {
    v12 = v14;
  }
  else
  {
    v12 = v14;
    v11 = 0;
  }
  if ( v11 >= 0 && v12 )
    return ArbFindSuitableRange(a1, (__int64)a2);
  else
    return 0;
}
