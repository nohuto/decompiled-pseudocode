/*
 * XREFs of qsort_s @ 0x18009AB60
 * Callers:
 *     <none>
 * Callees:
 *     _invalid_parameter @ 0x180096B58 (_invalid_parameter.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     shortsort_s @ 0x18009AEB0 (shortsort_s.c)
 *     _guard_check_icall @ 0x18009D0D0 (_guard_check_icall.c)
 */

void __cdecl qsort_s(
        void *Base,
        rsize_t NumOfElements,
        rsize_t SizeOfElements,
        _CoreCrtSecureSearchSortCompareFunction CompareFunction,
        void *Context)
{
  _BYTE *v7; // r13
  char *v8; // r12
  rsize_t v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rcx
  char *v12; // rsi
  rsize_t v13; // r8
  char *v14; // rdx
  char *v15; // r9
  char v16; // cl
  rsize_t v17; // r8
  char *v18; // rdx
  __int64 v19; // r9
  char v20; // cl
  rsize_t v21; // r8
  char *v22; // rdx
  signed __int64 v23; // r9
  char v24; // cl
  unsigned __int64 v25; // rbx
  char *v26; // rdi
  rsize_t v27; // r8
  char *v28; // rdx
  unsigned __int64 v29; // r9
  char v30; // cl
  char *v31; // rdi
  __int64 v32; // [rsp+30h] [rbp-448h]
  _QWORD v33[124]; // [rsp+40h] [rbp-438h]

  v7 = Base;
  if ( (Base || !NumOfElements) && SizeOfElements && CompareFunction )
  {
    if ( NumOfElements >= 2 )
    {
      v8 = (char *)Base + SizeOfElements * (NumOfElements - 1);
      v32 = 0LL;
      while ( 1 )
      {
        while ( 1 )
        {
          v9 = (v8 - v7) / SizeOfElements + 1;
          if ( v9 <= 8 )
          {
            shortsort_s((_DWORD)v7, (_DWORD)v8, SizeOfElements, (_DWORD)CompareFunction, (__int64)Context);
            v10 = v32;
            goto LABEL_10;
          }
          v12 = &v7[SizeOfElements * (v9 >> 1)];
          if ( ((int (__fastcall *)(void *, _BYTE *, char *))CompareFunction)(Context, v7, v12) > 0 )
          {
            v13 = SizeOfElements;
            v14 = v12;
            if ( v7 != v12 )
            {
              v15 = (char *)(v7 - v12);
              do
              {
                v16 = v14[(_QWORD)v15];
                v14[(_QWORD)v15] = *v14;
                *v14++ = v16;
                --v13;
              }
              while ( v13 );
            }
          }
          if ( ((int (__fastcall *)(void *, _BYTE *, char *))CompareFunction)(Context, v7, v8) > 0 )
          {
            v17 = SizeOfElements;
            v18 = v8;
            if ( v7 != v8 )
            {
              v19 = v7 - v8;
              do
              {
                v20 = v18[v19];
                v18[v19] = *v18;
                *v18++ = v20;
                --v17;
              }
              while ( v17 );
            }
          }
          if ( ((int (__fastcall *)(void *, char *, char *))CompareFunction)(Context, v12, v8) > 0 )
          {
            v21 = SizeOfElements;
            v22 = v8;
            if ( v12 != v8 )
            {
              v23 = v12 - v8;
              do
              {
                v24 = v22[v23];
                v22[v23] = *v22;
                *v22++ = v24;
                --v21;
              }
              while ( v21 );
            }
          }
          v25 = (unsigned __int64)v7;
          v26 = v8;
          while ( 1 )
          {
            if ( (unsigned __int64)v12 > v25 )
            {
              while ( 1 )
              {
                v25 += SizeOfElements;
                if ( v25 >= (unsigned __int64)v12 )
                  break;
                if ( ((int (__fastcall *)(void *, unsigned __int64, char *))CompareFunction)(Context, v25, v12) > 0 )
                {
                  if ( (unsigned __int64)v12 > v25 )
                    goto LABEL_31;
                  goto LABEL_29;
                }
              }
            }
            do
LABEL_29:
              v25 += SizeOfElements;
            while ( v25 <= (unsigned __int64)v8
                 && ((int (__fastcall *)(void *, unsigned __int64, char *))CompareFunction)(Context, v25, v12) <= 0 );
            do
LABEL_31:
              v26 -= SizeOfElements;
            while ( v26 > v12 && ((int (__fastcall *)(void *, char *, char *))CompareFunction)(Context, v26, v12) > 0 );
            if ( (unsigned __int64)v26 < v25 )
              break;
            v27 = SizeOfElements;
            v28 = v26;
            if ( (char *)v25 != v26 )
            {
              v29 = v25 - (_QWORD)v26;
              do
              {
                v30 = v28[v29];
                v28[v29] = *v28;
                *v28++ = v30;
                --v27;
              }
              while ( v27 );
            }
            if ( v12 == v26 )
              v12 = (char *)v25;
          }
          v31 = &v26[SizeOfElements];
          if ( v12 < v31 )
          {
            while ( 1 )
            {
              v31 -= SizeOfElements;
              if ( v31 <= v12 )
                break;
              if ( ((unsigned int (__fastcall *)(void *, char *, char *))CompareFunction)(Context, v31, v12) )
              {
                if ( v12 < v31 )
                  goto LABEL_45;
                goto LABEL_43;
              }
            }
          }
          do
LABEL_43:
            v31 -= SizeOfElements;
          while ( v31 > v7 && !((unsigned int (__fastcall *)(void *, char *, char *))CompareFunction)(Context, v31, v12) );
LABEL_45:
          v10 = v32;
          if ( v31 - v7 >= (__int64)&v8[-v25] )
            break;
          if ( v25 < (unsigned __int64)v8 )
          {
            v33[v32] = v25;
            v33[v32 + 62] = v8;
            v10 = ++v32;
          }
          if ( v7 >= v31 )
          {
LABEL_10:
            v11 = v10 - 1;
            v32 = v11;
            if ( v11 < 0 )
              return;
            v7 = (_BYTE *)v33[v11];
            v8 = (char *)v33[v11 + 62];
          }
          else
          {
            v8 = v31;
          }
        }
        if ( v7 < v31 )
        {
          v33[v32] = v7;
          v33[v32 + 62] = v31;
          v10 = ++v32;
        }
        if ( v25 >= (unsigned __int64)v8 )
          goto LABEL_10;
        v7 = (_BYTE *)v25;
      }
    }
  }
  else
  {
    invalid_parameter();
  }
}
