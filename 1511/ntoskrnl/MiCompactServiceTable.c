/*
 * XREFs of MiCompactServiceTable @ 0x140506EA0
 * Callers:
 *     MmLoadSystemImage @ 0x1403CE970 (MmLoadSystemImage.c)
 * Callees:
 *     MiSetImageProtection @ 0x14001A37C (MiSetImageProtection.c)
 *     MiSectionControlArea @ 0x1400627B0 (MiSectionControlArea.c)
 *     LookupEntryPoint @ 0x140123ADC (LookupEntryPoint.c)
 *     KeCompactServiceTable @ 0x140123BFC (KeCompactServiceTable.c)
 *     MiFinalizeDriverImage @ 0x1403B66C0 (MiFinalizeDriverImage.c)
 *     RtlEqualUnicodeString @ 0x14040F490 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall MiCompactServiceTable(__int64 a1, char a2)
{
  unsigned int v4; // edi
  char v5; // r14
  __int64 result; // rax
  unsigned int *v7; // r12
  unsigned int v8; // esi
  UNICODE_STRING String2; // [rsp+20h] [rbp-38h] BYREF
  int *v10; // [rsp+60h] [rbp+8h] BYREF
  unsigned int *v11; // [rsp+70h] [rbp+18h] BYREF
  unsigned __int8 *v12; // [rsp+78h] [rbp+20h] BYREF

  *(_DWORD *)&String2.Length = 1441812;
  String2.Buffer = L"win32k.sys";
  v4 = 0;
  v5 = 0;
  if ( RtlEqualUnicodeString((PCUNICODE_STRING)(a1 + 88), &String2, 1u) == 1 )
  {
    result = LookupEntryPoint(*(char **)(a1 + 48), (int)"W32pServiceTable", &v10);
    if ( (int)result < 0
      || (result = LookupEntryPoint(*(char **)(a1 + 48), (int)"W32pServiceLimit", &v11), (int)result < 0)
      || (result = LookupEntryPoint(*(char **)(a1 + 48), (int)"W32pArgumentTable", &v12), v4 = result, (int)result < 0) )
    {
      __debugbreak();
      return result;
    }
    v7 = v11;
    v8 = 8 * *v11;
    MiSetImageProtection(a1, (unsigned __int64)v10, v8);
    if ( a2 == 1 )
    {
      MiFinalizeDriverImage(a1);
      v5 = 1;
    }
    KeCompactServiceTable(v10, v12, *v7, 1);
    if ( *(_QWORD *)(MiSectionControlArea(*(_QWORD *)(a1 + 112)) + 136) )
      MiSetImageProtection(a1, (unsigned __int64)v10, v8);
  }
  if ( a2 == 1 && !v5 )
    MiFinalizeDriverImage(a1);
  return v4;
}
