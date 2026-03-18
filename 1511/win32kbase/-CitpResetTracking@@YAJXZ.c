/*
 * XREFs of ?CitpResetTracking@@YAJXZ @ 0x1C00050F4
 * Callers:
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C0068118 (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 * Callees:
 *     ?CitpInvalidateAllWeakReferences@@YAXXZ @ 0x1C00051E4 (-CitpInvalidateAllWeakReferences@@YAXXZ.c)
 *     ?CitpTimeUpdate@@YAXI@Z @ 0x1C0047AD0 (-CitpTimeUpdate@@YAXI@Z.c)
 *     ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@IHPEAX@Z @ 0x1C0064C88 (-CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@IHPEAX@Z.c)
 *     ?CitpCleanup@@YAXXZ @ 0x1C0064E48 (-CitpCleanup@@YAXXZ.c)
 *     ?CitpContextTrackingDataCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0065028 (-CitpContextTrackingDataCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpParametersCleanup@@YAXPEAU_CIT_PARAMETERS@@@Z @ 0x1C0065DC4 (-CitpParametersCleanup@@YAXPEAU_CIT_PARAMETERS@@@Z.c)
 *     ?CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z @ 0x1C006825C (-CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z.c)
 *     ?CitpContextTrackingDataStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C007EAB4 (-CitpContextTrackingDataStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     ?CitpSaveKeyGet@@YAXPEAU_CIT_SAVE_KEY@@PEAX@Z @ 0x1C00E4E0C (-CitpSaveKeyGet@@YAXPEAU_CIT_SAVE_KEY@@PEAX@Z.c)
 *     ?CitpSavedDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAXPEBU_CIT_SAVE_KEY@@@Z @ 0x1C00E51B4 (-CitpSavedDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAXPEBU_CIT_SAVE_KEY@@@Z.c)
 */

__int64 __fastcall CitpResetTracking(__int64 a1, __int64 a2, int a3, void *a4)
{
  struct _CIT_IMPACT_CONTEXT *v4; // rdi
  unsigned __int64 v5; // rsi
  const unsigned __int16 *v6; // rdx
  int v7; // ebx
  void *v9; // rdx
  void *v10; // rdx
  _BYTE v11[16]; // [rsp+20h] [rbp-28h] BYREF

  v4 = qword_1C0107180;
  if ( !qword_1C0107180 )
    goto LABEL_7;
  v5 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  CitpContextFlush(qword_1C0107180, v5, a3, a4);
  CitpInvalidateAllWeakReferences();
  CitpContextTrackingDataCleanup(v4);
  CitpParametersCleanup((struct _CIT_PARAMETERS *)&unk_1C0107118);
  dword_1C01071CC = 0;
  byte_1C01071D0 = 0;
  CitpParametersLoad((struct _CIT_PARAMETERS *)&unk_1C0107118, v6);
  if ( !byte_1C010716C )
  {
LABEL_7:
    v7 = -1073741637;
    goto LABEL_8;
  }
  v7 = CitpContextTrackingDataStart(v4);
  if ( v7 < 0 )
  {
LABEL_8:
    CitpCleanup();
    return (unsigned int)v7;
  }
  if ( byte_1C010716E )
  {
    v9 = (void *)*((_QWORD *)v4 + 52);
    if ( v9 )
    {
      CitpSaveKeyGet((struct _CIT_SAVE_KEY *)v11, v9);
      CitpSavedDataLoad(v4, v10, (const struct _CIT_SAVE_KEY *)v11);
    }
  }
  dword_1C010718C = 0;
  CitpTimeUpdate(v5);
  return 0;
}
