/*
 * XREFs of MiDriverLoadSucceeded @ 0x140574F44
 * Callers:
 *     MmLoadSystemImage @ 0x140574658 (MmLoadSystemImage.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     MI_REFERENCE_CONTROL_AREA_FILE @ 0x140088960 (MI_REFERENCE_CONTROL_AREA_FILE.c)
 *     MI_DEREFERENCE_CONTROL_AREA_FILE @ 0x140088A90 (MI_DEREFERENCE_CONTROL_AREA_FILE.c)
 *     MiSectionControlArea @ 0x140089EB0 (MiSectionControlArea.c)
 *     RtlStringCbPrintfW @ 0x1400CEF64 (RtlStringCbPrintfW.c)
 *     DbgLoadImageSymbolsUnicode @ 0x140153CBC (DbgLoadImageSymbolsUnicode.c)
 *     MiSessionUpdateImageCharges @ 0x140155F24 (MiSessionUpdateImageCharges.c)
 *     _wcsnicmp @ 0x140172500 (_wcsnicmp.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PsCallImageNotifyRoutines @ 0x140423B80 (PsCallImageNotifyRoutines.c)
 *     MiCacheImageSymbols @ 0x140576D68 (MiCacheImageSymbols.c)
 *     MiFinalizeDriverImage @ 0x140576DFC (MiFinalizeDriverImage.c)
 *     MiProtectSystemImage @ 0x1405973F8 (MiProtectSystemImage.c)
 */

unsigned __int64 __fastcall MiDriverLoadSucceeded(
        __int64 a1,
        __int64 a2,
        _BYTE *a3,
        __int64 a4,
        __int64 a5,
        char a6,
        char a7)
{
  unsigned int v8; // ebx
  __int64 *v12; // rdi
  __int64 v13; // rdx
  int v14; // eax
  ULONG_PTR v15; // rbx
  wchar_t *PoolWithTag; // rbx
  __m128i v17; // xmm0
  NTSTATUS v18; // eax
  unsigned __int64 result; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v21[8]; // [rsp+40h] [rbp-40h] BYREF
  int v22; // [rsp+48h] [rbp-38h]
  __int64 v23; // [rsp+50h] [rbp-30h]
  int v24; // [rsp+58h] [rbp-28h]
  __int64 v25; // [rsp+60h] [rbp-20h]
  int v26; // [rsp+68h] [rbp-18h]

  v8 = *(_DWORD *)(a1 + 64) >> 12;
  if ( a6 == 1 )
  {
    *(_DWORD *)(a1 + 104) |= 0x41004000u;
    if ( (a7 & 1) == 0 )
    {
      MiFinalizeDriverImage(a1);
      _InterlockedExchangeAdd(&dword_14034FD18, v8);
    }
    v12 = (__int64 *)MiSectionControlArea(a2);
    v13 = *v12;
    v22 = 3;
    v22 = ((*(_BYTE *)(v13 + 15) & 0xF0) << 8) | 3;
    v14 = *(unsigned __int8 *)(v13 + 15);
    v24 = 0;
    v26 = 0;
    v22 = v22 ^ (v22 ^ (v14 << 15)) & 0x70000 | 0x100;
    v25 = *(unsigned int *)(a1 + 64);
    v23 = *(_QWORD *)(a1 + 48);
    v15 = MI_REFERENCE_CONTROL_AREA_FILE((__int64)v12);
    PsCallImageNotifyRoutines(a3, 0LL, (__int64)v21, v15);
    MI_DEREFERENCE_CONTROL_AREA_FILE((__int64)v12, v15);
    if ( MiCacheImageSymbols(*(_QWORD *)(a1 + 48)) )
    {
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x100uLL, 0x6E4C6D4Du);
      if ( PoolWithTag )
      {
        if ( *(_WORD *)a4 <= 0x16u || wcsnicmp(*(const wchar_t **)(a4 + 8), L"\\SystemRoot", 0xBuLL) )
        {
          v18 = RtlStringCbPrintfW(PoolWithTag, 0x100uLL, L"%wZ", a5);
        }
        else
        {
          v17 = *(__m128i *)a4;
          *(_QWORD *)&DestinationString.Length = *(_QWORD *)a4;
          DestinationString.Buffer = (wchar_t *)(_mm_srli_si128(v17, 8).m128i_u64[0] + 22);
          DestinationString.Length -= 22;
          v18 = RtlStringCbPrintfW(PoolWithTag, 0x100uLL, L"%ws%wZ", 0xFFFFF78000000034uLL, &DestinationString);
        }
        if ( v18 >= 0 )
        {
          RtlInitUnicodeString(&DestinationString, PoolWithTag);
          if ( (unsigned int)DbgLoadImageSymbolsUnicode(&DestinationString, *(PVOID *)(a1 + 48)) == 1 )
            *(_DWORD *)(a1 + 104) |= 0x100000u;
        }
        ExFreePoolWithTag(PoolWithTag, 0);
      }
    }
  }
  if ( !*(_QWORD *)(MiSectionControlArea(*(_QWORD *)(a1 + 112)) + 136) || (*(_DWORD *)(a1 + 104) & 0x8000000) == 0 )
    MiProtectSystemImage(a1);
  result = *(_QWORD *)(a1 + 48) + 0x70000000000LL;
  if ( result <= 0x7FFFFFFFFFLL )
    return MiSessionUpdateImageCharges(a1);
  return result;
}
