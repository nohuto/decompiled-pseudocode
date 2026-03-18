/*
 * XREFs of LdrResGetRCConfig @ 0x1405807EC
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x14002AB60 (LdrpResSearchResourceMappedFile.c)
 *     LdrpVerifyAlternateResourceModule @ 0x14016FF6C (LdrpVerifyAlternateResourceModule.c)
 * Callees:
 *     LdrpGetFromMUIMemCache @ 0x14002A698 (LdrpGetFromMUIMemCache.c)
 *     LdrpResSearchResourceMappedFile @ 0x14002AB60 (LdrpResSearchResourceMappedFile.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14016D60C (LdrpSetAlternateResourceModuleHandle.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     CheckOneBitValidFlag @ 0x140246B1C (CheckOneBitValidFlag.c)
 *     LdrpResGetMappingSize @ 0x140463BF8 (LdrpResGetMappingSize.c)
 */

NTSTATUS __fastcall LdrResGetRCConfig(ULONGLONG ullAugend, unsigned __int64 a2, _QWORD *a3, int a4, char a5)
{
  __int16 v9; // di
  char v10; // si
  __int16 v11; // di
  _DWORD *v12; // rax
  int v13; // edi
  NTSTATUS result; // eax
  int v15; // ecx
  _DWORD *v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  unsigned int v19; // ecx
  unsigned int v20; // r9d
  unsigned int v21; // ecx
  unsigned int v22; // r9d
  unsigned int v23; // ecx
  unsigned int v24; // r9d
  unsigned int v25; // ecx
  unsigned int v26; // r9d
  unsigned int v27; // ecx
  unsigned int v28; // r9d
  unsigned int v29; // ecx
  unsigned int v30; // r9d
  unsigned int v31; // ecx
  unsigned int v32; // r9d
  unsigned int v33; // ecx
  unsigned int v34; // r9d
  int v35; // ecx
  int v36; // r9d
  char v37; // r9
  int v38; // ecx
  int v39; // [rsp+20h] [rbp-B8h]
  __int64 v40; // [rsp+58h] [rbp-80h] BYREF
  unsigned __int64 v41[2]; // [rsp+60h] [rbp-78h] BYREF
  __int64 v42; // [rsp+70h] [rbp-68h] BYREF
  _QWORD v43[3]; // [rsp+78h] [rbp-60h] BYREF

  v41[1] = ullAugend;
  v43[0] = L"MUI";
  v43[1] = 1LL;
  v43[2] = 0LL;
  v41[0] = a2;
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
    goto LABEL_11;
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
LABEL_11:
  if ( a2 || !v10 || (result = LdrpResGetMappingSize(ullAugend, v41, a4), result >= 0) )
  {
    v15 = LdrpResSearchResourceMappedFile(
            ullAugend,
            v41[0],
            v11,
            (__int64)v43,
            3,
            (unsigned int **)&v40,
            &v42,
            0LL,
            0LL);
    if ( v15 < 0 )
    {
      if ( v15 != -1073741701 )
        v15 = -1073741686;
      v13 = v15;
      goto LABEL_16;
    }
    v16 = (_DWORD *)v40;
    if ( v10 )
    {
      v18 = *(unsigned int *)(v40 + 4);
      if ( v18 + v40 > v41[0] + (ullAugend & 0xFFFFFFFFFFFFFFFCuLL) )
      {
        v13 = -1073741701;
LABEL_16:
        v16 = 0LL;
LABEL_17:
        if ( a5 )
        {
          v17 = -1LL;
          if ( v16 )
            v17 = (__int64)v16;
          LdrpSetAlternateResourceModuleHandle(ullAugend, 0LL, 0LL, v17, v39, 0, 2, v13, 0LL);
        }
        return v13;
      }
      v13 = -1073020925;
      v19 = *(_DWORD *)(v40 + 68);
      v20 = v19 + *(_DWORD *)(v40 + 72);
      if ( v20 > (unsigned int)v18 )
        goto LABEL_16;
      if ( v20 < v19 )
        goto LABEL_16;
      v21 = *(_DWORD *)(v40 + 76);
      v22 = v21 + *(_DWORD *)(v40 + 80);
      if ( v22 > (unsigned int)v18 )
        goto LABEL_16;
      if ( v22 < v21 )
        goto LABEL_16;
      v23 = *(_DWORD *)(v40 + 84);
      v24 = v23 + *(_DWORD *)(v40 + 88);
      if ( v24 > (unsigned int)v18 )
        goto LABEL_16;
      if ( v24 < v23 )
        goto LABEL_16;
      v25 = *(_DWORD *)(v40 + 92);
      v26 = v25 + *(_DWORD *)(v40 + 96);
      if ( v26 > (unsigned int)v18 )
        goto LABEL_16;
      if ( v26 < v25 )
        goto LABEL_16;
      v27 = *(_DWORD *)(v40 + 100);
      v28 = v27 + *(_DWORD *)(v40 + 104);
      if ( v28 > (unsigned int)v18 )
        goto LABEL_16;
      if ( v28 < v27 )
        goto LABEL_16;
      v29 = *(_DWORD *)(v40 + 108);
      v30 = v29 + *(_DWORD *)(v40 + 112);
      if ( v30 > (unsigned int)v18 )
        goto LABEL_16;
      if ( v30 < v29 )
        goto LABEL_16;
      v31 = *(_DWORD *)(v40 + 116);
      v32 = v31 + *(_DWORD *)(v40 + 120);
      if ( v32 > (unsigned int)v18 )
        goto LABEL_16;
      if ( v32 < v31 )
        goto LABEL_16;
      v33 = *(_DWORD *)(v40 + 124);
      v34 = v33 + *(_DWORD *)(v40 + 128);
      if ( v34 > (unsigned int)v18 )
        goto LABEL_16;
      if ( v34 < v33 )
        goto LABEL_16;
      if ( *(_DWORD *)v40 != -20054323 )
        goto LABEL_16;
      if ( v18 != v42 )
        goto LABEL_16;
      if ( *(_DWORD *)(v40 + 8) != 0x10000 )
        goto LABEL_16;
      v35 = *(_DWORD *)(v40 + 12);
      if ( v35 )
      {
        if ( !CheckOneBitValidFlag(v35, 7) )
          goto LABEL_16;
      }
      if ( !CheckOneBitValidFlag(v16[4] & 0xFFFFFFCF, 3) )
        goto LABEL_16;
      if ( !CheckOneBitValidFlag(v36 & 0xFFFFFFFC, 48) )
        goto LABEL_16;
      if ( (v37 & 1) != 0 )
      {
        if ( !CheckOneBitValidFlag(v16[6], 3) )
          goto LABEL_16;
        v38 = v16[5];
        if ( v38 )
        {
          if ( !CheckOneBitValidFlag(v38, 256) )
            goto LABEL_16;
        }
      }
    }
    if ( a3 )
      *a3 = v16;
    v13 = 0;
    goto LABEL_17;
  }
  return result;
}
