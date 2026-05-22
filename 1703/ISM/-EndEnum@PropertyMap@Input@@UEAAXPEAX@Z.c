/*
 * XREFs of ?EndEnum@PropertyMap@Input@@UEAAXPEAX@Z @ 0x180028380
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Input::PropertyMap::EndEnum(Input::PropertyMap *this, void *a2)
{
  operator delete(a2);
}
