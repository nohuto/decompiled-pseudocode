/*
 * XREFs of ResCSegmentCreateMapping @ 0x1800F8574
 * Callers:
 *     ResCRuntimeGetSegmentDataEx @ 0x1800F7750 (ResCRuntimeGetSegmentDataEx.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18000F090 (RtlSetLastWin32Error.c)
 *     _ResCCreateMappingExclusive @ 0x1800F92CC (_ResCCreateMappingExclusive.c)
 *     _ResCDupString @ 0x1800F9568 (_ResCDupString.c)
 */

__int64 __fastcall ResCSegmentCreateMapping(void *Src, int a2, int a3, __int64 a4, int a5)
{
  int v5; // r9d
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax

  v5 = 0;
  if ( a5 )
    v5 = 2;
  v7 = ResCCreateMappingExclusive((_DWORD)Src, a2, a3, v5);
  v8 = v7;
  if ( v7 )
  {
    *(_QWORD *)(v7 + 8) = 0LL;
    v9 = ResCDupString(Src);
    *(_QWORD *)(v8 + 16) = -1LL;
    *(_QWORD *)(v8 + 24) = v9;
  }
  return v8;
}
