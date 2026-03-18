/*
 * XREFs of NtGdiEnumObjects @ 0x14024C2F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiEnumObjects(HDC a1, int a2, unsigned int a3, char *a4)
{
  char *v4; // r12
  unsigned int v7; // r14d
  unsigned int v8; // edx
  unsigned int v9; // ecx
  unsigned int v10; // ebx
  char *v11; // rcx
  int v12; // edi
  char *i; // rbx
  unsigned int *j; // rbx
  char *k; // rdi
  unsigned int *m; // rbx
  char *n; // rdi
  char *v19; // [rsp+38h] [rbp-100h]
  _QWORD v20[14]; // [rsp+60h] [rbp-D8h] BYREF
  __int128 v21; // [rsp+D0h] [rbp-68h] BYREF
  __int128 v22; // [rsp+E0h] [rbp-58h] BYREF
  __int128 v23; // [rsp+F0h] [rbp-48h] BYREF

  v4 = a4;
  v7 = 0;
  if ( (a3 == 0) != (a4 == 0LL) )
    return v7;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v20, a1);
  if ( !v20[0] )
  {
LABEL_38:
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v20);
    return v7;
  }
  v8 = *(_DWORD *)(*(_QWORD *)(v20[0] + 48LL) + 2152LL);
  if ( v8 )
  {
    v9 = 20;
    if ( v8 < 0x14 )
    {
      if ( v8 < 0x10 )
      {
        v9 = 8;
        if ( v8 < 8 )
        {
          v9 = *(_DWORD *)(*(_QWORD *)(v20[0] + 48LL) + 2152LL);
          if ( v8 >= 2 )
            v9 = 2;
        }
      }
      else
      {
        v9 = 16;
      }
    }
    if ( a2 == 1 )
    {
      v10 = a3 >> 4;
      if ( 0xFFFFFFFF / v9 >= 5 )
        v7 = 5 * v9;
      goto LABEL_17;
    }
    if ( a2 == 2 )
    {
      v10 = a3 >> 4;
      if ( 0xFFFFFFFF / v9 >= 7 )
        v7 = 7 * v9;
LABEL_17:
      if ( v10 < v7 )
      {
        if ( v10 )
          v7 = 0;
      }
      else
      {
        v11 = (char *)&unk_140370AA0 + 4 * v9;
        v19 = v11;
        v23 = 0LL;
        v12 = a2 - 1;
        if ( v12 )
        {
          if ( v12 == 1 )
          {
            for ( i = (char *)&unk_140370AA0; i < v11; i += 4 )
            {
              v22 = 0LL;
              LODWORD(v22) = 0;
              DWORD1(v22) = *(_DWORD *)i;
              GreProbeAndWriteToUntrustedVa(v4, 0x10uLL, &v22, 0x10uLL, 1uLL);
              v4 += 16;
              v11 = v19;
            }
            for ( j = (unsigned int *)&unk_140370A68; j < dword_140370A80; ++j )
            {
              for ( k = (char *)&unk_140370AA0; k < v11; k += 4 )
              {
                v21 = 0LL;
                LODWORD(v21) = 2;
                DWORD1(v21) = *(_DWORD *)k;
                *((_QWORD *)&v21 + 1) = *j;
                GreProbeAndWriteToUntrustedVa(v4, 0x10uLL, &v21, 0x10uLL, 1uLL);
                v4 += 16;
                v11 = v19;
              }
            }
          }
        }
        else
        {
          for ( m = dword_140370A80; m < dword_140370A94; ++m )
          {
            for ( n = (char *)&unk_140370AA0; n < v11; n += 4 )
            {
              LODWORD(v23) = *m;
              HIDWORD(v23) = *(_DWORD *)n;
              GreProbeAndWriteToUntrustedVa(v4, 0x10uLL, &v23, 0x10uLL, 1uLL);
              v4 += 16;
              v11 = v19;
            }
          }
        }
      }
      goto LABEL_38;
    }
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v20);
  return 0LL;
}
