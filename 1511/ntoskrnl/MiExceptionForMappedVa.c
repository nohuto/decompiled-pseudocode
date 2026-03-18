/*
 * XREFs of MiExceptionForMappedVa @ 0x1401CE990
 * Callers:
 *     MiWaitForInPageComplete @ 0x140039E00 (MiWaitForInPageComplete.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14000A410 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x140079490 (ExAcquireSpinLockShared.c)
 */

__int64 __fastcall MiExceptionForMappedVa(unsigned __int64 a1)
{
  volatile LONG *v2; // rdi
  unsigned int v3; // ebx
  _QWORD *v4; // rsi
  _KPROCESS *Process; // rbp
  KIRQL v6; // al
  __int64 **v7; // rdx
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rax

  v2 = &dword_1402FFA80;
  v3 = 0;
  v4 = &unk_1402FE5C0;
  Process = KeGetCurrentThread()->ApcState.Process;
  while ( 2 )
  {
    v6 = ExAcquireSpinLockShared(v2);
    v7 = (__int64 **)v4[2];
    while ( v7 )
    {
      v8 = (unsigned __int64)v7[10] & 0xFFFFFFFFFFFFF000uLL;
      if ( a1 >= (unsigned __int64)v7[4] + v8 )
      {
        v7 = (__int64 **)v7[1];
      }
      else
      {
        if ( a1 >= v8 )
        {
          if ( ((_BYTE)v7[6] & 2) != 0 )
            v3 = 1;
          ExReleaseSpinLockShared(v2, v6);
          return v3;
        }
        v7 = (__int64 **)*v7;
      }
    }
    ExReleaseSpinLockShared(v2, v6);
    if ( v4 == (_QWORD *)&unk_1402FE5C0 )
    {
      v9 = Process[1].ActiveProcessors.Bitmap[2];
      if ( v9 )
      {
        if ( Process != PsInitialSystemProcess )
        {
          v2 = (volatile LONG *)(v9 + 2968);
          v4 = (_QWORD *)(v9 + 2880);
          continue;
        }
      }
    }
    break;
  }
  return v3;
}
