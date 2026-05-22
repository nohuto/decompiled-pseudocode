/*
 * XREFs of ?EnumFirstChild@PropertyVector@Input@@UEAAPEAXPEAPEAVPropertyNode@2@@Z @ 0x180028870
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18009DFE0 (--2@YAPEAX_K@Z.c)
 */

struct Input::PropertyNode ***__fastcall Input::PropertyVector::EnumFirstChild(
        Input::PropertyVector *this,
        struct Input::PropertyNode **a2)
{
  struct Input::PropertyNode ***result; // rax
  struct Input::PropertyNode **v5; // rcx

  result = (struct Input::PropertyNode ***)operator new(8uLL);
  *result = 0LL;
  v5 = (struct Input::PropertyNode **)*((_QWORD *)this + 4);
  *result = v5;
  if ( v5 == *((struct Input::PropertyNode ***)this + 5) )
    return 0LL;
  *a2 = *v5;
  ++*result;
  return result;
}
