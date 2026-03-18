/*
 * XREFs of DisplayFilter @ 0x1401DC11C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall DisplayFilter(unsigned __int8 **a1)
{
  int v1; // edx
  void *v2; // rax

  if ( byte_14036E008 )
    goto LABEL_6;
  v1 = **a1 - (unsigned __int8)asc_140195FD0[0];
  if ( !v1 )
    v1 = (*a1)[1] - (unsigned __int8)asc_140195FD0[1];
  if ( v1 )
  {
LABEL_6:
    qword_14034E2C0 = 0LL;
    byte_14036E008 = 1;
    LODWORD(v2) = DisplayBootBitmap(1);
  }
  else
  {
    v2 = &unk_1402A5920;
    *a1 = (unsigned __int8 *)&unk_1402A5920;
  }
  return (int)v2;
}
