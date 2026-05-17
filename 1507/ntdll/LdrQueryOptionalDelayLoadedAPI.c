/*
 * XREFs of LdrQueryOptionalDelayLoadedAPI @ 0x1800BCC30
 * Callers:
 *     <none>
 * Callees:
 *     LdrResolveDelayLoadedAPI @ 0x180016DF0 (LdrResolveDelayLoadedAPI.c)
 *     LdrpGetDelayloadDescriptor @ 0x1800BCD54 (LdrpGetDelayloadDescriptor.c)
 */

__int64 __fastcall LdrQueryOptionalDelayLoadedAPI(char *a1, __int64 a2, __int64 a3, int a4)
{
  __int64 DelayloadDescriptor; // rax
  _BYTE *v8; // rdx
  __int64 v9; // r9
  char *v10; // rcx
  char *v11; // r11
  __int64 v12; // rax
  __int64 v13; // r8
  char *v14; // rax
  __int64 v15; // rdi
  int v16; // r10d
  int v17; // r8d

  if ( a4 )
    return 3221225485LL;
  DelayloadDescriptor = LdrpGetDelayloadDescriptor();
  v8 = (_BYTE *)DelayloadDescriptor;
  if ( !DelayloadDescriptor )
    return 3221225781LL;
  v9 = 0LL;
  v10 = &a1[*(unsigned int *)(DelayloadDescriptor + 12)];
  v11 = &a1[*(unsigned int *)(DelayloadDescriptor + 16)];
  if ( !*(_QWORD *)v10 )
    return 3221225785LL;
  v12 = 0LL;
  while ( 1 )
  {
    v13 = *(_QWORD *)&v11[v12];
    if ( v13 >= 0 )
    {
      v14 = &a1[v13 + 2];
      v15 = a3 - (_QWORD)v14;
      do
      {
        v16 = (unsigned __int8)v14[v15];
        v17 = (unsigned __int8)*v14 - v16;
        if ( v17 )
          break;
        ++v14;
      }
      while ( v16 );
      if ( !v17 )
        break;
    }
    v9 = (unsigned int)(v9 + 1);
    v12 = 8LL * (unsigned int)v9;
    if ( !*(_QWORD *)&v10[v12] )
      return 3221225785LL;
  }
  return LdrResolveDelayLoadedAPI(a1, v8, 0LL, 0LL, (__int64 *)&v10[8 * v9], 0) == 0 ? 0xC0000139 : 0;
}
