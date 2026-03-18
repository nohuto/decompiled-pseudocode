/*
 * XREFs of AcquireASLMutex @ 0x1C0013C24
 * Callers:
 *     ParseAcquire @ 0x1C0013D20 (ParseAcquire.c)
 * Callees:
 *     HeapAlloc @ 0x1C0013430 (HeapAlloc.c)
 *     LogError @ 0x1C00442B8 (LogError.c)
 *     PrintDebugMessage @ 0x1C00459AC (PrintDebugMessage.c)
 *     QueueContext @ 0x1C00471D8 (QueueContext.c)
 */

__int64 __fastcall AcquireASLMutex(__int64 a1, KSPIN_LOCK *a2, unsigned __int16 a3)
{
  int v3; // eax
  unsigned int v4; // edi
  KSPIN_LOCK *v8; // rbp
  KIRQL v9; // r15
  int v10; // ecx
  __int64 v11; // rax
  __int64 v12; // r8
  _QWORD *v13; // rdx
  __int64 v14; // rax
  int v15; // eax
  int v17; // ebx
  int v18; // ecx

  v3 = *(_DWORD *)(a1 + 64);
  v4 = 0;
  if ( (v3 & 4) != 0 )
  {
    v4 = 32773;
    *(_DWORD *)(a1 + 64) = v3 & 0xFFFFFFFB;
    return v4;
  }
  v8 = a2 + 22;
  v9 = KeAcquireSpinLockRaiseToDpc(a2 + 22);
  if ( *(_DWORD *)a2 < *(_DWORD *)(a1 + 112) )
  {
    v17 = -1072431083;
    LogError(3222536213LL);
    v18 = 5;
  }
  else
  {
    v10 = *((_DWORD *)a2 + 1);
    if ( v10 )
    {
      if ( *(_QWORD *)(a2[1] + 8) == a1 )
      {
        *((_DWORD *)a2 + 1) = v10 + 1;
      }
      else
      {
        QueueContext(a1, a3, a2 + 2);
        v4 = 32772;
      }
      goto LABEL_8;
    }
    v11 = HeapAlloc(*(_QWORD *)(a1 + 320), 1380865871, 0x28u);
    v12 = v11;
    if ( v11 )
    {
      *(_QWORD *)(v11 + 8) = a1;
      *(_DWORD *)v11 = 1;
      v13 = (_QWORD *)(v11 + 24);
      *(_QWORD *)(v11 + 16) = a2;
      v14 = *(_QWORD *)(a1 + 48);
      if ( v14 )
      {
        v13[1] = v14;
        *v13 = **(_QWORD **)(a1 + 48);
        *(_QWORD *)(**(_QWORD **)(a1 + 48) + 8LL) = v13;
        **(_QWORD **)(a1 + 48) = v13;
      }
      else
      {
        *(_QWORD *)(a1 + 48) = v13;
        v13[1] = v13;
        *v13 = v13;
      }
      *(_QWORD *)(a1 + 48) = v13;
      v15 = *(_DWORD *)a2;
      *((_DWORD *)a2 + 1) = 1;
      a2[1] = v12;
      *(_DWORD *)(a1 + 112) = v15;
      goto LABEL_8;
    }
    v17 = -1073741670;
    LogError(3221225626LL);
    v18 = 4;
  }
  PrintDebugMessage(v18, 0, 0, 0, 0LL);
  v4 = v17;
LABEL_8:
  KeReleaseSpinLock(v8, v9);
  return v4;
}
