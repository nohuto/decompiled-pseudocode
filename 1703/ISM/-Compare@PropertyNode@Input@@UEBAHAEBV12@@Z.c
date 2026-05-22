/*
 * XREFs of ?Compare@PropertyNode@Input@@UEBAHAEBV12@@Z @ 0x180011450
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall Input::PropertyNode::Compare(Input::PropertyNode *this, const struct Input::PropertyNode *a2)
{
  return memcmp_0((char *)this + 8, (char *)a2 + 8, 0x10uLL);
}
