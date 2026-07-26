/*
 * XREFs of ?CheckAllDriversRunning@Initmode@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A64B4
 * Callers:
 *     ?DisableIfNeeded@Initmode@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C00A83A4 (-DisableIfNeeded@Initmode@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall Ndis::Initmode::CheckAllDriversRunning(Ndis::Initmode *this, struct _NDIS_MINIPORT_BLOCK *a2)
{
  __int64 v3; // rdx
  unsigned __int64 v4; // rcx
  __int64 v5; // r9
  unsigned __int64 v7; // rdx
  __int64 i; // rcx
  __int64 v9; // r9

  v3 = 0LL;
  v4 = *((unsigned int *)this + 1276);
  while ( (_DWORD)v3 != (_DWORD)v4 )
  {
    if ( (unsigned int)v3 >= v4 )
      __fastfail(0xBAD0FFu);
    v5 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 639) + 8 * v3) + 104LL);
    if ( (*(_DWORD *)(v5 + 56) & 0x10) == 0 && !*(_QWORD *)(v5 + 72) )
      return 0;
    v3 = (unsigned int)(v3 + 1);
  }
  v7 = *((unsigned int *)this + 1270);
  for ( i = 0LL; (_DWORD)i != (_DWORD)v7; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= v7 )
      __fastfail(0xBAD0FFu);
    v9 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 636) + 8 * i) + 104LL);
    if ( (*(_DWORD *)(v9 + 48) & 1) != 0 && !*(_QWORD *)(v9 + 56) )
      return 0;
  }
  return 1;
}
