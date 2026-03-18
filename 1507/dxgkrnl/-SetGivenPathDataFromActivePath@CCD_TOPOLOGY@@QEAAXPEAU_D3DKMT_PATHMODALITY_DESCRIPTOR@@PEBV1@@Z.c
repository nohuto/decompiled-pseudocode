/*
 * XREFs of ?SetGivenPathDataFromActivePath@CCD_TOPOLOGY@@QEAAXPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@PEBV1@@Z @ 0x1C017DDB8
 * Callers:
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C006646C (-Functionalize@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CCD_TOPOLOGY::SetGivenPathDataFromActivePath(
        CCD_TOPOLOGY *this,
        struct _D3DKMT_PATHMODALITY_DESCRIPTOR *a2,
        const struct CCD_TOPOLOGY *a3,
        __int64 a4)
{
  unsigned int v4; // ebp
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rdx
  bool v14; // cf
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  int v19; // eax

  v4 = 0;
  if ( !a2 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v7);
  }
  if ( !a3 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = *((_QWORD *)a3 + 8);
  if ( *(_WORD *)(v9 + 20) )
  {
    while ( 1 )
    {
      v10 = 216LL * v4;
      if ( *((_DWORD *)a2 + 2) == *(_DWORD *)(v10 + v9 + 56)
        && *((_DWORD *)a2 + 3) == *(_DWORD *)(v10 + v9 + 60)
        && *((_DWORD *)a2 + 4) == *(_DWORD *)(v10 + v9 + 64)
        && *((_DWORD *)a2 + 5) == *(_DWORD *)(v10 + v9 + 68) )
      {
        break;
      }
      if ( ++v4 >= *(unsigned __int16 *)(v9 + 20) )
        return;
    }
    v11 = *(unsigned int *)a2;
    if ( ((v11 & 2) == 0
       || *((_DWORD *)a2 + 11) == *(_DWORD *)(v10 + v9 + 92) && *((_DWORD *)a2 + 12) == *(_DWORD *)(v10 + v9 + 96))
      && ((*(_DWORD *)(v10 + v9 + 48) & 4) == 0 || *(_DWORD *)(v10 + v9 + 120) == 1) )
    {
      v12 = *(unsigned int *)(v10 + v9 + 132);
      if ( (unsigned int)v12 <= *(_DWORD *)(v10 + v9 + 84) )
      {
        v13 = *(unsigned int *)(v10 + v9 + 136);
        if ( (unsigned int)v13 <= *(_DWORD *)(v10 + v9 + 88) && *(_DWORD *)(v10 + v9 + 168) == 1 )
        {
          if ( ((*((_DWORD *)a2 + 30) - 2) & 0xFFFFFFFD) != 0 )
          {
            if ( (unsigned int)v12 < *((_DWORD *)a2 + 35) )
              return;
            v14 = (unsigned int)v13 < *((_DWORD *)a2 + 36);
          }
          else
          {
            if ( (unsigned int)v12 < *((_DWORD *)a2 + 36) )
              return;
            v14 = (unsigned int)v13 < *((_DWORD *)a2 + 35);
          }
          if ( !v14 )
          {
            if ( (v11 & 0x100) != 0 )
            {
              v15 = WdLogNewEntry5_WdAssertion(v12, v13, v11, a4);
              *(_QWORD *)(v15 + 24) = 3012LL;
              WdLogEvent5_WdAssertion(v15);
            }
            if ( (*(_DWORD *)a2 & 1) != 0 )
            {
              v16 = WdLogNewEntry5_WdAssertion(v12, v13, v11, a4);
              *(_QWORD *)(v16 + 24) = 3013LL;
              WdLogEvent5_WdAssertion(v16);
            }
            if ( (*((_DWORD *)a2 + 1) & 0x100) != 0 )
            {
              v17 = WdLogNewEntry5_WdAssertion(v12, v13, v11, a4);
              *(_QWORD *)(v17 + 24) = 3014LL;
              WdLogEvent5_WdAssertion(v17);
            }
            if ( (*((_DWORD *)a2 + 1) & 1) != 0 )
            {
              v18 = WdLogNewEntry5_WdAssertion(v12, v13, v11, a4);
              *(_QWORD *)(v18 + 24) = 3015LL;
              WdLogEvent5_WdAssertion(v18);
            }
            *(_OWORD *)((char *)a2 + 84) = *(_OWORD *)(v10 + v9 + 132);
            *(_OWORD *)((char *)a2 + 100) = *(_OWORD *)(v10 + v9 + 148);
            *((_DWORD *)a2 + 9) = *(_DWORD *)(v10 + v9 + 84);
            v19 = *(_DWORD *)(v10 + v9 + 88);
            *((_DWORD *)a2 + 1) |= 0x101u;
            *(_DWORD *)a2 |= 0x100101u;
            *((_DWORD *)a2 + 10) = v19;
          }
        }
      }
    }
  }
}
