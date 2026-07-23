/*
 * XREFs of MiCompactServiceTable @ 0x14053A788
 * Callers:
 *     MmLoadSystemImage @ 0x140481880 (MmLoadSystemImage.c)
 * Callees:
 *     MiSectionControlArea @ 0x14002C050 (MiSectionControlArea.c)
 *     MiSetImageProtection @ 0x140082DB8 (MiSetImageProtection.c)
 *     KeCompactServiceTable @ 0x14012DF9C (KeCompactServiceTable.c)
 *     RtlFindExportedRoutineByName @ 0x1403F4DC8 (RtlFindExportedRoutineByName.c)
 *     RtlEqualUnicodeString @ 0x14040E5E0 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall MiCompactServiceTable(__int64 a1)
{
  int *ExportedRoutineByName; // rdi
  unsigned int *v4; // r14
  unsigned __int8 *v5; // rbp
  int *v6; // rsi
  unsigned int *v7; // r15
  unsigned __int8 *v8; // r12
  unsigned int v9; // r13d
  UNICODE_STRING v10; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v11; // [rsp+70h] [rbp+8h]

  *(_DWORD *)&v10.Length = 1441812;
  v10.Buffer = L"win32k.sys";
  if ( RtlEqualUnicodeString((PCUNICODE_STRING)(a1 + 88), &v10, 1u) != 1 )
    return 0LL;
  ExportedRoutineByName = (int *)RtlFindExportedRoutineByName(*(PVOID *)(a1 + 48), "W32pServiceTable");
  if ( ExportedRoutineByName )
  {
    v4 = (unsigned int *)RtlFindExportedRoutineByName(*(PVOID *)(a1 + 48), "W32pServiceLimit");
    if ( v4 )
    {
      v5 = (unsigned __int8 *)RtlFindExportedRoutineByName(*(PVOID *)(a1 + 48), "W32pArgumentTable");
      if ( v5 )
      {
        v6 = (int *)RtlFindExportedRoutineByName(*(PVOID *)(a1 + 48), "W32pServiceTableFilter");
        if ( v6 )
        {
          v7 = (unsigned int *)RtlFindExportedRoutineByName(*(PVOID *)(a1 + 48), "W32pServiceLimitFilter");
          if ( v7 )
          {
            v8 = (unsigned __int8 *)RtlFindExportedRoutineByName(*(PVOID *)(a1 + 48), "W32pArgumentTableFilter");
            if ( v8 )
            {
              v9 = 8 * *v4;
              MiSetImageProtection(a1, (unsigned __int64)ExportedRoutineByName, v9);
              v11 = 8 * *v7;
              MiSetImageProtection(a1, (unsigned __int64)v6, v11);
              KeCompactServiceTable(v6, v8, *v7, 3LL, *(_QWORD *)(a1 + 48));
              KeCompactServiceTable(ExportedRoutineByName, v5, *v4, 1LL, *(_QWORD *)(a1 + 48));
              if ( *(_QWORD *)(MiSectionControlArea(*(_QWORD *)(a1 + 112)) + 144) )
              {
                MiSetImageProtection(a1, (unsigned __int64)ExportedRoutineByName, v9);
                MiSetImageProtection(a1, (unsigned __int64)v6, v11);
              }
              return 0LL;
            }
          }
        }
      }
    }
  }
  __debugbreak();
  return 3221225594LL;
}
