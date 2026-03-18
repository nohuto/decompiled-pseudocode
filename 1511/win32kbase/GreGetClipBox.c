/*
 * XREFs of GreGetClipBox @ 0x1C0014B60
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C005E4F0 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     ?vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z @ 0x1C00158B0 (-vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z.c)
 *     bCvtPts1 @ 0x1C0015A64 (bCvtPts1.c)
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C002B990 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002C144 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C002D734 (-eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00316F0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0031A10 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 */

__int64 __fastcall GreGetClipBox(HDC a1, int *a2, int a3)
{
  unsigned int v5; // edi
  DC *v6; // rcx
  __int64 v7; // rsi
  struct EPOINTL *v8; // rax
  DC *v9; // rcx
  int v10; // edx
  int v11; // r8d
  int v12; // r9d
  int v13; // r10d
  __int64 v14; // rcx
  DC *v16; // rax
  int v17; // ecx
  int v18; // eax
  DC *v19[2]; // [rsp+28h] [rbp-29h] BYREF
  __int64 v20; // [rsp+38h] [rbp-19h] BYREF
  int v21; // [rsp+40h] [rbp-11h]
  int v22; // [rsp+44h] [rbp-Dh]
  _BYTE v23[32]; // [rsp+48h] [rbp-9h] BYREF
  __int64 v24; // [rsp+68h] [rbp+17h]
  __int64 v25; // [rsp+70h] [rbp+1Fh]

  v19[0] = 0LL;
  v19[1] = 0LL;
  v5 = 0;
  XDCOBJ::vLock((XDCOBJ *)v19, a1);
  if ( !v19[0] )
    return v5;
  v24 = 0LL;
  v25 = 0LL;
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v23, (struct XDCOBJ *)v19, 1);
  if ( (v23[24] & 1) != 0 )
  {
    v6 = v19[0];
    v7 = *((_QWORD *)v19[0] + 191);
    if ( !v7 )
      v7 = *((_QWORD *)v19[0] + 190);
    *(_OWORD *)a2 = *(_OWORD *)(v7 + 88);
    if ( *a2 >= a2[2] || a2[1] >= a2[3] )
    {
      *(_QWORD *)a2 = 0LL;
      *((_QWORD *)a2 + 1) = 0LL;
    }
    else
    {
      v8 = DC::eptlOrigin(v6);
      *a2 = v10 - *(_DWORD *)v8;
      a2[2] = v11 - *(_DWORD *)v8;
      a2[1] = v12 - *((_DWORD *)v8 + 1);
      a2[3] = v13 - *((_DWORD *)v8 + 1);
      if ( a3 )
      {
        v14 = *((_QWORD *)v9 + 10);
        v21 = *(_DWORD *)(v14 + 68);
        v22 = *(_DWORD *)(v14 + 312) & 1;
        EXFORMOBJ::vInit((EXFORMOBJ *)&v20, (struct XDCOBJ *)v19, 0x402u, 0);
        if ( v20 )
        {
          if ( (*(_BYTE *)(v20 + 32) & 0x43) != 0x43 )
            bCvtPts1(v20, a2, 2LL);
          if ( v22 )
          {
            ++*a2;
            ++a2[2];
          }
        }
        v9 = v19[0];
      }
      if ( (*(_DWORD *)(*((_QWORD *)v9 + 10) + 312LL) & 1) != 0 )
      {
        v17 = *a2;
        v18 = a2[2];
        if ( *a2 > v18 )
        {
          *a2 = v18;
          a2[2] = v17;
        }
      }
    }
    if ( *(_DWORD *)(v7 + 84) != 1 )
    {
      LOBYTE(v5) = *(_DWORD *)(v7 + 80) > 0xA0u;
      v5 += 2;
      goto LABEL_17;
    }
    goto LABEL_21;
  }
  v16 = v19[0];
  *(_QWORD *)a2 = 0LL;
  *((_QWORD *)a2 + 1) = 0LL;
  if ( !*((_QWORD *)v16 + 64) || (*((_DWORD *)v16 + 9) & 0x5000) == 0x1000 )
LABEL_21:
    v5 = 1;
LABEL_17:
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v23);
  if ( v19[0] )
  {
    XDCOBJ::RestoreAttributes((XDCOBJ *)v19);
    _InterlockedDecrement((volatile signed __int32 *)v19[0] + 3);
  }
  return v5;
}
