/*
 * XREFs of PopIdleChooseDozeS4Time @ 0x14020D3D8
 * Callers:
 *     PopIdleArmAoAcDozeS4Timer @ 0x14020D310 (PopIdleArmAoAcDozeS4Timer.c)
 * Callees:
 *     <none>
 */

char __fastcall PopIdleChooseDozeS4Time(__int64 *a1, int *a2)
{
  __int64 v3; // r9
  char v4; // r11
  int v5; // r10d
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx

  v3 = 0LL;
  v4 = 0;
  v5 = 0;
  if ( dword_1403032F0 )
  {
    LOBYTE(v5) = dword_1403032F0 != 1;
    v5 += 3;
LABEL_9:
    v4 = 1;
    goto LABEL_10;
  }
  if ( qword_1403032E8 > MEMORY[0xFFFFF78000000014] )
  {
    v7 = 10000000LL * (unsigned int)PopSmartUserPresenceGracePeriod;
    v3 = MEMORY[0xFFFFF78000000008] - qword_140303318 <= v7 ? MEMORY[0xFFFFF78000000008] - qword_140303318 - v7 : 0LL;
    if ( v3 + MEMORY[0xFFFFF78000000014] < qword_1403032E8
                                         - 10000000 * ((unsigned int)PopSmartUserPresenceWakeOffset + 60LL) )
    {
      v5 = 2;
      goto LABEL_9;
    }
  }
LABEL_10:
  v8 = *((unsigned int *)PopPolicy + 22);
  if ( (_DWORD)v8 && !v5 )
  {
    v3 = -10000000 * v8;
    v4 = 1;
    v5 = 1;
  }
  *a1 = v3;
  if ( a2 )
    *a2 = v5;
  return v4;
}
