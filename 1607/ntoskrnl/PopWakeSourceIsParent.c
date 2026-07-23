/*
 * XREFs of PopWakeSourceIsParent @ 0x14066E5DC
 * Callers:
 *     PopProcessWakeSourceWork @ 0x14066E360 (PopProcessWakeSourceWork.c)
 * Callees:
 *     wcsncmp @ 0x14014F600 (wcsncmp.c)
 */

char __fastcall PopWakeSourceIsParent(__int64 *a1, __int64 a2)
{
  __int64 *v2; // rax
  char v3; // bl
  __int64 *v6; // rdi
  unsigned __int16 v7; // ax
  __int64 *v8; // rax
  __int64 *v9; // rax

  v2 = (__int64 *)a1[1];
  v3 = 0;
  if ( v2 )
  {
    do
    {
      v6 = v2;
      v2 = (__int64 *)v2[1];
    }
    while ( v2 );
    while ( 1 )
    {
      v7 = *((_WORD *)v6 + 20);
      if ( v7 == *(_WORD *)a2
        && !wcsncmp((const wchar_t *)v6[6], *(const wchar_t **)(a2 + 8), (unsigned __int64)v7 >> 1) )
      {
        break;
      }
      v8 = (__int64 *)*v6;
      if ( *v6 )
      {
        do
        {
          v6 = v8;
          v8 = (__int64 *)v8[1];
        }
        while ( v8 );
      }
      else
      {
        v9 = (__int64 *)v6[2];
        v6 = 0LL;
        if ( v9 != (__int64 *)IopRootDeviceNode )
          v6 = v9;
        if ( v6 == a1 )
          v6 = 0LL;
      }
      if ( !v6 )
        return v3;
    }
    return 1;
  }
  return v3;
}
