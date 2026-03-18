/*
 * XREFs of vIFIMetricsToLogFontW @ 0x140241EF0
 * Callers:
 *     ?GetFontResourceInfoInternalW@@YAHPEBGKKIPEA_KPEAXK@Z @ 0x140241C64 (-GetFontResourceInfoInternalW@@YAHPEBGKKIPEA_KPEAXK@Z.c)
 * Callees:
 *     ?lfOrientation@IFIOBJ@@QEAAJXZ @ 0x140100D48 (-lfOrientation@IFIOBJ@@QEAAJXZ.c)
 */

errno_t __fastcall vIFIMetricsToLogFontW(__int64 a1, __int64 a2)
{
  int v4; // eax
  __int64 v5; // rax
  int v6; // ecx
  char v7; // al
  errno_t result; // eax
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v9[0] = a2;
  if ( (*(_DWORD *)(a2 + 48) & 0x3000010) != 0 )
  {
    *(_DWORD *)a1 = -24;
    v4 = 0;
  }
  else
  {
    *(_DWORD *)a1 = *(__int16 *)(a2 + 60) + *(__int16 *)(a2 + 62);
    v4 = *(__int16 *)(a2 + 76);
  }
  *(_DWORD *)(a1 + 4) = v4;
  *(_DWORD *)(a1 + 16) = *(unsigned __int16 *)(a2 + 46);
  *(_BYTE *)(a1 + 20) = -((*(_BYTE *)(a2 + 52) & 1) != 0);
  *(_BYTE *)(a1 + 21) = *(_BYTE *)(a2 + 52) & 2;
  *(_BYTE *)(a1 + 22) = *(_BYTE *)(a2 + 52) & 0x10;
  *(_DWORD *)(a1 + 8) = IFIOBJ::lfOrientation((IFIOBJ *)v9);
  *(_DWORD *)(a1 + 12) = IFIOBJ::lfOrientation((IFIOBJ *)v9);
  v5 = *(int *)(a2 + 40);
  if ( !(_DWORD)v5 )
    v5 = 44LL;
  *(_BYTE *)(a1 + 23) = *(_BYTE *)(v5 + a2);
  v6 = *(_DWORD *)(a2 + 48);
  if ( (v6 & 1) != 0 )
  {
    v7 = 8;
  }
  else if ( (v6 & 2) != 0 )
  {
    v7 = 6;
  }
  else if ( (v6 & 4) != 0 )
  {
    v7 = 3;
  }
  else
  {
    v7 = v6 & 8;
  }
  *(_BYTE *)(a1 + 24) = v7;
  *(_WORD *)(a1 + 25) = 512;
  *(_BYTE *)(a1 + 27) = *(_BYTE *)(a2 + 45);
  result = wcsncpy_s((wchar_t *)(a1 + 28), 0x20uLL, (const wchar_t *)(a2 + *(int *)(a2 + 8)), 0x1FuLL);
  *(_WORD *)(a1 + 90) = 0;
  return result;
}
