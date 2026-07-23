/*
 * XREFs of LdrResGetRCConfig @ 0x1405434E0
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x1400F5198 (LdrpResSearchResourceMappedFile.c)
 *     LdrpVerifyAlternateResourceModule @ 0x14014BB28 (LdrpVerifyAlternateResourceModule.c)
 * Callees:
 *     LdrpResSearchResourceMappedFile @ 0x1400F5198 (LdrpResSearchResourceMappedFile.c)
 *     LdrpGetFromMUIMemCache @ 0x1400F8A28 (LdrpGetFromMUIMemCache.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14014978C (LdrpSetAlternateResourceModuleHandle.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     CheckOneBitValidFlag @ 0x140211D18 (CheckOneBitValidFlag.c)
 *     LdrpResGetMappingSize @ 0x1404FEBB4 (LdrpResGetMappingSize.c)
 */

NTSTATUS __fastcall LdrResGetRCConfig(__int64 ullAugend, ULONGLONG a2, _QWORD *a3, int a4, char a5)
{
  __int16 v9; // di
  char v10; // si
  __int16 v11; // di
  _DWORD *v12; // rax
  int v13; // edi
  NTSTATUS result; // eax
  int v15; // ecx
  _DWORD *v16; // r8
  __int64 v17; // rdx
  unsigned int v18; // ecx
  unsigned int v19; // r9d
  unsigned int v20; // ecx
  unsigned int v21; // r9d
  unsigned int v22; // ecx
  unsigned int v23; // r9d
  unsigned int v24; // ecx
  unsigned int v25; // r9d
  unsigned int v26; // ecx
  unsigned int v27; // r9d
  unsigned int v28; // ecx
  unsigned int v29; // r9d
  unsigned int v30; // ecx
  unsigned int v31; // r9d
  unsigned int v32; // ecx
  unsigned int v33; // r9d
  int v34; // ecx
  int v35; // r9d
  char v36; // r9
  int v37; // ecx
  __int64 v38; // r9
  int v39; // [rsp+20h] [rbp-B8h]
  __int64 v40; // [rsp+58h] [rbp-80h] BYREF
  ULONGLONG v41; // [rsp+60h] [rbp-78h] BYREF
  __int64 v42[2]; // [rsp+68h] [rbp-70h] BYREF
  _QWORD v43[3]; // [rsp+78h] [rbp-60h] BYREF

  v42[1] = ullAugend;
  v43[0] = L"MUI";
  v43[1] = 1LL;
  v43[2] = 0LL;
  v41 = a2;
  v40 = 0LL;
  v9 = 0x2000;
  if ( (a4 & 0x2000) != 0 )
  {
    v10 = 0;
  }
  else
  {
    v10 = 1;
    v9 = 4096;
  }
  v11 = v9 | 0x30;
  if ( !ullAugend )
    return -1073741811;
  if ( !a5 )
    goto LABEL_14;
  v12 = LdrpGetFromMUIMemCache(ullAugend, 0, 0LL, 8);
  v40 = (__int64)v12;
  if ( v12 == (_DWORD *)-1LL )
    return -1073741686;
  if ( v12 )
  {
    v13 = 0;
    if ( a3 )
      *a3 = v12;
    return v13;
  }
LABEL_14:
  if ( a2 || !v10 || (result = LdrpResGetMappingSize(ullAugend, &v41, a4), result >= 0) )
  {
    v15 = LdrpResSearchResourceMappedFile(ullAugend, v41, v11, (__int64)v43, 3, &v40, v42, 0LL, 0LL);
    if ( v15 < 0 )
    {
      if ( v15 != -1073741701 )
        v15 = -1073741686;
      v13 = v15;
      goto LABEL_58;
    }
    v16 = (_DWORD *)v40;
    if ( v10 )
    {
      v17 = *(unsigned int *)(v40 + 4);
      if ( v17 + v40 > v41 + (ullAugend & 0xFFFFFFFFFFFFFFFCuLL) )
      {
        v13 = -1073741701;
LABEL_58:
        v16 = 0LL;
LABEL_59:
        if ( a5 )
        {
          v38 = -1LL;
          if ( v16 )
            v38 = (__int64)v16;
          LdrpSetAlternateResourceModuleHandle(ullAugend, 0LL, 0LL, v38, v39, 0, 2, v13, 0LL);
        }
        return v13;
      }
      v13 = -1073020925;
      v18 = *(_DWORD *)(v40 + 68);
      v19 = v18 + *(_DWORD *)(v40 + 72);
      if ( v19 > (unsigned int)v17 )
        goto LABEL_58;
      if ( v19 < v18 )
        goto LABEL_58;
      v20 = *(_DWORD *)(v40 + 76);
      v21 = v20 + *(_DWORD *)(v40 + 80);
      if ( v21 > (unsigned int)v17 )
        goto LABEL_58;
      if ( v21 < v20 )
        goto LABEL_58;
      v22 = *(_DWORD *)(v40 + 84);
      v23 = v22 + *(_DWORD *)(v40 + 88);
      if ( v23 > (unsigned int)v17 )
        goto LABEL_58;
      if ( v23 < v22 )
        goto LABEL_58;
      v24 = *(_DWORD *)(v40 + 92);
      v25 = v24 + *(_DWORD *)(v40 + 96);
      if ( v25 > (unsigned int)v17 )
        goto LABEL_58;
      if ( v25 < v24 )
        goto LABEL_58;
      v26 = *(_DWORD *)(v40 + 100);
      v27 = v26 + *(_DWORD *)(v40 + 104);
      if ( v27 > (unsigned int)v17 )
        goto LABEL_58;
      if ( v27 < v26 )
        goto LABEL_58;
      v28 = *(_DWORD *)(v40 + 108);
      v29 = v28 + *(_DWORD *)(v40 + 112);
      if ( v29 > (unsigned int)v17 )
        goto LABEL_58;
      if ( v29 < v28 )
        goto LABEL_58;
      v30 = *(_DWORD *)(v40 + 116);
      v31 = v30 + *(_DWORD *)(v40 + 120);
      if ( v31 > (unsigned int)v17 )
        goto LABEL_58;
      if ( v31 < v30 )
        goto LABEL_58;
      v32 = *(_DWORD *)(v40 + 124);
      v33 = v32 + *(_DWORD *)(v40 + 128);
      if ( v33 > (unsigned int)v17 )
        goto LABEL_58;
      if ( v33 < v32 )
        goto LABEL_58;
      if ( *(_DWORD *)v40 != -20054323 )
        goto LABEL_58;
      if ( v17 != v42[0] )
        goto LABEL_58;
      if ( *(_DWORD *)(v40 + 8) != 0x10000 )
        goto LABEL_58;
      v34 = *(_DWORD *)(v40 + 12);
      if ( v34 )
      {
        if ( !CheckOneBitValidFlag(v34, 7) )
          goto LABEL_58;
      }
      if ( !CheckOneBitValidFlag(v16[4] & 0xFFFFFFCF, 3) )
        goto LABEL_58;
      if ( !CheckOneBitValidFlag(v35 & 0xFFFFFFFC, 48) )
        goto LABEL_58;
      if ( (v36 & 1) != 0 )
      {
        if ( !CheckOneBitValidFlag(v16[6], 3) )
          goto LABEL_58;
        v37 = v16[5];
        if ( v37 )
        {
          if ( !CheckOneBitValidFlag(v37, 256) )
            goto LABEL_58;
        }
      }
    }
    if ( a3 )
      *a3 = v16;
    v13 = 0;
    goto LABEL_59;
  }
  return result;
}
