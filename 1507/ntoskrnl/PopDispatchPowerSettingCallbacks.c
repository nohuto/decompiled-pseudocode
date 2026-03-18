/*
 * XREFs of PopDispatchPowerSettingCallbacks @ 0x1404E5148
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     PopUnregisterPowerSettingCallback @ 0x140133B64 (PopUnregisterPowerSettingCallback.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PopCallPowerSettingCallback @ 0x1404E52C0 (PopCallPowerSettingCallback.c)
 */

void __fastcall PopDispatchPowerSettingCallbacks(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rbx
  unsigned __int8 CurrentIrql; // di
  int v8; // eax
  PVOID *v9; // rdi
  __int64 v10; // r14
  PVOID *v11; // rsi
  PVOID *v12; // rbx
  PVOID *v13; // rbp
  unsigned __int8 v14; // bl
  signed __int32 v15; // eax
  char v16; // al
  _QWORD *v17; // rcx
  __int64 v18; // rdx
  _QWORD *v20; // rbx
  PVOID *v21; // rax

  v4 = dword_14032E84C;
  v5 = KeAbPreAcquire((ULONG_PTR)&PopSettingLock, 0LL, 0LL, a4);
  v6 = v5;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&PopSettingLock, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)&PopSettingLock, v5);
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  qword_14032EFE8 = (__int64)KeGetCurrentThread();
  v8 = CurrentIrql;
  v9 = (PVOID *)PopPowerSettings;
  dword_14032F010 = v8;
  if ( PopPowerSettings != &PopPowerSettings )
  {
    v10 = v4;
    do
    {
      v11 = v9 + 2;
      v12 = (PVOID *)v9[2];
      if ( v12 != v9 + 2 )
      {
        do
        {
          if ( *((_BYTE *)v12 + 88) )
          {
            v12 = (PVOID *)*v12;
          }
          else
          {
            *((_BYTE *)v12 + 88) = 1;
            if ( v12[7] != v9[v10 + 8] )
              PopCallPowerSettingCallback(v12);
            v13 = (PVOID *)*v12;
            *((_BYTE *)v12 + 88) = 0;
            if ( *((_BYTE *)v12 + 33) || *((_BYTE *)v12 + 32) )
              PopUnregisterPowerSettingCallback(v12);
            v12 = v13;
          }
        }
        while ( v12 != v11 );
      }
      if ( *v11 != v11 || *((_DWORD *)v9 + 14) || *((_DWORD *)v9 + 15) )
        goto LABEL_16;
      v16 = 1;
      v17 = v9 + 8;
      v18 = 3LL;
      do
      {
        if ( *v17++ != 0LL )
          v16 = 0;
        --v18;
      }
      while ( v18 );
      if ( !v16 )
      {
LABEL_16:
        v9 = (PVOID *)*v9;
      }
      else
      {
        v20 = *v9;
        v21 = (PVOID *)v9[1];
        if ( *((PVOID **)*v9 + 1) != v9 || *v21 != v9 )
          __fastfail(3u);
        *v21 = v20;
        v20[1] = v21;
        ExFreePoolWithTag(v9, 0x74655350u);
        v9 = (PVOID *)v20;
      }
    }
    while ( v9 != &PopPowerSettings );
  }
  v14 = dword_14032F010;
  qword_14032EFE8 = 0LL;
  v15 = _InterlockedCompareExchange((volatile signed __int32 *)&PopSettingLock, 1, 0);
  if ( v15 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&PopSettingLock, v15);
  __writecr8(v14);
  KeAbPostRelease((ULONG_PTR)&PopSettingLock);
}
