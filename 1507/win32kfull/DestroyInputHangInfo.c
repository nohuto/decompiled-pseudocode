/*
 * XREFs of DestroyInputHangInfo @ 0x1C00FE840
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DestroyInputHangInfo(__int64 a1)
{
  _QWORD *v1; // rbx
  unsigned int v2; // edi
  _QWORD *v3; // rcx

  v1 = *(_QWORD **)(a1 + 1008);
  v2 = 0;
  *(_QWORD *)(a1 + 1008) = 0LL;
  if ( v1 )
  {
    v2 = 1;
    do
    {
      v3 = v1;
      v1 = (_QWORD *)*v1;
      Win32FreePool(v3);
    }
    while ( v1 );
  }
  return v2;
}
