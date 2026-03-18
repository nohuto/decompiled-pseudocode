/*
 * XREFs of VfSuspectDriversGetVerifierInformation @ 0x140749F34
 * Callers:
 *     VfGetVerifierInformation @ 0x140758934 (VfGetVerifierInformation.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x1400257E0 (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x140025AC8 (VfAvlInitializeLockContext.c)
 *     KeReleaseMutex @ 0x14004BE50 (KeReleaseMutex.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     VfDriverLock @ 0x1407326C0 (VfDriverLock.c)
 *     VfTargetDriversGetZeroCounters @ 0x140745780 (VfTargetDriversGetZeroCounters.c)
 *     VfAvlEnumerateNodes @ 0x14074A940 (VfAvlEnumerateNodes.c)
 */

__int64 __fastcall VfSuspectDriversGetVerifierInformation(
        __int64 a1,
        unsigned int a2,
        unsigned int *a3,
        __int64 a4,
        int a5)
{
  int v5; // ebx
  __int64 v7; // rdi
  unsigned int v8; // r14d
  int v9; // ebp
  __int64 *v10; // r15
  __int64 *v11; // r13
  __int64 v12; // rcx
  unsigned __int16 v13; // r8
  unsigned __int64 v14; // rbx
  void *v15; // rcx
  _BYTE v17[16]; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v18[2]; // [rsp+30h] [rbp-68h] BYREF
  int v19; // [rsp+40h] [rbp-58h]
  unsigned __int16 v22; // [rsp+B0h] [rbp+18h]

  v5 = a5;
  v7 = a1;
  *a3 = 0;
  v8 = 0;
  v9 = 0;
  VfDriverLock();
  v10 = (__int64 *)VfSuspectDriversList;
  while ( v10 != &VfSuspectDriversList )
  {
    v11 = v10;
    v10 = (__int64 *)*v10;
    v7 += v8;
    v22 = *((_WORD *)v11 + 12);
    v8 = (v22 + (a5 != 0 ? 265 : 137)) & 0xFFFFFFF8;
    *a3 += v8;
    if ( *a3 > a2 )
    {
      v9 = -1073741820;
      break;
    }
    *(_DWORD *)v7 = v8;
    *(_DWORD *)(v7 + 4) = MmVerifierData;
    *(_DWORD *)(v7 + 24) = dword_140331D04;
    *(_DWORD *)(v7 + 28) = dword_140331D08;
    *(_DWORD *)(v7 + 76) = dword_140331D38;
    *(_DWORD *)(v7 + 32) = dword_140331D0C;
    *(_DWORD *)(v7 + 36) = dword_140331D10;
    *(_DWORD *)(v7 + 40) = dword_140331D14;
    *(_DWORD *)(v7 + 44) = dword_140331D18;
    *(_DWORD *)(v7 + 48) = dword_140331D1C;
    *(_DWORD *)(v7 + 52) = dword_140331D20;
    *(_DWORD *)(v7 + 56) = dword_140331D24;
    *(_DWORD *)(v7 + 60) = dword_140331D28;
    *(_DWORD *)(v7 + 64) = dword_140331D2C;
    *(_DWORD *)(v7 + 68) = *((_DWORD *)v11 + 4);
    *(_DWORD *)(v7 + 72) = *((_DWORD *)v11 + 5);
    if ( *((_DWORD *)v11 + 4) <= *((_DWORD *)v11 + 5) )
    {
      VfTargetDriversGetZeroCounters(v7, v5);
    }
    else
    {
      VfTargetDriversGetZeroCounters(v7, v5);
      v18[0] = v11;
      v18[1] = v7;
      v19 = v5;
      VfAvlInitializeLockContext((__int64)v17, 1);
      VfAvlEnumerateNodes(v12, v17, ViTargetAddCountersCallback, v18);
      VfAvlCleanupLockContext((__int64)v17);
      v13 = v22;
    }
    *(_WORD *)(v7 + 8) = v13;
    v14 = v13;
    *(_WORD *)(v7 + 10) = v13 + 2;
    v15 = (void *)(v7 + (a5 != 0 ? 256 : 128));
    *(_QWORD *)(v7 + 16) = v15;
    memmove(v15, (const void *)v11[4], v13);
    *(_WORD *)(*(_QWORD *)(v7 + 16) + 2 * (v14 >> 1)) = 0;
    *(_QWORD *)(v7 + 16) += a4 - a1;
    v5 = a5;
  }
  ViDriversLoadLockOwner = 0LL;
  KeReleaseMutex(&ViDriversLoadLock, 0);
  if ( v9 >= 0 )
    *(_DWORD *)v7 = 0;
  return (unsigned int)v9;
}
