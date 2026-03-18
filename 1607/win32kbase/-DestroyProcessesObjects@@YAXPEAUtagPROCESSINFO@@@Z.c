/*
 * XREFs of ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C0038F60
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00131CC (xxxDestroyThreadInfo.c)
 * Callees:
 *     StopFade_0 @ 0x1C0001F38 (StopFade_0.c)
 *     IsZombieCursorSupported_0 @ 0x1C0002948 (IsZombieCursorSupported_0.c)
 *     ZombieCursor_0 @ 0x1C0002950 (ZombieCursor_0.c)
 *     HMAssignmentUnlock @ 0x1C0014330 (HMAssignmentUnlock.c)
 *     HMDestroyUnlockedObject @ 0x1C003A710 (HMDestroyUnlockedObject.c)
 *     HMChangeOwnerPheProcess @ 0x1C0076660 (HMChangeOwnerPheProcess.c)
 *     GreGetObjectOwner @ 0x1C0078980 (GreGetObjectOwner.c)
 *     FixupGlobalCursor @ 0x1C007E9A0 (FixupGlobalCursor.c)
 */

void __fastcall DestroyProcessesObjects(struct tagPROCESSINFO *a1)
{
  BOOL v2; // ebp
  char *v3; // rbx
  __int64 v4; // rsi
  _DWORD **v5; // rdi
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rdi
  unsigned __int8 v8; // cl
  char v9; // al
  unsigned int CurrentProcessId; // ebx

  v2 = *(_QWORD *)a1 == (_QWORD)gpepCSRSS;
  if ( qword_1C011BD88 )
  {
    CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
    if ( (unsigned int)GreGetObjectOwner(qword_1C011BD80, 1LL) == (CurrentProcessId & 0xFFFFFFFC) )
      StopFade_0();
  }
  v3 = (char *)&gcachedCaptions;
  v4 = 5LL;
  v5 = (_DWORD **)&gcachedCaptions;
  do
  {
    if ( *(_QWORD *)v3 && *(struct tagPROCESSINFO **)(*(_QWORD *)v3 + 24LL) == a1 )
      HMAssignmentUnlock(v5);
    v5 += 3;
    v3 += 24;
    --v4;
  }
  while ( v4 );
  v6 = qword_1C011A128;
  v7 = qword_1C011A128 + 24LL * (unsigned int)giheLast;
  if ( qword_1C011A128 <= v7 )
  {
    do
    {
      v8 = *(_BYTE *)(v6 + 16);
      if ( v8 && (*((_BYTE *)&unk_1C00FEE4C + 16 * v8) & 2) != 0 && *(struct tagPROCESSINFO **)(v6 + 8) == a1 )
      {
        if ( v2 && v8 == 3 )
          FixupGlobalCursor(*(_QWORD *)v6, a1);
        if ( (*(_BYTE *)(v6 + 17) & 1) == 0 )
          HMDestroyUnlockedObject(v6);
        v9 = *(_BYTE *)(v6 + 16);
        if ( v9 && gptiRit )
        {
          if ( v9 == 3 )
          {
            if ( (int)IsZombieCursorSupported_0() >= 0 )
              ZombieCursor_0();
          }
          else
          {
            HMChangeOwnerPheProcess(v6, gptiRit);
          }
        }
      }
      v6 += 24LL;
    }
    while ( v6 <= v7 );
  }
}
