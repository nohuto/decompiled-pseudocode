/*
 * XREFs of IrqArbpUnreferenceArbitrationList @ 0x1C006D93C
 * Callers:
 *     IrqArbpPrepareForTestOrConflict @ 0x1C006D860 (IrqArbpPrepareForTestOrConflict.c)
 * Callees:
 *     ProcessorDeleteDeviceIdtAssignment @ 0x1C00198FC (ProcessorDeleteDeviceIdtAssignment.c)
 *     ProcessorGetDeviceIdtAssignment @ 0x1C006BA60 (ProcessorGetDeviceIdtAssignment.c)
 *     IrqArbGsivFromIrq @ 0x1C006C23C (IrqArbGsivFromIrq.c)
 *     IcGetPossibleInput @ 0x1C006E184 (IcGetPossibleInput.c)
 *     IcRemovePossibleReference @ 0x1C006E80C (IcRemovePossibleReference.c)
 *     LinkNodeGetPossibleGsiv @ 0x1C007FFDC (LinkNodeGetPossibleGsiv.c)
 */

PRTL_RANGE __fastcall IrqArbpUnreferenceArbitrationList(__int64 a1, _QWORD *a2)
{
  PRTL_RANGE result; // rax
  _DWORD *UserData; // rdi
  _QWORD *v5; // rbx
  PRTL_RANGE v6; // rcx
  int v7; // eax
  unsigned int i; // esi
  unsigned int v9; // eax
  __int64 v10; // rdx
  unsigned int v11; // r14d
  __int64 v12; // rdx
  __int128 v13; // [rsp+20h] [rbp-40h] BYREF
  unsigned int v14; // [rsp+34h] [rbp-2Ch]
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+40h] [rbp-20h] BYREF
  PRTL_RANGE Range; // [rsp+80h] [rbp+20h] BYREF

  RtlGetFirstRange(*(PRTL_RANGE_LIST *)(a1 + 40), &Iterator, &Range);
  while ( 1 )
  {
    result = Range;
    if ( !Range )
      break;
    UserData = Range->UserData;
    UserData[1] &= ~8u;
    v5 = (_QWORD *)*a2;
    if ( a2 != (_QWORD *)*a2 )
    {
      v6 = Range;
      do
      {
        if ( v6->Owner == (PVOID)v5[4] )
        {
          v7 = UserData[1];
          if ( (v7 & 8) == 0 )
          {
            UserData[1] = v7 | 8;
            v6 = Range;
            for ( i = Range->Start; i <= LODWORD(v6->End); ++i )
            {
              v9 = IrqArbGsivFromIrq(i);
              v11 = v9;
              if ( v9 < 0xFFF00000 && (int)IcGetPossibleInput(v9, v10, 0LL) >= 0 )
              {
                LOBYTE(v12) = Range->Attributes & 1;
                IcRemovePossibleReference(v11, v12);
              }
              if ( (int)ProcessorGetDeviceIdtAssignment((PVOID)v5[4], v11, 1, &v13) >= 0 )
                ProcessorDeleteDeviceIdtAssignment((PVOID)v5[4], v11, v14, 1);
              v6 = Range;
            }
            if ( UserData[2] == 2 )
            {
              LinkNodeGetPossibleGsiv(*((_QWORD *)UserData + 2), 0LL);
              --*(_DWORD *)(*((_QWORD *)UserData + 2) + 28LL);
              v6 = Range;
            }
          }
        }
        v5 = (_QWORD *)*v5;
      }
      while ( a2 != v5 );
    }
    RtlGetNextRange(&Iterator, &Range, 1u);
  }
  return result;
}
