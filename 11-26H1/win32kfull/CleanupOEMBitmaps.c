/*
 * XREFs of CleanupOEMBitmaps @ 0x1402266F0
 * Callers:
 *     CreateBitmapStrip @ 0x1400CE890 (CreateBitmapStrip.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CleanupOEMBitmaps(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdi
  _QWORD *v4; // rbx
  __int64 v5; // rcx

  result = W32GetUserSessionState(a1, a2);
  v3 = 18LL;
  v4 = (_QWORD *)(result + 43288);
  do
  {
    v5 = *v4;
    v4[1] = 0LL;
    if ( v5 )
    {
      GreSetBitmapOwner(v5, 2147483650LL);
      result = GreDeleteObject(*v4);
      *v4 = 0LL;
    }
    v4 += 95;
    --v3;
  }
  while ( v3 );
  return result;
}
