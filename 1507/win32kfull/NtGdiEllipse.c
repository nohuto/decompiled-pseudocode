/*
 * XREFs of NtGdiEllipse @ 0x1C0003530
 * Callers:
 *     ?DrawSonar@@YAXPEAUHDC__@@@Z @ 0x1C01E72B0 (-DrawSonar@@YAXPEAUHDC__@@@Z.c)
 * Callees:
 *     ?bEllipse@@YAHAEAVEPATHOBJ@@AEAVEBOX@@@Z @ 0x1C00036D8 (-bEllipse@@YAHAEAVEPATHOBJ@@AEAVEBOX@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0032CA0 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z @ 0x1C00CADB4 (--0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C00CB118 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C00CB138 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C00CC880 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiEllipse(HDC a1, LONG a2, LONG a3, LONG a4, LONG a5)
{
  unsigned int v8; // edi
  __int64 v9; // rcx
  __int64 v10; // rdx
  LINEATTRS *v11; // rsi
  int v12; // ebx
  unsigned int v13; // ecx
  __int64 v15; // rbx
  struct _RECTL v16; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v17[6]; // [rsp+40h] [rbp-C0h] BYREF
  struct _XFORMOBJ v18[2]; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v19[20]; // [rsp+80h] [rbp-80h] BYREF
  PATHOBJ ppo; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v21; // [rsp+D8h] [rbp-28h]

  DCOBJ::DCOBJ((DCOBJ *)v17, a1);
  if ( !v17[0] || (*(_DWORD *)(v17[0] + 36LL) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    v8 = 0;
  }
  else
  {
    v16.bottom = a5;
    v16.left = a2;
    v16.top = a3;
    v16.right = a4;
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v18, (struct XDCOBJ *)v17, 0x204u);
    v9 = v17[0];
    v10 = *(_QWORD *)(v17[0] + 80LL);
    v11 = (LINEATTRS *)(v17[0] + 184LL);
    v12 = *(_DWORD *)(v10 + 8);
    if ( (v12 & 0x1000) != 0 )
    {
      GreDCSelectBrush(v17[0], *(_QWORD *)(v10 + 16));
      v9 = v17[0];
    }
    if ( (v12 & 0x2000) != 0 )
      GreDCSelectPen(v9, *(_QWORD *)(*(_QWORD *)(v9 + 80) + 24LL));
    v8 = 1;
    EBOX::EBOX((EBOX *)v19, (struct DCOBJ *)v17, &v16, v11, 1);
    if ( !v19[0] )
    {
      PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&ppo, (struct XDCOBJ *)v17, 1);
      if ( v21 )
      {
        if ( (unsigned int)bEllipse((struct EPATHOBJ *)&ppo, (struct EBOX *)v19) )
        {
          if ( (*(_DWORD *)(*(_QWORD *)&v18[0].ulReserved + 32LL) & 1) != 0 && ppo.cCurves == 5 )
            ppo.fl |= 2u;
          if ( (*(_DWORD *)(v17[0] + 176LL) & 1) == 0 )
          {
            if ( v19[1] )
            {
              v15 = *(_QWORD *)(v17[0] + 144LL);
              *(_QWORD *)(v17[0] + 144LL) = *(_QWORD *)(v17[0] + 152LL);
              *(_DWORD *)(v17[0] + 332LL) |= 1u;
              v13 = EPATHOBJ::bStrokeAndOrFill(&ppo, (struct XDCOBJ *)v17, 0LL, 0LL, 2u);
              *(_QWORD *)(v17[0] + 144LL) = v15;
              *(_DWORD *)(v17[0] + 332LL) |= 1u;
            }
            else
            {
              v13 = EPATHOBJ::bStrokeAndOrFill(&ppo, (struct XDCOBJ *)v17, v11, v18, 3u);
            }
            v8 = v13;
          }
          goto LABEL_18;
        }
      }
      else
      {
        EngSetLastError(8u);
      }
      v8 = 0;
LABEL_18:
      XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
    }
  }
  DCOBJ::~DCOBJ((DCOBJ *)v17);
  return v8;
}
