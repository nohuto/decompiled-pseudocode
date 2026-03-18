/*
 * XREFs of CitProcessCallout @ 0x1C00511F4
 * Callers:
 *     DestroyProcessInfo @ 0x1C0050D24 (DestroyProcessInfo.c)
 *     xxxInitProcessInfo @ 0x1C0051B44 (xxxInitProcessInfo.c)
 * Callees:
 *     ?CalculateUpToTime@CIT_DESKTOP_ACTIVE_TRACKER@@QEAAXI@Z @ 0x1C0014D80 (-CalculateUpToTime@CIT_DESKTOP_ACTIVE_TRACKER@@QEAAXI@Z.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     ?CitpProcessGetUseData@@YAPEAU_CIT_USE_DATA@@PEAUtagPROCESSINFO@@@Z @ 0x1C0052AD8 (-CitpProcessGetUseData@@YAPEAU_CIT_USE_DATA@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x1C0057258 (-CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 *     ?CitpProgramIdCleanup@@YAXPEAU_CIT_PROGRAM_ID@@@Z @ 0x1C0057ECC (-CitpProgramIdCleanup@@YAXPEAU_CIT_PROGRAM_ID@@@Z.c)
 *     ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@IHPEAX@Z @ 0x1C0070DA4 (-CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@IHPEAX@Z.c)
 *     ?CitpCleanup@@YAXXZ @ 0x1C00713A4 (-CitpCleanup@@YAXXZ.c)
 *     ?CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z @ 0x1C007954C (-CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z.c)
 *     ?CitpInitialize@@YAJPEBG@Z @ 0x1C007A378 (-CitpInitialize@@YAJPEBG@Z.c)
 */

void __fastcall CitProcessCallout(struct tagPROCESSINFO *a1, char a2, __int64 a3, void *a4)
{
  __int64 v5; // rsi
  __int64 i; // rax
  struct _LUID v7; // rax
  struct _CIT_IMPACT_CONTEXT *v8; // r14
  unsigned __int64 v9; // rdi
  struct _CIT_USE_DATA *UseData; // rax
  struct _CIT_USE_DATA *v11; // rbx
  int v12; // r9d
  int v13; // r10d
  unsigned int v14; // ecx
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
    if ( qword_1C0101FE0 && !*((_QWORD *)qword_1C0101FE0 + 52) )
    {
      for ( i = grpWinStaList; i; i = *(_QWORD *)(i + 8) )
      {
        if ( *(_UNKNOWN **)(i + 24) == &gTermIO )
        {
          v7 = *(struct _LUID *)(i + 152);
          goto LABEL_14;
        }
      }
      v7 = (struct _LUID)unk_1C00EAAF0;
LABEL_14:
      v25 = v7;
      if ( v7 )
        CitpContextUserLogon(qword_1C0101FE0, &v25);
    }
  }
  else
  {
    v5 = *((_QWORD *)a1 + 112);
    if ( v5 )
    {
      v8 = qword_1C0101FE0;
      if ( qword_1C0101FE0 )
      {
        v9 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        if ( a1 == *((struct tagPROCESSINFO **)qword_1C0101FE0 + 55) )
          CitpSetForegroundProcess(qword_1C0101FE0, v9, 0LL, 0LL, 0LL);
        if ( a1 == *((struct tagPROCESSINFO **)v8 + 56) )
          *((_QWORD *)v8 + 56) = 0LL;
        UseData = CitpProcessGetUseData(a1);
        v11 = UseData;
        v12 = -1;
        v13 = v9 - *(_DWORD *)(v5 + 60);
        v14 = *((_DWORD *)UseData + 4);
        if ( v14 + 1 >= v14 )
          v12 = v14 + 1;
        v15 = -1;
        *((_DWORD *)UseData + 4) = v12;
        v16 = *((_DWORD *)UseData + 5);
        if ( v16 + v13 >= v16 )
          v15 = v16 + v13;
        *((_DWORD *)v11 + 5) = v15;
        CIT_DESKTOP_ACTIVE_TRACKER::CalculateUpToTime((struct _CIT_IMPACT_CONTEXT *)((char *)v8 + 544), v9);
        v18 = *((_DWORD *)v11 + 14);
        v19 = v17;
        v21 = *(_DWORD *)(v20 + 12) - *(_DWORD *)(v5 + 64);
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
      CitpProgramIdCleanup((struct _CIT_PROGRAM_ID *)(v5 + 16));
      Win32FreePool();
      *((_QWORD *)a1 + 112) = 0LL;
    }
    if ( gppiList && !*(_QWORD *)(gppiList + 352) )
    {
      if ( qword_1C0101FE0 )
        CitpContextFlush(
          qword_1C0101FE0,
          (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
          0,
          a4);
      CitpCleanup();
    }
  }
}
