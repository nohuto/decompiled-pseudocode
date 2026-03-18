/*
 * XREFs of ?SetGivenPathDataFromActivePath@CCD_TOPOLOGY@@QEAAXPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@PEBV1@@Z @ 0x1C01AB428
 * Callers:
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C008A118 (-Functionalize@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CCD_TOPOLOGY::SetGivenPathDataFromActivePath(
        CCD_TOPOLOGY *this,
        struct _D3DKMT_PATHMODALITY_DESCRIPTOR *a2,
        const struct CCD_TOPOLOGY *a3)
{
  unsigned int v3; // ebp
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rcx
  unsigned int v11; // edx
  bool v12; // cf
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // eax

  v3 = 0;
  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !a3 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = *((_QWORD *)a3 + 8);
  if ( *(_WORD *)(v8 + 20) )
  {
    while ( 1 )
    {
      v9 = 216LL * v3;
      if ( *((_DWORD *)a2 + 2) == *(_DWORD *)(v9 + v8 + 56)
        && *((_DWORD *)a2 + 3) == *(_DWORD *)(v9 + v8 + 60)
        && *((_DWORD *)a2 + 4) == *(_DWORD *)(v9 + v8 + 64)
        && *((_DWORD *)a2 + 5) == *(_DWORD *)(v9 + v8 + 68) )
      {
        break;
      }
      if ( ++v3 >= *(unsigned __int16 *)(v8 + 20) )
        return;
    }
    if ( ((*(_DWORD *)a2 & 2) == 0
       || *((_DWORD *)a2 + 11) == *(_DWORD *)(v9 + v8 + 92) && *((_DWORD *)a2 + 12) == *(_DWORD *)(v9 + v8 + 96))
      && ((*(_DWORD *)(v9 + v8 + 48) & 4) == 0 || *(_DWORD *)(v9 + v8 + 120) == 1) )
    {
      v10 = *(unsigned int *)(v9 + v8 + 136);
      if ( (unsigned int)v10 <= *(_DWORD *)(v9 + v8 + 84) )
      {
        v11 = *(_DWORD *)(v9 + v8 + 140);
        if ( v11 <= *(_DWORD *)(v9 + v8 + 88) && *(_DWORD *)(v9 + v8 + 172) == 1 )
        {
          if ( ((*((_DWORD *)a2 + 31) - 2) & 0xFFFFFFFD) != 0 )
          {
            if ( (unsigned int)v10 < *((_DWORD *)a2 + 36) )
              return;
            v12 = v11 < *((_DWORD *)a2 + 37);
          }
          else
          {
            if ( (unsigned int)v10 < *((_DWORD *)a2 + 37) )
              return;
            v12 = v11 < *((_DWORD *)a2 + 36);
          }
          if ( !v12 )
          {
            if ( (*(_DWORD *)a2 & 0x100) != 0 )
            {
              v13 = WdLogNewEntry5_WdAssertion(v10);
              *(_QWORD *)(v13 + 24) = 3075LL;
              WdLogEvent5_WdAssertion(v13);
            }
            if ( (*(_DWORD *)a2 & 1) != 0 )
            {
              v14 = WdLogNewEntry5_WdAssertion(v10);
              *(_QWORD *)(v14 + 24) = 3076LL;
              WdLogEvent5_WdAssertion(v14);
            }
            if ( (*((_DWORD *)a2 + 1) & 0x100) != 0 )
            {
              v15 = WdLogNewEntry5_WdAssertion(v10);
              *(_QWORD *)(v15 + 24) = 3077LL;
              WdLogEvent5_WdAssertion(v15);
            }
            if ( (*((_DWORD *)a2 + 1) & 1) != 0 )
            {
              v16 = WdLogNewEntry5_WdAssertion(v10);
              *(_QWORD *)(v16 + 24) = 3078LL;
              WdLogEvent5_WdAssertion(v16);
            }
            *(_OWORD *)((char *)a2 + 88) = *(_OWORD *)(v9 + v8 + 136);
            *(_OWORD *)((char *)a2 + 104) = *(_OWORD *)(v9 + v8 + 152);
            *((_DWORD *)a2 + 9) = *(_DWORD *)(v9 + v8 + 84);
            v17 = *(_DWORD *)(v9 + v8 + 88);
            *((_DWORD *)a2 + 1) |= 0x101u;
            *(_DWORD *)a2 |= 0x100101u;
            *((_DWORD *)a2 + 10) = v17;
          }
        }
      }
    }
  }
}
