/*
 * XREFs of ?Init@CNtDeleteKey@@QEAA_NXZ @ 0x180083A48
 * Callers:
 *     ?SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z @ 0x180034E78 (-SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CNtDeleteKey::Init(CNtDeleteKey *this)
{
  HMODULE Library; // rax

  if ( hLibModule && qword_1800E6B68 )
  {
    LOBYTE(Library) = 1;
  }
  else
  {
    Library = LoadLibraryExW(L"ntdll.dll", 0LL, 0x800u);
    hLibModule = Library;
    if ( Library )
    {
      qword_1800E6B68 = (CBackgroundSessionCallbacks *)GetProcAddress(Library, "NtDeleteKey");
      LOBYTE(Library) = qword_1800E6B68 != 0LL;
    }
  }
  return (char)Library;
}
