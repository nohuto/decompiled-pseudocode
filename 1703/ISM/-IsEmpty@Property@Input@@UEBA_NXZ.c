/*
 * XREFs of ?IsEmpty@Property@Input@@UEBA_NXZ @ 0x180011550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall Input::Property::IsEmpty(Input::Property *this)
{
  return *((_QWORD *)this + 4) == 0LL;
}
