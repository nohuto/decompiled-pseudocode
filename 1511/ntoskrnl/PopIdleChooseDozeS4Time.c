/*
 * XREFs of PopIdleChooseDozeS4Time @ 0x1401F3AE0
 * Callers:
 *     PopIdleArmAoAcDozeS4Timer @ 0x1401F3A18 (PopIdleArmAoAcDozeS4Timer.c)
 * Callees:
 *     <none>
 */

char __fastcall PopIdleChooseDozeS4Time(__int64 *a1, int *a2)
{
  char v2; // r11
  __int64 v3; // r9
  int v4; // r10d
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx

  v2 = 0;
  v3 = 0LL;
  v4 = 0;
  if ( qword_1402DEAE8 )
  {
    v7 = 10000000LL * (unsigned int)PopSmartUserPresenceGracePeriod;
    v3 = MEMORY[0xFFFFF78000000008] - qword_140305A08 <= v7 ? MEMORY[0xFFFFF78000000008] - qword_140305A08 - v7 : 0LL;
    if ( MEMORY[0xFFFFF78000000014] + v3 < qword_1402DEAE8
                                         - 10000000 * ((unsigned int)PopSmartUserPresenceWakeOffset + 60LL) )
    {
      v2 = 1;
      v4 = 2;
    }
  }
  v8 = *((unsigned int *)PopPolicy + 22);
  if ( (_DWORD)v8 && !v4 )
  {
    v3 = -10000000 * v8;
    v2 = 1;
    v4 = 1;
  }
  *a1 = v3;
  if ( a2 )
    *a2 = v4;
  return v2;
}
