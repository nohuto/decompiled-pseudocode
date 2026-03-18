/*
 * XREFs of ACPIDeviceMatchCallback @ 0x1C0020320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIDeviceMatchCallback(_QWORD **a1, int a2, _QWORD *a3, int a4)
{
  _QWORD *v4; // rdx
  unsigned int v5; // ecx
  unsigned __int8 *v7; // rax
  __int64 v8; // r9
  int v9; // r8d
  int v10; // edx

  if ( a2 == 1 && a4 == 1 && *((_DWORD *)*a1 + 2) == 8 && (v4 = (_QWORD *)**a1, v5 = 0, v4) )
  {
    if ( (*v4 & 0x200000000000LL) == 0 )
      return 2;
    v7 = (unsigned __int8 *)v4[69];
    v8 = *a3 - (_QWORD)v7;
    do
    {
      v9 = v7[v8];
      v10 = *v7 - v9;
      if ( v10 )
        break;
      ++v7;
    }
    while ( v9 );
    if ( !v10 )
      return 2;
  }
  else
  {
    return 1;
  }
  return v5;
}
