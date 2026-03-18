/*
 * XREFs of HvpFinishPrimaryWrite @ 0x1404AFDC0
 * Callers:
 *     HvWriteHivePrimaryFile @ 0x1404AFC20 (HvWriteHivePrimaryFile.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1404C7410 (CmpLockRegistry.c)
 *     CmpLogEvent @ 0x140653B18 (CmpLogEvent.c)
 */

__int64 __fastcall HvpFinishPrimaryWrite(__int64 a1, char a2, unsigned __int8 a3, char a4)
{
  char v4; // si
  char v6; // di
  __int64 result; // rax

  v4 = 0;
  v6 = BYTE1(*(_DWORD *)(a1 + 144)) & 1;
  if ( (a2 == v6 || ((*(_DWORD *)(a1 + 5488) & 8) != 0) != a3) && !a4 )
  {
    CmpLockRegistry();
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 2848), 1u);
    v4 = 1;
  }
  if ( a2 )
  {
    if ( v6 )
      *(_DWORD *)(a1 + 144) &= ~0x100u;
  }
  else if ( !v6 )
  {
    CmpLogEvent(&REG_EVENT_FLUSH_IO_FAIL);
    *(_DWORD *)(a1 + 144) |= 0x100u;
  }
  result = (*(_DWORD *)(a1 + 5488) >> 3) & 1;
  if ( (_DWORD)result != a3 )
  {
    result = *(_DWORD *)(a1 + 5488) ^ ((unsigned __int8)*(_DWORD *)(a1 + 5488) ^ (unsigned __int8)(8 * a3)) & 8u;
    *(_DWORD *)(a1 + 5488) = result;
  }
  if ( v4 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 2848));
    return CmpUnlockRegistry();
  }
  return result;
}
