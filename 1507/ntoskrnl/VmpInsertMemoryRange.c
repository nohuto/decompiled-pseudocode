/*
 * XREFs of VmpInsertMemoryRange @ 0x14025B908
 * Callers:
 *     VmCreateMemoryRange @ 0x1406DE920 (VmCreateMemoryRange.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     RtlRbInsertNodeEx @ 0x1400F70F0 (RtlRbInsertNodeEx.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     VmpProcessMemoryRangeCompareGpn @ 0x14025BBA8 (VmpProcessMemoryRangeCompareGpn.c)
 *     VmpProcessMemoryRangeCompareGpnRange @ 0x14025BBC0 (VmpProcessMemoryRangeCompareGpnRange.c)
 *     VmpProcessMemoryRangeCompareVpn @ 0x14025BBE0 (VmpProcessMemoryRangeCompareVpn.c)
 *     VmpProcessMemoryRangeCompareVpnRange @ 0x14025BBF8 (VmpProcessMemoryRangeCompareVpnRange.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall VmpInsertMemoryRange(__int64 a1, _RTL_BALANCED_NODE *a2, __int64 a3)
{
  __int64 v3; // rsi
  unsigned __int8 CurrentIrql; // bp
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  _RTL_BALANCED_NODE **v9; // r14
  _QWORD *v10; // rdi
  int v11; // eax
  unsigned int v12; // edi
  signed __int32 v13; // eax
  unsigned int v14; // edi
  _RTL_BALANCED_NODE **v15; // rbp
  _QWORD *v16; // rdi
  int v17; // eax
  _RTL_BALANCED_NODE *v18; // rdi
  _RTL_BALANCED_NODE *v19; // rax
  _RTL_BALANCED_NODE *v20; // rdi
  BOOLEAN v21; // r8
  _RTL_BALANCED_NODE *v22; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v3 = a3;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1);
  }
  else
  {
    v12 = 0;
    if ( _interlockedbittestandset((volatile signed __int32 *)a1, 0x1Fu) )
      v12 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)a1);
    while ( 1 )
    {
      v13 = *(_DWORD *)a1;
      if ( (*(_DWORD *)a1 & 0xBFFFFFFF) == 0x80000000 )
        break;
      if ( (v13 & 0x40000000) == 0 )
        _InterlockedCompareExchange((volatile signed __int32 *)a1, v13 | 0x40000000, v13);
      if ( (++v12 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v12);
    }
  }
  v7 = *(_QWORD *)(a1 + 48);
  v8 = CurrentIrql;
  if ( v7 == -1 )
  {
    *(_QWORD *)(a1 + 48) = v3;
  }
  else if ( v7 != v3 )
  {
    v14 = -1073740007;
    goto LABEL_46;
  }
  v9 = (_RTL_BALANCED_NODE **)(a1 + 8);
  v10 = *(_QWORD **)(a1 + 8);
  if ( v10 )
  {
    do
    {
      v11 = VmpProcessMemoryRangeCompareGpnRange(a2, v10);
      if ( v11 >= 0 )
      {
        if ( v11 <= 0 )
          break;
        v10 = (_QWORD *)v10[1];
      }
      else
      {
        v10 = (_QWORD *)*v10;
      }
    }
    while ( v10 );
    if ( v10 )
      goto LABEL_23;
  }
  v15 = (_RTL_BALANCED_NODE **)(a1 + 24);
  v16 = *(_QWORD **)(a1 + 24);
  if ( v16 )
  {
    do
    {
      v17 = VmpProcessMemoryRangeCompareVpnRange(a2, v16);
      if ( v17 >= 0 )
      {
        if ( v17 <= 0 )
          break;
        v16 = (_QWORD *)v16[1];
      }
      else
      {
        v16 = (_QWORD *)*v16;
      }
    }
    while ( v16 );
    if ( v16 )
    {
LABEL_23:
      v14 = -1073741800;
      goto LABEL_46;
    }
  }
  v18 = *v9;
  LOBYTE(a3) = 0;
  if ( *v9 )
  {
    while ( 1 )
    {
      if ( (int)VmpProcessMemoryRangeCompareGpn(&a2[2], v18, a3) < 0 )
      {
        v19 = v18->Children[0];
        if ( !v18->Children[0] )
        {
          LOBYTE(a3) = 0;
          break;
        }
      }
      else
      {
        v19 = v18->Children[1];
        if ( !v19 )
        {
          LOBYTE(a3) = 1;
          break;
        }
      }
      v18 = v19;
    }
  }
  RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 8), v18, a3, a2 + 1);
  v20 = *v15;
  v21 = 0;
  if ( !*v15 )
    goto LABEL_45;
  while ( (int)VmpProcessMemoryRangeCompareVpn(&a2[2].16, v20) >= 0 )
  {
    v22 = v20->Children[1];
    if ( !v22 )
    {
      v21 = 1;
      goto LABEL_45;
    }
LABEL_43:
    v20 = v22;
  }
  v22 = v20->Children[0];
  if ( v20->Children[0] )
    goto LABEL_43;
  v21 = 0;
LABEL_45:
  RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 24), v20, v21, a2);
  v14 = 0;
LABEL_46:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(a1, retaddr);
  else
    *(_DWORD *)a1 = 0;
  __writecr8(v8);
  return v14;
}
