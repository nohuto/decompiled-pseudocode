/*
 * XREFs of ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C00519E0
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C004DF98 (xxxDestroyThreadInfo.c)
 * Callees:
 *     StopFade_0 @ 0x1C00023B0 (StopFade_0.c)
 *     IsZombieCursorSupported_0 @ 0x1C0002918 (IsZombieCursorSupported_0.c)
 *     ZombieCursor_0 @ 0x1C0002920 (ZombieCursor_0.c)
 *     GreGetObjectOwner @ 0x1C0011090 (GreGetObjectOwner.c)
 *     HMAssignmentUnlock @ 0x1C004EFD0 (HMAssignmentUnlock.c)
 *     HMDestroyUnlockedObject @ 0x1C004F7B0 (HMDestroyUnlockedObject.c)
 *     HMChangeOwnerPheProcess @ 0x1C0069DC0 (HMChangeOwnerPheProcess.c)
 *     FixupGlobalCursor @ 0x1C006DF60 (FixupGlobalCursor.c)
 */

void __fastcall DestroyProcessesObjects(struct tagPROCESSINFO *a1)
{
  BOOL v2; // r14d
  unsigned int CurrentProcessId; // ebx
  char *v4; // rbx
  __int64 v5; // rsi
  _DWORD **v6; // rdi
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rdi
  unsigned __int8 v9; // cl
  char v10; // al

  v2 = *(_QWORD *)a1 == (_QWORD)gpepCSRSS;
  if ( qword_1C0104198 )
  {
    CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
    if ( (unsigned int)GreGetObjectOwner((int)qword_1C0104190, 1) == (CurrentProcessId & 0xFFFFFFFC) )
      StopFade_0();
  }
  v4 = (char *)&gcachedCaptions;
  v5 = 5LL;
  v6 = (_DWORD **)&gcachedCaptions;
  do
  {
    if ( *(_QWORD *)v4 && *(struct tagPROCESSINFO **)(*(_QWORD *)v4 + 24LL) == a1 )
      HMAssignmentUnlock(v6);
    v6 += 3;
    v4 += 24;
    --v5;
  }
  while ( v5 );
  v7 = qword_1C01003E8;
  v8 = qword_1C01003E8 + 24LL * (unsigned int)giheLast;
  if ( qword_1C01003E8 <= v8 )
  {
    do
    {
      v9 = *(_BYTE *)(v7 + 16);
      if ( v9 && (*((_BYTE *)&unk_1C00E9F6C + 16 * v9) & 2) != 0 && *(struct tagPROCESSINFO **)(v7 + 8) == a1 )
      {
        if ( v2 && v9 == 3 )
          FixupGlobalCursor(*(_QWORD *)v7, a1);
        if ( (*(_BYTE *)(v7 + 17) & 1) == 0 )
          HMDestroyUnlockedObject((unsigned __int8 *)v7);
        v10 = *(_BYTE *)(v7 + 16);
        if ( v10 && gptiRit )
        {
          if ( v10 == 3 )
          {
            if ( (int)IsZombieCursorSupported_0() >= 0 )
              ZombieCursor_0();
          }
          else
          {
            HMChangeOwnerPheProcess(v7, gptiRit);
          }
        }
      }
      v7 += 24LL;
    }
    while ( v7 <= v8 );
  }
}
