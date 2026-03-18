/*
 * XREFs of ?CitPersistedDataValidate@@YA_NPEBXIPEAI@Z @ 0x1C00E3B80
 * Callers:
 *     ?CitpSavedDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAXPEBU_CIT_SAVE_KEY@@@Z @ 0x1C00E51B4 (-CitpSavedDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAXPEBU_CIT_SAVE_KEY@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     UIntMult @ 0x1C00B49EC (UIntMult.c)
 *     ??$CitBaseUseDataValidate@UCIT_PERSISTED_SYSTEM_DATA@@@@YA_NPEAUCIT_DATA_READER@@PEBU_CIT_PERSISTED_HEADER@@PEAUCIT_PERSISTED_SYSTEM_DATA@@IPEAI@Z @ 0x1C00E3258 (--$CitBaseUseDataValidate@UCIT_PERSISTED_SYSTEM_DATA@@@@YA_NPEAUCIT_DATA_READER@@PEBU_CIT_PERSIS.c)
 *     ??$CitBaseUseDataValidate@UCIT_PERSISTED_USE_DATA@@@@YA_NPEAUCIT_DATA_READER@@PEBU_CIT_PERSISTED_HEADER@@PEAUCIT_PERSISTED_USE_DATA@@IPEAI@Z @ 0x1C00E33CC (--$CitBaseUseDataValidate@UCIT_PERSISTED_USE_DATA@@@@YA_NPEAUCIT_DATA_READER@@PEBU_CIT_PERSISTED.c)
 *     ?CitPersistedDataComputeCrc@@YAIPEBXI@Z @ 0x1C00E3B3C (-CitPersistedDataComputeCrc@@YAIPEBXI@Z.c)
 *     ?Read@CIT_DATA_READER@@QEAA_NPEAXIIIIPEAI@Z @ 0x1C00E5F6C (-Read@CIT_DATA_READER@@QEAA_NPEAXIIIIPEAI@Z.c)
 *     ?ValidateRange@CIT_DATA_READER@@QEAA_NIII@Z @ 0x1C00E63B8 (-ValidateRange@CIT_DATA_READER@@QEAA_NIII@Z.c)
 *     ?ValidateString@CIT_DATA_READER@@QEAA_NPEAPEBGII@Z @ 0x1C00E63E4 (-ValidateString@CIT_DATA_READER@@QEAA_NPEAPEBGII@Z.c)
 */

