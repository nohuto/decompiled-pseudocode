/*
 * XREFs of RtlStdInitializeStackDatabase @ 0x140687A08
 * Callers:
 *     RtlpInitializeStackTraceDatabase @ 0x140687B3C (RtlpInitializeStackTraceDatabase.c)
 * Callees:
 *     InitializeSListHead @ 0x140002CB0 (InitializeSListHead.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall RtlStdInitializeStackDatabase(__int64 a1, __int64 a2, unsigned __int64 a3, _QWORD *a4)
{
  __int64 v7; // rdx
  unsigned __int64 v8; // rdi
  __int64 v9; // rsi
  unsigned __int64 v10; // rcx
  _SLIST_HEADER *v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx

  if ( a2 && (a2 != a3 || !a1) )
    return 3221225485LL;
  v7 = a3 < 0x1000000 ? 5569 : 9551;
  v8 = 24 * v7 + 752;
  if ( a3 <= v8 || !a1 || a2 != a3 )
    return 3221225485LL;
  *(_DWORD *)(a1 + 720) = v7;
  *(_QWORD *)(a1 + 168) = a1 + a3;
  *(_QWORD *)(a1 + 184) = a1 + a3;
  *(_BYTE *)(a1 + 128) = 1;
  *(_QWORD *)(a1 + 136) = a1;
  memset((void *)(a1 + 728), 0, 24 * v7);
  v9 = 32LL;
  v10 = (v8 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  v11 = (_SLIST_HEADER *)(a1 + 208);
  v12 = a1 + v10;
  *(_QWORD *)(a1 + 160) = v12;
  *(_QWORD *)(a1 + 120) = v12;
  do
  {
    InitializeSListHead(v11++);
    --v9;
  }
  while ( v9 );
  *(_QWORD *)a1 = 0LL;
  v13 = 0LL;
  for ( *(_BYTE *)(a1 + 8) = 0; (unsigned int)v13 < *(_DWORD *)(a1 + 720); *(_BYTE *)(a1 + 8 * v14 + 744) = 0 )
  {
    v14 = 3 * v13;
    v13 = (unsigned int)(v13 + 1);
    *(_QWORD *)(a1 + 8 * v14 + 736) = 0LL;
  }
  *a4 = a1;
  return 0LL;
}
