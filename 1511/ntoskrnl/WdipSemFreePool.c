/*
 * XREFs of WdipSemFreePool @ 0x14065CC90
 * Callers:
 *     WdipSemShutdown @ 0x14065C898 (WdipSemShutdown.c)
 * Callees:
 *     InitializeSListHead @ 0x1400F8DC8 (InitializeSListHead.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void WdipSemFreePool()
{
  PVOID *v0; // rax
  PVOID *v1; // rcx
  _SLIST_HEADER *v2; // rbx
  __int64 v3; // rdi

  v0 = (PVOID *)WdipSemPool;
  v1 = *(PVOID **)WdipSemPool;
  if ( *((PVOID **)WdipSemPool + 1) != &WdipSemPool || v1[1] != WdipSemPool )
    __fastfail(3u);
  while ( 1 )
  {
    WdipSemPool = v1;
    v1[1] = &WdipSemPool;
    if ( v0 == &WdipSemPool )
      break;
    ExFreePoolWithTag(v0, 0);
    v0 = (PVOID *)WdipSemPool;
    v1 = *(PVOID **)WdipSemPool;
    if ( *((PVOID **)WdipSemPool + 1) != &WdipSemPool || v1[1] != WdipSemPool )
      __fastfail(3u);
  }
  dword_140306220 = 0;
  v2 = &stru_140306240;
  qword_140306228 = 0LL;
  v3 = 6LL;
  do
  {
    InitializeSListHead(v2++);
    --v3;
  }
  while ( v3 );
}
