/*
 * XREFs of MiLockNestedVad @ 0x140533E1C
 * Callers:
 *     MiUpControlAreaRefs @ 0x1400013E8 (MiUpControlAreaRefs.c)
 *     MiMarkSharedImageCfgBits @ 0x14003A5B0 (MiMarkSharedImageCfgBits.c)
 *     MiDeletePartialVad @ 0x1400F14D0 (MiDeletePartialVad.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall MiLockNestedVad(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 *v4; // rdi
  __int64 result; // rax
  __int64 v6; // r9
  __int64 v7; // rbx

  v4 = (unsigned __int64 *)(a1 + 40);
  result = KeAbPreAcquire(a1 + 40, 0LL, 0LL, a4);
  v7 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(v4, result, (ULONG_PTR)v4, v6);
  if ( v7 )
  {
    result = *(_QWORD *)(v7 + 32);
    *(_BYTE *)(v7 + 26) |= 1u;
  }
  return result;
}
