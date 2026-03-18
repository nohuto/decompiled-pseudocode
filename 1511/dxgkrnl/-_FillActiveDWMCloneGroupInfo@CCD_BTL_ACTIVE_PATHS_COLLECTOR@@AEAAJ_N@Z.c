/*
 * XREFs of ?_FillActiveDWMCloneGroupInfo@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJ_N@Z @ 0x1C00A1C14
 * Callers:
 *     ?RetrieveActiveTopology@CCD_BTL@@QEAAJ_N0PEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C006031C (-RetrieveActiveTopology@CCD_BTL@@QEAAJ_N0PEAVCCD_TOPOLOGY@@PEAG@Z.c)
 *     ?RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C006043C (-RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z.c)
 * Callees:
 *     ?IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z @ 0x1C000AC34 (-IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C009DB50 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00A484C (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 */

__int64 __fastcall CCD_BTL_ACTIVE_PATHS_COLLECTOR::_FillActiveDWMCloneGroupInfo(CCD_TOPOLOGY **this, char a2)
{
  __int64 v4; // rcx
  __int16 v5; // ax
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rcx
  __int64 v8; // r13
  unsigned int i; // esi
  __int64 v10; // rax
  unsigned __int16 v11; // ax
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rbx
  int v13; // eax
  SESSION_VIEW *v14; // rcx
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int j; // ebp
  __int64 v19; // rax
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v20; // rdx
  int v21; // eax
  unsigned int k; // ebp
  __int64 v24; // rax
  unsigned __int16 v25; // ax
  const struct _LUID *v26; // rax
  _DWORD *v27; // r9
  _QWORD *v28; // rbx
  _QWORD *v29; // rax

  v4 = *((_QWORD *)*this + 8);
  if ( v4 )
    v5 = *(_WORD *)(v4 + 20);
  else
    v5 = 0;
  if ( !v5 )
    return 0LL;
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
  {
    v8 = *((_QWORD *)Current + 10);
    if ( v8 )
    {
      for ( i = 0; ; ++i )
      {
        v10 = *((_QWORD *)*this + 8);
        v11 = v10 ? *(_WORD *)(v10 + 20) : 0;
        if ( i >= v11 )
          break;
        PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(*this, i);
        v13 = *(_DWORD *)PathDescriptor;
        if ( (*(_DWORD *)PathDescriptor & 0x40000) == 0 )
        {
          if ( v13 < 0 )
          {
            v14 = (SESSION_VIEW *)*((_QWORD *)PathDescriptor + 24);
            if ( v14 )
            {
              PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(v14);
              v16 = *((unsigned int *)PathDescriptor + 4);
              if ( *((_DWORD *)PrimaryDisplaySource + 4) == (_DWORD)v16 )
              {
                if ( !(*(unsigned int (__fastcall **)(__int64, __int64, __int64))(v8 + 304))(
                        (__int64)PathDescriptor + 8,
                        v16,
                        (__int64)PathDescriptor + 132) )
                {
                  v29 = (_QWORD *)WdLogNewEntry5_WdError(v17);
                  v29[3] = *((int *)PathDescriptor + 3);
                  v29[4] = *((unsigned int *)PathDescriptor + 2);
                  v29[5] = *((unsigned int *)PathDescriptor + 4);
                  v29[6] = *this;
                  v29[7] = *((_QWORD *)*this + 8);
                  WdLogEvent5_WdError(v29);
                }
                *(_DWORD *)PathDescriptor |= 0x40800u;
                *((_DWORD *)PathDescriptor + 50) = i | 0xFE590000;
                for ( j = 0; ; ++j )
                {
                  v19 = *((_QWORD *)*this + 8);
                  if ( v19 )
                    LOWORD(v19) = *(_WORD *)(v19 + 20);
                  if ( j >= (unsigned __int16)v19 )
                    break;
                  v20 = CCD_TOPOLOGY::GetPathDescriptor(*this, j);
                  v21 = *(_DWORD *)v20;
                  if ( (*(_DWORD *)v20 & 0x80040000) == 0x80000000
                    && *((_QWORD *)PathDescriptor + 24) == *((_QWORD *)v20 + 24) )
                  {
                    *((_DWORD *)v20 + 50) = i | 0xFE590000;
                    *(_DWORD *)v20 = v21 | 0x40800;
                    *(_QWORD *)((char *)v20 + 132) = *(_QWORD *)((char *)PathDescriptor + 132);
                  }
                }
              }
            }
            else
            {
              if ( !a2 )
                return 3221225473LL;
              for ( k = i; ; ++k )
              {
                v24 = *((_QWORD *)*this + 8);
                v25 = v24 ? *(_WORD *)(v24 + 20) : 0;
                if ( k >= v25 )
                  break;
                v26 = (const struct _LUID *)CCD_TOPOLOGY::GetPathDescriptor(*this, k);
                if ( CCD_TOPOLOGY::IsMatchingSource(PathDescriptor, v26 + 1, v26[2].LowPart) )
                {
                  *v27 |= 0x40000u;
                  v27[50] = i | 0xFE580000;
                }
              }
            }
          }
          else
          {
            *((_DWORD *)PathDescriptor + 50) = i | 0xFE580000;
            *(_DWORD *)PathDescriptor = v13 | 0x40000;
          }
        }
      }
      return 0LL;
    }
  }
  v28 = (_QWORD *)WdLogNewEntry5_WdError(v7);
  v28[3] = PsGetCurrentProcess();
  v28[4] = *this;
  v28[5] = *((_QWORD *)*this + 8);
  WdLogEvent5_WdError(v28);
  return 3221225473LL;
}
