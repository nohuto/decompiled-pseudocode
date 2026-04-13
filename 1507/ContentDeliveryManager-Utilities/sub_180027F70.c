/*
 * XREFs of sub_180027F70 @ 0x180027F70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall sub_180027F70()
{
  _QWORD *v0; // rbx
  _QWORD *v1; // rdi
  void *v2; // rcx

  v0 = qword_18003AD90;
  do
  {
    v1 = (_QWORD *)*v0;
    while ( v1 )
    {
      v2 = v1;
      v1 = (_QWORD *)v1[2];
      free(v2);
    }
    *v0++ = 0LL;
  }
  while ( v0 != (_QWORD *)&unk_18003AE30 );
}
