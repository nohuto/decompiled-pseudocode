/*
 * XREFs of sub_140002D38 @ 0x140002D38
 * Callers:
 *     sub_140002A8C @ 0x140002A8C (sub_140002A8C.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall sub_140002D38(void *a1, void *a2)
{
  NTSTATUS result; // eax
  union _LARGE_INTEGER SectionOffset; // [rsp+70h] [rbp+18h] BYREF
  ULONG_PTR ViewSize; // [rsp+78h] [rbp+20h] BYREF

  SectionOffset.QuadPart = 0LL;
  ViewSize = 0LL;
  result = NtMapViewOfSection(
             a1,
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             &BaseAddress,
             0LL,
             0LL,
             &SectionOffset,
             &ViewSize,
             ViewUnmap,
             0,
             2u);
  if ( result >= 0 )
  {
    SectionOffset.QuadPart = 0LL;
    ViewSize = 0LL;
    result = NtMapViewOfSection(
               a2,
               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
               &qword_14001FBD0,
               0LL,
               0LL,
               &SectionOffset,
               &ViewSize,
               ViewUnmap,
               0,
               4u);
    if ( result >= 0 )
    {
      stru_1400208A0.Buffer = (PWSTR)((char *)BaseAddress + *((_QWORD *)BaseAddress + 1));
      stru_1400208A0.Length = *((_WORD *)BaseAddress + 8);
      stru_1400208A0.MaximumLength = stru_1400208A0.Length + 2;
      String1.Buffer = (PWSTR)((char *)BaseAddress + *((_QWORD *)BaseAddress + 3));
      String1.Length = *((_WORD *)BaseAddress + 16);
      String1.MaximumLength = String1.Length + 2;
      qword_14001FBE8 = (__int64)BaseAddress + *((_QWORD *)BaseAddress + 5);
      word_14001FBE0 = *((_WORD *)BaseAddress + 24);
      word_14001FBE2 = word_14001FBE0 + 2;
      qword_14001FBD8 = (HANDLE)*((_QWORD *)qword_14001FBD0 + 1);
    }
  }
  return result;
}
