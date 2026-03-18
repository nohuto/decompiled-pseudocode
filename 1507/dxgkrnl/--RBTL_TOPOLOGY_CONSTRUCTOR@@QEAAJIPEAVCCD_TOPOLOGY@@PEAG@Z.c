/*
 * XREFs of ??RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJIPEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C017EC3C
 * Callers:
 *     ?GetTopologyForClass@CCD_BTL@@QEAAJIPEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C017F13C (-GetTopologyForClass@CCD_BTL@@QEAAJIPEAVCCD_TOPOLOGY@@PEAG@Z.c)
 * Callees:
 *     ?_Query@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C0063448 (-_Query@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C0066060 (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C0066084 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C018021C (-_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructExtend@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C0180304 (-_ConstructExtend@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C01803D4 (-_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 *     ?_ConstructInternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C0180464 (-_ConstructInternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 *     ?_DetermineDefaultTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAA?AW4MultiScreenDefaultShellTopology@@XZ @ 0x1C0180494 (-_DetermineDefaultTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAA-AW4MultiScreenDefaultShellTopology@@XZ.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::operator()(
        BTL_TOPOLOGY_CONSTRUCTOR *this,
        unsigned int a2,
        __int64 a3,
        unsigned __int16 *a4)
{
  __int64 v5; // rbp
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rbx
  _QWORD *v11; // rax
  __int64 v13; // rdx
  unsigned __int16 v14; // si
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  _QWORD *v24; // rax
  void **v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  unsigned __int16 v28; // cx
  unsigned __int16 v29; // ax
  unsigned int i; // esi
  __int64 v31; // rax
  unsigned __int16 v32; // cx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  unsigned int v34; // ecx

  *(_QWORD *)this = a3;
  v5 = a2;
  *((_WORD *)this + 4) = 0;
  CCD_TOPOLOGY::Clear((void **)a3);
  v8 = BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_Query((BTL_TOPOLOGY_CONSTRUCTOR *)((char *)this + 12));
  v10 = v8;
  if ( v8 < 0 )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdError(v9);
    v11[3] = v10;
LABEL_3:
    v11[4] = v5;
    v11[5] = *(_QWORD *)this;
    WdLogEvent5_WdError(v11);
    return (unsigned int)v10;
  }
  switch ( (_DWORD)v5 )
  {
    case 1:
      goto LABEL_22;
    case 2:
      v26 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructClone(this, 1);
      break;
    case 4:
      v26 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExtend(this, 1);
      break;
    case 8:
      v26 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExternal(this);
      break;
    case 0xF:
      v14 = BTL_TOPOLOGY_CONSTRUCTOR::_DetermineDefaultTopology(this);
      switch ( v14 )
      {
        case 1u:
          v18 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructInternal(this);
          break;
        case 2u:
          v18 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExternal(this);
          break;
        case 3u:
          v18 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructClone(this, 0);
          break;
        default:
          v17 = (unsigned int)v14 - 4;
          if ( (unsigned int)v17 > 1 )
          {
            v23 = WdLogNewEntry5_WdAssertion(v17, v13, v15, v16);
            *(_QWORD *)(v23 + 24) = v14;
            WdLogEvent5_WdAssertion(v23);
            LODWORD(v10) = -1073741823;
LABEL_21:
            v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v19, v21, v22);
            v24[3] = (int)v10;
            v24[4] = 15LL;
            v24[5] = *(_QWORD *)this;
            v24[6] = v14;
            WdLogEvent5_WdWarning(v24);
            v25 = *(void ***)this;
            *((_WORD *)this + 4) = 0;
            CCD_TOPOLOGY::Clear(v25);
LABEL_22:
            v26 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructInternal(this);
            goto LABEL_23;
          }
          v18 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExtend(this, 0);
          break;
      }
      LODWORD(v10) = v18;
      if ( v18 >= 0 )
        goto LABEL_28;
      goto LABEL_21;
    default:
      LODWORD(v10) = -1073741811;
LABEL_24:
      v11 = (_QWORD *)WdLogNewEntry5_WdError(v9);
      v11[3] = (int)v10;
      goto LABEL_3;
  }
LABEL_23:
  LODWORD(v10) = v26;
  if ( v26 < 0 )
    goto LABEL_24;
LABEL_28:
  v27 = *(_QWORD *)(*(_QWORD *)this + 64LL);
  if ( v27 )
    v28 = *(_WORD *)(v27 + 22);
  else
    v28 = 0;
  v29 = *((_WORD *)this + 4);
  if ( v29 <= v28 )
  {
    for ( i = 0; ; ++i )
    {
      v31 = *(_QWORD *)(a3 + 64);
      v32 = v31 ? *(_WORD *)(v31 + 20) : 0;
      if ( i >= v32 )
        break;
      PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)a3, i, v21, v22);
      v34 = i;
      if ( *((_BYTE *)this + 11) )
        v34 = 0;
      *(_DWORD *)PathDescriptor |= 0x40000u;
      *((_DWORD *)PathDescriptor + 50) = v34 | 0xFE530000;
    }
  }
  else
  {
    if ( a4 )
      *a4 = v29;
    LODWORD(v10) = -1073741789;
  }
  return (unsigned int)v10;
}
