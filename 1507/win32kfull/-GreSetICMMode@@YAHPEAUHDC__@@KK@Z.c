/*
 * XREFs of ?GreSetICMMode@@YAHPEAUHDC__@@KK@Z @ 0x1C02B074C
 * Callers:
 *     NtGdiSetIcmMode @ 0x1C02B1680 (NtGdiSetIcmMode.c)
 * Callees:
 *     ?vUpdateTime@XEPALOBJ@@QEAAXXZ @ 0x1C0013D20 (-vUpdateTime@XEPALOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C0019204 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00192B0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreSetICMMode(HDC a1, int a2, unsigned int a3)
{
  int v5; // edi
  unsigned int v6; // ebx
  int v7; // r9d
  __int64 v8; // rax
  unsigned int v9; // r8d
  int v10; // edx
  int v11; // r11d
  int v12; // edx
  __int64 v13; // r8
  _QWORD v15[6]; // [rsp+28h] [rbp-69h] BYREF
  _BYTE v16[32]; // [rsp+58h] [rbp-39h] BYREF
  _BYTE v17[80]; // [rsp+78h] [rbp-19h] BYREF
  __int64 v18; // [rsp+110h] [rbp+7Fh] BYREF

  v5 = 1;
  DCOBJ::DCOBJ((DCOBJ *)v15, a1);
  v6 = 0;
  if ( v15[0] )
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v16);
    if ( !DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v16, (struct XDCOBJ *)v15, 0) )
      goto LABEL_37;
    v7 = *(_DWORD *)(v15[0] + 112LL);
    v8 = *(_QWORD *)(v15[0] + 48LL);
    v9 = v7 & 0xF0000000;
    v10 = (unsigned __int8)v7;
    v11 = v7 & 0xF00;
    if ( a2 == 1 )
    {
      if ( !a3 )
      {
        v11 = 0;
        v10 = v7 & 0xF0;
LABEL_28:
        if ( a2 != 4 )
          goto LABEL_29;
LABEL_37:
        v6 = v5;
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v16);
        DCOBJ::~DCOBJ((DCOBJ *)v17);
        goto LABEL_38;
      }
      if ( ((a3 - 256) & 0xFFFFFCFF) != 0 || a3 == 768 )
        goto LABEL_26;
      v11 = a3;
      v12 = (a3 >> 8) & 0xF;
      if ( (a3 & 0x200) != 0 )
      {
        if ( !v8 )
          goto LABEL_26;
        if ( (*(_DWORD *)(v8 + 1848) & 0x2000000) == 0 || *(_DWORD *)(v15[0] + 32LL) == 1 )
          v12 = 1;
      }
      v10 = v7 & 0xF0 | v12;
    }
    else
    {
      if ( a2 != 2 )
      {
        if ( (unsigned int)(a2 - 3) <= 1 )
        {
          if ( ((a3 - 8) & 0xFFFFFFF7) == 0 )
          {
LABEL_13:
            v9 = 0x20000000;
            goto LABEL_28;
          }
          if ( a3 == 32 || a3 == 773 )
          {
            if ( v8 )
            {
              v9 = 0x10000000;
              if ( (*(_DWORD *)(v8 + 1848) & 0x4000000) != 0 )
              {
                if ( *(_DWORD *)(v15[0] + 32LL) != 1 )
                  goto LABEL_28;
                v10 = (unsigned __int8)v7 | 0x10;
                goto LABEL_13;
              }
            }
          }
        }
LABEL_26:
        v5 = 0;
        goto LABEL_37;
      }
      if ( a3 )
        v10 = (unsigned __int8)v7 | 0x20;
      else
        v10 = v7 & 0xDF;
    }
LABEL_29:
    if ( (unsigned __int8)v7 != v10
      || (*(_DWORD *)(v15[0] + 112LL) & 0xF00) != v11
      || (*(_DWORD *)(v15[0] + 112LL) & 0xF0000000) != v9 )
    {
      *(_DWORD *)(v15[0] + 112LL) = v9 | v10 | v11;
      *(_DWORD *)(*(_QWORD *)(v15[0] + 80LL) + 108LL) = v9 | v10 | v11 | *(_DWORD *)(*(_QWORD *)(v15[0] + 80LL) + 108LL) & 0xF000;
      if ( (unsigned __int8)v7 != v10 )
      {
        v18 = *(_QWORD *)(v15[0] + 96LL);
        if ( v18 )
        {
          XEPALOBJ::vUpdateTime((XEPALOBJ *)&v18);
          if ( v13 )
          {
            v18 = *(_QWORD *)(v13 + 120);
            if ( v18 )
              XEPALOBJ::vUpdateTime((XEPALOBJ *)&v18);
          }
        }
      }
    }
    goto LABEL_37;
  }
LABEL_38:
  DCOBJ::~DCOBJ((DCOBJ *)v15);
  return v6;
}
