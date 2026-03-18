/*
 * XREFs of ?_FillActiveDWMCloneGroupInfo@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJ_N@Z @ 0x1C008D438
 * Callers:
 *     ?RetrieveActiveTopology@CCD_BTL@@QEAAJ_N0PEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C00B6A44 (-RetrieveActiveTopology@CCD_BTL@@QEAAJ_N0PEAVCCD_TOPOLOGY@@PEAG@Z.c)
 *     ?RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C00B6BA8 (-RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z.c)
 * Callees:
 *     ?IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z @ 0x1C000CD24 (-IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C007AC74 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C0089D20 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 */

__int64 __fastcall CCD_BTL_ACTIVE_PATHS_COLLECTOR::_FillActiveDWMCloneGroupInfo(CCD_TOPOLOGY **this, char a2)
{
  __int64 v4; // rcx
  __int16 v5; // ax
  __int64 CurrentProcess; // rax
  __int64 v7; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v9; // rcx
  __int64 v10; // r13
  unsigned int i; // esi
  __int64 v12; // rax
  unsigned __int16 v13; // ax
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rbx
  int v15; // eax
  SESSION_VIEW *v16; // rcx
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned int j; // ebp
  __int64 v21; // rax
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v22; // rdx
  int v23; // eax
  unsigned int k; // ebp
  __int64 v26; // rax
  unsigned __int16 v27; // ax
  const struct _LUID *v28; // rax
  _DWORD *v29; // r9
  _QWORD *v30; // rbx
  _QWORD *v31; // rax

  v4 = *((_QWORD *)*this + 8);
  if ( v4 )
    v5 = *(_WORD *)(v4 + 20);
  else
    v5 = 0;
  if ( !v5 )
    return 0LL;
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v7);
  if ( ProcessDxgProcess )
  {
    v10 = *(_QWORD *)(ProcessDxgProcess + 72);
    if ( v10 )
    {
      for ( i = 0; ; ++i )
      {
        v12 = *((_QWORD *)*this + 8);
        v13 = v12 ? *(_WORD *)(v12 + 20) : 0;
        if ( i >= v13 )
          break;
        PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(*this, i);
        v15 = *(_DWORD *)PathDescriptor;
        if ( (*(_DWORD *)PathDescriptor & 0x40000) == 0 )
        {
          if ( v15 < 0 )
          {
            v16 = (SESSION_VIEW *)*((_QWORD *)PathDescriptor + 24);
            if ( v16 )
            {
              PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(v16);
              v18 = *((unsigned int *)PathDescriptor + 4);
              if ( *((_DWORD *)PrimaryDisplaySource + 4) == (_DWORD)v18 )
              {
                if ( !(*(unsigned int (__fastcall **)(__int64, __int64, __int64))(v10 + 304))(
                        (__int64)PathDescriptor + 8,
                        v18,
                        (__int64)PathDescriptor + 136) )
                {
                  v31 = (_QWORD *)WdLogNewEntry5_WdError(v19);
                  v31[3] = *((int *)PathDescriptor + 3);
                  v31[4] = *((unsigned int *)PathDescriptor + 2);
                  v31[5] = *((unsigned int *)PathDescriptor + 4);
                  v31[6] = *this;
                  v31[7] = *((_QWORD *)*this + 8);
                  WdLogEvent5_WdError(v31);
                }
                *(_DWORD *)PathDescriptor |= 0x40800u;
                *((_DWORD *)PathDescriptor + 50) = i | 0xFE590000;
                for ( j = 0; ; ++j )
                {
                  v21 = *((_QWORD *)*this + 8);
                  if ( v21 )
                    LOWORD(v21) = *(_WORD *)(v21 + 20);
                  if ( j >= (unsigned __int16)v21 )
                    break;
                  v22 = CCD_TOPOLOGY::GetPathDescriptor(*this, j);
                  v23 = *(_DWORD *)v22;
                  if ( (*(_DWORD *)v22 & 0x80040000) == 0x80000000
                    && *((_QWORD *)PathDescriptor + 24) == *((_QWORD *)v22 + 24) )
                  {
                    *((_DWORD *)v22 + 50) = i | 0xFE590000;
                    *(_DWORD *)v22 = v23 | 0x40800;
                    *((_QWORD *)v22 + 17) = *((_QWORD *)PathDescriptor + 17);
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
                v26 = *((_QWORD *)*this + 8);
                v27 = v26 ? *(_WORD *)(v26 + 20) : 0;
                if ( k >= v27 )
                  break;
                v28 = (const struct _LUID *)CCD_TOPOLOGY::GetPathDescriptor(*this, k);
                if ( CCD_TOPOLOGY::IsMatchingSource(PathDescriptor, v28 + 1, v28[2].LowPart) )
                {
                  *v29 |= 0x40000u;
                  v29[50] = i | 0xFE580000;
                }
              }
            }
          }
          else
          {
            *((_DWORD *)PathDescriptor + 50) = i | 0xFE580000;
            *(_DWORD *)PathDescriptor = v15 | 0x40000;
          }
        }
      }
      return 0LL;
    }
  }
  v30 = (_QWORD *)WdLogNewEntry5_WdError(v9);
  v30[3] = PsGetCurrentProcess();
  v30[4] = *this;
  v30[5] = *((_QWORD *)*this + 8);
  WdLogEvent5_WdError(v30);
  return 3221225473LL;
}
