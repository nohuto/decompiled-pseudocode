/*
 * XREFs of KsepCompletionSafeWrapper @ 0x1401DC9B8
 * Callers:
 *     <none>
 * Callees:
 *     KsepPoolFreeNonPaged @ 0x14010B608 (KsepPoolFreeNonPaged.c)
 */

__int64 __fastcall KsepCompletionSafeWrapper(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // esi
  void (__fastcall *v7)(_QWORD, __int64, _QWORD); // rax
  __int64 (__fastcall *v8)(__int64, __int64, _QWORD); // rax

  v3 = 0;
  if ( a3 )
  {
    v7 = (void (__fastcall *)(_QWORD, __int64, _QWORD))a3[1];
    if ( v7 )
      v7(*a3, a2, a3[2]);
  }
  if ( *(int *)(a2 + 48) < 0 )
  {
    if ( (*((_DWORD *)a3 + 10) & 0x80u) != 0 )
      goto LABEL_10;
  }
  else if ( (a3[5] & 0x40) != 0 )
  {
    goto LABEL_10;
  }
  if ( *(_BYTE *)(a2 + 68) && (a3[5] & 0x20) != 0 )
  {
LABEL_10:
    v8 = (__int64 (__fastcall *)(__int64, __int64, _QWORD))a3[3];
    if ( v8 )
      v3 = v8(a1, a2, a3[4]);
    goto LABEL_14;
  }
  if ( *(_BYTE *)(a2 + 65) )
  {
    v3 = 259;
    *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  }
LABEL_14:
  if ( a3 )
    KsepPoolFreeNonPaged(a3);
  return v3;
}
