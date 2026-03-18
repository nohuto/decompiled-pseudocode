/*
 * XREFs of ?CitpResetTracking@@YAJXZ @ 0x1C00F6BB4
 * Callers:
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C00F595C (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 * Callees:
 *     ?CitpTimeUpdate@@YAXI@Z @ 0x1C0011AA0 (-CitpTimeUpdate@@YAXI@Z.c)
 *     ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@IHPEAX@Z @ 0x1C004EC88 (-CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@IHPEAX@Z.c)
 *     ?CitpCleanup@@YAXXZ @ 0x1C004EFD4 (-CitpCleanup@@YAXXZ.c)
 *     ?CitpParametersCleanup@@YAXPEAU_CIT_PARAMETERS@@@Z @ 0x1C004EFFC (-CitpParametersCleanup@@YAXPEAU_CIT_PARAMETERS@@@Z.c)
 *     ?CitpContextTrackingDataCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C004F1F0 (-CitpContextTrackingDataCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpContextTrackingDataStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C004F85C (-CitpContextTrackingDataStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z @ 0x1C0051240 (-CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     ?CitpInvalidateAllWeakReferences@@YAXXZ @ 0x1C00F61B8 (-CitpInvalidateAllWeakReferences@@YAXXZ.c)
 *     ?CitpSaveKeyGet@@YAXPEAU_CIT_SAVE_KEY@@PEAX@Z @ 0x1C00F6D48 (-CitpSaveKeyGet@@YAXPEAU_CIT_SAVE_KEY@@PEAX@Z.c)
 *     ?CitpSavedDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAXPEBU_CIT_SAVE_KEY@@@Z @ 0x1C00F70F0 (-CitpSavedDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAXPEBU_CIT_SAVE_KEY@@@Z.c)
 */

__int64 __fastcall CitpResetTracking(__int64 a1, __int64 a2, __int64 a3, void *a4)
{
  struct _CIT_IMPACT_CONTEXT *v4; // rdi
  int v5; // ebx
  const unsigned __int16 *v7; // rdx
  const char *v8; // rdx
  void *v9; // rdx
  void *v10; // rdx
  _BYTE v11[16]; // [rsp+20h] [rbp-28h] BYREF

  v4 = qword_1C011E5D0;
  if ( !qword_1C011E5D0
    || (CitpContextFlush(
          qword_1C011E5D0,
          (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
          a3,
          a4),
        CitpInvalidateAllWeakReferences(),
        CitpContextTrackingDataCleanup(v4),
        CitpParametersCleanup((struct _CIT_PARAMETERS *)&unk_1C011E568),
        dword_1C011E61C = 0,
        byte_1C011E620 = 0,
        CitpParametersLoad((struct _CIT_PARAMETERS *)&unk_1C011E568, v7),
        !byte_1C011E5BC) )
  {
    v5 = -1073741637;
LABEL_3:
    CitpCleanup();
    return (unsigned int)v5;
  }
  v5 = CitpContextTrackingDataStart(v4, v8);
  if ( v5 < 0 )
    goto LABEL_3;
  if ( byte_1C011E5BD )
  {
    v9 = (void *)*((_QWORD *)v4 + 52);
    if ( v9 )
    {
      CitpSaveKeyGet((struct _CIT_SAVE_KEY *)v11, v9);
      CitpSavedDataLoad(v4, v10, (const struct _CIT_SAVE_KEY *)v11);
    }
  }
  dword_1C011E5DC = 0;
  CitpTimeUpdate((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  return 0;
}
