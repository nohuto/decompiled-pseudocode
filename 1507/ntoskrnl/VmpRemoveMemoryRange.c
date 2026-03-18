/*
 * XREFs of VmpRemoveMemoryRange @ 0x14025BC74
 * Callers:
 *     VmDeleteMemoryRange @ 0x1406DEA9C (VmDeleteMemoryRange.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     RtlRbRemoveNode @ 0x1400F6290 (RtlRbRemoveNode.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     VmpProcessInvalidateSlat @ 0x14025BB7C (VmpProcessInvalidateSlat.c)
 *     VmpProcessMemoryRangeCompareGpn @ 0x14025BBA8 (VmpProcessMemoryRangeCompareGpn.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VmpRemoveMemoryRange(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned __int64 *v6; // r14
  unsigned __int8 CurrentIrql; // r15
  unsigned int v8; // edi
  unsigned int v9; // edi
  signed __int32 v10; // eax
  unsigned __int64 *v11; // rdi
  int v12; // eax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r8
  void *retaddr; // [rsp+38h] [rbp+0h]

  v6 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1);
  }
  else
  {
    v9 = 0;
    if ( _interlockedbittestandset((volatile signed __int32 *)a1, 0x1Fu) )
      v9 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)a1);
    while ( 1 )
    {
      v10 = *(_DWORD *)a1;
      if ( (*(_DWORD *)a1 & 0xBFFFFFFF) == 0x80000000 )
        break;
      if ( (v10 & 0x40000000) == 0 )
        _InterlockedCompareExchange((volatile signed __int32 *)a1, v10 | 0x40000000, v10);
      if ( (++v9 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v9);
    }
  }
  if ( *(_QWORD *)(a1 + 48) == a3 )
  {
    v11 = *(unsigned __int64 **)(a1 + 8);
    if ( !v11 )
      goto LABEL_29;
    do
    {
      v12 = VmpProcessMemoryRangeCompareGpn(a2 + 6, (__int64)v11);
      if ( v12 >= 0 )
      {
        if ( v12 <= 0 )
          break;
        v11 = (unsigned __int64 *)v11[1];
      }
      else
      {
        v11 = (unsigned __int64 *)*v11;
      }
    }
    while ( v11 );
    if ( v11 )
    {
      v13 = v11[3];
      if ( v13 == a2[6] && (v14 = v11[4], v14 == a2[7]) && v11[5] == a2[8] && v11[6] == a2[9] )
      {
        VmpProcessInvalidateSlat(a1, v13, v14 - v13 + 1);
        RtlRbRemoveNode((unsigned __int64 *)(a1 + 8), v11);
        RtlRbRemoveNode((unsigned __int64 *)(a1 + 24), v11 - 3);
        if ( !*(_QWORD *)(a1 + 8) )
          *(_QWORD *)(a1 + 48) = -1LL;
        v6 = v11 - 3;
        v8 = 0;
      }
      else
      {
        v8 = -1073741637;
      }
    }
    else
    {
LABEL_29:
      v8 = -1073741172;
    }
  }
  else
  {
    v8 = -1073740007;
  }
  if ( CurrentIrql != -1LL )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(a1, retaddr);
    else
      *(_DWORD *)a1 = 0;
    __writecr8(CurrentIrql);
  }
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return v8;
}
