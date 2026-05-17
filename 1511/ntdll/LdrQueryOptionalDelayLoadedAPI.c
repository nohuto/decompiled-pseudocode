/*
 * XREFs of LdrQueryOptionalDelayLoadedAPI @ 0x1800C9950
 * Callers:
 *     <none>
 * Callees:
 *     LdrResolveDelayLoadedAPI @ 0x180031DC0 (LdrResolveDelayLoadedAPI.c)
 *     LdrpGetDelayloadDescriptor @ 0x1800C9A74 (LdrpGetDelayloadDescriptor.c)
 */

__int64 __fastcall LdrQueryOptionalDelayLoadedAPI(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 DelayloadDescriptor; // rax
  _BYTE *v8; // rdx
  __int64 v9; // r9
  _QWORD *v10; // rcx
  __int64 v11; // r11
  __int64 v12; // rax
  __int64 v13; // r8
  unsigned __int8 *v14; // rax
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
  v10 = (_QWORD *)(a1 + *(unsigned int *)(DelayloadDescriptor + 12));
  v11 = a1 + *(unsigned int *)(DelayloadDescriptor + 16);
  if ( !*v10 )
    return 3221225785LL;
  v12 = 0LL;
  while ( 1 )
  {
    v13 = *(_QWORD *)(v12 * 8 + v11);
    if ( v13 >= 0 )
    {
      v14 = (unsigned __int8 *)(v13 + a1 + 2);
      v15 = a3 - (_QWORD)v14;
      do
      {
        v16 = v14[v15];
        v17 = *v14 - v16;
        if ( v17 )
          break;
        ++v14;
      }
      while ( v16 );
      if ( !v17 )
        break;
    }
    v9 = (unsigned int)(v9 + 1);
    v12 = (unsigned int)v9;
    if ( !v10[v12] )
      return 3221225785LL;
  }
  return LdrResolveDelayLoadedAPI(a1, v8, 0, 0, &v10[v9], 0) == 0 ? 0xC0000139 : 0;
}
