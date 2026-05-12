/*
 * XREFs of RaidBusEnumeratorProcessDeviceId @ 0x1C000AAC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidBusEnumeratorProcessDeviceId(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4, int *a5)
{
  __int64 v5; // r10
  unsigned int v7; // r8d
  __int64 v8; // rdx
  int v9; // ecx

  v5 = a1;
  *a4 = 0;
  if ( (*(_BYTE *)(a2 + 3) & 0x3F) == 1 )
  {
    if ( *(_BYTE *)(a2 + 2) == 40 )
      v7 = *(_DWORD *)(a2 + 60);
    else
      v7 = *(_DWORD *)(a2 + 16);
    v8 = *(_QWORD *)(a1 + 40);
    v9 = (*(unsigned __int8 *)(v8 + 3) | (*(unsigned __int8 *)(v8 + 2) << 8)) + 4;
    if ( v9 > 0xFFFF )
      v9 = 0xFFFF;
    if ( v9 > v7 )
    {
      *a4 = 1;
      *a5 = v9;
      return 3221225507LL;
    }
    else
    {
      *(_QWORD *)(a3 + 64) = v8;
      *(_QWORD *)(v5 + 40) = 0LL;
      *(_DWORD *)(v5 + 48) = 0;
      return 0LL;
    }
  }
  else
  {
    LOBYTE(a1) = *(_BYTE *)(a2 + 3);
    return RaidSrbStatusToNtStatus(a1);
  }
}
