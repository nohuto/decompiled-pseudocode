/*
 * XREFs of ??RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJIPEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C01830C8
 * Callers:
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C00A23F8 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 * Callees:
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00A4828 (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00A484C (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?_Query@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C00A640C (-_Query@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 *     ?_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C01846E4 (-_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructExtend@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C01847CC (-_ConstructExtend@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C018489C (-_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 *     ?_ConstructInternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C018492C (-_ConstructInternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 *     ?_DetermineDefaultTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAA?AW4MultiScreenDefaultShellTopology@@XZ @ 0x1C0184964 (-_DetermineDefaultTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAA-AW4MultiScreenDefaultShellTopology@@XZ.c)
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
  unsigned __int16 v13; // si
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  _QWORD *v21; // rax
  void **v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  unsigned __int16 v25; // cx
  unsigned __int16 v26; // ax
  unsigned int i; // esi
  __int64 v28; // rax
  unsigned __int16 v29; // cx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  unsigned int v31; // ecx

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
      v23 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructClone(this, 1);
      break;
    case 4:
      v23 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExtend(this, 1);
      break;
    case 8:
      v23 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExternal(this);
      break;
    case 0xF:
      v13 = BTL_TOPOLOGY_CONSTRUCTOR::_DetermineDefaultTopology(this);
      switch ( v13 )
      {
        case 1u:
          v15 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructInternal(this);
          break;
        case 2u:
          v15 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExternal(this);
          break;
        case 3u:
          v15 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructClone(this, 0);
          break;
        default:
          v14 = (unsigned int)v13 - 4;
          if ( (unsigned int)v14 > 1 )
          {
            v20 = WdLogNewEntry5_WdAssertion(v14);
            *(_QWORD *)(v20 + 24) = v13;
            WdLogEvent5_WdAssertion(v20);
            LODWORD(v10) = -1073741823;
LABEL_21:
            v21 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v16, v18, v19);
            v21[3] = (int)v10;
            v21[4] = 15LL;
            v21[5] = *(_QWORD *)this;
            v21[6] = v13;
            WdLogEvent5_WdWarning(v21);
            v22 = *(void ***)this;
            *((_WORD *)this + 4) = 0;
            CCD_TOPOLOGY::Clear(v22);
LABEL_22:
            v23 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructInternal(this);
            goto LABEL_23;
          }
          v15 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExtend(this, 0);
          break;
      }
      LODWORD(v10) = v15;
      if ( v15 >= 0 )
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
  LODWORD(v10) = v23;
  if ( v23 < 0 )
    goto LABEL_24;
LABEL_28:
  v24 = *(_QWORD *)(*(_QWORD *)this + 64LL);
  if ( v24 )
    v25 = *(_WORD *)(v24 + 22);
  else
    v25 = 0;
  v26 = *((_WORD *)this + 4);
  if ( v26 <= v25 )
  {
    for ( i = 0; ; ++i )
    {
      v28 = *(_QWORD *)(a3 + 64);
      v29 = v28 ? *(_WORD *)(v28 + 20) : 0;
      if ( i >= v29 )
        break;
      PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)a3, i);
      v31 = i;
      if ( *((_BYTE *)this + 11) )
        v31 = 0;
      *(_DWORD *)PathDescriptor |= 0x40000u;
      *((_DWORD *)PathDescriptor + 50) = v31 | 0xFE530000;
    }
  }
  else
  {
    if ( a4 )
      *a4 = v26;
    LODWORD(v10) = -1073741789;
  }
  return (unsigned int)v10;
}
