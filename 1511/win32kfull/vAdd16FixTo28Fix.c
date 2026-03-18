/*
 * XREFs of vAdd16FixTo28Fix @ 0x1C0247CE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall vAdd16FixTo28Fix(_DWORD *a1, int *a2, int a3)
{
  int v3; // eax
  __int64 result; // rax

  v3 = *a2;
  if ( a3 )
    v3 = -v3;
  result = (unsigned int)(v3 >> 12);
  *a1 += result;
  return result;
}
