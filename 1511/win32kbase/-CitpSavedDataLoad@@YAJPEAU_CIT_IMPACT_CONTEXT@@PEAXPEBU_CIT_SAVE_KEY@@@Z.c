/*
 * XREFs of ?CitpSavedDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAXPEBU_CIT_SAVE_KEY@@@Z @ 0x1C00E51B4
 * Callers:
 *     ?CitpResetTracking@@YAJXZ @ 0x1C00050F4 (-CitpResetTracking@@YAJXZ.c)
 *     ?CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z @ 0x1C0065164 (-CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z.c)
 *     ?CitpStart@@YAJXZ @ 0x1C0068724 (-CitpStart@@YAJXZ.c)
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C004A1C0 (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     ?CitpProgramIdCalculateHash@@YA_KPEBU_CIT_PROGRAM_ID@@@Z @ 0x1C004DF94 (-CitpProgramIdCalculateHash@@YA_KPEBU_CIT_PROGRAM_ID@@@Z.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     ??$CitpBaseUseDataMerge@U_CIT_SYSTEM_DATA@@@@YAXPEAU_CIT_SYSTEM_DATA@@PEBU0@@Z @ 0x1C00E3774 (--$CitpBaseUseDataMerge@U_CIT_SYSTEM_DATA@@@@YAXPEAU_CIT_SYSTEM_DATA@@PEBU0@@Z.c)
 *     ??$CitpBaseUseDataMerge@U_CIT_USE_DATA@@@@YAXPEAU_CIT_USE_DATA@@PEBU0@@Z @ 0x1C00E383C (--$CitpBaseUseDataMerge@U_CIT_USE_DATA@@@@YAXPEAU_CIT_USE_DATA@@PEBU0@@Z.c)
 *     ?CitPersistedDataValidate@@YA_NPEBXIPEAI@Z @ 0x1C00E3B80 (-CitPersistedDataValidate@@YA_NPEBXIPEAI@Z.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C00E42A8 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 *     ?CitpProgDataEnsure@@YAPEAU_CIT_PROG_DATA@@PEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_PROGRAM_ID@@@Z @ 0x1C00E4498 (-CitpProgDataEnsure@@YAPEAU_CIT_PROG_DATA@@PEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_PROGRAM_ID@@@Z.c)
 *     ?CitpProgDataNotifyUseUpdate@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROG_DATA@@@Z @ 0x1C00E48F0 (-CitpProgDataNotifyUseUpdate@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROG_DATA@@@Z.c)
 *     ?CitpSavedDataDecompress@@YAJPEBXIPEAPEAXPEAIPEBU_CIT_COMPRESSION_CALLBACKS@@@Z @ 0x1C00E50CC (-CitpSavedDataDecompress@@YAJPEBXIPEAPEAXPEAIPEBU_CIT_COMPRESSION_CALLBACKS@@@Z.c)
 *     ?CitpSavedDataRead@@YAJPEAXPEBU_CIT_SAVE_KEY@@PEAPEAU_KEY_VALUE_PARTIAL_INFORMATION@@@Z @ 0x1C00E5DC0 (-CitpSavedDataRead@@YAJPEAXPEBU_CIT_SAVE_KEY@@PEAPEAU_KEY_VALUE_PARTIAL_INFORMATION@@@Z.c)
 *     ?Read@CIT_DATA_READER@@QEAA_NPEAXIIIIPEAI@Z @ 0x1C00E5F6C (-Read@CIT_DATA_READER@@QEAA_NPEAXIIIIPEAI@Z.c)
 *     ?ReadOverflowUseData@CIT_DATA_READER@@QEAAXPEAU_CIT_USE_DATA@@@Z @ 0x1C00E5FEC (-ReadOverflowUseData@CIT_DATA_READER@@QEAAXPEAU_CIT_USE_DATA@@@Z.c)
 *     ?ReadProgramId@CIT_DATA_READER@@QEAAXIPEAU_CIT_PROGRAM_ID@@@Z @ 0x1C00E6140 (-ReadProgramId@CIT_DATA_READER@@QEAAXIPEAU_CIT_PROGRAM_ID@@@Z.c)
 *     ?ReadProgramUseData@CIT_DATA_READER@@QEAAXIPEAU_CIT_USE_DATA@@@Z @ 0x1C00E61EC (-ReadProgramUseData@CIT_DATA_READER@@QEAAXIPEAU_CIT_USE_DATA@@@Z.c)
 *     ?ReadSystemData@CIT_DATA_READER@@QEAAXPEAU_CIT_SYSTEM_DATA@@@Z @ 0x1C00E6278 (-ReadSystemData@CIT_DATA_READER@@QEAAXPEAU_CIT_SYSTEM_DATA@@@Z.c)
 */

