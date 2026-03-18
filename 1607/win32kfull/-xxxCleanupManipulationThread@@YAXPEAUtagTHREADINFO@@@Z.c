/*
 * XREFs of ?xxxCleanupManipulationThread@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C01088A8
 * Callers:
 *     xxxCleanupThreadPointerInputInfo @ 0x1C0107DE0 (xxxCleanupThreadPointerInputInfo.c)
 * Callees:
 *     PopW32ThreadLock @ 0x1C006FA40 (PopW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     ?GetPrevMTNodeTarget@@YAPEAUtagWND@@PEAUtagPOINTERINFONODE@@PEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C01C0EF0 (-GetPrevMTNodeTarget@@YAPEAUtagWND@@PEAUtagPOINTERINFONODE@@PEAUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01C0FF4 (-IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?ProcessLostCaptureList@@YAXGHPEBUtagPOINTERINPUTFRAME@@KK@Z @ 0x1C01C12EC (-ProcessLostCaptureList@@YAXGHPEBUtagPOINTERINPUTFRAME@@KK@Z.c)
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C01C1E84 (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
 *     xxxSetManipulationInputTarget @ 0x1C01C25B4 (xxxSetManipulationInputTarget.c)
 *     ?IsManipulationThreadNode@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01F00C8 (-IsManipulationThreadNode@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 */

void __fastcall xxxCleanupManipulationThread(struct tagTHREADINFO *a1)
{
  struct tagPOINTERINPUTFRAME *v1; // rbx
  struct tagPOINTERINPUTFRAME *v2; // r13
  __int64 v3; // r15
  __int64 v4; // rbp
  __int64 v5; // rdx
  __int64 i; // rdi
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r14
  __int64 v10; // rsi
  const struct tagPOINTERINFONODE *v11; // rcx
  struct tagPOINTERINFONODE *v12; // rcx
  struct tagWND *PrevMTNodeTarget; // rax
  __int64 v14; // rax
  __int64 j; // rsi
  __int64 v16; // rbp
  unsigned int v17; // edx
  __int64 k; // r14
  __int64 v19; // rax
  __int64 v20; // r9
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  _QWORD v31[3]; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v32[3]; // [rsp+48h] [rbp-60h] BYREF
  _QWORD v33[4]; // [rsp+60h] [rbp-48h] BYREF

  v1 = qword_1C0329648;
  while ( v1 != (struct tagPOINTERINPUTFRAME *)&gFrameListHead )
  {
    v2 = v1;
    _InterlockedIncrement((volatile signed __int32 *)v1 + 9);
    v3 = Win32AllocPoolZInit(4LL * *((unsigned int *)v1 + 10), 1851878741LL);
    v4 = 0LL;
    for ( i = Win32AllocPoolZInit(4LL * *((unsigned int *)v1 + 10), 1851878741LL);
          (unsigned int)v4 < *((_DWORD *)v1 + 10);
          v4 = (unsigned int)(v4 + 1) )
    {
      v9 = 216LL * (unsigned int)v4;
      v10 = v9 + *((_QWORD *)v1 + 11);
      if ( (unsigned int)IsPointerInfoNodeValid((const struct tagPOINTERINFONODE *)v10)
        && (unsigned int)IsManipulationThreadNode(v11)
        && (*(_DWORD *)(v10 + 4) & 0x200) == 0 )
      {
        if ( v3 && i && (PrevMTNodeTarget = GetPrevMTNodeTarget(v12, v1)) != 0LL )
        {
          *(_QWORD *)(v10 + 80) = *(_QWORD *)PrevMTNodeTarget;
          *(_DWORD *)(i + 4 * v4) = 1;
        }
        else
        {
          if ( (*(_DWORD *)(v10 + 68) & 0x40000) != 0 )
            ProcessLostCaptureList(
              *(_WORD *)(v10 + 60),
              1,
              v1,
              v4,
              (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
          v14 = *((_QWORD *)v1 + 11);
          *(_DWORD *)(v9 + v14) |= 0x2000u;
          *(_QWORD *)(v9 + v14 + 16) = 0LL;
          ++*((_DWORD *)v1 + 11);
        }
      }
    }
    if ( v3 )
    {
      if ( i )
      {
        for ( j = 0LL; (unsigned int)j < *((_DWORD *)v1 + 10); j = (unsigned int)(j + 1) )
        {
          if ( *(_DWORD *)(i + 4 * j) )
          {
            v16 = 0LL;
            v17 = j;
            for ( k = *(_QWORD *)(216LL * (unsigned int)j + *((_QWORD *)v1 + 11) + 80); v17 < *((_DWORD *)v1 + 10); ++v17 )
            {
              v19 = *((_QWORD *)v1 + 11) + 216LL * v17;
              if ( *(_DWORD *)(i + 4LL * v17) && *(_QWORD *)(v19 + 80) == k )
              {
                *(_DWORD *)(v3 + 4 * v16) = *(unsigned __int16 *)(v19 + 60);
                v16 = (unsigned int)(v16 + 1);
                *(_DWORD *)(i + 4LL * v17) = 0;
              }
            }
            PushW32ThreadLock(v3, v33, (__int64)Win32FreePool, v8);
            PushW32ThreadLock(i, v32, (__int64)Win32FreePool, v20);
            PushW32ThreadLock((__int64)v1, v31, (__int64)DereferencePointerInputFrame, v21);
            xxxSetManipulationInputTarget(*((_DWORD *)v1 + 8), k, v16, v3, 0LL, 0);
            PopW32ThreadLock(v31, v22, v23, v24);
            PopW32ThreadLock(v32, v25, v26, v27);
            PopW32ThreadLock(v33, v28, v29, v30);
          }
        }
      }
      Win32FreePool(v3, v5, v7);
    }
    if ( i )
      Win32FreePool(i, v5, v7);
    v1 = (struct tagPOINTERINPUTFRAME *)*((_QWORD *)v1 + 1);
    UnreferenceFrameInt(v2);
  }
  gptiManipulationThread = 0LL;
  glpfnManipulationThreadCallback = 0LL;
}
