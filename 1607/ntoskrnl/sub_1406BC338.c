/*
 * XREFs of sub_1406BC338 @ 0x1406BC338
 * Callers:
 *     sub_14051F200 @ 0x14051F200 (sub_14051F200.c)
 * Callees:
 *     KeReleaseMutex @ 0x140055B60 (KeReleaseMutex.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1406BC338(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  unsigned __int64 v6; // rax
  signed int v7; // ebx
  int v8; // edx
  __int64 v9; // r8
  unsigned __int64 v10; // rcx
  int v11; // edx
  __int64 v12; // rcx
  int v13; // edx
  unsigned int v14; // eax
  unsigned int v15; // ecx
  PVOID PoolWithTag; // rax
  __int64 v17; // r9
  unsigned int v18; // eax
  unsigned __int64 v19; // rdx
  int v20; // r8d
  unsigned int v21; // r11d
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned int v24; // eax
  unsigned __int64 v25; // rdx
  int v26; // r8d
  unsigned int v27; // r11d
  __int64 v28; // r8
  _BYTE v30[32]; // [rsp+0h] [rbp-A8h] BYREF
  unsigned __int64 v31; // [rsp+20h] [rbp-88h]
  __int64 v32; // [rsp+38h] [rbp-70h]
  unsigned int v33; // [rsp+44h] [rbp-64h]
  unsigned int v34; // [rsp+48h] [rbp-60h]
  __int64 *v35; // [rsp+50h] [rbp-58h]
  __int64 v36; // [rsp+58h] [rbp-50h]

  if ( !a1 || !a2 || !a4 )
    return (unsigned int)-1073741811;
  v6 = *(_QWORD *)(a1 + 8);
  if ( v6 && *(_DWORD *)a1 > 3u )
  {
    v8 = 0;
    while ( 1 )
    {
      v9 = *(unsigned int *)v6;
      v10 = v6 + 4;
      if ( v6 + 4 < v6 )
      {
        v10 = -1LL;
        v7 = -1073741675;
      }
      else
      {
        v7 = 0;
      }
      v31 = v10;
      if ( v7 < 0 )
        break;
      v6 = v10 + v9;
      if ( v10 + v9 < v10 )
      {
        v6 = -1LL;
        v7 = -1073741675;
      }
      else
      {
        v7 = 0;
      }
      v31 = v6;
      if ( v7 < 0 )
        break;
      if ( (unsigned int)++v8 >= 3 )
      {
        v11 = *(_DWORD *)v6;
        v12 = v6 + 4;
        if ( v6 + 4 < v6 )
        {
          v12 = -1LL;
          v7 = -1073741675;
        }
        else
        {
          v7 = 0;
        }
        v31 = v12;
        if ( v7 < 0 )
          return (unsigned int)v7;
        a3 = v11;
        if ( !v11 )
          v12 = 0LL;
        v31 = v12;
        v35 = (__int64 *)v12;
        goto LABEL_24;
      }
    }
    return (unsigned int)v7;
  }
  v7 = -1073741811;
LABEL_24:
  if ( v7 >= 0 )
  {
    if ( a3 == 8 )
      v36 = *v35;
    else
      v7 = -1073741789;
    if ( v7 >= 0 )
    {
      KeReleaseMutex(&stru_1402FA900, 0);
      v13 = *(_DWORD *)(a2 + 32);
      v14 = *(_DWORD *)(a2 + 16) + 48;
      if ( v14 < 0x30 )
      {
        v14 = -1;
        v7 = -1073741675;
      }
      else
      {
        v7 = 0;
      }
      if ( v7 >= 0 )
      {
        v15 = v14 + 4;
        if ( v14 + 4 < v14 )
        {
          v15 = -1;
          v7 = -1073741675;
        }
        else
        {
          v7 = 0;
        }
        if ( v7 >= 0 )
        {
          v7 = v15 + v13 < v15 ? 0xC0000095 : 0;
          if ( v15 + v13 >= v15 )
          {
            *(_DWORD *)(a4 + 4) = 20;
            v7 = 0;
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x20534C53u);
            if ( PoolWithTag )
            {
              *(_QWORD *)(a4 + 8) = PoolWithTag;
              *(_DWORD *)a4 = 0;
            }
            else
            {
              v7 = -1073741801;
            }
            if ( v7 >= 0 )
            {
              if ( v30 == (_BYTE *)-176LL )
              {
                v7 = -1073741811;
              }
              else
              {
                v17 = *(_QWORD *)(a4 + 8);
                if ( v17 )
                {
                  v19 = *(_QWORD *)(a4 + 8);
                  v20 = 0;
                  if ( *(_DWORD *)a4 )
                  {
                    v21 = v33;
                    while ( 1 )
                    {
                      if ( *(_DWORD *)v19 >= 0xFFFFFFFC )
                      {
                        v7 = -1073741675;
                      }
                      else
                      {
                        v21 = *(_DWORD *)v19 + 4;
                        v7 = 0;
                      }
                      if ( v7 < 0 )
                        break;
                      if ( v19 + v21 < v19 )
                      {
                        v19 = -1LL;
                        v7 = -1073741675;
                      }
                      else
                      {
                        v19 += v21;
                        v7 = 0;
                      }
                      if ( v7 < 0 )
                        break;
                      if ( (unsigned int)++v20 >= *(_DWORD *)a4 )
                        goto LABEL_60;
                    }
                    return (unsigned int)v7;
                  }
LABEL_60:
                  v22 = v19 + 4;
                  if ( v19 + 4 < v19 )
                  {
                    v22 = -1LL;
                    v7 = -1073741675;
                  }
                  else
                  {
                    v7 = 0;
                  }
                  if ( v7 < 0 )
                    return (unsigned int)v7;
                  if ( v19 + 8 <= v17 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                  {
                    *(_DWORD *)v19 = 4;
                    *(_DWORD *)v22 = 0;
                    ++*(_DWORD *)a4;
                  }
                  else
                  {
                    v7 = -1073741789;
                  }
                }
                else
                {
                  v18 = *(_DWORD *)(a4 + 4);
                  if ( v18 + 8 < v18 )
                  {
                    *(_DWORD *)(a4 + 4) = -1;
                    v7 = -1073741675;
                  }
                  else
                  {
                    *(_DWORD *)(a4 + 4) = v18 + 8;
                    v7 = 0;
                  }
                  if ( v7 < 0 )
                    return (unsigned int)v7;
                  ++*(_DWORD *)a4;
                  v7 = 0;
                }
              }
              if ( v7 < 0 )
                return (unsigned int)v7;
              v32 = v36;
              if ( v30 != (_BYTE *)-56LL )
              {
                v23 = *(_QWORD *)(a4 + 8);
                if ( v23 )
                {
                  v25 = *(_QWORD *)(a4 + 8);
                  v26 = 0;
                  if ( *(_DWORD *)a4 )
                  {
                    v27 = v34;
                    while ( 1 )
                    {
                      if ( *(_DWORD *)v25 >= 0xFFFFFFFC )
                      {
                        v7 = -1073741675;
                      }
                      else
                      {
                        v27 = *(_DWORD *)v25 + 4;
                        v7 = 0;
                      }
                      if ( v7 < 0 )
                        break;
                      if ( v25 + v27 < v25 )
                      {
                        v25 = -1LL;
                        v7 = -1073741675;
                      }
                      else
                      {
                        v25 += v27;
                        v7 = 0;
                      }
                      if ( v7 < 0 )
                        break;
                      if ( (unsigned int)++v26 >= *(_DWORD *)a4 )
                        goto LABEL_87;
                    }
                  }
                  else
                  {
LABEL_87:
                    v28 = v25 + 4;
                    if ( v25 + 4 < v25 )
                    {
                      v28 = -1LL;
                      v7 = -1073741675;
                    }
                    else
                    {
                      v7 = 0;
                    }
                    if ( v7 >= 0 )
                    {
                      if ( v25 + 12 <= v23 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                      {
                        *(_DWORD *)v25 = 8;
                        *(_QWORD *)v28 = v32;
                        ++*(_DWORD *)a4;
                      }
                      else
                      {
                        return (unsigned int)-1073741789;
                      }
                    }
                  }
                }
                else
                {
                  v24 = *(_DWORD *)(a4 + 4);
                  if ( v24 + 12 < v24 )
                  {
                    *(_DWORD *)(a4 + 4) = -1;
                    v7 = -1073741675;
                  }
                  else
                  {
                    *(_DWORD *)(a4 + 4) = v24 + 12;
                    v7 = 0;
                  }
                  if ( v7 >= 0 )
                  {
                    ++*(_DWORD *)a4;
                    return 0;
                  }
                }
                return (unsigned int)v7;
              }
              return (unsigned int)-1073741811;
            }
          }
        }
      }
    }
  }
  return (unsigned int)v7;
}
