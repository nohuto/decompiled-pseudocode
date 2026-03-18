/*
 * XREFs of PopFreeSessionState @ 0x140568D38
 * Callers:
 *     NtPowerInformation @ 0x1404E7B24 (NtPowerInformation.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     PopFreeRegistration @ 0x140568E5C (PopFreeRegistration.c)
 */

void __fastcall PopFreeSessionState(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  unsigned __int8 CurrentIrql; // di
  unsigned int v8; // esi
  __int64 **v9; // rdi
  __int64 *v10; // rbx
  _QWORD *v11; // rcx
  int v12; // eax
  __int64 *v13; // rdx
  _QWORD *v14; // rax
  unsigned __int8 v15; // bl
  signed __int32 v16; // eax

  v5 = KeAbPreAcquire((ULONG_PTR)&PopSettingLock, 0LL, 0LL, a4);
  v6 = v5;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&PopSettingLock, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)&PopSettingLock, v5);
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  v8 = 0;
  qword_14032EFE8 = (__int64)KeGetCurrentThread();
  dword_14032F010 = CurrentIrql;
  do
  {
    v9 = (__int64 **)((char *)&PopSessionSpecificLists + 16 * v8);
    v10 = *v9;
    while ( v10 != (__int64 *)v9 )
    {
      v11 = v10;
      if ( *((_DWORD *)v10 + 12) != a1 )
        goto LABEL_13;
      v12 = *((_DWORD *)v10 + 13);
      if ( (v12 & 2) != 0 )
      {
        *((_DWORD *)v10 + 13) = v12 | 4;
LABEL_13:
        v10 = (__int64 *)*v10;
      }
      else
      {
        v13 = (__int64 *)*v10;
        v10 = (__int64 *)*v10;
        v14 = (_QWORD *)v11[1];
        if ( *(_QWORD **)(*v11 + 8LL) != v11 || (_QWORD *)*v14 != v11 )
          __fastfail(3u);
        *v14 = v13;
        v13[1] = (__int64)v14;
        PopFreeRegistration(v11);
      }
    }
    ++v8;
  }
  while ( v8 < 2 );
  qword_14032EFE8 = 0LL;
  v15 = dword_14032F010;
  v16 = _InterlockedCompareExchange((volatile signed __int32 *)&PopSettingLock, 1, 0);
  if ( v16 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&PopSettingLock, v16);
  __writecr8(v15);
  KeAbPostRelease((ULONG_PTR)&PopSettingLock);
}
