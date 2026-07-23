/*
 * XREFs of PfSnLogVolumeCreate @ 0x1404C0524
 * Callers:
 *     PfFileInfoNotify @ 0x1400EC950 (PfFileInfoNotify.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     PfSnLogHelper @ 0x1404F7F70 (PfSnLogHelper.c)
 *     RtlUpcaseUnicodeString @ 0x1404F8140 (RtlUpcaseUnicodeString.c)
 */

__int64 __fastcall PfSnLogVolumeCreate(__int64 a1)
{
  int v2; // esi
  unsigned __int64 v3; // rbx
  unsigned int v4; // edi
  struct _EX_RUNDOWN_REF *v5; // r15
  __int64 *v6; // rdx
  unsigned __int64 v7; // rbx
  int v8; // ecx
  UNICODE_STRING SourceString; // [rsp+20h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  __int64 *v12; // [rsp+60h] [rbp+8h] BYREF

  v2 = 2 * *(unsigned __int16 *)(a1 + 30);
  v3 = ((unsigned __int64)(unsigned int)(v2 + 82) + 15) >> 4;
  v4 = 0;
  v5 = (struct _EX_RUNDOWN_REF *)PfSnLogHelper(*(_QWORD *)a1, (unsigned int)v3, &v12);
  if ( v5 )
  {
    v6 = v12;
    DestinationString.Length = 0;
    DestinationString.MaximumLength = v2;
    *v12 = (8LL * (unsigned int)(v3 - 1)) | 5;
    v6[1] = *(_QWORD *)(a1 + 8);
    v7 = ((unsigned __int64)v6 + 23) & 0xFFFFFFFFFFFFFFF8uLL;
    SourceString.Length = v2;
    SourceString.MaximumLength = v2;
    *(_QWORD *)v7 = 0LL;
    DestinationString.Buffer = (wchar_t *)(v7 + 56);
    SourceString.Buffer = *(wchar_t **)(a1 + 40);
    *(_DWORD *)v7 = *(_DWORD *)v7 & 0x80000002 | (8 * ((v2 + 66) & 0xFFFFFFF)) | 2;
    v8 = *(_DWORD *)(v7 + 36);
    *(_DWORD *)(v7 + 4) = *(_DWORD *)(a1 + 52);
    *(_DWORD *)(v7 + 8) = *(_DWORD *)(a1 + 56);
    *(_QWORD *)(v7 + 24) = *(_QWORD *)(a1 + 8);
    *(_DWORD *)(v7 + 36) ^= (*(_DWORD *)(a1 + 48) ^ v8) & 0xF;
    *(_DWORD *)(v7 + 36) ^= (*(_DWORD *)(a1 + 48) ^ *(_DWORD *)(v7 + 36)) & 0xF0;
    *(_QWORD *)(v7 + 16) = *(_QWORD *)(a1 + 16);
    *(_DWORD *)(v7 + 32) = *(_DWORD *)(a1 + 24);
    *(_WORD *)(v7 + 40) = v2;
    *(_WORD *)(v7 + 42) = v2;
    RtlUpcaseUnicodeString(&DestinationString, &SourceString, 0);
    *(_WORD *)(v7 + 2LL * *(unsigned __int16 *)(a1 + 30) + 56) = 0;
    ExReleaseRundownProtection(v5 + 45);
  }
  else
  {
    return (unsigned int)-1073741446;
  }
  return v4;
}
