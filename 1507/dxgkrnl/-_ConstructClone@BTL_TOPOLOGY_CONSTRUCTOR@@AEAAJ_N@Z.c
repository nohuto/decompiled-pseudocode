/*
 * XREFs of ?_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C018021C
 * Callers:
 *     ??RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJIPEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C017EC3C (--RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJIPEAVCCD_TOPOLOGY@@PEAG@Z.c)
 * Callees:
 *     IsInternalVideoOutput @ 0x1C0004FC0 (IsInternalVideoOutput.c)
 *     ?SwapPathsDescriptors@CCD_TOPOLOGY@@QEAAJII@Z @ 0x1C017DFA4 (-SwapPathsDescriptors@CCD_TOPOLOGY@@QEAAJII@Z.c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C017F830 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 *     ?_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C018033C (-_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructInternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C0180464 (-_ConstructInternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_ConstructClone(BTL_TOPOLOGY_CONSTRUCTOR *this, bool a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  unsigned __int16 v6; // di
  __int64 v7; // rsi
  __int64 v8; // r9
  int v9; // eax
  __int64 v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rax

  result = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructInternal(this);
  v6 = 0;
  if ( (int)result >= 0 )
  {
    LOBYTE(v5) = a2;
    if ( *((_BYTE *)this + 53) )
    {
      *((_BYTE *)this + 10) = 1;
      result = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExtendSecondPath(this, a2);
      LODWORD(v7) = result;
      if ( (int)result < 0 )
        return result;
    }
    else
    {
      v8 = *((unsigned int *)this + 5);
      *((_BYTE *)this + 10) = 0;
      v9 = BTL_TOPOLOGY_CONSTRUCTOR::_AddSecondaryPathToTopology(
             (CCD_TOPOLOGY **)this,
             v5,
             (const struct _LUID *)((char *)this + 12),
             v8);
      v7 = v9;
      if ( v9 < 0 )
      {
        v11 = (_QWORD *)WdLogNewEntry5_WdError(v10);
        v11[3] = v7;
        v11[4] = *((int *)this + 4);
        v11[5] = *((unsigned int *)this + 3);
        v11[6] = *((unsigned int *)this + 5);
        v11[7] = *(_QWORD *)(*(_QWORD *)this + 64LL);
        WdLogEvent5_WdError(v11);
        return (unsigned int)v7;
      }
      if ( IsInternalVideoOutput(*((_DWORD *)this + 8)) )
      {
        v12 = *(_QWORD *)(*(_QWORD *)this + 64LL);
        if ( v12 )
          v6 = *(_WORD *)(v12 + 20);
        if ( v6 >= 2u )
          LODWORD(v7) = CCD_TOPOLOGY::SwapPathsDescriptors(*(void ***)this, 0, 1u);
      }
    }
    *((_BYTE *)this + 11) = 1;
    return (unsigned int)v7;
  }
  return result;
}
