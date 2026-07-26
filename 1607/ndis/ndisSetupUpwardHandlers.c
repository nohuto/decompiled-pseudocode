/*
 * XREFs of ndisSetupUpwardHandlers @ 0x1C0018D94
 * Callers:
 *     ndisSetupLwfMiniportHandlers @ 0x1C0018D40 (ndisSetupLwfMiniportHandlers.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 */

__int64 (__fastcall *__fastcall ndisSetupUpwardHandlers(__int64 a1))(ULONG_PTR BugCheckParameter2)
{
  __int64 v1; // rdi
  int v2; // esi
  char v3; // bp
  unsigned __int8 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 (__fastcall *result)(ULONG_PTR); // rax

  v1 = *(_QWORD *)(a1 + 2056);
  v2 = 0;
  v3 = 0;
  v5 = (unsigned __int8)ndisWppEnabledLevelPerFlag;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    WPP_SF_q(69LL, &WPP_769814ed3e85312f0115d0e4b03a7387_Traceguids, a1);
    v5 = (unsigned __int8)ndisWppEnabledLevelPerFlag;
  }
  *(_QWORD *)(v1 + 464) = *(_QWORD *)(a1 + 2440);
  *(_QWORD *)(v1 + 472) = *(_QWORD *)(a1 + 2400);
  *(_QWORD *)(v1 + 480) = *(_QWORD *)(a1 + 2408);
  *(_QWORD *)(v1 + 488) = *(_QWORD *)(a1 + 2416);
  *(_QWORD *)(v1 + 496) = *(_QWORD *)(a1 + 2448);
  *(_QWORD *)(v1 + 504) = *(_QWORD *)(a1 + 2320);
  *(_QWORD *)(v1 + 512) = *(_QWORD *)(a1 + 2328);
  *(_QWORD *)(v1 + 520) = *(_QWORD *)(a1 + 2336);
  if ( *(_QWORD *)(*(_QWORD *)(v1 + 16) + 248LL) )
  {
    *(_DWORD *)(v1 + 60) |= 1u;
    v3 = 1;
  }
  else
  {
    *(_DWORD *)(v1 + 60) &= ~1u;
  }
  v6 = *(_QWORD *)(v1 + 112);
  *(_BYTE *)(a1 + 1999) = 0;
  while ( v6 )
  {
    v7 = *(_QWORD *)(v6 + 120);
    if ( v3 || !*(_QWORD *)(*(_QWORD *)(v6 + 16) + 248LL) )
    {
      *(_DWORD *)(v6 + 60) &= ~1u;
    }
    else
    {
      *(_DWORD *)(v6 + 60) |= 1u;
      v3 = 1;
    }
    if ( (*(_DWORD *)(v7 + 56) & 0x8000) != 0 )
      ++v2;
    v8 = *(_QWORD *)(v7 + 592);
    if ( v8 )
    {
      *(_QWORD *)(v6 + 464) = v8;
      *(_QWORD *)(v6 + 472) = *(_QWORD *)(v7 + 24);
      *(_QWORD *)(v6 + 480) = *(_QWORD *)(v7 + 792);
      *(_QWORD *)(v6 + 488) = v7;
    }
    else
    {
      *(_QWORD *)(v6 + 464) = *(_QWORD *)(v7 + 464);
      *(_QWORD *)(v6 + 472) = *(_QWORD *)(v7 + 472);
      *(_QWORD *)(v6 + 480) = *(_QWORD *)(v7 + 480);
      *(_QWORD *)(v6 + 488) = *(_QWORD *)(v7 + 488);
    }
    if ( *(_QWORD *)(v7 + 608) )
    {
      if ( !v2 )
        ++*(_BYTE *)(a1 + 1999);
      *(_QWORD *)(v6 + 496) = *(_QWORD *)(v7 + 608);
      *(_QWORD *)(v6 + 504) = *(_QWORD *)(v7 + 24);
      *(_QWORD *)(v6 + 512) = *(_QWORD *)(v7 + 792);
      *(_QWORD *)(v6 + 520) = v7;
    }
    else
    {
      *(_QWORD *)(v6 + 496) = *(_QWORD *)(v7 + 496);
      *(_QWORD *)(v6 + 504) = *(_QWORD *)(v7 + 504);
      *(_QWORD *)(v6 + 512) = *(_QWORD *)(v7 + 512);
      *(_QWORD *)(v6 + 520) = *(_QWORD *)(v7 + 520);
    }
    v6 = *(_QWORD *)(v6 + 112);
  }
  v9 = *(_QWORD *)(a1 + 2048);
  if ( (*(_DWORD *)(v9 + 56) & 0x8000) != 0 )
    ++v2;
  v10 = *(_QWORD *)(v9 + 592);
  if ( v10 )
  {
    *(_QWORD *)(a1 + 2624) = v10;
    *(_QWORD *)(a1 + 2584) = *(_QWORD *)(v9 + 24);
    *(_QWORD *)(a1 + 2592) = *(_QWORD *)(v9 + 792);
    *(_QWORD *)(a1 + 2600) = v9;
  }
  else
  {
    *(_QWORD *)(a1 + 2624) = *(_QWORD *)(v9 + 464);
    *(_QWORD *)(a1 + 2584) = *(_QWORD *)(v9 + 472);
    *(_QWORD *)(a1 + 2592) = *(_QWORD *)(v9 + 480);
    *(_QWORD *)(a1 + 2600) = *(_QWORD *)(v9 + 488);
  }
  if ( *(_QWORD *)(v9 + 608) )
  {
    if ( !v2 )
      ++*(_BYTE *)(a1 + 1999);
    *(_QWORD *)(a1 + 2632) = *(_QWORD *)(v9 + 608);
    *(_QWORD *)(a1 + 2504) = *(_QWORD *)(v9 + 24);
    result = *(__int64 (__fastcall **)(ULONG_PTR))(v9 + 792);
    *(_QWORD *)(a1 + 2512) = result;
    *(_QWORD *)(a1 + 2520) = v9;
  }
  else
  {
    *(_QWORD *)(a1 + 2632) = *(_QWORD *)(v9 + 496);
    *(_QWORD *)(a1 + 2504) = *(_QWORD *)(v9 + 504);
    *(_QWORD *)(a1 + 2512) = *(_QWORD *)(v9 + 512);
    result = *(__int64 (__fastcall **)(ULONG_PTR))(v9 + 520);
    *(_QWORD *)(a1 + 2520) = result;
  }
  if ( v2 == 1 )
  {
    result = (__int64 (__fastcall *)(ULONG_PTR))*(unsigned int *)(a1 + 464);
    if ( (_DWORD)result )
    {
      if ( (_DWORD)result == 3 )
        goto LABEL_25;
      result = ndisMIndicatePacket;
    }
    else
    {
      result = ethFilterDprIndicateReceivePacket;
    }
    *(_QWORD *)(a1 + 3440) = result;
  }
LABEL_25:
  if ( v5 >= 4u )
    return (__int64 (__fastcall *)(ULONG_PTR))WPP_SF_q(70LL, &WPP_769814ed3e85312f0115d0e4b03a7387_Traceguids, a1);
  return result;
}
