/*
 * XREFs of PfSnLogStreamCreate @ 0x1404F7FE4
 * Callers:
 *     PfFileInfoNotify @ 0x1400EC950 (PfFileInfoNotify.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     PfSnLogHelper @ 0x1404F7F70 (PfSnLogHelper.c)
 *     RtlUpcaseUnicodeString @ 0x1404F8140 (RtlUpcaseUnicodeString.c)
 */

__int64 __fastcall PfSnLogStreamCreate(__int64 a1)
{
  unsigned int v2; // esi
  unsigned int v3; // eax
  __int64 v4; // rsi
  unsigned __int64 v5; // rbx
  unsigned int v6; // edi
  struct _EX_RUNDOWN_REF *v7; // r15
  __int64 *v8; // rdx
  unsigned __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rax
  wchar_t *v12; // rcx
  UNICODE_STRING SourceString; // [rsp+20h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  __int64 *v16; // [rsp+60h] [rbp+8h] BYREF

  v2 = *(unsigned __int16 *)(a1 + 34);
  v3 = (unsigned __int16)*(_DWORD *)(a1 + 32);
  if ( v2 <= v3 )
  {
    return (unsigned int)-1073741637;
  }
  else
  {
    v4 = v2 - v3;
    v5 = ((unsigned __int64)(unsigned int)(2 * v4 + 70) + 15) >> 4;
    v6 = 0;
    v7 = PfSnLogHelper(*(_QWORD *)a1, v5, &v16);
    if ( v7 )
    {
      v8 = v16;
      DestinationString.Length = 0;
      *v16 = (8LL * (unsigned int)(v5 - 1)) | 5;
      v9 = ((unsigned __int64)v8 + 23) & 0xFFFFFFFFFFFFFFF8uLL;
      v8[1] = *(_QWORD *)(a1 + 16);
      *(_QWORD *)v9 = 0LL;
      DestinationString.Buffer = (wchar_t *)(v9 + 44);
      v10 = (unsigned __int16)*(_DWORD *)(a1 + 32);
      v11 = *(_QWORD *)(a1 + 24);
      DestinationString.MaximumLength = 2 * v4;
      SourceString.Length = 2 * v4;
      SourceString.MaximumLength = 2 * v4;
      v12 = (wchar_t *)(v11 + 2 * v10);
      LODWORD(v11) = *(_DWORD *)v9;
      SourceString.Buffer = v12;
      *(_DWORD *)v9 = v11 & 0x80000000 | (8 * ((2 * v4 + 54) & 0xFFFFFFF));
      LODWORD(v12) = *(_DWORD *)(v9 + 40);
      *(_DWORD *)(v9 + 4) = *(_DWORD *)(a1 + 40);
      *(_DWORD *)(v9 + 8) = *(_DWORD *)(a1 + 44);
      *(_QWORD *)(v9 + 24) = *(_QWORD *)(a1 + 8);
      *(_DWORD *)(v9 + 32) = *(_DWORD *)(a1 + 48);
      *(_QWORD *)(v9 + 16) = *(_QWORD *)(a1 + 16);
      *(_DWORD *)(v9 + 40) ^= (*(_DWORD *)(a1 + 36) ^ (unsigned int)v12) & 1;
      *(_DWORD *)(v9 + 40) ^= (*(_DWORD *)(v9 + 40) ^ (2 * *(_DWORD *)(a1 + 36))) & 4;
      *(_WORD *)(v9 + 42) = v4;
      RtlUpcaseUnicodeString(&DestinationString, &SourceString, 0);
      *(_WORD *)(v9 + 2 * v4 + 44) = 0;
      ExReleaseRundownProtection(v7 + 45);
    }
    else
    {
      return (unsigned int)-1073741446;
    }
  }
  return v6;
}
