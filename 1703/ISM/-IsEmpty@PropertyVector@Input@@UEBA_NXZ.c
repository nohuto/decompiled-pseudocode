/*
 * XREFs of ?IsEmpty@PropertyVector@Input@@UEBA_NXZ @ 0x18001BDE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall Input::PropertyVector::IsEmpty(Input::PropertyVector *this)
{
  return (unsigned int)((__int64)(*((_QWORD *)this + 5) - *((_QWORD *)this + 4)) >> 3) == 0;
}
