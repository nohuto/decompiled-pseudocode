/*
 * XREFs of WmipUnlinkInstanceSetFromGuidEntry @ 0x1404C2520
 * Callers:
 *     WmipDSCleanup @ 0x1403D1BEC (WmipDSCleanup.c)
 *     WmipUpdateDataSource @ 0x14065F670 (WmipUpdateDataSource.c)
 * Callees:
 *     WmipUnregisterEtwProvider @ 0x1403B58DC (WmipUnregisterEtwProvider.c)
 */

void __fastcall WmipUnlinkInstanceSetFromGuidEntry(__int64 a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rax

  --*(_DWORD *)(*(_QWORD *)(a1 + 56) + 36LL);
  v2 = *(_QWORD *)a1;
  v3 = *(_QWORD **)(a1 + 8);
  if ( *(_QWORD *)(v2 + 8) != a1 || *v3 != a1 )
    __fastfail(3u);
  *v3 = v2;
  *(_QWORD *)(v2 + 8) = v3;
  if ( (*(_DWORD *)(a1 + 16) & 0x80000) != 0 )
  {
    WmipUnregisterEtwProvider(a1);
    *(_DWORD *)(a1 + 16) &= 0xFFCFFFFF;
  }
}
