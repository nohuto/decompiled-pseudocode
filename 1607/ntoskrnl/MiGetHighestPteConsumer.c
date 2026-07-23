/*
 * XREFs of MiGetHighestPteConsumer @ 0x1401FC4EC
 * Callers:
 *     MiIssueNoPtesBugcheck @ 0x1401E7244 (MiIssueNoPtesBugcheck.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetHighestPteConsumer(unsigned __int64 *a1)
{
  unsigned int v3; // eax
  _QWORD *v4; // rcx
  __int64 v5; // rdx
  unsigned __int64 v6; // r11
  __int64 v7; // r14
  unsigned __int64 v8; // r8
  void **v9; // rdi
  char *v10; // r10
  __int64 v11; // r12
  char *i; // rcx
  int v13; // r9d
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rbp

  *a1 = 0LL;
  if ( (dword_1403A913C & 1) == 0 || byte_1403275A4 == 1 )
    return 0LL;
  v3 = 0;
  v4 = &unk_140327DD0;
  do
  {
    if ( (_QWORD *)*v4 != v4 )
      break;
    ++v3;
    v4 += 2;
  }
  while ( v3 < 0x10 );
  if ( v3 == 16 || !PsLoadedModuleList )
    return 0LL;
  v5 = (__int64)*(&PsLoadedModuleList + 1);
  v6 = 0LL;
  v7 = 0LL;
  while ( (PVOID *)v5 != &PsLoadedModuleList )
  {
    v8 = 0LL;
    v9 = (void **)&unk_140327DD0;
    v10 = (char *)&unk_140327DD0;
    v11 = 16LL;
    do
    {
      for ( i = (char *)*v9; i != v10; i = *(char **)i )
      {
        v13 = *((_DWORD *)i + 16);
        v14 = *((_QWORD *)i + 10);
        if ( (v13 & 2) == 0 )
        {
          if ( (v15 = *(_QWORD *)(v5 + 48), v14 >= v15) && v14 < v15 + *(unsigned int *)(v5 + 64)
            || (v16 = *((_QWORD *)i + 11), v16 >= v15) && v16 < v15 + *(unsigned int *)(v5 + 64) )
          {
            v8 += *((_QWORD *)i + 3);
            *((_DWORD *)i + 16) = v13 | 2;
          }
        }
      }
      v10 += 16;
      v9 += 2;
      --v11;
    }
    while ( v11 );
    if ( v8 > v6 )
    {
      v6 = v8;
      v7 = v5;
    }
    v5 = *(_QWORD *)(v5 + 8);
  }
  *a1 = v6;
  return v7;
}
