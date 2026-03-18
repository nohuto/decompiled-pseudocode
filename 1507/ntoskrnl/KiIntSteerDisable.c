/*
 * XREFs of KiIntSteerDisable @ 0x14014B080
 * Callers:
 *     KeDisconnectInterrupt @ 0x14014AF94 (KeDisconnectInterrupt.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiIntSteerLogState @ 0x140155CB8 (KiIntSteerLogState.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall KiIntSteerDisable(__int64 *a1, unsigned int a2)
{
  __int64 *v2; // rbx
  __int64 v3; // rsi
  _QWORD *v4; // rdi
  unsigned __int8 CurrentIrql; // bp
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rbx
  _QWORD *v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  unsigned __int16 v14; // r8
  unsigned __int64 v15; // r9
  int v16; // r10d
  unsigned int v17; // r10d
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = a1;
  v3 = a2;
  v4 = *(_QWORD **)(*a1 + 168);
  if ( v4 )
  {
    KiIntSteerLogState(*(_QWORD *)(*a1 + 168), &PPM_ETW_INTERRUPT_STEERING_STATE_DISCONNECT);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(&KiIntTrackSpinlock);
    }
    else if ( _interlockedbittestandset64((volatile signed __int32 *)&KiIntTrackSpinlock, 0LL) )
    {
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&KiIntTrackSpinlock);
    }
    if ( (_DWORD)v3 )
    {
      v6 = v3;
      do
      {
        v7 = *v2++;
        *(_QWORD *)(v7 + 168) = 0LL;
        --v6;
      }
      while ( v6 );
    }
    v8 = *v4;
    v9 = (_QWORD *)v4[2];
    v10 = (_QWORD *)v4[1];
    if ( *(_QWORD **)(*v4 + 8LL) != v4 || (_QWORD *)*v10 != v4 )
      __fastfail(3u);
    *v10 = v8;
    *(_QWORD *)(v8 + 8) = v10;
    ExFreePoolWithTag(v4, 0x6B725449u);
    if ( (_QWORD *)v9[2] == v9 + 2 )
    {
      --KiIntTrackRootCount;
      v11 = *v9;
      v12 = (_QWORD *)v9[1];
      if ( *(_QWORD **)(*v9 + 8LL) != v9 || (_QWORD *)*v12 != v9 )
        __fastfail(3u);
      *v12 = v11;
      *(_QWORD *)(v11 + 8) = v12;
      v13 = v9 + 8;
      if ( *((_DWORD *)v9 + 30) != 2 )
        v13 = v9 + 19;
      v14 = *((_WORD *)v13 + 4);
      v15 = *v13;
      v16 = v14;
LABEL_16:
      v17 = v16 + 1;
      while ( 1 )
      {
        if ( v15 )
        {
          _BitScanForward64(&v18, v15);
          v16 = v14;
          v15 &= ~(1LL << v18);
          v19 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * v14 + (unsigned __int8)v18]];
          --*(_DWORD *)(v19 + 11544);
          goto LABEL_16;
        }
        if ( ++v14 >= v17 )
          break;
        v15 = *(_QWORD *)(8LL * v14 + 8);
      }
      ExFreePoolWithTag(v9, 0x6B725449u);
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(&KiIntTrackSpinlock, retaddr);
    else
      _InterlockedAnd64(&KiIntTrackSpinlock, 0LL);
    __writecr8(CurrentIrql);
  }
  return 0LL;
}
