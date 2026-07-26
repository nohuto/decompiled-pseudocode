/*
 * XREFs of ndisGetListEntriesCount @ 0x1C00C3034
 * Callers:
 *     ndisGetPowerInfo @ 0x1C0057550 (ndisGetPowerInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisGetListEntriesCount(_QWORD **a1)
{
  _QWORD *v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  while ( v1 )
  {
    v1 = (_QWORD *)*v1;
    result = (unsigned int)(result + 1);
  }
  return result;
}
