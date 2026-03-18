/*
 * XREFs of InitLoadResources @ 0x1C0056CFC
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x1C00542E4 (-UserInitialize@@YAJXZ.c)
 *     ?UpdateUserScreen@@YAHH@Z @ 0x1C0056368 (-UpdateUserScreen@@YAHH@Z.c)
 *     xxxRemoteConnect @ 0x1C00B1960 (xxxRemoteConnect.c)
 * Callees:
 *     EngMulDiv @ 0x1C0038200 (EngMulDiv.c)
 *     SetDpiDepSysMet @ 0x1C0057050 (SetDpiDepSysMet.c)
 */

__int64 __fastcall InitLoadResources(int a1)
{
  unsigned __int16 v2; // dx
  unsigned int v3; // ebx
  __int64 v4; // rdx
  unsigned __int16 v5; // cx
  unsigned int v6; // eax
  unsigned int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // eax
  __int64 result; // rax
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // r8

  v2 = *((_WORD *)gpsi + 4339);
  v3 = 48;
  if ( v2 >= 0x90u )
  {
    if ( v2 >= 0xC0u )
    {
      if ( v2 >= 0x120u )
        v4 = v2 < 0x180u ? 96 : 128;
      else
        v4 = 64LL;
    }
    else
    {
      v4 = 48LL;
    }
  }
  else
  {
    v4 = 32LL;
  }
  SetDpiDepSysMet(13LL, v4);
  v5 = *((_WORD *)gpsi + 4339);
  if ( v5 >= 0x90u )
  {
    if ( v5 >= 0xC0u )
    {
      if ( v5 >= 0x120u )
        v3 = v5 < 0x180u ? 96 : 128;
      else
        v3 = 64;
    }
  }
  else
  {
    v3 = 32;
  }
  SetDpiDepSysMet(14LL, v3);
  *((_DWORD *)gpsi + 580) = 32;
  *((_DWORD *)gpsi + 581) = 32;
  *((_DWORD *)gpsi + 578) = 32;
  *((_DWORD *)gpsi + 579) = 32;
  *((_DWORD *)gpsi + 616) = *((_DWORD *)gpsi + 578) / 2;
  *((_DWORD *)gpsi + 617) = *((_DWORD *)gpsi + 579) / 2;
  v6 = EngMulDiv(*((_DWORD *)gpsi + 578), *((unsigned __int16 *)gpsi + 4339), 96);
  SetDpiDepSysMet(11LL, v6);
  v7 = EngMulDiv(*((_DWORD *)gpsi + 579), *((unsigned __int16 *)gpsi + 4339), 96);
  SetDpiDepSysMet(12LL, v7);
  v8 = EngMulDiv(*((_DWORD *)gpsi + 616), *((unsigned __int16 *)gpsi + 4339), 96);
  SetDpiDepSysMet(49LL, v8);
  v9 = EngMulDiv(*((_DWORD *)gpsi + 617), *((unsigned __int16 *)gpsi + 4339), 96);
  SetDpiDepSysMet(50LL, v9);
  *((_DWORD *)gpsi + 488) = 0;
  *((_DWORD *)gpsi + 475) = 1;
  *((_DWORD *)gpsi + 476) = 1;
  *((_DWORD *)gpsi + 515) = 2 * *((_DWORD *)gpsi + 475);
  *((_DWORD *)gpsi + 516) = 2 * *((_DWORD *)gpsi + 476);
  *((_DWORD *)gpsi + 477) = *((_DWORD *)gpsi + 515) + *((_DWORD *)gpsi + 475);
  result = (unsigned int)(*((_DWORD *)gpsi + 516) + *((_DWORD *)gpsi + 476));
  *((_DWORD *)gpsi + 478) = result;
  if ( !a1 && (!gbRemoteSession || gbFirstInteractiveSession) )
  {
    v11 = *(_QWORD *)(gpDispInfo + 88);
    *((_DWORD *)gpsi + 583) = *(_DWORD *)(v11 + 52);
    *((_DWORD *)gpsi + 584) = *(_DWORD *)(v11 + 56) - *((_DWORD *)gpsi + 571);
    *((_DWORD *)gpsi + 1336) = *(_DWORD *)(v11 + 52) / 2;
    *((_DWORD *)gpsi + 1337) = *(_DWORD *)(v11 + 56) / 2;
    v12 = *(_QWORD *)(gpDispInfo + 88);
    *((_DWORD *)gpsi + 680) = *(_DWORD *)(v12 + 68);
    *((_DWORD *)gpsi + 681) = *(_DWORD *)(v12 + 72) - *((_DWORD *)gpsi + 474);
    *((_DWORD *)gpsi + 1338) = *(_DWORD *)(v12 + 68) / 2;
    *((_DWORD *)gpsi + 1339) = *(_DWORD *)(v12 + 72) / 2;
    v13 = *(_QWORD *)(gpDispInfo + 88);
    *((_DWORD *)gpsi + 486) = *(_DWORD *)(v13 + 36);
    *((_DWORD *)gpsi + 487) = *(_DWORD *)(v13 + 40) - *((_DWORD *)gpsi + 474);
    *((_DWORD *)gpsi + 1342) = *(_DWORD *)(v13 + 36) / 2;
    result = (unsigned int)(*(_DWORD *)(v13 + 40) / 2);
    *((_DWORD *)gpsi + 1343) = result;
  }
  return result;
}
