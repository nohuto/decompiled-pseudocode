/*
 * XREFs of GreGetClipBox @ 0x1C0026E80
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C0052BD0 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C0027140 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00278E8 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z @ 0x1C0028530 (-vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z.c)
 *     bCvtPts1 @ 0x1C0028698 (bCvtPts1.c)
 *     ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C003DA74 (-eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00AEEE0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00AEF58 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C00B02A0 (--0DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetClipBox(HDC a1, int *a2, int a3)
{
  unsigned int v5; // ebx
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
  __int64 v19; // [rsp+28h] [rbp-69h] BYREF
  int v20; // [rsp+30h] [rbp-61h]
  int v21; // [rsp+34h] [rbp-5Dh]
  DC *v22[6]; // [rsp+38h] [rbp-59h] BYREF
  _BYTE v23[32]; // [rsp+68h] [rbp-29h] BYREF
  _BYTE v24[80]; // [rsp+88h] [rbp-9h] BYREF

  v5 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v22, a1);
  if ( v22[0] )
  {
    DCOBJ::DCOBJ((DCOBJ *)v24);
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v23, (struct XDCOBJ *)v22, 1);
    if ( (v23[24] & 1) != 0 )
    {
      v6 = v22[0];
      v7 = *((_QWORD *)v22[0] + 194);
      if ( !v7 )
        v7 = *((_QWORD *)v22[0] + 193);
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
          v20 = *(_DWORD *)(v14 + 68);
          v21 = *(_DWORD *)(v14 + 312) & 1;
          EXFORMOBJ::vInit((EXFORMOBJ *)&v19, (struct XDCOBJ *)v22, 0x402u, 0);
          if ( v19 )
          {
            if ( (*(_BYTE *)(v19 + 32) & 0x43) != 0x43 )
              bCvtPts1(v19, a2, 2LL);
            if ( v21 )
            {
              ++*a2;
              ++a2[2];
            }
          }
          v9 = v22[0];
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
LABEL_17:
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v23);
        DCOBJ::~DCOBJ((DCOBJ *)v24);
        goto LABEL_18;
      }
    }
    else
    {
      v16 = v22[0];
      *(_QWORD *)a2 = 0LL;
      *((_QWORD *)a2 + 1) = 0LL;
      if ( *((_QWORD *)v16 + 64) && (*((_DWORD *)v16 + 9) & 0x5000) != 0x1000 )
        goto LABEL_17;
    }
    v5 = 1;
    goto LABEL_17;
  }
LABEL_18:
  DCOBJ::~DCOBJ((DCOBJ *)v22);
  return v5;
}
