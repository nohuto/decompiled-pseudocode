/*
 * XREFs of GreGetClipBox @ 0x1C0045240
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C0058B60 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C002549C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C00254D8 (--0DCOBJ@@QEAA@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0025504 (--1DCOBJ@@QEAA@XZ.c)
 *     ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C002C700 (-eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C002D344 (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C002F4A0 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002FA5C (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z @ 0x1C0045F90 (-vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C00460F8 (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ @ 0x1C00BCFD0 (--1-$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C00BD410 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 */

__int64 __fastcall GreGetClipBox(HDC a1, struct ERECTL *a2, int a3)
{
  unsigned int v5; // edi
  DC *v6; // rax
  DC *v7; // rcx
  __int64 v8; // rax
  __int128 v9; // xmm0
  struct EPOINTL *v10; // rax
  DC *v11; // rcx
  int v12; // edx
  int v13; // r8d
  int v14; // r9d
  int v15; // r10d
  __int64 v16; // rcx
  int v17; // ecx
  int v18; // eax
  __int64 v20; // [rsp+28h] [rbp-59h] BYREF
  int v21; // [rsp+30h] [rbp-51h]
  int v22; // [rsp+34h] [rbp-4Dh]
  DC *v23[2]; // [rsp+38h] [rbp-49h] BYREF
  _BYTE v24[32]; // [rsp+48h] [rbp-39h] BYREF
  struct _POINTL v25[3]; // [rsp+68h] [rbp-19h] BYREF
  char v26; // [rsp+80h] [rbp-1h]
  _BYTE v27[80]; // [rsp+88h] [rbp+7h] BYREF
  __int64 v28; // [rsp+100h] [rbp+7Fh] BYREF

  v5 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v23, a1);
  if ( v23[0] )
  {
    DCOBJ::DCOBJ((DCOBJ *)v27);
    DEVLOCKOBJ::bLock(v25, (struct _POINTL **)v23, 1);
    if ( (v26 & 1) != 0 )
    {
      v7 = v23[0];
      v8 = *((_QWORD *)v23[0] + 194);
      if ( !v8 )
        v8 = *((_QWORD *)v23[0] + 193);
      v9 = *(_OWORD *)(v8 + 88);
      v28 = v8;
      *(_OWORD *)a2 = v9;
      if ( *(_DWORD *)a2 >= *((_DWORD *)a2 + 2) || *((_DWORD *)a2 + 1) >= *((_DWORD *)a2 + 3) )
      {
        *(_QWORD *)a2 = 0LL;
        *((_QWORD *)a2 + 1) = 0LL;
      }
      else
      {
        v10 = DC::eptlOrigin(v7);
        *(_DWORD *)a2 = v12 - *(_DWORD *)v10;
        *((_DWORD *)a2 + 2) = v13 - *(_DWORD *)v10;
        *((_DWORD *)a2 + 1) = v14 - *((_DWORD *)v10 + 1);
        *((_DWORD *)a2 + 3) = v15 - *((_DWORD *)v10 + 1);
        if ( a3 )
        {
          v16 = *((_QWORD *)v11 + 10);
          v21 = *(_DWORD *)(v16 + 68);
          v22 = *(_DWORD *)(v16 + 312) & 1;
          EXFORMOBJ::vInit((EXFORMOBJ *)&v20, (struct XDCOBJ *)v23, 0x402u, 0);
          if ( v20 )
            EXFORMOBJ::bXform((EXFORMOBJ *)&v20, a2);
          v11 = v23[0];
        }
        if ( (*(_DWORD *)(*((_QWORD *)v11 + 10) + 312LL) & 1) != 0 )
        {
          v17 = *(_DWORD *)a2;
          v18 = *((_DWORD *)a2 + 2);
          if ( *(_DWORD *)a2 > v18 )
          {
            *(_DWORD *)a2 = v18;
            *((_DWORD *)a2 + 2) = v17;
          }
        }
      }
      v5 = RGNOBJ::iComplexity((RGNOBJ *)&v28);
    }
    else
    {
      v6 = v23[0];
      *(_QWORD *)a2 = 0LL;
      *((_QWORD *)a2 + 1) = 0LL;
      if ( !*((_QWORD *)v6 + 64) || (*((_DWORD *)v6 + 9) & 0x5000) == 0x1000 )
        v5 = 1;
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v25);
    DCOBJ::~DCOBJ((DCOBJ *)v27);
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v23);
  UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::~UnexpectedThreadTerminationHandler<BRUSHSELOBJ>(v24);
  return v5;
}
