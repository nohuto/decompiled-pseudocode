/*
 * XREFs of ?TooltipAnimate@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C0227840
 * Callers:
 *     ?xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z @ 0x1C0120BC4 (-xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z.c)
 * Callees:
 *     NtGdiBitBltInternal @ 0x1C0095CC0 (NtGdiBitBltInternal.c)
 *     ?GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@@Z @ 0x1C0128C6C (-GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@@Z.c)
 */

__int64 __fastcall TooltipAnimate(struct tagTOOLTIPWND *a1)
{
  unsigned int v1; // ebx
  HDC TooltipDC; // rsi
  int v5; // r9d
  int v6; // r10d
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  int v10; // r8d
  LONG v11; // r9d
  HDC v12; // [rsp+28h] [rbp-40h]

  v1 = 0;
  if ( !*((_QWORD *)a1 + 52) )
    return 1LL;
  TooltipDC = GetTooltipDC(a1);
  v5 = *((_DWORD *)a1 + 31) - *((_DWORD *)a1 + 29);
  v6 = *((_DWORD *)a1 + 30) - *((_DWORD *)a1 + 28);
  v7 = (int)(v5
           * (((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - *((_DWORD *)a1 + 102))
           + 67)
     / 135;
  if ( (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
     - *((_DWORD *)a1 + 102) > 0x87
    || v7 == v5 )
  {
    NtGdiBitBltInternal(TooltipDC, 0, 0, v6, v5, *((HDC *)a1 + 48), 0, 0, 0x80CC0020, 0, 0);
    v1 = 1;
  }
  else if ( *((_DWORD *)a1 + 103) != v7 )
  {
    if ( (*((_DWORD *)a1 + 100) & 1) != 0 )
    {
      v8 = 0;
      v9 = 0;
    }
    else
    {
      v8 = *((_DWORD *)a1 + 31) - *((_DWORD *)a1 + 29);
      v9 = -1;
    }
    v10 = v8 + v7 * v9;
    if ( (*((_DWORD *)a1 + 100) & 1) != 0 )
      v11 = v5 - v7;
    else
      v11 = 0;
    v12 = (HDC)*((_QWORD *)a1 + 48);
    *((_DWORD *)a1 + 103) = v7;
    NtGdiBitBltInternal(TooltipDC, 0, v10, v6, v7, v12, 0, v11, 0x80CC0020, 0, 0);
  }
  _ReleaseDC(TooltipDC);
  return v1;
}
