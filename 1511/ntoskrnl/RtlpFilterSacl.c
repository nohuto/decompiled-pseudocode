/*
 * XREFs of RtlpFilterSacl @ 0x1404216D0
 * Callers:
 *     SeQuerySecurityDescriptorInfo @ 0x140421240 (SeQuerySecurityDescriptorInfo.c)
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 */

__int64 __fastcall RtlpFilterSacl(__int64 *a1, __int64 a2, _DWORD *a3, char a4)
{
  unsigned __int16 *v4; // rbx
  int v7; // r10d
  __int64 *v9; // r11
  __int64 v10; // rdx
  __int64 result; // rax
  unsigned int v12; // ebp
  char *v13; // r15

  v4 = (unsigned __int16 *)(a1 + 1);
  v7 = 8;
  v9 = a1 + 1;
  if ( *((_WORD *)a1 + 2) )
  {
    v10 = *((unsigned __int16 *)a1 + 2);
    do
    {
      if ( *(_BYTE *)v9 == 17 )
      {
        if ( (a4 & 0x10) != 0 )
LABEL_5:
          v7 += *((unsigned __int16 *)v9 + 1);
      }
      else
      {
        switch ( *(_BYTE *)v9 )
        {
          case 0x12:
            if ( (a4 & 0x20) != 0 )
              goto LABEL_5;
            break;
          case 0x13:
            if ( (a4 & 0x40) != 0 )
              goto LABEL_5;
            break;
          case 0x14:
            if ( a4 < 0 )
              goto LABEL_5;
            break;
          default:
            if ( (a4 & 8) != 0 )
              goto LABEL_5;
            break;
        }
      }
      v9 = (__int64 *)((char *)v9 + *((unsigned __int16 *)v9 + 1));
      --v10;
    }
    while ( v10 );
  }
  result = (v7 + 3) & 0xFFFFFFFC;
  if ( *a3 >= (unsigned int)result )
  {
    result = *a1;
    v12 = 0;
    *(_QWORD *)a2 = *a1;
    *(_DWORD *)(a2 + 2) = 8;
    v13 = (char *)(a2 + 8);
    if ( *((_WORD *)a1 + 2) )
    {
      do
      {
        if ( *(_BYTE *)v4 == 17 )
        {
          if ( (a4 & 0x10) != 0 )
          {
LABEL_12:
            memmove(v13, v4, v4[1]);
            ++*(_WORD *)(a2 + 4);
            *(_WORD *)(a2 + 2) += v4[1];
            v13 += v4[1];
          }
        }
        else
        {
          switch ( *(_BYTE *)v4 )
          {
            case 0x12:
              if ( (a4 & 0x20) != 0 )
                goto LABEL_12;
              break;
            case 0x13:
              if ( (a4 & 0x40) != 0 )
                goto LABEL_12;
              break;
            case 0x14:
              if ( a4 < 0 )
                goto LABEL_12;
              break;
            default:
              if ( (a4 & 8) != 0 )
                goto LABEL_12;
              break;
          }
        }
        ++v12;
        v4 = (unsigned __int16 *)((char *)v4 + v4[1]);
        result = *((unsigned __int16 *)a1 + 2);
      }
      while ( v12 < (unsigned int)result );
    }
  }
  else
  {
    *a3 = result;
  }
  return result;
}
