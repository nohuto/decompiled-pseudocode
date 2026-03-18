/*
 * XREFs of ?xxxCleanupManipulationThread@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C0132C4C
 * Callers:
 *     xxxCleanupThreadPointerInputInfo @ 0x1C0093620 (xxxCleanupThreadPointerInputInfo.c)
 * Callees:
 *     PopW32ThreadLock @ 0x1C005BC70 (PopW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     ?IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01DB140 (-IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?IsManipulationThreadNode@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01F8A30 (-IsManipulationThreadNode@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?GetPrevMTNodeTarget@@YAPEAUtagWND@@PEAUtagPOINTERINFONODE@@PEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C022F71C (-GetPrevMTNodeTarget@@YAPEAUtagWND@@PEAUtagPOINTERINFONODE@@PEAUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?ProcessLostCaptureList@@YAXGHPEBUtagPOINTERINPUTFRAME@@KK@Z @ 0x1C022FB64 (-ProcessLostCaptureList@@YAXGHPEBUtagPOINTERINPUTFRAME@@KK@Z.c)
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C023090C (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
 *     xxxSetManipulationInputTarget @ 0x1C0230EE8 (xxxSetManipulationInputTarget.c)
 */

void __fastcall xxxCleanupManipulationThread(struct tagTHREADINFO *a1)
{
  struct tagPOINTERINPUTFRAME *v1; // rbx
  struct tagPOINTERINPUTFRAME *v2; // r13
  __int64 v3; // r15
  __int64 v4; // rbp
  __int64 i; // rdi
  __int64 v6; // r14
  __int64 v7; // rsi
  const struct tagPOINTERINFONODE *v8; // rcx
  struct tagPOINTERINFONODE *v9; // rcx
  struct tagWND *PrevMTNodeTarget; // rax
  __int64 v11; // rax
  __int64 j; // rsi
  __int64 v13; // rbp
  unsigned int v14; // edx
  __int64 k; // r14
  __int64 v16; // rax
  _QWORD v17[3]; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v18[3]; // [rsp+48h] [rbp-60h] BYREF
  _QWORD v19[4]; // [rsp+60h] [rbp-48h] BYREF

  v1 = qword_1C03254F0;
  while ( v1 != (struct tagPOINTERINPUTFRAME *)&gFrameListHead )
  {
    v2 = v1;
    _InterlockedIncrement((volatile signed __int32 *)v1 + 5);
    v3 = Win32AllocPoolZInit(4LL * *((unsigned int *)v1 + 6), 1851878741LL);
    v4 = 0LL;
    for ( i = Win32AllocPoolZInit(4LL * *((unsigned int *)v1 + 6), 1851878741LL);
          (unsigned int)v4 < *((_DWORD *)v1 + 6);
          v4 = (unsigned int)(v4 + 1) )
    {
      v6 = 216LL * (unsigned int)v4;
      v7 = v6 + *((_QWORD *)v1 + 9);
      if ( (unsigned int)IsPointerInfoNodeValid((const struct tagPOINTERINFONODE *)v7)
        && (unsigned int)IsManipulationThreadNode(v8)
        && (*(_DWORD *)(v7 + 4) & 0x100) == 0 )
      {
        if ( v3 && i && (PrevMTNodeTarget = GetPrevMTNodeTarget(v9, v1)) != 0LL )
        {
          *(_QWORD *)(v7 + 80) = *(_QWORD *)PrevMTNodeTarget;
          *(_DWORD *)(i + 4 * v4) = 1;
        }
        else
        {
          if ( (*(_DWORD *)(v7 + 68) & 0x40000) != 0 )
            ProcessLostCaptureList(
              *(_WORD *)(v7 + 60),
              1,
              v1,
              v4,
              (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
          v11 = *((_QWORD *)v1 + 9);
          *(_DWORD *)(v6 + v11) |= 0x1000u;
          *(_QWORD *)(v6 + v11 + 16) = 0LL;
          ++*((_DWORD *)v1 + 7);
        }
      }
    }
    if ( v3 )
    {
      if ( i )
      {
        for ( j = 0LL; (unsigned int)j < *((_DWORD *)v1 + 6); j = (unsigned int)(j + 1) )
        {
          if ( *(_DWORD *)(i + 4 * j) )
          {
            v13 = 0LL;
            v14 = j;
            for ( k = *(_QWORD *)(216LL * (unsigned int)j + *((_QWORD *)v1 + 9) + 80); v14 < *((_DWORD *)v1 + 6); ++v14 )
            {
              v16 = *((_QWORD *)v1 + 9) + 216LL * v14;
              if ( *(_DWORD *)(i + 4LL * v14) && *(_QWORD *)(v16 + 80) == k )
              {
                *(_DWORD *)(v3 + 4 * v13) = *(unsigned __int16 *)(v16 + 60);
                v13 = (unsigned int)(v13 + 1);
                *(_DWORD *)(i + 4LL * v14) = 0;
              }
            }
            PushW32ThreadLock(v3, v19, (__int64)Win32FreePool);
            PushW32ThreadLock(i, v18, (__int64)Win32FreePool);
            PushW32ThreadLock((__int64)v1, v17, (__int64)DereferencePointerInputFrame);
            xxxSetManipulationInputTarget(*((_DWORD *)v1 + 4), k, v13, v3, 0LL, 0);
            PopW32ThreadLock(v17);
            PopW32ThreadLock(v18);
            PopW32ThreadLock(v19);
          }
        }
      }
      Win32FreePool(v3);
    }
    if ( i )
      Win32FreePool(i);
    v1 = (struct tagPOINTERINPUTFRAME *)*((_QWORD *)v1 + 1);
    UnreferenceFrameInt(v2);
  }
  gptiManipulationThread = 0LL;
  glpfnManipulationThreadCallback = 0LL;
}
