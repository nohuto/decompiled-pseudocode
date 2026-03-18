/*
 * XREFs of InitLoadResources @ 0x1C006B5DC
 * Callers:
 *     RemoteConnect @ 0x1C00628B0 (RemoteConnect.c)
 *     ?UserInitialize@@YAJXZ @ 0x1C006A144 (-UserInitialize@@YAJXZ.c)
 *     ?UpdateUserScreen@@YAHH@Z @ 0x1C006AC44 (-UpdateUserScreen@@YAHH@Z.c)
 * Callees:
 *     EngMulDiv @ 0x1C0048860 (EngMulDiv.c)
 */

__int64 __fastcall InitLoadResources(__int64 a1)
{
  int v1; // esi
  unsigned __int16 v2; // dx
  __int64 v3; // rcx
  char *v4; // rax
  __int64 v5; // rcx
  char *v6; // rax
  _DWORD *v7; // rbx
  _DWORD *v8; // rbx
  _DWORD *v9; // rbx
  _DWORD *v10; // rbx
  __int64 result; // rax
  __int64 v12; // r8
  __int64 v13; // r8
  __int64 v14; // r8
  __int64 v15; // rcx
  char *v16; // rax
  __int64 v17; // rcx
  char *v18; // rax
  __int64 v19; // rcx
  char *v20; // rax
  __int64 v21; // rcx
  char *v22; // rax

  v1 = a1;
  v2 = *((_WORD *)gpsi + 3643);
  if ( v2 >= 0x90u )
  {
    if ( v2 >= 0xC0u )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(a1) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v19) + 776) & 0x4000) != 0 )
      {
        v20 = (char *)gpsi + 1932;
      }
      else
      {
        v20 = (char *)gpsi + 2320;
      }
      *(_DWORD *)v20 = 64;
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v19) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v21) + 776) & 0x4000) != 0 )
      {
        v22 = (char *)gpsi + 1936;
      }
      else
      {
        v22 = (char *)gpsi + 2324;
      }
      *(_DWORD *)v22 = 64;
    }
    else
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(a1) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v15) + 776) & 0x4000) != 0 )
      {
        v16 = (char *)gpsi + 1932;
      }
      else
      {
        v16 = (char *)gpsi + 2320;
      }
      *(_DWORD *)v16 = 48;
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v15) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v17) + 776) & 0x4000) != 0 )
      {
        v18 = (char *)gpsi + 1936;
      }
      else
      {
        v18 = (char *)gpsi + 2324;
      }
      *(_DWORD *)v18 = 48;
    }
  }
  else
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(a1) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v3) + 776) & 0x4000) != 0 )
    {
      v4 = (char *)gpsi + 1932;
    }
    else
    {
      v4 = (char *)gpsi + 2320;
    }
    *(_DWORD *)v4 = 32;
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v3) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v5) + 776) & 0x4000) != 0 )
    {
      v6 = (char *)gpsi + 1936;
    }
    else
    {
      v6 = (char *)gpsi + 2324;
    }
    *(_DWORD *)v6 = 32;
  }
  *((_DWORD *)gpsi + 580) = 32;
  *((_DWORD *)gpsi + 581) = 32;
  *((_DWORD *)gpsi + 578) = 32;
  *((_DWORD *)gpsi + 579) = 32;
  *((_DWORD *)gpsi + 616) = *((_DWORD *)gpsi + 578) / 2;
  *((_DWORD *)gpsi + 617) = *((_DWORD *)gpsi + 579) / 2;
  v7 = gpsi;
  v7[481] = EngMulDiv(*((_DWORD *)gpsi + 578), *((unsigned __int16 *)gpsi + 3643), 96);
  v8 = gpsi;
  v8[482] = EngMulDiv(*((_DWORD *)gpsi + 579), *((unsigned __int16 *)gpsi + 3643), 96);
  v9 = gpsi;
  v9[519] = EngMulDiv(*((_DWORD *)gpsi + 616), *((unsigned __int16 *)gpsi + 3643), 96);
  v10 = gpsi;
  v10[520] = EngMulDiv(*((_DWORD *)gpsi + 617), *((unsigned __int16 *)gpsi + 3643), 96);
  *((_DWORD *)gpsi + 488) = 0;
  *((_DWORD *)gpsi + 475) = 1;
  *((_DWORD *)gpsi + 476) = 1;
  *((_DWORD *)gpsi + 515) = 2 * *((_DWORD *)gpsi + 475);
  *((_DWORD *)gpsi + 516) = 2 * *((_DWORD *)gpsi + 476);
  *((_DWORD *)gpsi + 477) = *((_DWORD *)gpsi + 475) + *((_DWORD *)gpsi + 515);
  result = (unsigned int)(*((_DWORD *)gpsi + 476) + *((_DWORD *)gpsi + 516));
  *((_DWORD *)gpsi + 478) = result;
  if ( !v1 && (!gbRemoteSession || gbFirstInteractiveSession) )
  {
    v12 = *(_QWORD *)(gpDispInfo + 88);
    *((_DWORD *)gpsi + 583) = *(_DWORD *)(v12 + 52);
    *((_DWORD *)gpsi + 584) = *(_DWORD *)(v12 + 56) - *((_DWORD *)gpsi + 571);
    *((_DWORD *)gpsi + 988) = *(_DWORD *)(v12 + 52) / 2;
    *((_DWORD *)gpsi + 989) = *(_DWORD *)(v12 + 56) / 2;
    v13 = *(_QWORD *)(gpDispInfo + 88);
    *((_DWORD *)gpsi + 680) = *(_DWORD *)(v13 + 68);
    *((_DWORD *)gpsi + 681) = *(_DWORD *)(v13 + 72) - *((_DWORD *)gpsi + 474);
    *((_DWORD *)gpsi + 990) = *(_DWORD *)(v13 + 68) / 2;
    *((_DWORD *)gpsi + 991) = *(_DWORD *)(v13 + 72) / 2;
    v14 = *(_QWORD *)(gpDispInfo + 88);
    *((_DWORD *)gpsi + 486) = *(_DWORD *)(v14 + 36);
    *((_DWORD *)gpsi + 487) = *(_DWORD *)(v14 + 40) - *((_DWORD *)gpsi + 474);
    *((_DWORD *)gpsi + 994) = *(_DWORD *)(v14 + 36) / 2;
    result = (unsigned int)(*(_DWORD *)(v14 + 40) / 2);
    *((_DWORD *)gpsi + 995) = result;
  }
  return result;
}
