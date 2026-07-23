/*
 * XREFs of PnpFindBestConfigurationWorker @ 0x14055634C
 * Callers:
 *     PnpFindBestConfiguration @ 0x1405562FC (PnpFindBestConfiguration.c)
 * Callees:
 *     IopSelectNextConfiguration @ 0x140555ABC (IopSelectNextConfiguration.c)
 *     IopTestConfiguration @ 0x14055645C (IopTestConfiguration.c)
 *     PnpSelectFirstConfiguration @ 0x140556594 (PnpSelectFirstConfiguration.c)
 *     IopAddRemoveReqDescs @ 0x140557DA0 (IopAddRemoveReqDescs.c)
 *     IopRetestConfiguration @ 0x14062C9C4 (IopRetestConfiguration.c)
 *     IopSaveRestoreConfiguration @ 0x14062CA70 (IopSaveRestoreConfiguration.c)
 */

__int64 __fastcall PnpFindBestConfigurationWorker(__int64 a1, unsigned int a2, _QWORD *a3)
{
  __int64 v3; // rdi
  unsigned int v6; // r15d
  __int64 v7; // rbx
  unsigned int v8; // r12d
  int v9; // esi
  __int64 v10; // r9
  __int128 v11; // xmm0
  unsigned int v13; // edx
  __int64 *v14; // r8
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // r15
  _OWORD v18[3]; // [rsp+20h] [rbp-38h] BYREF

  v3 = a2;
  *((_QWORD *)&v18[0] + 1) = v18;
  a3[1] = a3;
  *(_QWORD *)&v18[0] = v18;
  *a3 = a3;
  PnpSelectFirstConfiguration();
  v6 = -1;
  v7 = MEMORY[0xFFFFF78000000014];
  v8 = PnpFindBestConfigurationTimeout;
  while ( 1 )
  {
    v9 = IopTestConfiguration(a1, (unsigned int)v3, a3);
    if ( v9 >= 0 )
    {
      v11 = *(_OWORD *)a3;
      v18[0] = *(_OWORD *)a3;
      if ( (_DWORD)v3 == 1 )
        goto LABEL_4;
      v13 = 0;
      if ( (_DWORD)v3 )
      {
        v14 = (__int64 *)(a1 + 32);
        v10 = v3;
        do
        {
          v15 = *v14;
          v14 += 8;
          v13 += ***(_DWORD ***)(v15 + 16);
          --v10;
        }
        while ( v10 );
      }
      if ( v13 < v6 )
      {
        v6 = v13;
        LOBYTE(v10) = 1;
        IopSaveRestoreConfiguration(a1, (unsigned int)v3, a3, v10);
      }
    }
    if ( (unsigned int)((MEMORY[0xFFFFF78000000014] - v7) / 10000) >= v8 )
      break;
    if ( !IopSelectNextConfiguration(a1, v3, (__int64)a3, v10) )
      goto LABEL_10;
  }
  if ( (_DWORD)v3 )
  {
    v16 = a1 + 32;
    v17 = v3;
    do
    {
      IopAddRemoveReqDescs(
        **(_QWORD **)(*(_QWORD *)v16 + 16LL) + 24LL,
        *(unsigned int *)(**(_QWORD **)(*(_QWORD *)v16 + 16LL) + 20LL),
        0LL,
        0LL);
      v16 += 64LL;
      --v17;
    }
    while ( v17 );
  }
LABEL_10:
  v11 = v18[0];
LABEL_4:
  if ( (_OWORD *)v11 == v18 )
  {
    if ( v9 != -1073739512 )
      return (unsigned int)-1073741823;
  }
  else
  {
    v9 = 0;
    if ( (_DWORD)v3 != 1 )
    {
      *(_OWORD *)a3 = v11;
      IopSaveRestoreConfiguration(a1, (unsigned int)v3, a3, 0LL);
      return (unsigned int)IopRetestConfiguration(a1, (unsigned int)v3);
    }
  }
  return (unsigned int)v9;
}
