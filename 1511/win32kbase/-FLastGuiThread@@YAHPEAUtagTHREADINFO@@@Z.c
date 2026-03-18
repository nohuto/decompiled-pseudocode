/*
 * XREFs of ?FLastGuiThread@@YAHPEAUtagTHREADINFO@@@Z @ 0x1C0040F34
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0040170 (xxxDestroyThreadInfo.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall FLastGuiThread(struct tagTHREADINFO *a1)
{
  __int64 v1; // rdx
  _BOOL8 result; // rax

  v1 = *((_QWORD *)a1 + 47);
  result = 0LL;
  if ( v1 )
  {
    if ( *(struct tagTHREADINFO **)(v1 + 296) == a1 )
      return *((_QWORD *)a1 + 73) == 0LL;
  }
  return result;
}
