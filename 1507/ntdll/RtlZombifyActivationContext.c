/*
 * XREFs of RtlZombifyActivationContext @ 0x1800C9B40
 * Callers:
 *     <none>
 * Callees:
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 */

__int64 __fastcall RtlZombifyActivationContext(__int64 a1)
{
  unsigned int v1; // edi
  void (__fastcall *v3)(__int64, __int64, _QWORD, _QWORD, _QWORD, char *); // rsi
  char v5; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  if ( !a1 || ((a1 - 1) | 7) == 0xFFFFFFFFFFFFFFFFuLL )
  {
    return (unsigned int)-1073741811;
  }
  else if ( (*(_BYTE *)(a1 + 4) & 1) == 0 )
  {
    v3 = *(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD, char *))(a1 + 32);
    if ( v3 )
    {
      v5 = 0;
      v3(2LL, a1, *(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 40), 0LL, &v5);
    }
    *(_DWORD *)(a1 + 4) |= 1u;
  }
  return v1;
}
