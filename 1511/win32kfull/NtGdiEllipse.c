/*
 * XREFs of NtGdiEllipse @ 0x1C0003B50
 * Callers:
 *     ?DrawSonar@@YAXPEAUHDC__@@@Z @ 0x1C01E7720 (-DrawSonar@@YAXPEAUHDC__@@@Z.c)
 * Callees:
 *     ?bEllipse@@YAHAEAVEPATHOBJ@@AEAVEBOX@@@Z @ 0x1C0003CFC (-bEllipse@@YAHAEAVEPATHOBJ@@AEAVEBOX@@@Z.c)
 *     ??0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z @ 0x1C0003E90 (--0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z.c)
 *     ??1PATHSTACKOBJ@@QEAA@XZ @ 0x1C0010348 (--1PATHSTACKOBJ@@QEAA@XZ.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0010368 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C00161E0 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0019C30 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002D9CC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
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
  _QWORD v16[2]; // [rsp+30h] [rbp-D0h] BYREF
  struct _RECTL v17; // [rsp+40h] [rbp-C0h] BYREF
  struct _XFORMOBJ v18[2]; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v19[20]; // [rsp+60h] [rbp-A0h] BYREF
  PATHOBJ ppo; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v21; // [rsp+B8h] [rbp-48h]

  DCOBJ::DCOBJ((DCOBJ *)v16, a1);
  if ( !v16[0] || (*(_DWORD *)(v16[0] + 36LL) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    v8 = 0;
  }
  else
  {
    v17.bottom = a5;
    v17.left = a2;
    v17.top = a3;
    v17.right = a4;
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v18, (struct XDCOBJ *)v16, 0x204u);
    v9 = v16[0];
    v10 = *(_QWORD *)(v16[0] + 80LL);
    v11 = (LINEATTRS *)(v16[0] + 184LL);
    v12 = *(_DWORD *)(v10 + 8);
    if ( (v12 & 0x1000) != 0 )
    {
      GreDCSelectBrush(v16[0], *(_QWORD *)(v10 + 16));
      v9 = v16[0];
    }
    if ( (v12 & 0x2000) != 0 )
      GreDCSelectPen(v9, *(_QWORD *)(*(_QWORD *)(v9 + 80) + 24LL));
    v8 = 1;
    EBOX::EBOX((EBOX *)v19, (struct DCOBJ *)v16, &v17, v11, 1);
    if ( !v19[0] )
    {
      PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&ppo, (struct XDCOBJ *)v16, 1);
      if ( v21 )
      {
        if ( (unsigned int)bEllipse((struct EPATHOBJ *)&ppo, (struct EBOX *)v19) )
        {
          if ( (*(_DWORD *)(*(_QWORD *)&v18[0].ulReserved + 32LL) & 1) != 0 && ppo.cCurves == 5 )
            ppo.fl |= 2u;
          if ( (*(_DWORD *)(v16[0] + 176LL) & 1) == 0 )
          {
            if ( v19[1] )
            {
              v15 = *(_QWORD *)(v16[0] + 144LL);
              *(_QWORD *)(v16[0] + 144LL) = *(_QWORD *)(v16[0] + 152LL);
              *(_DWORD *)(v16[0] + 332LL) |= 1u;
              v13 = EPATHOBJ::bStrokeAndOrFill(&ppo, (struct XDCOBJ *)v16, 0LL, 0LL, 2u);
              *(_QWORD *)(v16[0] + 144LL) = v15;
              *(_DWORD *)(v16[0] + 332LL) |= 1u;
            }
            else
            {
              v13 = EPATHOBJ::bStrokeAndOrFill(&ppo, (struct XDCOBJ *)v16, v11, v18, 3u);
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
      PATHSTACKOBJ::~PATHSTACKOBJ((PATHSTACKOBJ *)&ppo);
    }
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v16);
  return v8;
}