__int64 __fastcall CitpSavedDataLoad(struct _CIT_IMPACT_CONTEXT *a1, void *a2, const struct _CIT_SAVE_KEY *a3)
{
  PUCHAR v4; // rdi
  int v5; // eax
  struct _KEY_VALUE_PARTIAL_INFORMATION *v6; // r14
  unsigned int v7; // ebx
  int v8; // eax
  unsigned int v9; // ebx
  const char *v10; // rdx
  unsigned int v11; // eax
  unsigned int i; // ebx
  struct _CIT_PROG_DATA *v13; // rax
  struct _CIT_PROG_DATA *v14; // r15
  int v15; // r8d
  unsigned int *v17; // [rsp+30h] [rbp-D0h]
  unsigned int v18; // [rsp+40h] [rbp-C0h] BYREF
  PUCHAR v19; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v20[2]; // [rsp+50h] [rbp-B0h] BYREF
  PUCHAR Buffer; // [rsp+58h] [rbp-A8h] BYREF
  struct _KEY_VALUE_PARTIAL_INFORMATION *v22; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v23[2]; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int8 *v24[5]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v25[24]; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v26; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v27; // [rsp+D0h] [rbp-30h]
  __int64 v28; // [rsp+E4h] [rbp-1Ch]
  _BYTE v29[96]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v30[224]; // [rsp+160h] [rbp+60h] BYREF

  v22 = 0LL;
  v23[0] = CitAllocRoutine;
  v4 = 0LL;
  v18 = 0;
  v23[1] = UserRtlFreeMem;
  v19 = 0LL;
  *(_QWORD *)v20 = 0LL;
  Buffer = 0LL;
  v5 = CitpSavedDataRead(0LL, a3, &v22);
  v6 = v22;
  v7 = v5;
  if ( v5 < 0 )
    goto LABEL_16;
  v8 = CitpSavedDataDecompress(
         v22->Data,
         v22->DataLength,
         (void **)&Buffer,
         &v18,
         (const struct _CIT_COMPRESSION_CALLBACKS *)v23);
  v4 = Buffer;
  v7 = v8;
  if ( v8 < 0 )
    goto LABEL_16;
  v9 = v18;
  if ( !CitPersistedDataValidate(Buffer, v18, &v20[1]) )
  {
    v7 = -1073739509;
    v15 = 5317;
    goto LABEL_15;
  }
  v11 = *((_DWORD *)v4 + 20);
  v19 = v4;
  v20[0] = v9;
  CIT_DATA_READER::Read((CIT_DATA_READER *)&v19, v25, 0x58u, 0, v11, 8u, v17);
  v10 = (const char *)(dword_1C0107140 / 0x3E8);
  if ( v28 != __PAIR64__(uMultiplier, (unsigned int)v10) )
  {
    v7 = -1073741637;
    v15 = 5336;
LABEL_15:
    CitpLogFailureWorker(v7, v10, v15);
    goto LABEL_16;
  }
  if ( *((_QWORD *)a1 + 75) > v27 )
    *((_QWORD *)a1 + 75) = v27;
  CIT_DATA_READER::ReadSystemData((CIT_DATA_READER *)&v19, (struct _CIT_SYSTEM_DATA *)v30);
  CitpBaseUseDataMerge<_CIT_SYSTEM_DATA>(a1, (__int64)v30);
  CIT_DATA_READER::ReadOverflowUseData((CIT_DATA_READER *)&v19, (struct _CIT_USE_DATA *)v29);
  CitpBaseUseDataMerge<_CIT_USE_DATA>((struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 216), (const struct _CIT_BITMAP *)v29);
  for ( i = 0; i < v26; ++i )
  {
    CIT_DATA_READER::ReadProgramUseData((CIT_DATA_READER *)&v19, i, (struct _CIT_USE_DATA *)v29);
    CIT_DATA_READER::ReadProgramId((CIT_DATA_READER *)&v19, i, (struct _CIT_PROGRAM_ID *)v24);
    v24[2] = (unsigned __int8 *)CitpProgramIdCalculateHash(v24);
    v13 = CitpProgDataEnsure(a1, (const struct _CIT_PROGRAM_ID *)v24);
    v14 = v13;
    if ( v13 )
    {
      CitpBaseUseDataMerge<_CIT_USE_DATA>((struct _CIT_PROG_DATA *)((char *)v13 + 88), (const struct _CIT_BITMAP *)v29);
      CitpProgDataNotifyUseUpdate(a1, v14);
    }
    else
    {
      CitpStatIncrement((unsigned __int16 *)a1 + 100, 1);
      CitpBaseUseDataMerge<_CIT_USE_DATA>(
        (struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 216),
        (const struct _CIT_BITMAP *)v29);
    }
  }
  v7 = 0;
LABEL_16:
  if ( v6 )
    Win32FreePool();
  if ( v4 )
    Win32FreePool();
  return v7;
}
