/*
 * XREFs of TrimString @ 0x1C004336C
 * Callers:
 *     ATAShimGetMsftId @ 0x1C0042DA4 (ATAShimGetMsftId.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TrimString(unsigned __int16 *a1, struct _STRING *a2)
{
  unsigned int v2; // ebx
  int v5; // edi
  __int64 i; // rsi
  int v7; // esi
  int v8; // eax
  __int64 v9; // rdi
  const char *PoolWithTag; // rdx
  __int64 v11; // r8
  char *v12; // rcx
  __int64 v13; // r9
  char v14; // al

  v2 = 0;
  if ( *a1 )
  {
    v5 = *a1 - 1;
    for ( i = v5; i >= 0; --i )
    {
      if ( !isspace(*(char *)(*((_QWORD *)a1 + 1) + i)) )
        break;
      --v5;
    }
    if ( v5 >= 0 )
    {
      v7 = v5 + 1;
      v8 = v5 + 2;
      v9 = v5 + 2;
      PoolWithTag = (const char *)ExAllocatePoolWithTag(NonPagedPoolNx, v8, 0x48536152u);
      if ( PoolWithTag )
      {
        if ( (unsigned __int64)(v9 - 1) <= 0x7FFFFFFE )
        {
          if ( (unsigned __int64)v7 <= 0x7FFFFFFE )
          {
            v11 = v7 - v9;
            v12 = (char *)PoolWithTag;
            v13 = *((_QWORD *)a1 + 1) - (_QWORD)PoolWithTag;
            do
            {
              if ( !(v11 + v9) )
                break;
              v14 = v12[v13];
              if ( !v14 )
                break;
              *v12++ = v14;
              --v9;
            }
            while ( v9 );
            if ( !v9 )
              --v12;
            *v12 = 0;
          }
          else
          {
            *PoolWithTag = 0;
          }
        }
        RtlInitAnsiString(a2, PoolWithTag);
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  return v2;
}
