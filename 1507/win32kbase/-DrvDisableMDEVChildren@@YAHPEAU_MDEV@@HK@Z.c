/*
 * XREFs of ?DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z @ 0x1C0065134
 * Callers:
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0063F40 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     DrvDisableMDEV @ 0x1C0064F40 (DrvDisableMDEV.c)
 * Callees:
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C0066760 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C006F8F0 (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     DrvDxgkDisplayOnOff @ 0x1C0083ED0 (DrvDxgkDisplayOnOff.c)
 */

__int64 __fastcall DrvDisableMDEVChildren(struct _MDEV *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r12d
  __int64 v4; // r15
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rbx
  int v11; // ebp
  __int64 v12; // rax
  int v14; // edx
  __int64 v15; // rsi
  HDEV *v16; // rsi
  __int64 v17; // r14

  v3 = a3;
  v4 = (int)a2;
  v6 = WdLogNewEntry5_WdTrace(a1, a2, a3);
  *(_QWORD *)(v6 + 24) = a1;
  *(_QWORD *)(v6 + 32) = v4;
  WdLogEvent5_WdTrace(v6);
  v10 = 0LL;
  v11 = 1;
  if ( !*((_DWORD *)a1 + 5) )
    goto LABEL_5;
  while ( 1 )
  {
    if ( (_DWORD)v4 )
    {
      v14 = 0;
    }
    else
    {
      v8 = *(_QWORD *)(*((_QWORD *)a1 + 4 * (unsigned int)v10 + 4) + 2600LL);
      if ( (*(_DWORD *)(v8 + 160) & 0x20000000) == 0 || !gbInvalidateDualView )
        goto LABEL_4;
      v14 = 1;
    }
    v15 = 32 * ((unsigned int)v10 + 1LL);
    v11 = DrvDisableDisplay(*(HDEV *)((char *)a1 + v15), v14);
    if ( !v11 )
      break;
    DrvDxgkDisplayOnOff(*(_QWORD *)((char *)a1 + v15), 0LL, v3);
LABEL_4:
    v10 = (unsigned int)(v10 + 1);
    if ( (unsigned int)v10 >= *((_DWORD *)a1 + 5) )
      goto LABEL_5;
  }
  if ( (_DWORD)v10 )
  {
    v16 = (HDEV *)((char *)a1 + 32);
    v17 = (unsigned int)v10;
    do
    {
      if ( (_DWORD)v4
        || (v8 = *(_QWORD *)(*((_QWORD *)a1 + 4 * v17 + 4) + 2600LL), (*(_DWORD *)(v8 + 160) & 0x20000000) != 0)
        && gbInvalidateDualView )
      {
        LOBYTE(v7) = 1;
        DrvDxgkDisplayOnOff(*v16, v7, v3);
        while ( !(unsigned int)DrvEnableDisplay(*v16) )
          ;
      }
      v16 += 4;
      --v10;
    }
    while ( v10 );
  }
LABEL_5:
  v12 = WdLogNewEntry5_WdTrace(v8, v7, v9);
  *(_QWORD *)(v12 + 24) = v11;
  WdLogEvent5_WdTrace(v12);
  return (unsigned int)v11;
}
