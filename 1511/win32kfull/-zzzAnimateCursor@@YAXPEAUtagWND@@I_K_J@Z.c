/*
 * XREFs of ?zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C00EB900
 * Callers:
 *     ?AdjustRITDelayableTimers@@YAXH@Z @ 0x1C010B110 (-AdjustRITDelayableTimers@@YAXH@Z.c)
 * Callees:
 *     zzzUpdateCursorImage @ 0x1C0053910 (zzzUpdateCursorImage.c)
 *     FixupCursorForMonitor @ 0x1C0053C08 (FixupCursorForMonitor.c)
 *     SetDeepDelayableVisRITTimer @ 0x1C00EBA94 (SetDeepDelayableVisRITTimer.c)
 */

void __fastcall zzzAnimateCursor(struct tagWND *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rbx
  int v7; // edi
  int v8; // esi
  __int64 v9; // r9
  __int64 v10; // rcx
  unsigned int v11; // esi
  int v12; // r10d
  int v13; // r8d
  _QWORD v14[7]; // [rsp+20h] [rbp-38h] BYREF

  v4 = FixupCursorForMonitor(gpcurLogCurrent);
  v6 = v4;
  if ( v4 && (*(_DWORD *)(v4 + 80) & 8) != 0 && *(_QWORD *)(v4 + 112) )
  {
    if ( !gdwLastAniTick
      || (v5 = 100 * *(_DWORD *)(*(_QWORD *)(v4 + 112) + 4LL * *(int *)(v4 + 120)) / 6u,
          v7 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v5 - gdwLastAniTick,
          v7 < 0) )
    {
      v7 = 0;
    }
    v8 = *(_DWORD *)(v4 + 120) + 1;
    if ( v8 >= *(_DWORD *)(v4 + 92) )
      v8 = 0;
    *(_DWORD *)(v4 + 120) = v8;
    v14[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v14;
    v14[1] = v4;
    ++*(_DWORD *)(v4 + 8);
    if ( a3 )
      zzzUpdateCursorImage();
    v9 = *(_QWORD *)(v6 + 112);
    v10 = (unsigned int)(100 * *(_DWORD *)(v9 + 4LL * v8));
    LODWORD(v5) = (2863311531u * (unsigned __int64)(unsigned int)v10) >> 32;
    v11 = (unsigned int)v10 / 6;
    if ( (int)((unsigned int)v10 / 6) <= v7 )
    {
      v12 = *(_DWORD *)(v6 + 92);
      v13 = *(_DWORD *)(v6 + 120);
      do
      {
        v7 -= v11;
        if ( ++v13 >= v12 )
          v13 = 0;
        *(_DWORD *)(v6 + 120) = v13;
        v10 = (unsigned int)(100 * *(_DWORD *)(v9 + 4LL * v13));
        LODWORD(v5) = (2863311531u * (unsigned __int64)(unsigned int)v10) >> 32;
        v11 = (unsigned int)v10 / 6;
      }
      while ( (int)((unsigned int)v10 / 6) <= v7 );
    }
    ThreadUnlock1(v10, v5);
    gdwLastAniTick = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v7;
    gtmridAniCursor = SetDeepDelayableVisRITTimer((unsigned int)gdwLastAniTick, v11 - v7);
  }
  else
  {
    gdwLastAniTick = 0;
  }
}
