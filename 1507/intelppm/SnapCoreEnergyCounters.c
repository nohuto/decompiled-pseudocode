/*
 * XREFs of SnapCoreEnergyCounters @ 0x1C0002EE0
 * Callers:
 *     SnapAtomEnergyCounters @ 0x1C0002ED0 (SnapAtomEnergyCounters.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002260 (_guard_dispatch_icall_nop.c)
 */

unsigned __int64 __fastcall SnapCoreEnergyCounters(unsigned int a1, char a2, char a3)
{
  unsigned __int64 result; // rax
  __int64 v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int128 v9; // xmm1

  result = DevExts;
  v5 = *(_QWORD *)(DevExts + 8LL * a1);
  if ( v5 )
  {
    v6 = *(_QWORD *)(v5 + 312);
    if ( v6 )
    {
      if ( !a2 )
      {
        v7 = *(_QWORD *)(v6 + 16);
        v8 = (unsigned int)dword_1C000DEC4;
        if ( v7 )
          HalPrivateDispatchTable[73](v7, v6 + 88);
        *(_QWORD *)(v6 + 8 * v8 + 88) = __readmsr(0x309u);
        *(_QWORD *)(v6 + 8LL * (unsigned int)(v8 + 1) + 88) = __readmsr(0x30Au);
        result = __readmsr(0x30Bu);
        *(_QWORD *)(v6 + 8LL * (unsigned int)(v8 + 2) + 88) = result;
      }
      if ( a3 )
      {
        v9 = *(_OWORD *)(v6 + 104);
        *(_OWORD *)(v6 + 24) = *(_OWORD *)(v6 + 88);
        *(_OWORD *)(v6 + 40) = v9;
      }
    }
  }
  return result;
}
