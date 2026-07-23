/*
 * XREFs of DisplayFilter @ 0x1401B0D60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall DisplayFilter(unsigned __int8 **a1)
{
  int v1; // edx
  void *v2; // rax

  if ( byte_140342000 )
    goto LABEL_6;
  v1 = **a1 - (unsigned __int8)asc_140172010[0];
  if ( !v1 )
    v1 = (*a1)[1] - (unsigned __int8)asc_140172010[1];
  if ( v1 )
  {
LABEL_6:
    qword_140323480 = 0LL;
    byte_140342000 = 1;
    LODWORD(v2) = DisplayBootBitmap(1);
  }
  else
  {
    v2 = &unk_14027F740;
    *a1 = (unsigned __int8 *)&unk_14027F740;
  }
  return (int)v2;
}
