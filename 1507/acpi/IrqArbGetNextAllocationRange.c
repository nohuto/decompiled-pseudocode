/*
 * XREFs of IrqArbGetNextAllocationRange @ 0x1C006DAE0
 * Callers:
 *     <none>
 * Callees:
 *     LinkNodeCrackPrt @ 0x1C00163F8 (LinkNodeCrackPrt.c)
 *     PcisuppIsPciDevice @ 0x1C006C42C (PcisuppIsPciDevice.c)
 *     IrqArbpFindBootConfig @ 0x1C006E200 (IrqArbpFindBootConfig.c)
 *     ArbGetNextAllocationRange @ 0x1C006EAA0 (ArbGetNextAllocationRange.c)
 *     IrqArbIrqFromGsiv @ 0x1C0080668 (IrqArbIrqFromGsiv.c)
 *     IrqArbpFindIrqInAlternatives @ 0x1C00809A0 (IrqArbpFindIrqInAlternatives.c)
 */

char __fastcall IrqArbGetNextAllocationRange(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int16 v6; // dx
  _DWORD *v7; // rdi
  __int64 v8; // rcx
  _QWORD *v9; // rcx
  __int64 v10; // rax
  char result; // al
  __int64 v12; // rcx
  __int64 v13; // r11
  __int64 v14; // r8
  __int64 v15; // r11
  __int64 v16; // [rsp+20h] [rbp-10h] BYREF
  unsigned int v17; // [rsp+58h] [rbp+28h] BYREF
  unsigned int v18; // [rsp+60h] [rbp+30h] BYREF
  int v19; // [rsp+68h] [rbp+38h] BYREF

  v3 = a2;
  v4 = *(_QWORD *)(a2[4] + 32LL);
  if ( *(PVOID *)(v4 + 8) == AcpiDriverObject && (**(_DWORD **)(v4 + 64) & 0x2000000) != 0 )
    return ArbGetNextAllocationRange(a1, a2);
  v5 = a2[5];
  if ( v5 )
    v6 = *(_WORD *)(*(_QWORD *)(v5 + 40) + 4LL);
  else
    v6 = *(_WORD *)(*(_QWORD *)(a2[7] + 40LL) + 4LL);
  if ( (v6 & 0x20) != 0 )
    goto LABEL_27;
  if ( (int)PcisuppIsPciDevice(v4, (bool *)&v17) < 0 )
    return 0;
  if ( !(_BYTE)v17 )
  {
LABEL_27:
    a2 = v3;
    return ArbGetNextAllocationRange(a1, a2);
  }
  v7 = (_DWORD *)v3[9];
  if ( !v3[5] )
    *v7 = 4096;
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( *v7 == 4096 )
          {
            if ( IrqArbGlobalDistributionDisposition == 1 )
            {
              *v7 = 4100;
            }
            else if ( IrqArbGlobalDistributionDisposition == 2 )
            {
              *v7 = 4098;
            }
            else
            {
              *v7 = 4097;
            }
          }
          if ( *v7 != 4097 )
            break;
          *v7 = 4099;
          if ( (int)LinkNodeCrackPrt(*(_QWORD *)(v3[4] + 32LL), &v16, &v19, 0) >= 0
            && v16
            && *(_DWORD *)(v16 + 40) != -1 )
          {
            v13 = (unsigned int)IrqArbIrqFromGsiv();
            v14 = v13;
            goto LABEL_40;
          }
        }
        v8 = (unsigned int)(*v7 - 4098);
        if ( *v7 != 4098 )
          break;
        *v7 = 4099;
        LODWORD(v13) = IrqArbGlobalStackingIrq;
        v14 = (unsigned int)IrqArbGlobalStackingIrq;
LABEL_40:
        v18 = v13;
        if ( (int)IrqArbpFindIrqInAlternatives(v8, v3, v14, &v17) >= 0 )
        {
          v3[5] = v3[7] + ((unsigned __int64)v17 << 6);
          v10 = v15;
LABEL_36:
          v3[2] = v10;
LABEL_16:
          v3[3] = v10;
          result = 1;
          ++IrqArbPciAlternativeRotation;
          return result;
        }
      }
      if ( *v7 != 4099 )
        break;
      *v7 = 4100;
      if ( (int)IrqArbpFindBootConfig(a1, v3, &v18) >= 0 && (int)IrqArbpFindIrqInAlternatives(v12, v3, v18, &v17) >= 0 )
      {
        v3[5] = v3[7] + ((unsigned __int64)v17 << 6);
        v10 = v18;
        goto LABEL_36;
      }
    }
    if ( *v7 == 4100 )
    {
      *v7 = 4101;
      v9 = (_QWORD *)v3[7];
      v3[5] = v9;
LABEL_15:
      v3[2] = *v9;
      v10 = v9[1];
      goto LABEL_16;
    }
  }
  while ( *v7 != 4101 );
  v3[5] += 64LL;
  v9 = (_QWORD *)v3[5];
  if ( (unsigned __int64)v9 < v3[7] + ((unsigned __int64)*((unsigned int *)v3 + 12) << 6) )
    goto LABEL_15;
  return 0;
}
