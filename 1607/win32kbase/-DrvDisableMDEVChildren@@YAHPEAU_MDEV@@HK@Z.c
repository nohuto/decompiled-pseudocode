/*
 * XREFs of ?DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z @ 0x1C0069844
 * Callers:
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0068660 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     DrvDisableMDEV @ 0x1C0069650 (DrvDisableMDEV.c)
 * Callees:
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C007E4B8 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     DrvDxgkDisplayOnOff @ 0x1C0082190 (DrvDxgkDisplayOnOff.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C0088628 (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 */

__int64 __fastcall DrvDisableMDEVChildren(struct _MDEV *a1, int a2, unsigned int a3)
{
  __int64 v4; // r15
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rbx
  int v9; // ebp
  __int64 v10; // rax
  int v12; // edx
  __int64 v13; // rsi
  __int64 v14; // rdx
  HDEV *v15; // rsi
  __int64 v16; // r14

  v4 = a2;
  v6 = WdLogNewEntry5_WdTrace(a1);
  *(_QWORD *)(v6 + 24) = a1;
  *(_QWORD *)(v6 + 32) = v4;
  WdLogEvent5_WdTrace(v6);
  v8 = 0LL;
  v9 = 1;
  if ( !*((_DWORD *)a1 + 5) )
    goto LABEL_5;
  while ( 1 )
  {
    if ( (_DWORD)v4 )
    {
      v12 = 0;
    }
    else
    {
      v7 = *(_QWORD *)(*((_QWORD *)a1 + 4 * (unsigned int)v8 + 4) + 2600LL);
      if ( (*(_DWORD *)(v7 + 160) & 0x20000000) == 0 || !gbInvalidateDualView )
        goto LABEL_4;
      v12 = 1;
    }
    v13 = 32 * ((unsigned int)v8 + 1LL);
    v9 = DrvDisableDisplay(*(HDEV *)((char *)a1 + v13), v12);
    if ( !v9 )
      break;
    DrvDxgkDisplayOnOff(*(_QWORD *)((char *)a1 + v13), 0LL, a3);
LABEL_4:
    v8 = (unsigned int)(v8 + 1);
    if ( (unsigned int)v8 >= *((_DWORD *)a1 + 5) )
      goto LABEL_5;
  }
  if ( (_DWORD)v8 )
  {
    v15 = (HDEV *)((char *)a1 + 32);
    v16 = (unsigned int)v8;
    do
    {
      if ( (_DWORD)v4
        || (v7 = *(_QWORD *)(*((_QWORD *)a1 + 4 * v16 + 4) + 2600LL), (*(_DWORD *)(v7 + 160) & 0x20000000) != 0)
        && gbInvalidateDualView )
      {
        LOBYTE(v14) = 1;
        DrvDxgkDisplayOnOff(*v15, v14, a3);
        while ( !(unsigned int)DrvEnableDisplay(*v15) )
          ;
      }
      v15 += 4;
      --v8;
    }
    while ( v8 );
  }
LABEL_5:
  v10 = WdLogNewEntry5_WdTrace(v7);
  *(_QWORD *)(v10 + 24) = v9;
  WdLogEvent5_WdTrace(v10);
  return (unsigned int)v9;
}
