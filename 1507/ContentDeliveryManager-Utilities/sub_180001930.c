/*
 * XREFs of sub_180001930 @ 0x180001930
 * Callers:
 *     <none>
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall sub_180001930(unsigned int a1)
{
  unsigned int (__fastcall *v1)(_QWORD); // rdi
  unsigned int v2; // ebx
  HMODULE Library; // rax

  v1 = (unsigned int (__fastcall *)(_QWORD))RtlNtStatusToDosErrorNoTeb;
  v2 = 0;
  if ( RtlNtStatusToDosErrorNoTeb )
    return v1(a1);
  Library = hModule;
  if ( !hModule )
  {
    Library = LoadLibraryExW(L"ntdll.dll", 0LL, 0x800u);
    hModule = Library;
  }
  RtlNtStatusToDosErrorNoTeb = (__int64)GetProcAddress(Library, "RtlNtStatusToDosErrorNoTeb");
  v1 = (unsigned int (__fastcall *)(_QWORD))RtlNtStatusToDosErrorNoTeb;
  if ( RtlNtStatusToDosErrorNoTeb )
    return v1(a1);
  return v2;
}
