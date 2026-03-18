/*
 * XREFs of CitGetMonitorInfo @ 0x1C000D7C0
 * Callers:
 *     ?CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x1C0057258 (-CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 * Callees:
 *     DrvGetCurrentDpiInfoFromHDev @ 0x1C000DA00 (DrvGetCurrentDpiInfoFromHDev.c)
 */

void __fastcall CitGetMonitorInfo(__int64 a1, __int64 a2)
{
  char v4; // dl
  __int64 v5; // rcx
  char v6; // al
  char v7; // dl
  unsigned int v8; // ecx
  __int64 v9; // rcx
  __int64 v10; // r10
  _BYTE v11[104]; // [rsp+20h] [rbp-68h] BYREF

  if ( a1 )
  {
    *(_WORD *)(a2 + 4) = *(_WORD *)(a1 + 36) - *(_WORD *)(a1 + 28);
    *(_WORD *)(a2 + 6) = *(_WORD *)(a1 + 40) - *(_WORD *)(a1 + 32);
    v4 = 0;
    v5 = *(_QWORD *)(gpDispInfo + 96);
    v6 = 1;
    while ( v5 && v5 != a1 )
    {
      v5 = *(_QWORD *)(v5 + 16);
      ++v4;
    }
    v7 = v4 & 7;
    *(_BYTE *)(a2 + 8) = v7;
    v8 = *(unsigned __int16 *)(a1 + 152);
    if ( v8 > 0x60 )
    {
      if ( v8 > 0x78 )
      {
        if ( v8 > 0x90 )
        {
          if ( v8 > 0xA8 )
          {
            if ( v8 > 0xC0 )
            {
              if ( v8 > 0xF0 )
                v6 = (v8 > 0x120) + 6;
              else
                v6 = 5;
            }
            else
            {
              v6 = 4;
            }
          }
          else
          {
            v6 = 3;
          }
        }
        else
        {
          v6 = 2;
        }
      }
    }
    else
    {
      v6 = 0;
    }
    *(_BYTE *)(a2 + 8) = v7 | (16 * v6);
    v9 = *(_QWORD *)(a1 + 160);
    if ( v9 && (int)DrvGetCurrentDpiInfoFromHDev(v9, v11) >= 0 && (v11[92] & 4) != 0 )
      *(_BYTE *)(v10 + 8) |= 8u;
  }
}
