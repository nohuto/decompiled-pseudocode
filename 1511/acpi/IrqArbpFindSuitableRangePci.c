/*
 * XREFs of IrqArbpFindSuitableRangePci @ 0x1C006C928
 * Callers:
 *     IrqArbFindSuitableRange @ 0x1C006C1A0 (IrqArbFindSuitableRange.c)
 * Callees:
 *     LinkNodeCrackPrt @ 0x1C00172D4 (LinkNodeCrackPrt.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024E60 (_guard_dispatch_icall_nop.c)
 *     IrqArbGsivFromIrq @ 0x1C0069D80 (IrqArbGsivFromIrq.c)
 *     IcGetPossibleInput @ 0x1C006BDE8 (IcGetPossibleInput.c)
 *     IcIsInputValid @ 0x1C006C6E4 (IcIsInputValid.c)
 *     LinkNodeGetPossibleGsiv @ 0x1C00801BC (LinkNodeGetPossibleGsiv.c)
 *     IrqArbIrqFromGsiv @ 0x1C0080848 (IrqArbIrqFromGsiv.c)
 *     IrqArbpAssignIrqFromLinkNode @ 0x1C0080A68 (IrqArbpAssignIrqFromLinkNode.c)
 */

bool __fastcall IrqArbpFindSuitableRangePci(__int64 a1, unsigned __int64 *a2)
{
  __int64 v3; // rdx
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r8
  char v10; // al
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  __int16 v13; // r10
  __int64 v14; // rcx
  bool result; // al
  __int64 v16; // rcx
  unsigned int v17; // eax
  unsigned __int64 v18; // rcx
  __int64 v19; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v20; // [rsp+68h] [rbp+10h] BYREF

  v19 = a1;
  if ( (int)LinkNodeCrackPrt(*(_QWORD *)(a2[4] + 32), &v19, &v20, 1) < 0 )
    return 0;
  if ( !v19 )
  {
    v4 = v20;
    if ( (int)IcGetPossibleInput(v20, v3, &v19) < 0 || (v19 & 0xB) == 3 )
    {
      v5 = a2[2];
      if ( v4 >= v5 )
      {
        v6 = a2[3];
        if ( v4 <= v6 )
        {
          if ( v5 > v4 || v6 < v4 )
            goto LABEL_10;
          if ( IcIsInputValid(v4) )
          {
            v7 = a2[5];
            *a2 = v4;
            a2[1] = v4;
            *(_QWORD *)(v7 + 16) = 1LL;
LABEL_10:
            v8 = a2[5];
            v9 = a2[9];
            v10 = *(_BYTE *)(v8 + 36);
            v11 = *(_QWORD *)(v8 + 40);
            v12 = a2[4];
            v13 = *(_WORD *)(*(_QWORD *)(a2[7] + 40) + 4LL) & 1;
            LODWORD(v19) = 0;
            v14 = *(_QWORD *)(v12 + 32);
            LODWORD(v19) = v13 & 1;
            return (int)ProcessorFindIdtEntries(v14, v11, v9, 1LL, v4, (unsigned __int8)v19, (v10 & 1) != 0, 1) >= 0;
          }
        }
      }
    }
    return 0;
  }
  if ( (int)LinkNodeGetPossibleGsiv(v19, &v20) < 0 )
  {
    if ( (int)IrqArbpAssignIrqFromLinkNode(v16, a2, v16) >= 0 )
    {
      LODWORD(v4) = IrqArbGsivFromIrq(*(unsigned int *)a2);
      goto LABEL_10;
    }
    return 0;
  }
  v17 = IrqArbIrqFromGsiv(v20);
  v18 = v17;
  if ( a2[2] > v17 || a2[3] < v17 )
    return 0;
  *a2 = v17;
  result = 1;
  a2[1] = v18;
  *(_QWORD *)(a2[5] + 16) = 1LL;
  return result;
}
