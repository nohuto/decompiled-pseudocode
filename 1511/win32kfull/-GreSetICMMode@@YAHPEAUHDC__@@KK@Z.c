/*
 * XREFs of ?GreSetICMMode@@YAHPEAUHDC__@@KK@Z @ 0x1C02AF95C
 * Callers:
 *     NtGdiSetIcmMode @ 0x1C02B0870 (NtGdiSetIcmMode.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002DA58 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002DA80 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUpdateTime@XEPALOBJ@@QEAAXXZ @ 0x1C0041738 (-vUpdateTime@XEPALOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreSetICMMode(HDC a1, int a2, unsigned int a3)
{
  unsigned int v4; // ebx
  int v6; // edi
  int v7; // r9d
  __int64 v8; // rax
  unsigned int v9; // r8d
  int v10; // edx
  int v11; // r11d
  int v12; // edx
  __int64 v13; // r8
  _QWORD v15[2]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v16; // [rsp+30h] [rbp-50h] BYREF
  __int64 v17; // [rsp+40h] [rbp-40h]
  int v18; // [rsp+48h] [rbp-38h]
  __int64 v19; // [rsp+50h] [rbp-30h]
  __int64 v20; // [rsp+58h] [rbp-28h]
  __int64 v21; // [rsp+60h] [rbp-20h]
  __int64 v22; // [rsp+68h] [rbp-18h]
  __int64 v23; // [rsp+70h] [rbp-10h]
  __int64 v24; // [rsp+C8h] [rbp+48h] BYREF

  v4 = 0;
  v15[1] = 0LL;
  v6 = 1;
  XDCOBJ::vLock((XDCOBJ *)v15, a1);
  if ( v15[0] )
  {
    v20 = 0LL;
    v16 = 0LL;
    v17 = 0LL;
    v18 = 0;
    v19 = 0LL;
    v23 = 0LL;
    v22 = 0LL;
    v21 = 0LL;
    if ( !DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v16, (struct XDCOBJ *)v15, 0) )
      goto LABEL_39;
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
LABEL_30:
        if ( a2 != 4 )
          goto LABEL_31;
LABEL_39:
        XDCOBJ::vUnlockFast((XDCOBJ *)v15);
        v4 = v6;
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v16);
        return v4;
      }
      if ( a3 != 256 && a3 != 512 && a3 != 1024 )
        goto LABEL_28;
      v11 = a3;
      v12 = (a3 >> 8) & 0xF;
      if ( (a3 & 0x200) != 0 )
      {
        if ( !v8 )
          goto LABEL_28;
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
          if ( a3 == 8 || a3 == 16 )
          {
LABEL_14:
            v9 = 0x20000000;
            goto LABEL_30;
          }
          if ( a3 == 32 || a3 == 773 )
          {
            if ( v8 )
            {
              v9 = 0x10000000;
              if ( (*(_DWORD *)(v8 + 1848) & 0x4000000) != 0 )
              {
                if ( *(_DWORD *)(v15[0] + 32LL) != 1 )
                  goto LABEL_30;
                v10 = (unsigned __int8)v7 | 0x10;
                goto LABEL_14;
              }
            }
          }
        }
LABEL_28:
        v6 = 0;
        goto LABEL_39;
      }
      if ( a3 )
        v10 = (unsigned __int8)v7 | 0x20;
      else
        v10 = v7 & 0xDF;
    }
LABEL_31:
    if ( (unsigned __int8)v7 != v10
      || (*(_DWORD *)(v15[0] + 112LL) & 0xF00) != v11
      || (*(_DWORD *)(v15[0] + 112LL) & 0xF0000000) != v9 )
    {
      *(_DWORD *)(v15[0] + 112LL) = v9 | v10 | v11;
      *(_DWORD *)(*(_QWORD *)(v15[0] + 80LL) + 108LL) = v9 | v10 | v11 | *(_DWORD *)(*(_QWORD *)(v15[0] + 80LL) + 108LL) & 0xF000;
      if ( (unsigned __int8)v7 != v10 )
      {
        v24 = *(_QWORD *)(v15[0] + 96LL);
        if ( v24 )
        {
          XEPALOBJ::vUpdateTime((XEPALOBJ *)&v24);
          if ( v13 )
          {
            v24 = *(_QWORD *)(v13 + 120);
            if ( v24 )
              XEPALOBJ::vUpdateTime((XEPALOBJ *)&v24);
          }
        }
      }
    }
    goto LABEL_39;
  }
  return v4;
}
