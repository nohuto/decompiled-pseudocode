/*
 * XREFs of PsRootSiloInformation @ 0x140243F20
 * Callers:
 *     ExpQuerySystemInformation @ 0x14042E880 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     PsIsSiloInSilo @ 0x140243EB0 (PsIsSiloInSilo.c)
 *     PsGetCurrentSilo @ 0x140511880 (PsGetCurrentSilo.c)
 */

__int64 __fastcall PsRootSiloInformation(_DWORD *a1, unsigned int a2, int *a3)
{
  int v5; // edi
  int v6; // ebx
  void *CurrentSilo; // r14
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rsi
  unsigned __int8 CurrentIrql; // cl
  __int64 *i; // r8
  __int64 **v13; // r8
  unsigned int v14; // r9d
  int v15; // r10d
  unsigned __int8 v16; // si
  signed __int32 v17; // eax
  int v19; // [rsp+20h] [rbp-58h]
  unsigned __int8 v21; // [rsp+98h] [rbp+20h]

  v5 = 0;
  v6 = 0;
  v19 = 0;
  CurrentSilo = (void *)PsGetCurrentSilo();
  v9 = KeAbPreAcquire((ULONG_PTR)&PspSiloListLock, 0LL, 0LL, v8);
  v10 = v9;
  CurrentIrql = KeGetCurrentIrql();
  v21 = CurrentIrql;
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&PspSiloListLock, 0) )
  {
    ExpAcquireFastMutexContended((ULONG_PTR)&PspSiloListLock, v9);
    CurrentIrql = v21;
  }
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  qword_14032C468 = (__int64)KeGetCurrentThread();
  dword_14032C490 = CurrentIrql;
  if ( a2 < 4 )
  {
    v5 = -1073741789;
  }
  else
  {
    v6 = 4;
    for ( i = (__int64 *)PspSiloList; v5 >= 0 && i != &PspSiloList; i = *v13 )
    {
      if ( PsIsSiloInSilo((__int64)(i - 4), (__int64)CurrentSilo) )
      {
        if ( v14 < 8 )
        {
          v5 = -1073741789;
        }
        else
        {
          v6 += 8;
          *(_QWORD *)&a1[2 * v15 + 2] = *(v13 - 1);
          v19 = v15 + 1;
        }
      }
    }
  }
  qword_14032C468 = 0LL;
  v16 = dword_14032C490;
  v17 = _InterlockedCompareExchange((volatile signed __int32 *)&PspSiloListLock, 1, 0);
  if ( v17 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&PspSiloListLock, v17);
  __writecr8(v16);
  KeAbPostRelease((ULONG_PTR)&PspSiloListLock);
  if ( v5 >= 0 )
  {
    *a1 = v19;
    *a3 = v6;
  }
  if ( CurrentSilo )
    ObfDereferenceObjectWithTag(CurrentSilo, 0x746C6644u);
  return (unsigned int)v5;
}
