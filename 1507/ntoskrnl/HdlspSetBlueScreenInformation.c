/*
 * XREFs of HdlspSetBlueScreenInformation @ 0x14075B158
 * Callers:
 *     HdlspDispatch @ 0x140759E40 (HdlspDispatch.c)
 * Callees:
 *     strcpy_s @ 0x140177924 (strcpy_s.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall HdlspSetBlueScreenInformation(unsigned int *a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned int v5; // ebx
  unsigned __int64 v6; // rcx
  __int64 v7; // r11
  unsigned __int8 **v8; // rcx
  unsigned __int8 **i; // rdi
  unsigned __int8 *v10; // rax
  int v11; // r9d
  int v12; // edx
  __int64 v13; // r14
  char *v14; // r13
  __int64 v15; // rbp
  char *PoolWithTag; // rax
  char *v17; // rsi
  __int64 v18; // rax
  unsigned __int8 *v19; // rcx
  unsigned __int8 *v20; // rax
  unsigned __int8 *v21; // rcx
  char *v22; // rax
  char *v23; // rax
  __int64 v24; // rcx

  v2 = HeadlessGlobals;
  if ( (*(_DWORD *)(HeadlessGlobals + 48) & 2) != 0 )
    return 3221225473LL;
  v5 = 0;
  if ( a1 )
  {
    v6 = *a1;
    if ( (unsigned int)v6 >= 2 )
    {
      v7 = (unsigned int)v6;
      if ( v6 < a2 - 8 && !*((_BYTE *)a1 + (unsigned int)(v6 - 1) + 4) && !*((_BYTE *)a1 + a2 - 4) )
      {
        v8 = *(unsigned __int8 ***)(HeadlessGlobals + 40);
        for ( i = v8; i; i = (unsigned __int8 **)i[2] )
        {
          v10 = *i;
          do
          {
            v11 = v10[(char *)(a1 + 1) - (char *)*i];
            v12 = *v10 - v11;
            if ( v12 )
              break;
            ++v10;
          }
          while ( v11 );
          if ( !v12 )
            break;
          v8 = i;
        }
        v13 = -1LL;
        v14 = (char *)a1 + v7;
        v15 = -1LL;
        do
          ++v15;
        while ( v14[v15 + 4] );
        if ( i )
        {
          if ( v15 )
          {
            PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v15 + 1, 0x736C6448u);
            v17 = PoolWithTag;
            if ( PoolWithTag )
            {
              strcpy_s(PoolWithTag, v15 + 1, v14 + 4);
              v18 = HeadlessGlobals;
              v19 = i[1];
              i[1] = (unsigned __int8 *)v17;
              if ( (*(_DWORD *)(v18 + 48) & 2) == 0 )
                goto LABEL_40;
            }
            else
            {
              return (unsigned int)-1073741801;
            }
            return v5;
          }
          v20 = i[2];
          v8[2] = v20;
          if ( *(unsigned __int8 ***)(v2 + 40) == i )
            *(_QWORD *)(v2 + 40) = v20;
          if ( (*(_DWORD *)(v2 + 48) & 2) != 0 )
            return v5;
          ExFreePoolWithTag(i[1], 0);
          v21 = *i;
        }
        else
        {
          if ( !v15 )
            return (unsigned int)-1073741811;
          i = (unsigned __int8 **)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x736C6448u);
          if ( !i )
            return v5;
          v22 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v15 + 1, 0x736C6448u);
          i[1] = (unsigned __int8 *)v22;
          if ( !v22 )
          {
            v5 = -1073741801;
            goto LABEL_39;
          }
          strcpy_s(v22, v15 + 1, v14 + 4);
          do
            ++v13;
          while ( *((_BYTE *)a1 + v13 + 4) );
          if ( v13 )
          {
            v23 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v13 + 1, 0x736C6448u);
            *i = (unsigned __int8 *)v23;
            if ( v23 )
            {
              strcpy_s(v23, v13 + 1, (const char *)a1 + 4);
              v24 = HeadlessGlobals;
              i[2] = *(unsigned __int8 **)(HeadlessGlobals + 40);
              *(_QWORD *)(v24 + 40) = i;
              return v5;
            }
            v5 = -1073741801;
          }
          else
          {
            v5 = -1073741811;
          }
          v21 = i[1];
        }
        ExFreePoolWithTag(v21, 0);
LABEL_39:
        v19 = (unsigned __int8 *)i;
LABEL_40:
        ExFreePoolWithTag(v19, 0);
        return v5;
      }
    }
  }
  return 3221225485LL;
}
