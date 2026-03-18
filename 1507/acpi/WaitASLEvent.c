/*
 * XREFs of WaitASLEvent @ 0x1C004733C
 * Callers:
 *     Wait @ 0x1C0049870 (Wait.c)
 * Callees:
 *     QueueContext @ 0x1C00471D8 (QueueContext.c)
 */

__int64 __fastcall WaitASLEvent(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  KIRQL v8; // r14

  v3 = *(_DWORD *)(a1 + 64);
  v4 = 0;
  if ( (v3 & 4) != 0 )
  {
    v4 = 32773;
    *(_DWORD *)(a1 + 64) = v3 & 0xFFFFFFFB;
  }
  else
  {
    v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 16));
    if ( *(_DWORD *)a2 )
    {
      --*(_DWORD *)a2;
    }
    else
    {
      QueueContext(a1, a3, (_QWORD **)(a2 + 8));
      v4 = 32772;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 16), v8);
  }
  return v4;
}
