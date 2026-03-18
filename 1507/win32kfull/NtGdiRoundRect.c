/*
 * XREFs of NtGdiRoundRect @ 0x1C0005000
 * Callers:
 *     <none>
 * Callees:
 *     ?bRoundRect@@YAHAEAVEPATHOBJ@@AEAVEBOX@@JJ@Z @ 0x1C0032348 (-bRoundRect@@YAHAEAVEPATHOBJ@@AEAVEBOX@@JJ@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0032CA0 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     NtGdiRectangle @ 0x1C00A2B10 (NtGdiRectangle.c)
 *     ??0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z @ 0x1C00CADB4 (--0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C00CB118 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C00CB138 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C00CC880 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiRoundRect(HDC a1, LONG a2, LONG a3, LONG a4, LONG a5, int a6, int a7)
{
  __int64 v10; // rcx
  unsigned int v11; // edi
  __int64 v12; // rdx
  int v13; // ebx
  unsigned int v14; // ecx
  __int64 v16; // rbx
  struct _RECTL v17; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v18[6]; // [rsp+40h] [rbp-C0h] BYREF
  struct _XFORMOBJ v19; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v20[20]; // [rsp+80h] [rbp-80h] BYREF
  PATHOBJ ppo; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v22; // [rsp+D8h] [rbp-28h]

  if ( a6 && a7 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v18, a1);
    v10 = v18[0];
    if ( !v18[0] || (*(_DWORD *)(v18[0] + 36LL) & 0x10000) != 0 )
    {
      EngSetLastError(6u);
      v11 = 0;
LABEL_18:
      DCOBJ::~DCOBJ((DCOBJ *)v18);
      return v11;
    }
    v12 = *(_QWORD *)(v18[0] + 80LL);
    v13 = *(_DWORD *)(v12 + 8);
    if ( (v13 & 0x1000) != 0 )
    {
      GreDCSelectBrush(v18[0], *(_QWORD *)(v12 + 16));
      v10 = v18[0];
    }
    if ( (v13 & 0x2000) != 0 )
      GreDCSelectPen(v10, *(_QWORD *)(*(_QWORD *)(v10 + 80) + 24LL));
    v17.bottom = a5;
    v17.left = a2;
    v17.top = a3;
    v17.right = a4;
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v19, (struct XDCOBJ *)v18, 0x204u);
    v11 = 1;
    EBOX::EBOX((EBOX *)v20, (struct DCOBJ *)v18, &v17, (struct _LINEATTRS *)(v18[0] + 184LL), 1);
    if ( v20[0] )
      goto LABEL_18;
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&ppo, (struct XDCOBJ *)v18, 1);
    if ( v22 )
    {
      if ( (unsigned int)bRoundRect((struct EPATHOBJ *)&ppo, (struct EBOX *)v20, a6, a7) )
      {
        if ( (*(_DWORD *)(v18[0] + 176LL) & 1) == 0 )
        {
          if ( v20[1] )
          {
            v16 = *(_QWORD *)(v18[0] + 144LL);
            *(_QWORD *)(v18[0] + 144LL) = *(_QWORD *)(v18[0] + 152LL);
            *(_DWORD *)(v18[0] + 332LL) |= 1u;
            v14 = EPATHOBJ::bStrokeAndOrFill(&ppo, (struct XDCOBJ *)v18, 0LL, 0LL, 2u);
            *(_QWORD *)(v18[0] + 144LL) = v16;
            *(_DWORD *)(v18[0] + 332LL) |= 1u;
          }
          else
          {
            v14 = EPATHOBJ::bStrokeAndOrFill(&ppo, (struct XDCOBJ *)v18, (LINEATTRS *)(v18[0] + 184LL), &v19, 3u);
          }
          v11 = v14;
        }
        goto LABEL_17;
      }
    }
    else
    {
      EngSetLastError(8u);
    }
    v11 = 0;
LABEL_17:
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
    goto LABEL_18;
  }
  return NtGdiRectangle(a1, a5);
}
