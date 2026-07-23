/*
 * XREFs of RtlpSearchFunctionTable @ 0x140082B40
 * Callers:
 *     KiLockServiceTable @ 0x14012E004 (KiLockServiceTable.c)
 *     RtlMarkExceptionHandlingPages @ 0x140480F84 (RtlMarkExceptionHandlingPages.c)
 *     KiFatalExceptionFilter @ 0x1407BA49C (KiFatalExceptionFilter.c)
 * Callees:
 *     <none>
 */

unsigned int *__fastcall RtlpSearchFunctionTable(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  int v4; // r10d
  unsigned __int64 v6; // r8
  unsigned int *v7; // rdx
  int v8; // r11d
  int v9; // r9d

  v4 = 0;
  if ( !a2 )
    return 0LL;
  v6 = a3 - a4;
  v7 = (unsigned int *)(a1 + 12LL * (unsigned int)(a2 - 1));
  if ( v6 < *v7 )
  {
    v8 = a2 - 2;
    if ( v8 >= 0 )
    {
      do
      {
        v9 = (v8 + v4) >> 1;
        v7 = (unsigned int *)(a1 + 12LL * v9);
        if ( v6 < *v7 )
        {
          v8 = v9 - 1;
        }
        else
        {
          if ( v6 < v7[3] )
            break;
          v4 = v9 + 1;
        }
      }
      while ( v8 >= v4 );
    }
  }
  if ( v6 >= *v7 && v6 < v7[1] )
    return v7;
  else
    return 0LL;
}
