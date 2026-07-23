/*
 * XREFs of IoSteerInterrupt @ 0x14062A00C
 * Callers:
 *     <none>
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x14014B924 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     KeIntSteerAssignCpuSet @ 0x1401DA2E0 (KeIntSteerAssignCpuSet.c)
 */

__int64 __fastcall IoSteerInterrupt(__int64 a1, __int64 a2)
{
  unsigned int v3; // r8d
  int v4; // r9d
  __int64 v5; // rcx
  __int64 v6; // r10
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned __int16 v9; // dx
  __int64 v11; // rcx
  _WORD *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx

  v3 = -1073741823;
  if ( KeGetCurrentIrql() )
    KeBugCheckEx(0x121u, 1uLL, KeGetCurrentIrql(), 0LL, 0LL);
  if ( !a1 || !a2 )
    __fastfail(5u);
  if ( !*(_DWORD *)a1 )
  {
    v4 = *(_DWORD *)a2;
    if ( *(int *)a2 < 2 && (v4 != 1 || *(_QWORD *)(a2 + 16)) )
    {
      v5 = *(_QWORD *)(a1 + 16);
      if ( v5 )
      {
        v6 = *(_QWORD *)(*(_QWORD *)(v5 + 312) + 40LL);
        if ( v6 && (*(_DWORD *)(v6 + 396) & 0x20000) == 0 )
        {
          if ( *(_DWORD *)(a1 + 8) != 1 )
          {
            if ( *(_DWORD *)(a1 + 8) == 2 )
            {
              v7 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 264LL) + 112LL;
              goto LABEL_21;
            }
            if ( *(_DWORD *)(a1 + 8) == 3 )
            {
              v7 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL);
              goto LABEL_21;
            }
            if ( *(_DWORD *)(a1 + 8) != 4 )
              return (unsigned int)-1073741637;
          }
          v7 = *(_QWORD *)(a1 + 24);
LABEL_21:
          if ( *(_DWORD *)(*(_QWORD *)(v7 + 352) + 88LL) != *(_DWORD *)(v7 + 88) )
            __fastfail(5u);
          if ( v4 == 1 )
          {
            v8 = *(_QWORD *)(a2 + 16);
            v9 = *(_WORD *)(a2 + 8);
          }
          else
          {
            if ( v4 )
              return v3;
            v9 = 0;
            v8 = 0LL;
          }
          return (unsigned int)KeIntSteerAssignCpuSet(*(_QWORD *)(v7 + 352), v9, v8);
        }
        IoAddTriageDumpDataBlock(v5, *(unsigned __int16 *)(v5 + 2));
        v11 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL);
        if ( v11 )
        {
          IoAddTriageDumpDataBlock(v11, *(__int16 *)(v11 + 2));
          v12 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) + 56LL);
          if ( *v12 )
          {
            IoAddTriageDumpDataBlock((int)v12, 2);
            IoAddTriageDumpDataBlock(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) + 64LL),
              *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) + 56LL));
          }
        }
        v13 = *(_QWORD *)(a1 + 16);
        if ( v13 )
          v14 = *(_QWORD *)(*(_QWORD *)(v13 + 312) + 40LL);
        else
          v14 = 0LL;
        if ( v14 )
        {
          if ( v13 )
            v15 = *(_QWORD *)(*(_QWORD *)(v13 + 312) + 40LL);
          else
            v15 = 0LL;
          if ( v13 )
            v16 = *(_QWORD *)(*(_QWORD *)(v13 + 312) + 40LL);
          else
            LODWORD(v16) = 0;
          IoAddTriageDumpDataBlock(v16, 720);
          if ( *(_WORD *)(v15 + 40) )
          {
            IoAddTriageDumpDataBlock(v15 + 40, 2);
            IoAddTriageDumpDataBlock(*(_QWORD *)(v15 + 48), *(unsigned __int16 *)(v15 + 40));
          }
          v17 = *(_QWORD *)(a1 + 16);
          if ( v17 )
            v18 = *(_QWORD *)(*(_QWORD *)(v17 + 312) + 40LL);
          else
            v18 = 0LL;
          if ( *(_WORD *)(v18 + 56) )
          {
            if ( v17 )
              v19 = *(_QWORD *)(*(_QWORD *)(v17 + 312) + 40LL);
            else
              LODWORD(v19) = 0;
            IoAddTriageDumpDataBlock(v19 + 56, 2);
            v20 = *(_QWORD *)(a1 + 16);
            if ( v20 )
              v21 = *(_QWORD *)(*(_QWORD *)(v20 + 312) + 40LL);
            else
              v21 = 0LL;
            if ( v20 )
              v22 = *(_QWORD *)(*(_QWORD *)(v20 + 312) + 40LL);
            else
              v22 = 0LL;
            IoAddTriageDumpDataBlock(*(_QWORD *)(v22 + 64), *(unsigned __int16 *)(v21 + 56));
          }
          v23 = *(_QWORD *)(a1 + 16);
          if ( v23 )
            v24 = *(_QWORD *)(*(_QWORD *)(v23 + 312) + 40LL);
          else
            v24 = 0LL;
          if ( *(_QWORD *)(v24 + 16) )
          {
            v25 = v23 ? *(_QWORD *)(*(_QWORD *)(v23 + 312) + 40LL) : 0LL;
            if ( *(_WORD *)(*(_QWORD *)(v25 + 16) + 56LL) )
            {
              if ( v23 )
                v26 = *(_QWORD *)(*(_QWORD *)(v23 + 312) + 40LL);
              else
                v26 = 0LL;
              IoAddTriageDumpDataBlock(*(_QWORD *)(v26 + 16) + 56, 2);
              v27 = *(_QWORD *)(a1 + 16);
              if ( v27 )
                v28 = *(_QWORD *)(*(_QWORD *)(v27 + 312) + 40LL);
              else
                v28 = 0LL;
              if ( v27 )
                v29 = *(_QWORD *)(*(_QWORD *)(v27 + 312) + 40LL);
              else
                v29 = 0LL;
              IoAddTriageDumpDataBlock(
                *(_QWORD *)(*(_QWORD *)(v29 + 16) + 64LL),
                *(unsigned __int16 *)(*(_QWORD *)(v28 + 16) + 56LL));
            }
          }
        }
      }
      KeBugCheckEx(0xCAu, 2uLL, *(_QWORD *)(a1 + 16), 0LL, 0LL);
    }
  }
  return (unsigned int)-1073741811;
}
