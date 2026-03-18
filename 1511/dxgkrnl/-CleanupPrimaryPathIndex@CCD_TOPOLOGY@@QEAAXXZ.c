/*
 * XREFs of ?CleanupPrimaryPathIndex@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00A300C
 * Callers:
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00A4E18 (-ApplyTopology@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CCD_TOPOLOGY::CleanupPrimaryPathIndex(CCD_TOPOLOGY *this)
{
  unsigned int i; // r8d
  __int64 v3; // rdx
  unsigned __int16 v4; // ax
  __int64 v5; // rcx

  for ( i = 0; ; ++i )
  {
    v3 = *((_QWORD *)this + 8);
    v4 = v3 ? *(_WORD *)(v3 + 20) : 0;
    if ( i >= v4 )
      break;
    v5 = 216LL * i;
    *(_DWORD *)(v5 + v3 + 236) = -27918336;
  }
}
