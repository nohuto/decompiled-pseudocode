/*
 * XREFs of DisplayFilter @ 0x1401A855C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall DisplayFilter(unsigned __int8 **a1)
{
  int v1; // edx
  void *v2; // rax

  if ( byte_14031D008 )
    goto LABEL_6;
  v1 = **a1 - (unsigned __int8)asc_1401670E0[0];
  if ( !v1 )
    v1 = (*a1)[1] - (unsigned __int8)asc_1401670E0[1];
  if ( v1 )
  {
LABEL_6:
    qword_1402FDE28 = 0LL;
    byte_14031D008 = 1;
    LODWORD(v2) = DisplayBootBitmap(1);
  }
  else
  {
    v2 = &unk_140255940;
    *a1 = (unsigned __int8 *)&unk_140255940;
  }
  return (int)v2;
}
