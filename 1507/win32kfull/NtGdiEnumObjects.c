/*
 * XREFs of NtGdiEnumObjects @ 0x1C02B32F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiEnumObjects(HDC a1, int a2, unsigned int a3, unsigned int *a4)
{
  unsigned int *v4; // rbx
  SIZE_T v5; // r12
  unsigned int v7; // esi
  unsigned int v8; // ecx
  unsigned int v10; // edi
  unsigned int v11; // ecx
  char *v12; // r8
  int v13; // r15d
  char *i; // rcx
  unsigned int *j; // rcx
  char *k; // rdx
  unsigned int *m; // rcx
  char *n; // rdx
  _QWORD v19[7]; // [rsp+48h] [rbp-50h] BYREF

  v4 = a4;
  v5 = a3;
  v7 = 0;
  if ( (a3 == 0) == (a4 == 0LL) )
  {
    DCOBJ::DCOBJ((DCOBJ *)v19, a1);
    if ( v19[0] )
    {
      v8 = *(_DWORD *)(*(_QWORD *)(v19[0] + 48LL) + 2192LL);
      if ( !v8 )
      {
LABEL_4:
        DCOBJ::~DCOBJ((DCOBJ *)v19);
        return 0LL;
      }
      v10 = 20;
      if ( v8 < 0x14 )
      {
        if ( v8 < 0x10 )
        {
          v10 = 8;
          if ( v8 < 8 )
          {
            v10 = *(_DWORD *)(*(_QWORD *)(v19[0] + 48LL) + 2192LL);
            if ( v8 >= 2 )
              v10 = 2;
          }
        }
        else
        {
          v10 = 16;
        }
      }
      if ( a2 == 1 )
      {
        v11 = (unsigned int)v5 >> 4;
        if ( 0xFFFFFFFF / v10 >= 5 )
          v7 = 5 * v10;
      }
      else
      {
        if ( a2 != 2 )
          goto LABEL_4;
        v11 = (unsigned int)v5 >> 4;
        if ( 0xFFFFFFFF / v10 >= 7 )
          v7 = 7 * v10;
      }
      if ( v11 < v7 )
      {
        if ( v11 )
          v7 = 0;
      }
      else
      {
        ProbeForWrite(v4, v5, 4u);
        v12 = (char *)&unk_1C0320D70 + 4 * v10;
        v13 = a2 - 1;
        if ( v13 )
        {
          if ( v13 == 1 )
          {
            for ( i = (char *)&unk_1C0320D70; i < v12; i += 4 )
            {
              *v4 = 0;
              v4[1] = *(_DWORD *)i;
              *((_QWORD *)v4 + 1) = 0LL;
              v4 += 4;
            }
            for ( j = (unsigned int *)&gaulHatchStyles; j < dword_1C0320D58; ++j )
            {
              for ( k = (char *)&unk_1C0320D70; k < v12; k += 4 )
              {
                *v4 = 2;
                v4[1] = *(_DWORD *)k;
                *((_QWORD *)v4 + 1) = *j;
                v4 += 4;
              }
            }
          }
        }
        else
        {
          for ( m = dword_1C0320D58; m < &dword_1C0320D6C; ++m )
          {
            for ( n = (char *)&unk_1C0320D70; n < v12; n += 4 )
            {
              *(_QWORD *)(v4 + 1) = 0LL;
              *v4 = *m;
              v4[3] = *(_DWORD *)n;
              v4 += 4;
            }
          }
        }
      }
    }
    DCOBJ::~DCOBJ((DCOBJ *)v19);
  }
  return v7;
}
