/*
 * XREFs of AlpcpStartInitialization @ 0x140475E10
 * Callers:
 *     AlpcpCreateSecurityContext @ 0x140475880 (AlpcpCreateSecurityContext.c)
 *     AlpcpCreateReserve @ 0x140522DD0 (AlpcpCreateReserve.c)
 *     AlpcpCreateSection @ 0x14052B184 (AlpcpCreateSection.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall AlpcpStartInitialization(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 *v4; // rdi
  __int64 result; // rax
  __int64 v7; // r9
  __int64 v8; // rbx

  v4 = (unsigned __int64 *)(a1 - 16);
  result = KeAbPreAcquire(a1 - 16, 0LL, 0LL, a4);
  v8 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(v4, result, (ULONG_PTR)v4, v7);
  if ( v8 )
  {
    result = *(_QWORD *)(v8 + 32);
    *(_BYTE *)(v8 + 26) |= 1u;
  }
  *(_BYTE *)(a1 - 32) |= 4u;
  return result;
}
