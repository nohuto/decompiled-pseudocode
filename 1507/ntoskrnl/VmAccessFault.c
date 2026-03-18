/*
 * XREFs of VmAccessFault @ 0x14025B4F8
 * Callers:
 *     <none>
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     VmpProcessUpdateSlat @ 0x14025BC18 (VmpProcessUpdateSlat.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     MmVirtualAccessFault @ 0x1406A5A9C (MmVirtualAccessFault.c)
 */

__int64 __fastcall VmAccessFault(unsigned __int64 a1, unsigned __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned __int64 v4; // r12
  _QWORD *v7; // rbx
  int updated; // edi
  unsigned int v9; // esi
  __int64 v10; // r15
  unsigned __int8 CurrentIrql; // di
  signed __int32 v12; // ett
  unsigned __int64 v13; // rbp
  void *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF
  __int64 v17; // [rsp+78h] [rbp+20h]

  v17 = a4;
  v4 = a1 >> 12;
  v7 = (_QWORD *)KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[11];
  if ( v7 )
  {
    if ( a2 <= (unsigned __int64)MmHighestUserAddress )
    {
      v9 = (a3 & 1) != 0;
      if ( (a3 & 2) != 0 )
        v9 |= 2u;
      if ( (a3 & 4) != 0 )
        v9 |= 4u;
      while ( 1 )
      {
        do
        {
          v10 = v7[5];
          updated = MmVirtualAccessFault(a2, v9, &v16);
          if ( updated < 0 )
            return (unsigned int)updated;
        }
        while ( v10 != v7[5] );
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v7);
        }
        else
        {
          _m_prefetchw(v7);
          v12 = *(_DWORD *)v7 & 0x7FFFFFFF;
          if ( v12 != _InterlockedCompareExchange((volatile signed __int32 *)v7, v12 + 1, v12) )
            ExpWaitForSpinLockSharedAndAcquire((volatile signed __int32 *)v7);
        }
        v13 = CurrentIrql;
        if ( v7[6] != v17 )
          break;
        if ( v10 == v7[5] )
        {
          updated = VmpProcessUpdateSlat(v7, v4, v16, a3);
          if ( updated >= 0 )
            updated = 0;
          goto LABEL_25;
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v7, retaddr);
        }
        else
        {
          _InterlockedAnd((volatile signed __int32 *)v7, 0xBFFFFFFF);
          _InterlockedDecrement((volatile signed __int32 *)v7);
        }
        __writecr8(CurrentIrql);
      }
      updated = -1073741558;
LABEL_25:
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v7, retaddr);
      }
      else
      {
        _InterlockedAnd((volatile signed __int32 *)v7, 0xBFFFFFFF);
        _InterlockedDecrement((volatile signed __int32 *)v7);
      }
      __writecr8(v13);
      return (unsigned int)updated;
    }
    return (unsigned int)-1073741819;
  }
  else
  {
    return (unsigned int)-1073741688;
  }
}
