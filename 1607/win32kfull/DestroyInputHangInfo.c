/*
 * XREFs of DestroyInputHangInfo @ 0x1C012D4B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DestroyInputHangInfo(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbx
  unsigned int v4; // edi
  _QWORD *v5; // rcx

  v3 = *(_QWORD **)(a1 + 1024);
  v4 = 0;
  *(_QWORD *)(a1 + 1024) = 0LL;
  if ( v3 )
  {
    v4 = 1;
    do
    {
      v5 = v3;
      v3 = (_QWORD *)*v3;
      Win32FreePool(v5, a2, a3);
    }
    while ( v3 );
  }
  return v4;
}
