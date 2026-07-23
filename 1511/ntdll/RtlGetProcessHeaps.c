/*
 * XREFs of RtlGetProcessHeaps @ 0x18008E3D0
 * Callers:
 *     RtlValidateProcessHeaps @ 0x1800E07B0 (RtlValidateProcessHeaps.c)
 * Callees:
 *     RtlpEnumProcessHeaps @ 0x180051130 (RtlpEnumProcessHeaps.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 */

ULONG __cdecl RtlGetProcessHeaps(ULONG NumberOfHeaps, PVOID *ProcessHeaps)
{
  ULONG v4; // edi
  _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR v6; // [rsp+20h] [rbp-28h] BYREF

  *((_DWORD *)&v6.CurEntry + 4) = 0;
  v6.HashEntry.Linkage.Blink = (_LIST_ENTRY *)ProcessHeaps;
  v6.HashEntry.Linkage.Flink = (_LIST_ENTRY *)&ProcessHeaps[NumberOfHeaps];
  RtlpEnumProcessHeaps((PRTL_DYNAMIC_HASH_TABLE)RtlGetProcessHeapsCallback, &v6, 2);
  v4 = *((_DWORD *)&v6.CurEntry + 4);
  if ( dword_1801420A8 )
    v4 += ((__int64 (__fastcall *)(_QWORD, _LIST_ENTRY *))qword_1801420F0)(
            NumberOfHeaps - (unsigned int)(((char *)v6.HashEntry.Linkage.Blink - (char *)ProcessHeaps) >> 3),
            v6.HashEntry.Linkage.Blink);
  return v4;
}
