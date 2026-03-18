/*
 * XREFs of IcCopyInputStateToDeviceState @ 0x1C006C134
 * Callers:
 *     IrqArbCommitAllocation @ 0x1C006C260 (IrqArbCommitAllocation.c)
 *     AcpiIrqLibSetupSciInterrupt @ 0x1C006F918 (AcpiIrqLibSetupSciInterrupt.c)
 * Callees:
 *     IrqArbGsivFromIrq @ 0x1C006C23C (IrqArbGsivFromIrq.c)
 */

NTSTATUS __fastcall IcCopyInputStateToDeviceState(__int64 a1, int a2)
{
  struct _RTL_RANGE_LIST *v2; // rcx
  NTSTATUS result; // eax
  PRTL_RANGE i; // rcx
  _DWORD *UserData; // r8
  unsigned int v6; // eax
  _OWORD *v7; // r8
  __int64 j; // rdx
  __int64 v9; // rcx
  unsigned int v10; // ecx
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+20h] [rbp-28h] BYREF
  PRTL_RANGE Range; // [rsp+68h] [rbp+20h] BYREF

  if ( a2 == 1 )
    v2 = *(struct _RTL_RANGE_LIST **)(a1 + 48);
  else
    v2 = *(struct _RTL_RANGE_LIST **)(a1 + 40);
  result = RtlGetFirstRange(v2, &Iterator, &Range);
  for ( i = Range; Range; i = Range )
  {
    if ( i->Owner )
    {
      if ( (i->Attributes & 1) == 0 )
      {
        UserData = i->UserData;
        if ( UserData )
        {
          if ( (unsigned int)(UserData[2] - 1) <= 1 )
          {
            v6 = IrqArbGsivFromIrq(i->Start);
            for ( j = IcListHead; &IcListHead != (__int64 *)j; j = *(_QWORD *)j )
            {
              if ( *(int *)(j + 28) >= 0 )
              {
                v10 = *(_DWORD *)(j + 16);
                if ( v10 <= v6 && *(_DWORD *)(j + 20) >= v6 )
                {
                  v9 = 184LL * (v6 - v10);
                  v7[3] = *(_OWORD *)(v9 + j + 128);
                  v7[4] = *(_OWORD *)(v9 + j + 144);
                  v7[5] = *(_OWORD *)(v9 + j + 160);
                  v7[6] = *(_OWORD *)(v9 + j + 176);
                  v7[7] = *(_OWORD *)(v9 + j + 192);
                }
              }
            }
          }
        }
      }
    }
    result = RtlGetNextRange(&Iterator, &Range, 1u);
  }
  return result;
}
