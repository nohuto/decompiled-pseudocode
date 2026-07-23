/*
 * XREFs of PspStorageReplaceObject @ 0x140682DCC
 * Callers:
 *     PsReplaceSiloContext @ 0x14067E0E4 (PsReplaceSiloContext.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     PspGetStorageArray @ 0x140560098 (PspGetStorageArray.c)
 */

__int64 __fastcall PspStorageReplaceObject(__int64 a1, unsigned int a2, void *a3, unsigned __int64 *a4)
{
  __int64 result; // rax
  unsigned int v7; // esi
  unsigned __int64 *v8; // rbx
  _BYTE *v9; // rax
  _BYTE *v10; // rdi
  unsigned __int64 v11; // rdi
  void *v12; // rcx
  unsigned int v13; // [rsp+20h] [rbp-18h] BYREF
  __int64 v14; // [rsp+28h] [rbp-10h] BYREF

  result = PspGetStorageArray(a1, a2, &v13, &v14);
  v7 = result;
  if ( (int)result >= 0 )
  {
    ObfReferenceObject(a3);
    v8 = (unsigned __int64 *)(v14 + 16LL * v13);
    v9 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)v8, 0LL, 0);
    v10 = v9;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
      ExfAcquirePushLockExclusiveEx(v8, v9, (ULONG_PTR)v8);
    if ( v10 )
      v10[26] |= 1u;
    v11 = v8[1];
    if ( (v11 & 1) != 0 )
    {
      v11 = 0LL;
      v7 = -1073741637;
    }
    else
    {
      v8[1] = (unsigned __int64)a3;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v8);
    KeAbPostRelease((ULONG_PTR)v8);
    if ( (v7 & 0x80000000) != 0 )
    {
      v12 = a3;
    }
    else
    {
      if ( !v11 )
      {
        if ( a4 )
          *a4 = 0LL;
        return v7;
      }
      if ( a4 )
      {
        *a4 = v11;
        return v7;
      }
      v12 = (void *)v11;
    }
    ObfDereferenceObject(v12);
    return v7;
  }
  return result;
}
