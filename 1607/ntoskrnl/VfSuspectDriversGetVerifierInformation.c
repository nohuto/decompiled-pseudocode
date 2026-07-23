/*
 * XREFs of VfSuspectDriversGetVerifierInformation @ 0x140715ED8
 * Callers:
 *     VfGetVerifierInformation @ 0x140720F40 (VfGetVerifierInformation.c)
 * Callees:
 *     KeReleaseMutex @ 0x140055B60 (KeReleaseMutex.c)
 *     VfAvlCleanupLockContext @ 0x1400825CC (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x140082748 (VfAvlInitializeLockContext.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     VfDriverLock @ 0x1406FE42C (VfDriverLock.c)
 *     VfTargetDriversGetZeroCounters @ 0x14070FF94 (VfTargetDriversGetZeroCounters.c)
 *     VfAvlEnumerateNodes @ 0x1407168E0 (VfAvlEnumerateNodes.c)
 */

__int64 __fastcall VfSuspectDriversGetVerifierInformation(
        __int64 a1,
        unsigned int a2,
        unsigned int *a3,
        __int64 a4,
        int a5)
{
  __int64 v6; // rdi
  unsigned int v7; // r14d
  int v8; // ebp
  __int64 *v9; // r15
  __int64 *v10; // r8
  int v11; // ebx
  __int64 v12; // r8
  __int64 v13; // rcx
  void *v14; // rcx
  _BYTE v16[16]; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v17[2]; // [rsp+30h] [rbp-68h] BYREF
  int v18; // [rsp+40h] [rbp-58h]
  __int64 *v21; // [rsp+B0h] [rbp+18h]

  v6 = a1;
  *a3 = 0;
  v7 = 0;
  v8 = 0;
  VfDriverLock();
  v9 = (__int64 *)VfSuspectDriversList;
  if ( (__int64 *)VfSuspectDriversList != &VfSuspectDriversList )
  {
    while ( 1 )
    {
      v10 = v9;
      v6 += v7;
      v21 = v9;
      v9 = (__int64 *)*v9;
      v11 = *((unsigned __int16 *)v10 + 12);
      v7 = (v11 + (a5 != 0 ? 273 : 137)) & 0xFFFFFFF8;
      *a3 += v7;
      if ( *a3 > a2 )
        break;
      *(_DWORD *)v6 = v7;
      *(_DWORD *)(v6 + 4) = MmVerifierData;
      *(_DWORD *)(v6 + 24) = dword_140307244;
      *(_DWORD *)(v6 + 28) = dword_140307248;
      *(_DWORD *)(v6 + 76) = dword_140307278;
      *(_DWORD *)(v6 + 32) = dword_14030724C;
      *(_DWORD *)(v6 + 36) = dword_140307250;
      *(_DWORD *)(v6 + 40) = dword_140307254;
      *(_DWORD *)(v6 + 44) = dword_140307258;
      *(_DWORD *)(v6 + 48) = dword_14030725C;
      *(_DWORD *)(v6 + 52) = dword_140307260;
      *(_DWORD *)(v6 + 56) = dword_140307264;
      *(_DWORD *)(v6 + 60) = dword_140307268;
      *(_DWORD *)(v6 + 64) = dword_14030726C;
      *(_DWORD *)(v6 + 68) = *((_DWORD *)v10 + 4);
      *(_DWORD *)(v6 + 72) = *((_DWORD *)v10 + 5);
      if ( *((_DWORD *)v10 + 4) <= *((_DWORD *)v10 + 5) )
      {
        VfTargetDriversGetZeroCounters(v6, a5);
      }
      else
      {
        VfTargetDriversGetZeroCounters(v6, a5);
        v17[0] = v12;
        v17[1] = v6;
        v18 = a5;
        VfAvlInitializeLockContext((__int64)v16, 1);
        VfAvlEnumerateNodes(v13, v16, ViTargetAddCountersCallback, v17);
        VfAvlCleanupLockContext((__int64)v16);
      }
      *(_WORD *)(v6 + 8) = v11;
      *(_WORD *)(v6 + 10) = v11 + 2;
      v14 = (void *)(v6 + (a5 != 0 ? 264 : 128));
      *(_QWORD *)(v6 + 16) = v14;
      memmove(v14, (const void *)v21[4], (unsigned __int16)v11);
      *(_WORD *)(*(_QWORD *)(v6 + 16) + 2 * ((unsigned __int64)(unsigned __int16)v11 >> 1)) = 0;
      *(_QWORD *)(v6 + 16) += a4 - a1;
      if ( v9 == &VfSuspectDriversList )
        goto LABEL_9;
    }
    v8 = -1073741820;
  }
LABEL_9:
  ViDriversLoadLockOwner = 0LL;
  KeReleaseMutex(&ViDriversLoadLock, 0);
  if ( v8 >= 0 )
    *(_DWORD *)v6 = 0;
  return (unsigned int)v8;
}
