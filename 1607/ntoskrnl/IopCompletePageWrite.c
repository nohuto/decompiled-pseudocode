/*
 * XREFs of IopCompletePageWrite @ 0x14008E074
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IopCompletePageWrite(__int64 a1)
{
  __int64 v1; // rcx
  __int64 (__fastcall *v2)(__int64, __int64, _QWORD); // rsi
  __int64 v3; // rdi
  __int64 v4; // rbx

  v1 = a1 - 120;
  if ( !*(_BYTE *)(v1 + 65) && (*(_DWORD *)(v1 + 48) & 0xC0000000) == 0xC0000000 )
    return pIoFreeIrp(v1);
  *(_OWORD *)*(_QWORD *)(v1 + 72) = *(_OWORD *)(v1 + 48);
  v2 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(v1 + 88);
  v3 = *(_QWORD *)(v1 + 96);
  v4 = *(_QWORD *)(v1 + 72);
  pIoFreeIrp(v1);
  return v2(v3, v4, 0LL);
}
