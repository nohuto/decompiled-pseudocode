/*
 * XREFs of ?FreeWindowGCList@@YAXPEAPEAUtagGESTURECONFIGLIST@@@Z @ 0x1C0133BEC
 * Callers:
 *     FreeWindowGCData @ 0x1C005578C (FreeWindowGCData.c)
 *     SetGestureConfigSettings @ 0x1C012A53C (SetGestureConfigSettings.c)
 * Callees:
 *     <none>
 */

void __fastcall FreeWindowGCList(struct tagGESTURECONFIGLIST **a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  _QWORD *v5; // rcx
  _QWORD *v6; // rbx

  v4 = 8LL;
  do
  {
    v5 = *a1;
    if ( *a1 )
    {
      do
      {
        v6 = (_QWORD *)*v5;
        Win32FreePool(v5, a2, a3);
        v5 = v6;
      }
      while ( v6 );
    }
    *a1++ = 0LL;
    --v4;
  }
  while ( v4 );
}
