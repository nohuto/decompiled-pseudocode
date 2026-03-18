/*
 * XREFs of IrqArbGetNextAllocationRange @ 0x1C008BE50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0004BB0 (WPP_RECORDER_SF_D.c)
 *     LinkNodeCrackPrt @ 0x1C0021C44 (LinkNodeCrackPrt.c)
 *     WPP_RECORDER_SF_xx @ 0x1C0022550 (WPP_RECORDER_SF_xx.c)
 *     PcisuppIsPciDevice @ 0x1C008A248 (PcisuppIsPciDevice.c)
 *     IrqArbpFindBootConfig @ 0x1C008C460 (IrqArbpFindBootConfig.c)
 *     ArbGetNextAllocationRange @ 0x1C008C960 (ArbGetNextAllocationRange.c)
 *     IrqArbIrqFromGsiv @ 0x1C00A22C8 (IrqArbIrqFromGsiv.c)
 *     IrqArbpFindIrqInAlternatives @ 0x1C00A2690 (IrqArbpFindIrqInAlternatives.c)
 */

char __fastcall IrqArbGetNextAllocationRange(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int16 v6; // dx
  _DWORD *v7; // rdi
  void *v8; // rdx
  int v9; // edx
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // rcx
  _QWORD *v13; // rcx
  __int64 v14; // rax
  char result; // al
  int BootConfig; // eax
  __int64 v17; // rcx
  int v18; // eax
  unsigned int v19; // r10d
  int IrqInAlternatives; // eax
  __int64 v21; // r11
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // r11
  int v25; // [rsp+20h] [rbp-30h]
  __int64 v26; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v27; // [rsp+78h] [rbp+28h] BYREF
  unsigned int v28; // [rsp+80h] [rbp+30h] BYREF
  int v29; // [rsp+88h] [rbp+38h] BYREF

  v3 = a2;
  v4 = *(_QWORD *)(a2[4] + 32LL);
  if ( *(PVOID *)(v4 + 8) == AcpiDriverObject && (*(_DWORD *)(*(_QWORD *)(v4 + 64) + 8LL) & 0x2000000) != 0 )
    return ArbGetNextAllocationRange(a1, a2);
  v5 = a2[5];
  if ( v5 )
    v6 = *(_WORD *)(*(_QWORD *)(v5 + 40) + 4LL);
  else
    v6 = *(_WORD *)(*(_QWORD *)(a2[7] + 40LL) + 4LL);
  if ( (v6 & 0x20) != 0 )
    goto LABEL_28;
  if ( (int)PcisuppIsPciDevice(v4, (bool *)&v27) < 0 )
    return 0;
  if ( !(_BYTE)v27 )
  {
LABEL_28:
    a2 = v3;
    return ArbGetNextAllocationRange(a1, a2);
  }
  v7 = (_DWORD *)v3[9];
  if ( !v3[5] )
    *v7 = 4096;
  do
  {
LABEL_9:
    v8 = &WPP_3585a71d64e933af8fb821a0f1a30971_Traceguids;
    while ( 1 )
    {
      while ( 1 )
      {
        LOBYTE(v8) = 4;
        WPP_RECORDER_SF_D(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)v8,
          20,
          10,
          (__int64)&WPP_3585a71d64e933af8fb821a0f1a30971_Traceguids,
          *v7);
        if ( *v7 == 4096 )
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
          goto LABEL_9;
        }
        if ( *v7 != 4097 )
          break;
        *v7 = 4099;
        v18 = LinkNodeCrackPrt(*(_QWORD *)(v3[4] + 32LL), &v26, &v29, 0);
        v8 = &WPP_3585a71d64e933af8fb821a0f1a30971_Traceguids;
        if ( v18 >= 0 )
        {
          v8 = &WPP_3585a71d64e933af8fb821a0f1a30971_Traceguids;
          if ( v26 )
          {
            v23 = *(unsigned int *)(v26 + 40);
            v8 = &WPP_3585a71d64e933af8fb821a0f1a30971_Traceguids;
            if ( (_DWORD)v23 != -1 )
            {
              v21 = (unsigned int)IrqArbIrqFromGsiv(v23, &WPP_3585a71d64e933af8fb821a0f1a30971_Traceguids);
              v22 = v21;
LABEL_41:
              v28 = v21;
              if ( (int)IrqArbpFindIrqInAlternatives(v12, v3, v22, &v27) >= 0 )
              {
                v3[5] = v3[7] + ((unsigned __int64)v27 << 6);
                v14 = v24;
                goto LABEL_37;
              }
              goto LABEL_9;
            }
          }
        }
      }
      v12 = (unsigned int)(*v7 - 4098);
      if ( *v7 == 4098 )
      {
        *v7 = 4099;
        LODWORD(v21) = IrqArbGlobalStackingIrq;
        v22 = (unsigned int)IrqArbGlobalStackingIrq;
        goto LABEL_41;
      }
      if ( *v7 != 4099 )
        break;
      *v7 = 4100;
      BootConfig = IrqArbpFindBootConfig(a1, v3, &v28);
      v8 = &WPP_3585a71d64e933af8fb821a0f1a30971_Traceguids;
      if ( BootConfig >= 0 )
      {
        IrqInAlternatives = IrqArbpFindIrqInAlternatives(v17, v3, v28, &v27);
        if ( IrqInAlternatives >= 0 )
        {
          v3[5] = v3[7] + ((unsigned __int64)v27 << 6);
          v14 = v28;
LABEL_37:
          v3[2] = v14;
          goto LABEL_17;
        }
        goto LABEL_9;
      }
    }
    if ( *v7 == 4100 )
    {
      *v7 = 4101;
      v13 = (_QWORD *)v3[7];
      v3[5] = v13;
      goto LABEL_16;
    }
  }
  while ( *v7 != 4101 );
  v19 = *((_DWORD *)v3 + 12);
  v3[5] += 64LL;
  if ( v3[5] < v3[7] + ((unsigned __int64)v19 << 6) )
  {
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_D(
      WPP_GLOBAL_Control->DeviceExtension,
      v9,
      20,
      11,
      (__int64)&WPP_3585a71d64e933af8fb821a0f1a30971_Traceguids,
      v19);
    v13 = (_QWORD *)v3[5];
LABEL_16:
    v3[2] = *v13;
    v14 = v13[1];
LABEL_17:
    v3[3] = v14;
    WPP_RECORDER_SF_xx(WPP_GLOBAL_Control->DeviceExtension, v9, v10, v11, v25, v3[2], v14);
    result = 1;
    ++IrqArbPciAlternativeRotation;
    return result;
  }
  return 0;
}
