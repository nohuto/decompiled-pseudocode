/*
 * XREFs of DisplayFilter @ 0x1401B0E7C
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
  v1 = **a1 - (unsigned __int8)asc_140171B10[0];
  if ( !v1 )
    v1 = (*a1)[1] - (unsigned __int8)asc_140171B10[1];
  if ( v1 )
  {
LABEL_6:
    qword_140323440 = 0LL;
    byte_140342000 = 1;
    LODWORD(v2) = DisplayBootBitmap(1);
  }
  else
  {
    v2 = &unk_14027F640;
    *a1 = (unsigned __int8 *)&unk_14027F640;
  }
  return (int)v2;
}
