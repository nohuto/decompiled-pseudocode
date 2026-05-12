/*
 * XREFs of StorCompareScsiIdentity @ 0x1C000CD54
 * Callers:
 *     RaidBusEnumeratorProcessBusUnit @ 0x1C000F52C (RaidBusEnumeratorProcessBusUnit.c)
 * Callees:
 *     IsBlankIdPage @ 0x1C000CE68 (IsBlankIdPage.c)
 *     StorCompareScsiDeviceId @ 0x1C000CED8 (StorCompareScsiDeviceId.c)
 *     memcmp @ 0x1C0015A80 (memcmp.c)
 */

__int64 __fastcall StorCompareScsiIdentity(__int64 *a1, __int64 *a2)
{
  __int64 v2; // r9
  __int64 v4; // rdx
  __int64 v6; // r8
  unsigned int v7; // edi
  __int64 v8; // rcx
  const void *v9; // rdx
  const void *v10; // rcx
  size_t v11; // r8
  __int64 v12; // rsi
  __int64 v13; // rbp
  char v14; // bl
  char v15; // al
  __int64 v17; // rax

  v2 = *a1;
  v4 = *a2;
  v6 = *(_QWORD *)(*a1 + 8) - *(_QWORD *)(v4 + 8);
  if ( !v6 )
  {
    v6 = *(_QWORD *)(v2 + 16) - *(_QWORD *)(v4 + 16);
    if ( !v6 )
      v6 = *(_QWORD *)(v2 + 24) - *(_QWORD *)(v4 + 24);
  }
  v7 = 0;
  if ( v6 || ((*(_BYTE *)v2 ^ *(_BYTE *)v4) & 0x1F) != 0 )
    return 1LL;
  v8 = a1[5];
  if ( v8 && (v17 = a2[5]) != 0 )
  {
    v9 = (const void *)(v17 + 41);
    v10 = (const void *)(v8 + 41);
    v11 = 8LL;
  }
  else
  {
    v9 = (const void *)(v4 + 32);
    v10 = (const void *)(v2 + 32);
    v11 = 4LL;
  }
  if ( memcmp(v10, v9, v11) )
    return 3LL;
  v12 = a1[4];
  if ( !v12 )
  {
    if ( !a2[4] )
    {
      LOBYTE(v7) = RtlCompareString((const STRING *)(a1 + 1), (const STRING *)(a2 + 1), 0) != 0;
      return v7;
    }
    return 1LL;
  }
  v13 = a2[4];
  if ( !v13 )
    return 1LL;
  v14 = IsBlankIdPage(a1[4]);
  v15 = IsBlankIdPage(v13);
  if ( v14 )
    return 0LL;
  if ( v15 )
    return 2LL;
  return StorCompareScsiDeviceId(v12, v13);
}
