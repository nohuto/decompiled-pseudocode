/*
 * XREFs of ?bDeleteLoadRef@PFFOBJ@@QEAAHKPEAUtagPvtData@@PEAH@Z @ 0x1C0026BC0
 * Callers:
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C0022BB8 (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 * Callees:
 *     ?vKill@PFFOBJ@@QEAAXXZ @ 0x1C0026B80 (-vKill@PFFOBJ@@QEAAXXZ.c)
 *     ?bRemovePvtData@PFFOBJ@@QEAAHPEAUtagPvtData@@@Z @ 0x1C02B685C (-bRemovePvtData@PFFOBJ@@QEAAHPEAUtagPvtData@@@Z.c)
 */

__int64 __fastcall PFFOBJ::bDeleteLoadRef(PFFOBJ *this, int a2, struct tagPvtData *a3, int *a4)
{
  unsigned int v4; // ebx
  __int64 v5; // r11
  int v7; // eax
  bool v8; // zf
  int v10; // ecx
  int v11; // eax
  int v12; // eax

  v4 = 0;
  v5 = *(_QWORD *)this;
  *a4 = 0;
  if ( *(struct PFT **const *)(v5 + 128) == gpPFTPrivate )
  {
    if ( !a3 )
      return 0LL;
    if ( a2 == 128 )
    {
      *(_QWORD *)a3 = 0LL;
LABEL_22:
      if ( !*(_QWORD *)a3 )
        PFFOBJ::bRemovePvtData(this, a3);
      v8 = *(_QWORD *)(*(_QWORD *)this + 160LL) == 0LL;
      goto LABEL_6;
    }
    if ( (a2 & 0x6C) != 0 )
    {
      v10 = *((_DWORD *)a3 + 2);
      if ( (v10 & a2) != 0 )
      {
        v11 = *((_DWORD *)a3 + 1);
        if ( v11 )
        {
          *((_DWORD *)a3 + 1) = v11 - 1;
          if ( a2 == 64 )
            *((_DWORD *)a3 + 2) = v10 & 0xFFFFFFBF;
        }
        goto LABEL_22;
      }
    }
    else
    {
      if ( (a2 & *((_DWORD *)a3 + 2)) == 0 )
        goto LABEL_22;
      if ( *(_DWORD *)a3 )
      {
        --*(_DWORD *)a3;
        goto LABEL_22;
      }
    }
    *a4 = 1;
    goto LABEL_22;
  }
  if ( a2 )
  {
    v12 = *(_DWORD *)(v5 + 60);
    if ( v12 )
      *(_DWORD *)(v5 + 60) = v12 - 1;
  }
  else
  {
    v7 = *(_DWORD *)(v5 + 56);
    if ( v7 )
      *(_DWORD *)(v5 + 56) = v7 - 1;
  }
  v8 = *(_QWORD *)(*(_QWORD *)this + 56LL) == 0LL;
LABEL_6:
  if ( v8 )
  {
    PFFOBJ::vKill(this);
    return 1;
  }
  return v4;
}
