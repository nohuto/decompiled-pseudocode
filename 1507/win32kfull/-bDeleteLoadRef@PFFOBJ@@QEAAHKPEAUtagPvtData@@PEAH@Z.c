/*
 * XREFs of ?bDeleteLoadRef@PFFOBJ@@QEAAHKPEAUtagPvtData@@PEAH@Z @ 0x1C0129F5C
 * Callers:
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C0129894 (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 * Callees:
 *     ?vKill@PFFOBJ@@QEAAXXZ @ 0x1C0129DEC (-vKill@PFFOBJ@@QEAAXXZ.c)
 *     ?bRemovePvtData@PFFOBJ@@QEAAHPEAUtagPvtData@@@Z @ 0x1C02B4754 (-bRemovePvtData@PFFOBJ@@QEAAHPEAUtagPvtData@@@Z.c)
 */

__int64 __fastcall PFFOBJ::bDeleteLoadRef(PFFOBJ *this, int a2, struct tagPvtData *a3, int *a4)
{
  unsigned int v4; // ebx
  __int64 v5; // r11
  int v8; // ecx
  int v9; // eax
  bool v10; // zf
  int v11; // eax
  int v12; // eax

  v4 = 0;
  v5 = *(_QWORD *)this;
  *a4 = 0;
  if ( *(struct PFT **const *)(v5 + 128) != gpPFTPrivate )
  {
    if ( a2 )
    {
      v12 = *(_DWORD *)(v5 + 60);
      if ( v12 )
        *(_DWORD *)(v5 + 60) = v12 - 1;
    }
    else
    {
      v11 = *(_DWORD *)(v5 + 56);
      if ( v11 )
        *(_DWORD *)(v5 + 56) = v11 - 1;
    }
    v10 = *(_QWORD *)(*(_QWORD *)this + 56LL) == 0LL;
    goto LABEL_24;
  }
  if ( !a3 )
    return 0LL;
  if ( a2 != 128 )
  {
    if ( (a2 & 0x6C) != 0 )
    {
      v8 = *((_DWORD *)a3 + 2);
      if ( (v8 & a2) != 0 )
      {
        v9 = *((_DWORD *)a3 + 1);
        if ( v9 )
        {
          *((_DWORD *)a3 + 1) = v9 - 1;
          if ( a2 == 64 )
            *((_DWORD *)a3 + 2) = v8 & 0xFFFFFFBF;
        }
        goto LABEL_15;
      }
    }
    else
    {
      if ( (a2 & *((_DWORD *)a3 + 2)) == 0 )
        goto LABEL_15;
      if ( *(_DWORD *)a3 )
      {
        --*(_DWORD *)a3;
        goto LABEL_15;
      }
    }
    *a4 = 1;
    goto LABEL_15;
  }
  *(_QWORD *)a3 = 0LL;
LABEL_15:
  if ( !*(_QWORD *)a3 )
    PFFOBJ::bRemovePvtData(this, a3);
  v10 = *(_QWORD *)(*(_QWORD *)this + 160LL) == 0LL;
LABEL_24:
  if ( v10 )
  {
    PFFOBJ::vKill(this);
    return 1;
  }
  return v4;
}