char __fastcall CitPersistedDataValidate(UCHAR *Buffer, unsigned int a2, unsigned int *a3)
{
  unsigned int v6; // eax
  ULONG v7; // eax
  __int64 v8; // r9
  UINT v9; // edi
  UINT v10; // esi
  unsigned int v11; // r15d
  UINT v12; // r14d
  unsigned int v13; // r12d
  unsigned int *v15; // [rsp+30h] [rbp-D0h]
  unsigned int *v16; // [rsp+30h] [rbp-D0h]
  unsigned int *v17; // [rsp+30h] [rbp-D0h]
  unsigned int *v18; // [rsp+30h] [rbp-D0h]
  unsigned int *v19; // [rsp+30h] [rbp-D0h]
  unsigned int *v20; // [rsp+30h] [rbp-D0h]
  _QWORD v21[2]; // [rsp+40h] [rbp-C0h] BYREF
  UINT puResult; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int16 *v23; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v24[2]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v25; // [rsp+68h] [rbp-98h]
  unsigned int v26; // [rsp+6Ch] [rbp-94h]
  unsigned int v27; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v28; // [rsp+7Ch] [rbp-84h]
  unsigned int v29; // [rsp+80h] [rbp-80h]
  unsigned int v30; // [rsp+84h] [rbp-7Ch]
  _BYTE v31[16]; // [rsp+A0h] [rbp-60h] BYREF
  int v32; // [rsp+B0h] [rbp-50h]
  UINT uMultiplier; // [rsp+B4h] [rbp-4Ch]
  UINT uMultiplicand; // [rsp+B8h] [rbp-48h]
  unsigned int v35; // [rsp+BCh] [rbp-44h]
  unsigned int v36; // [rsp+C0h] [rbp-40h]
  unsigned int v37; // [rsp+C4h] [rbp-3Ch]
  unsigned int v38; // [rsp+C8h] [rbp-38h]
  unsigned int v39; // [rsp+CCh] [rbp-34h]
  _DWORD v40[6]; // [rsp+100h] [rbp+0h] BYREF

  v23 = 0LL;
  puResult = 0;
  if ( a2 - 84 > 0x3FFFAB )
  {
    if ( a3 )
      *a3 = 1000;
    return 0;
  }
  if ( *(_WORD *)Buffer != 10 )
  {
    if ( a3 )
      *a3 = 2000;
    return 0;
  }
  if ( *((_DWORD *)Buffer + 1) != a2 || (v6 = *((_DWORD *)Buffer + 20), v6 < 0x54) )
  {
    if ( a3 )
      *a3 = 3000;
    return 0;
  }
  v21[1] = a2;
  v21[0] = Buffer;
  if ( !CIT_DATA_READER::Read((CIT_DATA_READER *)v21, v31, 0x58u, 0, v6, 8u, v15) )
  {
    if ( a3 )
      *a3 = 3500;
    return 0;
  }
  v7 = CitPersistedDataComputeCrc(Buffer, a2);
  if ( v32 != v7 )
  {
    if ( a3 )
      *a3 = 3700;
    return 0;
  }
  if ( !CIT_DATA_READER::Read((CIT_DATA_READER *)v21, v24, 0x18u, v37, v36, 4u, v16) )
  {
    if ( a3 )
      *a3 = 4000;
    return 0;
  }
  if ( !CitBaseUseDataValidate<CIT_PERSISTED_SYSTEM_DATA>((CIT_DATA_READER *)v21, (__int64)v31, v24, v8, a3) )
    return 0;
  if ( !CIT_DATA_READER::Read((CIT_DATA_READER *)v21, v24, 0x18u, v39, v38, 4u, v17) )
  {
    if ( a3 )
      *a3 = 6000;
    return 0;
  }
  if ( !CitBaseUseDataValidate<CIT_PERSISTED_USE_DATA>((CIT_DATA_READER *)v21, (__int64)v31, v24, 7000, a3) )
    return 0;
  v9 = uMultiplicand;
  if ( !uMultiplicand || (v10 = uMultiplier) == 0 )
  {
    if ( a3 )
      *a3 = 10000;
    return 0;
  }
  if ( UIntMult(uMultiplicand, uMultiplier, &puResult) < 0 )
  {
    if ( a3 )
      *a3 = 11000;
    return 0;
  }
  v11 = v35;
  if ( !CIT_DATA_READER::ValidateRange((CIT_DATA_READER *)v21, v35, puResult, 4u) )
  {
    if ( a3 )
      *a3 = 12000;
    return 0;
  }
  v12 = 0;
  if ( v9 )
  {
    while ( CIT_DATA_READER::Read((CIT_DATA_READER *)v21, v24, 0x10u, v11, v10, 4u, v18) )
    {
      if ( !v25 || (v13 = v26) == 0 )
      {
        if ( a3 )
          *a3 = 14000;
        return 0;
      }
      if ( !CIT_DATA_READER::Read((CIT_DATA_READER *)v21, &v27, 0x1Cu, v24[0], v25, 4u, v19) )
      {
        if ( a3 )
          *a3 = 15000;
        return 0;
      }
      if ( !v28 || !CIT_DATA_READER::ValidateString((CIT_DATA_READER *)v21, (const unsigned __int16 **)&v23, v27, v28) )
      {
        if ( a3 )
          *a3 = 16000;
        return 0;
      }
      if ( v30 )
      {
        if ( !CIT_DATA_READER::ValidateString((CIT_DATA_READER *)v21, (const unsigned __int16 **)&v23, v29, v30) )
        {
          if ( a3 )
            *a3 = 17000;
          return 0;
        }
      }
      else if ( v29 )
      {
        if ( a3 )
          *a3 = 18000;
        return 0;
      }
      if ( !CIT_DATA_READER::Read((CIT_DATA_READER *)v21, v40, 0x18u, v24[1], v13, 4u, v20) )
      {
        if ( a3 )
          *a3 = 20000;
        return 0;
      }
      if ( !CitBaseUseDataValidate<CIT_PERSISTED_USE_DATA>((CIT_DATA_READER *)v21, (__int64)v31, v40, 21000, a3) )
        return 0;
      ++v12;
      v11 += v10;
      if ( v12 >= v9 )
        goto LABEL_57;
    }
    if ( a3 )
      *a3 = 13000;
    return 0;
  }
LABEL_57:
  if ( *a3 )
    *a3 = 0;
  return 1;
}
