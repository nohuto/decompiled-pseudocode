/*
 * XREFs of EtwpFreeStackCache @ 0x1406A9C7C
 * Callers:
 *     EtwpFreeLoggerContext @ 0x1404942D4 (EtwpFreeLoggerContext.c)
 *     EtwpEnableStackCaching @ 0x1406A9B1C (EtwpEnableStackCaching.c)
 * Callees:
 *     RtlpInterlockedFlushSList @ 0x1401673F0 (RtlpInterlockedFlushSList.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreeStackCache(__int64 a1)
{
  __int64 i; // rsi
  __int64 **v3; // rax
  __int64 *v4; // rcx
  __int64 v5; // rdx
  __int64 *v6; // rbx
  PSLIST_ENTRY v7; // rbx
  PSLIST_ENTRY v8; // rcx

  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 4); i = (unsigned int)(i + 1) )
  {
    while ( 1 )
    {
      v3 = (__int64 **)(a1 + 8 * (i + 2 * (i + 2)));
      if ( *v3 == (__int64 *)v3 )
        break;
      v4 = *v3;
      v5 = **v3;
      if ( (__int64 **)(*v3)[1] != v3 || *(__int64 **)(v5 + 8) != v4 )
        __fastfail(3u);
      *v3 = (__int64 *)v5;
      *(_QWORD *)(v5 + 8) = v3;
      do
      {
        v6 = (__int64 *)v4[2];
        ExFreePoolWithTag(v4, 0);
        v4 = v6;
      }
      while ( v6 );
    }
  }
  v7 = RtlpInterlockedFlushSList((PSLIST_HEADER)(a1 + 16));
  while ( v7 )
  {
    v8 = v7;
    v7 = v7->Next;
    ExFreePoolWithTag(v8, 0);
  }
  ExFreePoolWithTag((PVOID)a1, 0);
}
