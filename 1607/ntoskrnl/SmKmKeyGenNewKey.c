/*
 * XREFs of SmKmKeyGenNewKey @ 0x14069867C
 * Callers:
 *     SmKmKeyGenGenerate @ 0x1406982E4 (SmKmKeyGenGenerate.c)
 * Callees:
 *     SmAlloc @ 0x1400022D0 (SmAlloc.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     MiDeleteSubsection @ 0x1400A6E14 (MiDeleteSubsection.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x14015BB50 (ZwDeleteValueKey.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     SmCrGenRandom @ 0x1402222E4 (SmCrGenRandom.c)
 *     SmKmKeyGenKeyFind @ 0x1406984E0 (SmKmKeyGenKeyFind.c)
 *     SmKmKeyGenLoadKey @ 0x14069851C (SmKmKeyGenLoadKey.c)
 */

__int64 __fastcall SmKmKeyGenNewKey(ULONG_PTR BugCheckParameter2, _WORD *Src, unsigned int a3)
{
  __int64 v3; // r15
  __int64 v4; // r14
  PVOID v7; // rax
  __int64 v8; // rdi
  NTSTATUS v9; // r14d
  void *v10; // rcx
  __int64 v11; // r8
  ULONG v12; // r9d
  int v13; // eax
  struct _KTHREAD *CurrentThread; // rax
  _BYTE *v15; // rax
  _BYTE *v16; // r14
  __int64 *v17; // rax
  __int64 v18; // rcx
  HANDLE v19; // r9
  wchar_t *v20; // r8
  wchar_t *v21; // rcx
  __int64 v22; // rdx
  UNICODE_STRING ValueName; // [rsp+28h] [rbp-18h] BYREF
  HANDLE KeyHandle; // [rsp+88h] [rbp+48h] BYREF

  v3 = a3;
  KeyHandle = 0LL;
  v4 = -1LL;
  do
    ++v4;
  while ( Src[v4] );
  v7 = SmAlloc(a3 + 42 + 2 * (_DWORD)v4, 0x474B6D73u);
  v8 = (__int64)v7;
  if ( !v7 )
    return (unsigned int)-1073741670;
  memset(v7, 0, (unsigned int)(v3 + 42 + 2 * v4));
  *(_QWORD *)(v8 + 24) = v8 + 40;
  v10 = (void *)(v3 + v8 + 40);
  *(_DWORD *)(v8 + 32) = v3;
  *(_QWORD *)(v8 + 16) = v10;
  memmove(v10, Src, 2LL * (unsigned int)v4);
  if ( !*(_QWORD *)(BugCheckParameter2 + 32) )
    goto LABEL_8;
  v13 = SmKmKeyGenLoadKey((UNICODE_STRING *)(BugCheckParameter2 + 24), v8, &KeyHandle);
  v9 = v13;
  if ( v13 >= 0 )
  {
LABEL_9:
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v15 = (_BYTE *)KeAbPreAcquire(BugCheckParameter2, 0LL, 0);
    v16 = v15;
    if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v15, BugCheckParameter2);
    if ( v16 )
      v16[26] |= 1u;
    if ( !SmKmKeyGenKeyFind(BugCheckParameter2, Src) )
    {
      v17 = (__int64 *)(BugCheckParameter2 + 8);
      v18 = *(_QWORD *)(BugCheckParameter2 + 8);
      if ( *(_QWORD *)(v18 + 8) != BugCheckParameter2 + 8 )
        __fastfail(3u);
      v19 = KeyHandle;
      *(_QWORD *)v8 = v18;
      *(_QWORD *)(v8 + 8) = v17;
      *(_QWORD *)(v18 + 8) = v8;
      *v17 = v8;
      if ( v19 )
      {
        v20 = *(wchar_t **)(v8 + 16);
        *(_DWORD *)&ValueName.Length = 0;
        ValueName.Buffer = 0LL;
        if ( v20 )
        {
          v21 = v20;
          v22 = 0x7FFFLL;
          do
          {
            if ( !*v21 )
              break;
            ++v21;
            --v22;
          }
          while ( v22 );
          if ( v22 )
          {
            ValueName.Buffer = v20;
            ValueName.Length = 2 * (0x7FFF - v22);
            ValueName.MaximumLength = ValueName.Length + 2;
          }
        }
        ZwDeleteValueKey(v19, &ValueName);
      }
      v8 = 0LL;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    KeLeaveCriticalRegion();
    v9 = 0;
    goto LABEL_28;
  }
  if ( v13 == -1073741772 )
  {
LABEL_8:
    v9 = SmCrGenRandom(*(void **)(v8 + 24), v3, v11, v12);
    if ( v9 >= 0 )
      goto LABEL_9;
  }
LABEL_28:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v8 )
    MiDeleteSubsection((PPRIVILEGE_SET)v8);
  return (unsigned int)v9;
}
