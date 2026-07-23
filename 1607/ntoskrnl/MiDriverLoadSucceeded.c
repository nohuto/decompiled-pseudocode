/*
 * XREFs of MiDriverLoadSucceeded @ 0x140482EC8
 * Callers:
 *     MmLoadSystemImage @ 0x140481880 (MmLoadSystemImage.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x14000BD54 (RtlStringCbPrintfW.c)
 *     MiDereferenceControlAreaFile @ 0x1400261C0 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x140026210 (MiReferenceControlAreaFile.c)
 *     MiSectionControlArea @ 0x14002C050 (MiSectionControlArea.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     DbgLoadImageSymbolsUnicode @ 0x140084674 (DbgLoadImageSymbolsUnicode.c)
 *     MiSessionUpdateImageCharges @ 0x14012CF48 (MiSessionUpdateImageCharges.c)
 *     _wcsnicmp @ 0x14014DE10 (_wcsnicmp.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PsCallImageNotifyRoutines @ 0x140428110 (PsCallImageNotifyRoutines.c)
 *     MiCacheImageSymbols @ 0x140483508 (MiCacheImageSymbols.c)
 *     MiProtectSystemImage @ 0x140554204 (MiProtectSystemImage.c)
 */

__int64 __fastcall MiDriverLoadSucceeded(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4, __int64 a5, char a6, char a7)
{
  __int64 *v10; // rdi
  __int64 v11; // rdx
  int v12; // eax
  ULONG_PTR v13; // rbx
  wchar_t *PoolWithTag; // rbx
  __m128i v15; // xmm0
  NTSTATUS v16; // eax
  unsigned __int64 v17; // rcx
  __int64 result; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v20[8]; // [rsp+40h] [rbp-40h] BYREF
  int v21; // [rsp+48h] [rbp-38h]
  __int64 v22; // [rsp+50h] [rbp-30h]
  int v23; // [rsp+58h] [rbp-28h]
  __int64 v24; // [rsp+60h] [rbp-20h]
  int v25; // [rsp+68h] [rbp-18h]

  if ( a6 == 1 )
  {
    *(_DWORD *)(a1 + 104) |= 0x41004000u;
    if ( (a7 & 1) == 0 )
      _InterlockedExchangeAdd(&dword_140327960, *(_DWORD *)(a1 + 64) >> 12);
    v10 = (__int64 *)MiSectionControlArea(a2);
    v11 = *v10;
    v21 = 3;
    v21 = ((*(_BYTE *)(v11 + 15) & 0xF0) << 8) | 3;
    v12 = *(unsigned __int8 *)(v11 + 15);
    v23 = 0;
    v25 = 0;
    v21 = v21 ^ (v21 ^ (v12 << 15)) & 0x70000 | 0x100;
    v24 = *(unsigned int *)(a1 + 64);
    v22 = *(_QWORD *)(a1 + 48);
    v13 = MiReferenceControlAreaFile((__int64)v10);
    PsCallImageNotifyRoutines(a3, 0LL, (__int64)v20, v13);
    MiDereferenceControlAreaFile((__int64)v10, v13);
    if ( MiCacheImageSymbols(*(_QWORD *)(a1 + 48)) )
    {
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x100uLL, 0x6E4C6D4Du);
      if ( PoolWithTag )
      {
        if ( *(_WORD *)a4 <= 0x16u || wcsnicmp(*(const wchar_t **)(a4 + 8), L"\\SystemRoot", 0xBuLL) )
        {
          v16 = RtlStringCbPrintfW(PoolWithTag, 0x100uLL, L"%wZ", a5);
        }
        else
        {
          v15 = *(__m128i *)a4;
          *(_QWORD *)&DestinationString.Length = *(_QWORD *)a4;
          DestinationString.Buffer = (wchar_t *)(_mm_srli_si128(v15, 8).m128i_u64[0] + 22);
          DestinationString.Length -= 22;
          v16 = RtlStringCbPrintfW(PoolWithTag, 0x100uLL, L"%ws%wZ", 0xFFFFF78000000034uLL, &DestinationString);
        }
        if ( v16 >= 0 )
        {
          RtlInitUnicodeString(&DestinationString, PoolWithTag);
          if ( (unsigned int)DbgLoadImageSymbolsUnicode(&DestinationString, *(PVOID *)(a1 + 48)) == 1 )
            *(_DWORD *)(a1 + 104) |= 0x100000u;
        }
        ExFreePoolWithTag(PoolWithTag, 0);
      }
    }
  }
  if ( !*(_QWORD *)(MiSectionControlArea(*(_QWORD *)(a1 + 112)) + 144) || (*(_DWORD *)(a1 + 104) & 0x8000000) == 0 )
    MiProtectSystemImage(a1);
  v17 = *(_QWORD *)(a1 + 48);
  result = qword_140326950;
  if ( v17 >= qword_140326950 )
  {
    result = qword_140326950 + 0x8000000000LL;
    if ( v17 < qword_140326950 + 0x8000000000LL )
      return MiSessionUpdateImageCharges(a1);
  }
  return result;
}
