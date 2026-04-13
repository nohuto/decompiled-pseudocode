/*
 * XREFs of ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x180001590
 * Callers:
 *     ?CreateFromPointer@SemaphoreValue@details_abi@wil@@QEAAJPEBGPEAX@Z @ 0x180003040 (-CreateFromPointer@SemaphoreValue@details_abi@wil@@QEAAJPEBGPEAX@Z.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x1800032F4 (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCchCatW(unsigned __int16 *a1, __int64 a2, char *a3)
{
  signed int v4; // r9d
  __int64 v7; // rcx
  unsigned __int16 *i; // rax
  __int64 v9; // r8
  unsigned __int16 *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r10
  char *v13; // rbx
  unsigned __int16 v14; // ax

  v4 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    v4 = -2147024809;
  if ( v4 < 0 )
    goto LABEL_9;
  v7 = a2;
  for ( i = a1; v7; --v7 )
  {
    if ( !*i )
      break;
    ++i;
  }
  v4 = v7 == 0 ? 0x80070057 : 0;
  if ( v7 )
    v9 = a2 - v7;
  else
LABEL_9:
    v9 = 0LL;
  if ( v4 >= 0 )
  {
    v10 = &a1[v9];
    v4 = 0;
    v11 = a2 - v9;
    if ( a2 == v9 )
      goto LABEL_17;
    v12 = 2147483646LL;
    v13 = (char *)(a3 - (char *)v10);
    do
    {
      if ( !v12 )
        break;
      v14 = *(unsigned __int16 *)((char *)v10 + (_QWORD)v13);
      if ( !v14 )
        break;
      *v10 = v14;
      --v12;
      ++v10;
      --v11;
    }
    while ( v11 );
    if ( !v11 )
    {
LABEL_17:
      --v10;
      v4 = -2147024774;
    }
    *v10 = 0;
  }
  return (unsigned int)v4;
}
