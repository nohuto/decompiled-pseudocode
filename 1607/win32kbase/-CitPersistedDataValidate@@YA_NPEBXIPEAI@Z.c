/*
 * XREFs of ?CitPersistedDataValidate@@YA_NPEBXIPEAI@Z @ 0x1C00F5B10
 * Callers:
 *     ?CitpSavedDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAXPEBU_CIT_SAVE_KEY@@@Z @ 0x1C00F70F0 (-CitpSavedDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAXPEBU_CIT_SAVE_KEY@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     ??$CitBaseUseDataValidate@UCIT_PERSISTED_SYSTEM_DATA@@@@YA_NPEAUCIT_DATA_READER@@PEBU_CIT_PERSISTED_HEADER@@PEAUCIT_PERSISTED_SYSTEM_DATA@@IPEAI@Z @ 0x1C00F5078 (--$CitBaseUseDataValidate@UCIT_PERSISTED_SYSTEM_DATA@@@@YA_NPEAUCIT_DATA_READER@@PEBU_CIT_PERSIS.c)
 *     ??$CitBaseUseDataValidate@UCIT_PERSISTED_USE_DATA@@@@YA_NPEAUCIT_DATA_READER@@PEBU_CIT_PERSISTED_HEADER@@PEAUCIT_PERSISTED_USE_DATA@@IPEAI@Z @ 0x1C00F51EC (--$CitBaseUseDataValidate@UCIT_PERSISTED_USE_DATA@@@@YA_NPEAUCIT_DATA_READER@@PEBU_CIT_PERSISTED.c)
 *     ?CitPersistedDataComputeCrc@@YAIPEBXI@Z @ 0x1C00F5ACC (-CitPersistedDataComputeCrc@@YAIPEBXI@Z.c)
 *     ?Read@CIT_DATA_READER@@QEAA_NPEAXIIIIPEAI@Z @ 0x1C00F7DAC (-Read@CIT_DATA_READER@@QEAA_NPEAXIIIIPEAI@Z.c)
 *     ?ValidateRange@CIT_DATA_READER@@QEAA_NIII@Z @ 0x1C00F8180 (-ValidateRange@CIT_DATA_READER@@QEAA_NIII@Z.c)
 *     ?ValidateString@CIT_DATA_READER@@QEAA_NPEAPEBGII@Z @ 0x1C00F81AC (-ValidateString@CIT_DATA_READER@@QEAA_NPEAPEBGII@Z.c)
 */

char __fastcall CitPersistedDataValidate(UCHAR *Buffer, unsigned int a2, unsigned int *a3)
{
  unsigned int v6; // eax
  ULONG v7; // eax
  __int64 v8; // r9
  unsigned int v9; // edi
  unsigned int v10; // esi
  unsigned __int64 v11; // rcx
  unsigned int v12; // r15d
  unsigned int v13; // r14d
  unsigned int v14; // r12d
  unsigned int *v16; // [rsp+30h] [rbp-D0h]
  unsigned int *v17; // [rsp+30h] [rbp-D0h]
  unsigned int *v18; // [rsp+30h] [rbp-D0h]
  unsigned int *v19; // [rsp+30h] [rbp-D0h]
  unsigned int *v20; // [rsp+30h] [rbp-D0h]
  unsigned int *v21; // [rsp+30h] [rbp-D0h]
  _QWORD v22[2]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int16 *v23; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v24[2]; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v25; // [rsp+60h] [rbp-A0h]
  unsigned int v26; // [rsp+64h] [rbp-9Ch]
  unsigned int v27; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v28; // [rsp+74h] [rbp-8Ch]
  unsigned int v29; // [rsp+78h] [rbp-88h]
  unsigned int v30; // [rsp+7Ch] [rbp-84h]
  _BYTE v31[16]; // [rsp+90h] [rbp-70h] BYREF
  int v32; // [rsp+A0h] [rbp-60h]
  unsigned int v33; // [rsp+A4h] [rbp-5Ch]
  unsigned int v34; // [rsp+A8h] [rbp-58h]
  unsigned int v35; // [rsp+ACh] [rbp-54h]
  unsigned int v36; // [rsp+B0h] [rbp-50h]
  unsigned int v37; // [rsp+B4h] [rbp-4Ch]
  unsigned int v38; // [rsp+B8h] [rbp-48h]
  unsigned int v39; // [rsp+BCh] [rbp-44h]
  _DWORD v40[6]; // [rsp+F0h] [rbp-10h] BYREF

  v23 = 0LL;
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
  v22[1] = a2;
  v22[0] = Buffer;
  if ( !CIT_DATA_READER::Read((CIT_DATA_READER *)v22, v31, 0x58u, 0, v6, 8u, v16) )
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
  if ( !CIT_DATA_READER::Read((CIT_DATA_READER *)v22, v24, 0x18u, v37, v36, 4u, v17) )
  {
    if ( a3 )
      *a3 = 4000;
    return 0;
  }
  if ( !CitBaseUseDataValidate<CIT_PERSISTED_SYSTEM_DATA>((CIT_DATA_READER *)v22, (__int64)v31, v24, v8, a3) )
    return 0;
  if ( !CIT_DATA_READER::Read((CIT_DATA_READER *)v22, v24, 0x18u, v39, v38, 4u, v18) )
  {
    if ( a3 )
      *a3 = 6000;
    return 0;
  }
  if ( !CitBaseUseDataValidate<CIT_PERSISTED_USE_DATA>((CIT_DATA_READER *)v22, (__int64)v31, v24, 7000, a3) )
    return 0;
  v9 = v34;
  if ( !v34 || (v10 = v33) == 0 )
  {
    if ( a3 )
      *a3 = 10000;
    return 0;
  }
  v11 = v34 * (unsigned __int64)v33;
  if ( v11 > 0xFFFFFFFF )
  {
    if ( a3 )
      *a3 = 11000;
    return 0;
  }
  v12 = v35;
  if ( !CIT_DATA_READER::ValidateRange((CIT_DATA_READER *)v22, v35, v11, 4u) )
  {
    if ( a3 )
      *a3 = 12000;
    return 0;
  }
  v13 = 0;
  if ( v9 )
  {
    while ( CIT_DATA_READER::Read((CIT_DATA_READER *)v22, v24, 0x10u, v12, v10, 4u, v19) )
    {
      if ( !v25 || (v14 = v26) == 0 )
      {
        if ( a3 )
          *a3 = 14000;
        return 0;
      }
      if ( !CIT_DATA_READER::Read((CIT_DATA_READER *)v22, &v27, 0x1Cu, v24[0], v25, 4u, v20) )
      {
        if ( a3 )
          *a3 = 15000;
        return 0;
      }
      if ( !v28 || !CIT_DATA_READER::ValidateString((CIT_DATA_READER *)v22, (const unsigned __int16 **)&v23, v27, v28) )
      {
        if ( a3 )
          *a3 = 16000;
        return 0;
      }
      if ( v30 )
      {
        if ( !CIT_DATA_READER::ValidateString((CIT_DATA_READER *)v22, (const unsigned __int16 **)&v23, v29, v30) )
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
      if ( !CIT_DATA_READER::Read((CIT_DATA_READER *)v22, v40, 0x18u, v24[1], v14, 4u, v21) )
      {
        if ( a3 )
          *a3 = 20000;
        return 0;
      }
      if ( !CitBaseUseDataValidate<CIT_PERSISTED_USE_DATA>((CIT_DATA_READER *)v22, (__int64)v31, v40, 21000, a3) )
        return 0;
      ++v13;
      v12 += v10;
      if ( v13 >= v9 )
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
