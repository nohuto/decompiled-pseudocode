/*
 * XREFs of MiReferenceInPageFile @ 0x140039C9C
 * Callers:
 *     MiIssueHardFault @ 0x140039650 (MiIssueHardFault.c)
 *     MiPfExecuteReadList @ 0x1403F70AC (MiPfExecuteReadList.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14000A410 (ExReleaseSpinLockShared.c)
 *     ObFastReferenceObjectLocked @ 0x14000D5AC (ObFastReferenceObjectLocked.c)
 *     MiComputeImagePteIndex @ 0x14003906C (MiComputeImagePteIndex.c)
 *     ObFastReferenceObject @ 0x140043350 (ObFastReferenceObject.c)
 *     MiCanPageMove @ 0x1400712E0 (MiCanPageMove.c)
 *     ExAcquireSpinLockShared @ 0x140079490 (ExAcquireSpinLockShared.c)
 */

unsigned __int64 __fastcall MiReferenceInPageFile(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbp
  unsigned __int64 v5; // r14
  __int64 v7; // rax
  _QWORD *v8; // rdi
  __int64 v9; // rbx
  KIRQL v10; // bl
  int CanPageMove; // eax
  char v12; // r9

  v2 = *(_QWORD *)(a1 + 200);
  if ( !v2 )
    return 0LL;
  v5 = ObFastReferenceObject(v2 + 64);
  if ( !v5 )
  {
    v10 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v2 + 72));
    v5 = ObFastReferenceObjectLocked((_QWORD *)(v2 + 64));
    ExReleaseSpinLockShared((PEX_SPIN_LOCK)(v2 + 72), v10);
  }
  if ( (*(_DWORD *)(v2 + 56) & 0x20) != 0 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v2 + 104));
    v7 = *(_QWORD *)(a1 + 248);
    v8 = *(_QWORD **)(v2 + 96);
    if ( !v7 )
      v7 = a1 + 256;
    v9 = 48LL * *(_QWORD *)(v7 + 48) - 0x58000000000LL;
    *(_DWORD *)(a1 + 184) = MiComputeImagePteIndex(v9, a2);
    if ( *v8 )
    {
      *(_BYTE *)(a1 + 190) |= 8u;
      if ( (MiFlags & 0x40000) != 0 )
      {
        CanPageMove = MiCanPageMove(v9);
        if ( !CanPageMove
          || (*(_DWORD *)(v2 + 92) & 0xC000000) != 0 && (((unsigned __int8)*(_DWORD *)(v9 + 16) >> 5) & 2) != 0 )
        {
          *(_BYTE *)(a1 + 190) = v12 & 0xF7;
        }
      }
    }
  }
  else
  {
    *(_QWORD *)(a1 + 200) = 0LL;
  }
  return v5;
}
