/*
 * XREFs of IrqArbpFindSuitableRangePci @ 0x1C008CDB4
 * Callers:
 *     IrqArbFindSuitableRange @ 0x1C008BDC0 (IrqArbFindSuitableRange.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0004BB0 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C000E748 (WPP_RECORDER_SF_.c)
 *     LinkNodeCrackPrt @ 0x1C0021C44 (LinkNodeCrackPrt.c)
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0045820 (WPP_RECORDER_SF_DD.c)
 *     IrqArbGsivFromIrq @ 0x1C008A05C (IrqArbGsivFromIrq.c)
 *     IcGetPossibleInput @ 0x1C008C3E4 (IcGetPossibleInput.c)
 *     IcIsInputValid @ 0x1C008CD84 (IcIsInputValid.c)
 *     LinkNodeGetPossibleGsiv @ 0x1C00A1CFC (LinkNodeGetPossibleGsiv.c)
 *     IrqArbIrqFromGsiv @ 0x1C00A22C8 (IrqArbIrqFromGsiv.c)
 *     IrqArbpAssignIrqFromLinkNode @ 0x1C00A24E8 (IrqArbpAssignIrqFromLinkNode.c)
 */

char __fastcall IrqArbpFindSuitableRangePci(__int64 a1, unsigned __int64 *a2)
{
  __int64 v3; // rdx
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx
  int v7; // edx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rcx
  __int16 v12; // r10
  bool v13; // zf
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // edx
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned int v20; // eax
  unsigned __int64 v21; // rbx
  int v22; // edx
  int v23; // edx
  unsigned __int64 v24; // rcx
  __int64 v25; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v26; // [rsp+78h] [rbp+10h] BYREF

  v25 = a1;
  if ( (int)LinkNodeCrackPrt(*(_QWORD *)(a2[4] + 32), &v25, &v26, 1) < 0 )
    return 0;
  if ( !v25 )
  {
    v4 = v26;
    if ( (int)IcGetPossibleInput(v26, v3, &v25) >= 0 && (v25 & 0xB) != 3 )
      return 0;
    v5 = a2[2];
    if ( v4 < v5 )
      return 0;
    v6 = a2[3];
    if ( v4 > v6 )
      return 0;
    if ( v5 <= v4 && v6 >= v4 )
    {
      if ( !IcIsInputValid(v4) )
        return 0;
      v8 = a2[5];
      *a2 = v4;
      a2[1] = v4;
      *(_QWORD *)(v8 + 16) = 1LL;
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_D(
        WPP_GLOBAL_Control->DeviceExtension,
        v7,
        20,
        25,
        (__int64)&WPP_3585a71d64e933af8fb821a0f1a30971_Traceguids,
        v4);
    }
    goto LABEL_10;
  }
  if ( (int)LinkNodeGetPossibleGsiv(v25, &v26) < 0 )
  {
    if ( (int)IrqArbpAssignIrqFromLinkNode(v19, a2, v19) < 0 )
      return 0;
    LODWORD(v4) = IrqArbGsivFromIrq(*(unsigned int *)a2);
LABEL_10:
    v9 = a2[5];
    v10 = a2[9];
    v11 = a2[4];
    v12 = *(_WORD *)(*(_QWORD *)(a2[7] + 40) + 4LL) & 1;
    v13 = (*(_BYTE *)(v9 + 36) & 1) == 0;
    v14 = *(_QWORD *)(v9 + 40);
    LODWORD(v25) = 0;
    v15 = *(_QWORD *)(v11 + 32);
    LODWORD(v25) = v12 & 1;
    if ( (int)((__int64 (__fastcall *)(__int64, __int64, unsigned __int64, __int64, _DWORD, _DWORD, bool, int))ProcessorFindIdtEntries)(
                v15,
                v14,
                v10,
                1LL,
                v4,
                (unsigned __int8)v25,
                !v13,
                1) >= 0 )
      return 1;
    LOBYTE(v16) = 2;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v16,
      20,
      26,
      (__int64)&WPP_3585a71d64e933af8fb821a0f1a30971_Traceguids);
    return 0;
  }
  v20 = IrqArbIrqFromGsiv(v26, v18);
  v21 = v20;
  LOBYTE(v22) = 4;
  WPP_RECORDER_SF_D(
    WPP_GLOBAL_Control->DeviceExtension,
    v22,
    20,
    23,
    (__int64)&WPP_3585a71d64e933af8fb821a0f1a30971_Traceguids,
    v20);
  if ( a2[2] <= v21 && a2[3] >= v21 )
  {
    v24 = a2[5];
    *a2 = v21;
    a2[1] = v21;
    *(_QWORD *)(v24 + 16) = 1LL;
    return 1;
  }
  LOBYTE(v23) = 4;
  WPP_RECORDER_SF_DD(
    WPP_GLOBAL_Control->DeviceExtension,
    v23,
    20,
    24,
    (__int64)&WPP_3585a71d64e933af8fb821a0f1a30971_Traceguids,
    *(_DWORD *)a2,
    *((_DWORD *)a2 + 2));
  return 0;
}
