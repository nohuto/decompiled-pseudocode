/*
 * XREFs of WmipRemoveDS @ 0x140546110
 * Callers:
 *     WmipDeregisterRegEntry @ 0x14012785C (WmipDeregisterRegEntry.c)
 * Callees:
 *     WmipGenerateRegistrationNotification @ 0x1404A97C0 (WmipGenerateRegistrationNotification.c)
 *     WmipUnreferenceEntry @ 0x1404D2094 (WmipUnreferenceEntry.c)
 */

__int64 __fastcall WmipRemoveDS(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 32);
  if ( v1 )
  {
    WmipGenerateRegistrationNotification(*(_QWORD *)(a1 + 32), 2u);
    *(_DWORD *)(v1 + 16) |= 1u;
    return WmipUnreferenceEntry((__int64)&WmipDSChunkInfo, (volatile signed __int64 *)v1);
  }
  return result;
}
