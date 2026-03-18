/*
 * XREFs of CitProcessCallout @ 0x1C0044D54
 * Callers:
 *     DestroyProcessInfo @ 0x1C00448B4 (DestroyProcessInfo.c)
 *     xxxInitProcessInfo @ 0x1C0046224 (xxxInitProcessInfo.c)
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     ?CitpProcessGetUseData@@YAPEAU_CIT_USE_DATA@@PEAUtagPROCESSINFO@@@Z @ 0x1C0047C28 (-CitpProcessGetUseData@@YAPEAU_CIT_USE_DATA@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x1C0049518 (-CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 *     ?CitpProgramIdCleanup@@YAXPEAU_CIT_PROGRAM_ID@@@Z @ 0x1C0050314 (-CitpProgramIdCleanup@@YAXPEAU_CIT_PROGRAM_ID@@@Z.c)
 *     ?CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1C005034C (-CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z.c)
 *     ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@IHPEAX@Z @ 0x1C0064C88 (-CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@IHPEAX@Z.c)
 *     ?CitpCleanup@@YAXXZ @ 0x1C0064E48 (-CitpCleanup@@YAXXZ.c)
 *     ?CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z @ 0x1C0065164 (-CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z.c)
 *     ?CitpInitialize@@YAJPEBG@Z @ 0x1C0067DF4 (-CitpInitialize@@YAJPEBG@Z.c)
 *     ?CalculateUpToTime@CIT_DESKTOP_ACTIVE_TRACKER@@QEAAXI@Z @ 0x1C0079770 (-CalculateUpToTime@CIT_DESKTOP_ACTIVE_TRACKER@@QEAAXI@Z.c)
 */

void __fastcall CitProcessCallout(struct tagPROCESSINFO *a1, char a2, int a3, void *a4)
{
  __int64 v5; // rbx
  __int64 i; // rax
  struct _LUID v7; // rax
  struct _CIT_IMPACT_CONTEXT *v8; // rbp
  unsigned __int64 v9; // rsi
  struct _CIT_USE_DATA *UseData; // rax
  struct _CIT_USE_DATA *v11; // r14
  unsigned int v12; // ecx
  int v13; // r9d
  int v14; // r10d
  int v15; // r8d
  unsigned int v16; // eax
  unsigned int v17; // r11d
  unsigned int v18; // eax
  unsigned int v19; // edx
  __int64 v20; // r10
  int v21; // r8d
  unsigned int v22; // ecx
  bool v23; // cf
  unsigned int v24; // eax
  struct _LUID v25; // [rsp+70h] [rbp+18h] BYREF

  if ( a2 )
  {
    if ( gppiList && !*(_QWORD *)(gppiList + 352) && !(_BYTE)g_CompatImpact )
      CitpInitialize((const unsigned __int16 *)a1);
    if ( qword_1C0107180 && !*((_QWORD *)qword_1C0107180 + 52) )
    {
      for ( i = grpWinStaList; i; i = *(_QWORD *)(i + 8) )
      {
        if ( *(_UNKNOWN **)(i + 24) == &gTermIO )
        {
          v7 = *(struct _LUID *)(i + 152);
          goto LABEL_14;
        }
      }
      v7 = (struct _LUID)`CCompositionBuffer::GetAdapterLuid'::`2'::sc_luidZero;
LABEL_14:
      v25 = v7;
      if ( v7 )
        CitpContextUserLogon(qword_1C0107180, &v25);
    }
  }
  else
  {
    v5 = *((_QWORD *)a1 + 110);
    if ( v5 )
    {
      v8 = qword_1C0107180;
      if ( qword_1C0107180 )
      {
        v9 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        if ( a1 == *((struct tagPROCESSINFO **)qword_1C0107180 + 55) )
          CitpSetForegroundProcess(qword_1C0107180, v9, 0LL, 0LL, 0LL);
        if ( a1 == *((struct tagPROCESSINFO **)v8 + 56) )
          *((_QWORD *)v8 + 56) = 0LL;
        UseData = CitpProcessGetUseData(a1);
        v11 = UseData;
        if ( UseData )
        {
          v12 = *((_DWORD *)UseData + 4);
          v13 = -1;
          v14 = v9 - *(_DWORD *)(v5 + 56);
          if ( v12 + 1 >= v12 )
            v13 = v12 + 1;
          v15 = -1;
          *((_DWORD *)UseData + 4) = v13;
          v16 = *((_DWORD *)UseData + 5);
          if ( v16 + v14 >= v16 )
            v15 = v16 + v14;
          *((_DWORD *)v11 + 5) = v15;
          CIT_DESKTOP_ACTIVE_TRACKER::CalculateUpToTime((struct _CIT_IMPACT_CONTEXT *)((char *)v8 + 584), v9);
          v18 = *((_DWORD *)v11 + 14);
          v19 = v17;
          v21 = *(_DWORD *)(v20 + 12) - *(_DWORD *)(v5 + 60);
          v22 = v18 + 1;
          v23 = v18 + 1 < v18;
          v24 = *((_DWORD *)v11 + 15);
          if ( !v23 )
            v19 = v22;
          *((_DWORD *)v11 + 14) = v19;
          if ( v24 + v21 >= v24 )
            v17 = v24 + v21;
          *((_DWORD *)v11 + 15) = v17;
        }
      }
      CitpInteractionSummaryDelete((struct _CIT_INTERACTION_SUMMARY **)(v5 + 80));
      CitpProgramIdCleanup((struct _CIT_PROGRAM_ID *)(v5 + 16));
      Win32FreePool();
      *((_QWORD *)a1 + 110) = 0LL;
    }
    if ( gppiList && !*(_QWORD *)(gppiList + 352) )
    {
      if ( qword_1C0107180 )
        CitpContextFlush(
          qword_1C0107180,
          (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
          a3,
          a4);
      CitpCleanup();
    }
  }
}
