/*
 * XREFs of RtlFlsFree @ 0x180056650
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     RtlClearBits @ 0x180056780 (RtlClearBits.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 */

NTSTATUS __cdecl RtlFlsFree(ULONG FlsIndex)
{
  _PEB *ProcessEnvironmentBlock; // rsi
  _RTL_BITMAP *FlsBitmap; // rcx
  unsigned __int8 v4; // di
  struct _FLS_CALLBACK_INFO *FlsCallback; // rax
  __int64 v6; // r14
  __int64 v7; // r12
  void (__fastcall *v8)(_QWORD); // r15
  _LIST_ENTRY *i; // rbx

  if ( FlsIndex - 1 > 0x7E )
    return -1073741811;
  ProcessEnvironmentBlock = NtCurrentTeb()->ProcessEnvironmentBlock;
  RtlAcquireSRWLockExclusive(&RtlpFlsLock);
  FlsBitmap = (_RTL_BITMAP *)ProcessEnvironmentBlock->FlsBitmap;
  if ( FlsIndex >= FlsBitmap->SizeOfBitMap )
  {
    v4 = 0;
  }
  else
  {
    v4 = _bittest((const signed __int32 *)FlsBitmap->Buffer, FlsIndex);
    if ( v4 )
    {
      RtlClearBits(FlsBitmap, FlsIndex, 1u);
      FlsCallback = ProcessEnvironmentBlock->FlsCallback;
      v6 = 16LL * FlsIndex;
      v7 = FlsIndex;
      v8 = *(void (__fastcall **)(_QWORD))((char *)FlsCallback + v6);
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)((char *)FlsCallback + v6 + 8));
      for ( i = ProcessEnvironmentBlock->FlsListHead.Flink; i != &ProcessEnvironmentBlock->FlsListHead; i = i->Flink )
      {
        if ( v8 )
        {
          if ( *((_QWORD *)&i[1].Flink + v7) )
            v8(*((_QWORD *)&i[1].Flink + v7));
        }
        *((_QWORD *)&i[1].Flink + v7) = 0LL;
      }
      *(_QWORD *)((char *)ProcessEnvironmentBlock->FlsCallback + v6) = 0LL;
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)((char *)ProcessEnvironmentBlock->FlsCallback + v6 + 8));
    }
  }
  RtlReleaseSRWLockExclusive(&RtlpFlsLock);
  return v4 == 0 ? 0xC000000D : 0;
}
