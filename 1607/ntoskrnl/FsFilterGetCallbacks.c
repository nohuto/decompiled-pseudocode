/*
 * XREFs of FsFilterGetCallbacks @ 0x140025FA0
 * Callers:
 *     FsFilterPerformCallbacks @ 0x140025E60 (FsFilterPerformCallbacks.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FsFilterGetCallbacks(unsigned __int8 a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  __int64 result; // rax
  unsigned int *v5; // r10
  __int64 v6; // rcx
  unsigned int v7; // edx
  unsigned int v8; // edx
  unsigned int v9; // edx
  unsigned int v10; // edx
  unsigned int v11; // edx

  result = *(_QWORD *)(a2 + 8);
  *a3 = 0LL;
  *a4 = 0LL;
  v5 = *(unsigned int **)(*(_QWORD *)(result + 48) + 48LL);
  if ( v5 )
  {
    result = a1;
    if ( a1 == 254 )
    {
      v7 = *v5;
      if ( *v5 >= 0x20 )
      {
        result = 0LL;
        if ( *((_QWORD *)v5 + 3) )
          result = *((_QWORD *)v5 + 3);
        *a3 = result;
      }
      if ( v7 >= 0x28 )
      {
        result = 0LL;
        if ( *((_QWORD *)v5 + 4) )
          result = *((_QWORD *)v5 + 4);
        *a4 = result;
      }
    }
    else if ( a1 == 255 )
    {
      result = *v5;
      if ( (unsigned int)result >= 0x10 )
      {
        v6 = *((_QWORD *)v5 + 1);
        if ( v6 )
          *a3 = v6;
      }
      if ( (unsigned int)result >= 0x18 )
      {
        result = *((_QWORD *)v5 + 2);
        if ( result )
          *a4 = result;
      }
    }
    else
    {
      result = (unsigned int)a1 - 250;
      if ( a1 == 250 )
      {
        v10 = *v5;
        if ( *v5 >= 0x40 )
        {
          result = 0LL;
          if ( *((_QWORD *)v5 + 7) )
            result = *((_QWORD *)v5 + 7);
          *a3 = result;
        }
        if ( v10 >= 0x48 )
        {
          result = *((_QWORD *)v5 + 8);
          if ( result )
            *a4 = result;
        }
      }
      else
      {
        result = (unsigned int)a1 - 251;
        if ( a1 == 251 )
        {
          v9 = *v5;
          if ( *v5 >= 0x30 )
          {
            result = 0LL;
            if ( *((_QWORD *)v5 + 5) )
              result = *((_QWORD *)v5 + 5);
            *a3 = result;
          }
          if ( v9 >= 0x38 )
          {
            result = *((_QWORD *)v5 + 6);
            if ( result )
              *a4 = result;
          }
        }
        else
        {
          result = (unsigned int)a1 - 252;
          if ( a1 == 252 )
          {
            v11 = *v5;
            if ( *v5 >= 0x60 )
            {
              result = 0LL;
              if ( *((_QWORD *)v5 + 11) )
                result = *((_QWORD *)v5 + 11);
              *a3 = result;
            }
            if ( v11 >= 0x68 )
            {
              result = *((_QWORD *)v5 + 12);
              if ( result )
                *a4 = result;
            }
          }
          else if ( a1 == 253 )
          {
            v8 = *v5;
            if ( *v5 >= 0x50 )
            {
              result = 0LL;
              if ( *((_QWORD *)v5 + 9) )
                result = *((_QWORD *)v5 + 9);
              *a3 = result;
            }
            if ( v8 >= 0x58 )
            {
              result = *((_QWORD *)v5 + 10);
              if ( result )
                *a4 = result;
            }
          }
          else
          {
            *a3 = 0LL;
            *a4 = 0LL;
          }
        }
      }
    }
  }
  return result;
}
