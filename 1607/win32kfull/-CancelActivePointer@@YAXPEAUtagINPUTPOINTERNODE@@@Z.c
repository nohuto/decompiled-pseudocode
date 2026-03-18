/*
 * XREFs of ?CancelActivePointer@@YAXPEAUtagINPUTPOINTERNODE@@@Z @ 0x1C01F35E0
 * Callers:
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C00EC928 (-InitiateWin32kCleanup@@YAHXZ.c)
 * Callees:
 *     ?ProcessLostCaptureList@@YAXGHPEBUtagPOINTERINPUTFRAME@@KK@Z @ 0x1C01C12EC (-ProcessLostCaptureList@@YAXGHPEBUtagPOINTERINPUTFRAME@@KK@Z.c)
 *     ?SetNewValidState@@YAHIPEAUtagINPUTPOINTERNODE@@@Z @ 0x1C01F3E6C (-SetNewValidState@@YAHIPEAUtagINPUTPOINTERNODE@@@Z.c)
 */

void __fastcall CancelActivePointer(struct tagINPUTPOINTERNODE *a1)
{
  unsigned int v2; // r8d
  int v3; // ecx

  v2 = 0;
  v3 = *((_DWORD *)a1 + 9) - 1;
  if ( v3 )
  {
    if ( v3 == 1 )
      v2 = 0x40000;
  }
  else
  {
    v2 = 0x20000;
  }
  SetNewValidState(v2, a1);
  if ( *((_QWORD *)a1 + 6) )
  {
    HMAssignmentUnlock((char *)a1 + 48);
    *((_DWORD *)a1 + 38) &= ~0x10u;
  }
  if ( *((_DWORD *)a1 + 9) == 3
    && *((struct tagINPUTPOINTERNODE **)a1 + 14) == (struct tagINPUTPOINTERNODE *)((char *)a1 + 112) )
  {
    ProcessLostCaptureList(*((_WORD *)a1 + 16), 0, 0LL, 0, 0);
    FreeNode(a1);
  }
  else
  {
    PointerList::UnreferenceMsgData(*((_QWORD *)a1 + 14), 1LL);
  }
}
