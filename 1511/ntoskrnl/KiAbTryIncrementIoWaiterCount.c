/*
 * XREFs of KiAbTryIncrementIoWaiterCount @ 0x140031E90
 * Callers:
 *     KiAbProcessThreadLocks @ 0x14003203C (KiAbProcessThreadLocks.c)
 *     KiAbProcessContextSwitch @ 0x140083550 (KiAbProcessContextSwitch.c)
 * Callees:
 *     PsGetIoPriorityThread @ 0x140070170 (PsGetIoPriorityThread.c)
 */

__int64 __fastcall KiAbTryIncrementIoWaiterCount(unsigned __int8 *a1, __int64 a2)
{
  unsigned int v2; // r8d
  int IoPriorityThread; // eax
  __int64 v5; // r10
  _BYTE *v6; // r11

  v2 = 0;
  if ( (a1[27] & 2) == 0 && (a1[25] & 1) != 0 )
  {
    IoPriorityThread = PsGetIoPriorityThread(&a1[-(unsigned __int16)(16 * a1[24])]);
    if ( IoPriorityThread >= 2 )
      goto LABEL_4;
    if ( *(_DWORD *)(v5 + 1788) != v2 )
      IoPriorityThread = 2;
    if ( IoPriorityThread >= 2 )
    {
LABEL_4:
      ++*(_WORD *)(a2 + 90);
      *v6 |= 2u;
      LOBYTE(v2) = *(_WORD *)(a2 + 90) == 1;
    }
  }
  return v2;
}
