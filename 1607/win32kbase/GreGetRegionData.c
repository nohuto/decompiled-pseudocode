/*
 * XREFs of GreGetRegionData @ 0x1C0078730
 * Callers:
 *     NtGdiGetRegionData @ 0x1C006E970 (NtGdiGetRegionData.c)
 *     EngGetRgnData @ 0x1C00786C0 (EngGetRgnData.c)
 * Callees:
 *     ?vDownload@RGNOBJ@@QEAAXPEAX@Z @ 0x1C002D650 (-vDownload@RGNOBJ@@QEAAXPEAX@Z.c)
 *     ?sizeSave@RGNOBJ@@QEAAKXZ @ 0x1C002D6D0 (-sizeSave@RGNOBJ@@QEAAKXZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0036760 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     EngSetLastError @ 0x1C0079760 (EngSetLastError.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00BEE70 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 */

__int64 __fastcall GreGetRegionData(HRGN a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // rsi
  int v6; // ecx
  unsigned int v7; // edi
  unsigned __int64 v8; // rax
  ULONG v10; // ecx
  _QWORD v11[8]; // [rsp+20h] [rbp-48h] BYREF

  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v11, a1, 1, 0);
  v5 = v11[0];
  if ( !v11[0] )
  {
    v10 = 6;
    goto LABEL_11;
  }
  v6 = RGNOBJ::sizeSave((RGNOBJ *)v11);
  v7 = v6 + 32;
  if ( !a3 )
    goto LABEL_7;
  if ( v7 > a2 )
  {
    v10 = 87;
LABEL_11:
    EngSetLastError(v10);
    v7 = 0;
    goto LABEL_7;
  }
  *(_DWORD *)a3 = 32;
  v8 = ((unsigned __int64)v7 - 32) >> 4;
  *(_DWORD *)(a3 + 4) = 1;
  *(_DWORD *)(a3 + 8) = v8;
  *(_DWORD *)(a3 + 12) = v6;
  if ( (_DWORD)v8 )
  {
    *(_OWORD *)(a3 + 16) = *(_OWORD *)(v5 + 88);
  }
  else
  {
    *(_DWORD *)(a3 + 16) = 0;
    *(_DWORD *)(a3 + 20) = 0;
    *(_DWORD *)(a3 + 24) = 0;
    *(_DWORD *)(a3 + 28) = 0;
  }
  RGNOBJ::vDownload((RGNOBJ *)v11, (_OWORD *)(a3 + 32));
LABEL_7:
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v11);
  return v7;
}
