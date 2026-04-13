/*
 * XREFs of ??_E?$basic_streambuf@GU?$char_traits@G@std@@@std@@UEAAPEAXI@Z @ 0x180014820
 * Callers:
 *     <none>
 * Callees:
 *     ??_Glocale@std@@QEAAPEAXI@Z @ 0x180014870 (--_Glocale@std@@QEAAPEAXI@Z.c)
 */

_QWORD *__fastcall std::basic_streambuf<unsigned short>::`vector deleting destructor'(_QWORD *a1, char a2)
{
  std::locale *v4; // rcx

  *a1 = &std::basic_streambuf<unsigned short>::`vftable';
  v4 = (std::locale *)a1[12];
  if ( v4 )
    std::locale::`scalar deleting destructor'(v4, 1u);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
