/*
 * XREFs of ?RegisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C0041FF0
 * Callers:
 *     HMDestroyUnlockedObject @ 0x1C0041660 (HMDestroyUnlockedObject.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041FD0 (--0UserAtomicCheck@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall UserAtomicCheck::RegisterStack(UserAtomicCheck *this)
{
  unsigned int v2; // eax
  _DWORD *i; // rcx
  unsigned __int64 v4; // rbx

  if ( gpAtomickCheckStacks )
  {
    *((_DWORD *)this + 1) = ++gdwAtomicCheckSerial;
    v2 = 0;
    if ( gdwAtomicCheckLogSize )
    {
      for ( i = (_DWORD *)gpAtomickCheckStacks; *i; i += 16 )
      {
        if ( ++v2 >= gdwAtomicCheckLogSize )
          return;
      }
      v4 = (unsigned __int64)v2 << 6;
      *(_DWORD *)(v4 + gpAtomickCheckStacks) = *((_DWORD *)this + 1);
      *(_DWORD *)(v4 + gpAtomickCheckStacks + 4) = (unsigned int)PsGetCurrentThreadId();
      *(_DWORD *)(v4 + gpAtomickCheckStacks + 8) = (MEMORY[0xFFFFF78000000320]
                                                  * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      RtlWalkFrameChain((PVOID *)(v4 + gpAtomickCheckStacks + 16), 6u, 0x200u);
    }
  }
}
