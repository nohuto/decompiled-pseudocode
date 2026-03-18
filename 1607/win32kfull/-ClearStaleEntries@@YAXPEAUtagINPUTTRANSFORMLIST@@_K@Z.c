/*
 * XREFs of ?ClearStaleEntries@@YAXPEAUtagINPUTTRANSFORMLIST@@_K@Z @ 0x1C0223FF4
 * Callers:
 *     ?OnInput@InputTransform@@YAHPEAUtagWND@@_KPEBUtagINPUT_TRANSFORM@@@Z @ 0x1C0113860 (-OnInput@InputTransform@@YAHPEAUtagWND@@_KPEBUtagINPUT_TRANSFORM@@@Z.c)
 * Callees:
 *     ?FreeHidPageOnlyRequest@@YAXPEAUtagHID_PAGEONLY_REQUEST@@@Z @ 0x1C0009F60 (-FreeHidPageOnlyRequest@@YAXPEAUtagHID_PAGEONLY_REQUEST@@@Z.c)
 */

void __fastcall ClearStaleEntries(struct tagINPUTTRANSFORMLIST *a1, __int64 a2)
{
  char *v2; // rdi
  char *v4; // rbx
  unsigned __int64 v6; // rdx
  char *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  char *v10; // rsi

  v2 = (char *)a1 + 8;
  v4 = (char *)*((_QWORD *)a1 + 1);
  if ( v4 != (char *)a1 + 8 && v4 != *((char **)a1 + 2) )
  {
    v6 = gqpcAgeLimit;
    if ( gqpcAgeLimit || (v6 = 5000 * gliQpcFreq.QuadPart / 1000, (gqpcAgeLimit = v6) != 0) )
    {
      v7 = *(char **)v4;
      if ( *(char **)v4 != v2 )
      {
        do
        {
          if ( a2 - *((_QWORD *)v4 + 2) > v6 )
            break;
          v4 = v7;
          v7 = *(char **)v7;
        }
        while ( v7 != v2 );
        while ( 1 )
        {
          v10 = *(char **)v4;
          if ( *(char **)v4 == v2 )
            break;
          EtwTraceTransformAgeDecay(a1, *((_QWORD *)v10 + 2));
          FreeHidPageOnlyRequest((struct tagHID_PAGEONLY_REQUEST *)v10, v8, v9);
          *((_DWORD *)a1 + 22) |= 2u;
        }
      }
    }
  }
}
