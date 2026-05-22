/*
 * XREFs of ?EnumNextChild@PropertyVector@Input@@UEAA_NPEAXPEAPEAVPropertyNode@2@@Z @ 0x1800288C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall Input::PropertyVector::EnumNextChild(
        struct Input::PropertyNode ***this,
        struct Input::PropertyNode ***a2,
        struct Input::PropertyNode **a3)
{
  bool result; // al

  if ( *a2 == this[5] )
    return 0;
  *a3 = **a2;
  result = 1;
  ++*a2;
  return result;
}
