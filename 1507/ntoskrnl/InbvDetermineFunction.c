/*
 * XREFs of InbvDetermineFunction @ 0x14016641C
 * Callers:
 *     InbvDriverInitialize @ 0x1407DB3A8 (InbvDriverInitialize.c)
 * Callees:
 *     strstr @ 0x140171998 (strstr.c)
 *     _strupr @ 0x1401719F4 (_strupr.c)
 */

__int64 __fastcall InbvDetermineFunction(__int64 a1)
{
  unsigned int v1; // edx
  char *v4; // rcx
  bool v5; // bl
  char *v6; // rax
  char *v7; // rax
  __int64 (__fastcall **v8)(); // rax

  v1 = dword_140353AE0;
  if ( !dword_140353AE0 )
  {
    v4 = *(char **)(a1 + 216);
    v5 = 1;
    if ( v4 )
    {
      v6 = strupr(v4);
      v7 = strstr(v6, "NOVGA");
      v1 = dword_140353AE0;
      v5 = v7 == 0LL;
    }
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 240) + 184LL) )
    {
      if ( !v5 )
      {
        v8 = off_140320CC0;
        v1 = 1;
        goto LABEL_9;
      }
      v1 = 3;
    }
    else
    {
      if ( !v5 )
        return v1;
      v1 = 2;
    }
    v8 = off_140320D70;
LABEL_9:
    qword_140353AD8 = (__int64)v8;
    dword_140353AE0 = v1;
  }
  return v1;
}
