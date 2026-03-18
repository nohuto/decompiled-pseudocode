/*
 * XREFs of NtGdiGetPath @ 0x1401DE770
 * Callers:
 *     <none>
 * Callees:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?bInactive@DC@@QEBAHXZ @ 0x1401142D4 (-bInactive@DC@@QEBAHXZ.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1401142FC (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z @ 0x1401DE9F8 (--0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z.c)
 */

__int64 __fastcall NtGdiGetPath(HDC a1, struct _POINTL *a2, char *a3, unsigned int a4)
{
  __int64 v4; // rsi
  unsigned int v7; // edi
  __int64 v8; // r9
  ULONG v9; // ecx
  int v11; // eax
  char *v12; // r12
  char *v13; // rsi
  int v14; // r14d
  char *v15; // r8
  char flags; // cl
  char v17; // dl
  struct _PATHDATA v18; // [rsp+28h] [rbp-130h] BYREF
  __int64 v19; // [rsp+38h] [rbp-120h] BYREF
  int v20; // [rsp+40h] [rbp-118h] BYREF
  __int64 v21; // [rsp+48h] [rbp-110h]
  DC *v22[19]; // [rsp+C0h] [rbp-98h] BYREF

  v4 = a4;
  v7 = -1;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v22, a1);
  if ( !v22[0] || (int)v4 < 0 )
    goto LABEL_5;
  if ( !(unsigned int)DC::bInactive(v22[0]) )
  {
    v9 = 1003;
    goto LABEL_6;
  }
  DC::QuickInitXform(v8, &v19, 1026LL);
  if ( !v19 )
  {
LABEL_5:
    v9 = 87;
LABEL_6:
    EngSetLastError(v9);
    goto LABEL_9;
  }
  XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)&v20, *((struct HPATH__ **)v22[0] + 25));
  if ( !v21 )
  {
    EngSetLastError(0x57u);
    goto LABEL_8;
  }
  v11 = EPATHOBJ::cTotalPts((EPATHOBJ *)&v20);
  v7 = v11;
  if ( (_DWORD)v4 )
  {
    if ( (int)v4 >= v11 && (unsigned __int64)(int)v4 <= 0x1FFFFFFF )
    {
      v18 = 0LL;
      v20 &= ~8u;
      *(_QWORD *)(v21 + 80) = *(_QWORD *)(v21 + 32);
      GreProbeForWriteToUntrustedVa(a2, 8LL * (int)v4, 4uLL);
      GreProbeForWriteToUntrustedVa(a3, (int)v4, 4uLL);
      v12 = a3;
      v13 = &a3[v4];
      while ( 1 )
      {
        v14 = EPATHOBJ::bEnum((EPATHOBJ *)&v20, &v18);
        if ( v18.count )
        {
          if ( !EXFORMOBJ::bXform((EXFORMOBJ *)&v19, v18.pptfx, a2, v18.count) )
          {
            EngSetLastError(0x216u);
            v7 = -1;
            goto LABEL_8;
          }
          a2 += v18.count;
          v15 = &a3[v18.count];
          flags = v18.flags;
          if ( (v18.flags & 1) != 0 && a3 < v13 )
          {
            *a3++ = 6;
            flags = v18.flags;
          }
          v17 = (flags & 0x10) != 0 ? 4 : 2;
          if ( v15 <= v13 )
          {
            while ( a3 < v15 )
            {
              *a3++ = v17;
              flags = v18.flags;
            }
          }
          if ( (flags & 8) != 0 && a3 > v12 && a3 <= v13 )
            *(a3 - 1) |= 1u;
        }
        if ( !v14 )
          goto LABEL_8;
      }
    }
    EngSetLastError(0x57u);
    v7 = -1;
  }
LABEL_8:
  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&v20);
LABEL_9:
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v22);
  return v7;
}
