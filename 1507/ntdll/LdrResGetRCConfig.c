/*
 * XREFs of LdrResGetRCConfig @ 0x180056F50
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x180018FCC (LdrpResSearchResourceMappedFile.c)
 *     LdrpVerifyAlternateResourceModule @ 0x180056D78 (LdrpVerifyAlternateResourceModule.c)
 *     RtlpResUltimateFallbackInfo @ 0x180056E50 (RtlpResUltimateFallbackInfo.c)
 * Callees:
 *     LdrpGetFromMUIMemCache @ 0x180017204 (LdrpGetFromMUIMemCache.c)
 *     LdrpResSearchResourceMappedFile @ 0x180018FCC (LdrpResSearchResourceMappedFile.c)
 *     LdrpResGetMappingSize @ 0x18001AFF0 (LdrpResGetMappingSize.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x180057378 (LdrpSetAlternateResourceModuleHandle.c)
 *     CheckOneBitValidFlag @ 0x18005790C (CheckOneBitValidFlag.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     LdrpTraceLoadMUIDll @ 0x1800CBC78 (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall LdrResGetRCConfig(__int64 DllHandle, ULONG64 a2, _QWORD *a3, int a4, char a5)
{
  int v9; // esi
  char v10; // di
  unsigned int v11; // esi
  _DWORD *v12; // rax
  unsigned int v13; // edi
  __int64 result; // rax
  NTSTATUS v15; // ecx
  _DWORD *v16; // r8
  int v17; // r9d
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
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rcx
  _DWORD *v38; // [rsp+58h] [rbp-90h] BYREF
  ULONG64 v39; // [rsp+60h] [rbp-88h] BYREF
  __int64 v40[2]; // [rsp+68h] [rbp-80h] BYREF
  int v41; // [rsp+78h] [rbp-70h] BYREF
  const wchar_t *v42; // [rsp+80h] [rbp-68h]
  __int64 v43; // [rsp+88h] [rbp-60h]
  _QWORD v44[3]; // [rsp+90h] [rbp-58h] BYREF

  v43 = DllHandle;
  v44[0] = L"MUI";
  v44[1] = 1LL;
  v44[2] = 0LL;
  v39 = a2;
  v38 = 0LL;
  LODWORD(v40[0]) = 3145774;
  v40[1] = (__int64)L"LdrResGetRCConfig Enter";
  v41 = 3014700;
  v42 = L"LdrResGetRCConfig Exit";
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
  if ( (MEMORY[0x7FFE0385] & 1) != 0 )
    LdrpTraceLoadMUIDll(v40, MEMORY[0x7FFE0384]);
  if ( !DllHandle )
  {
    v13 = -1073741811;
    goto LABEL_9;
  }
  if ( !a5 )
  {
LABEL_13:
    if ( !a2 )
    {
      if ( v10 )
      {
        result = LdrpResGetMappingSize(DllHandle, &v39, a4, 0);
        if ( (int)result < 0 )
          return result;
      }
    }
    v15 = LdrpResSearchResourceMappedFile((void *)DllHandle, v39, v11, (__int64)v44, 3, (__int64 *)&v38, v40, 0LL, 0LL);
    if ( v15 < 0 )
    {
      if ( v15 != -1073741701 )
        v15 = -1073741686;
      v13 = v15;
      goto LABEL_18;
    }
    v16 = v38;
    if ( v10 )
    {
      v18 = (unsigned int)v38[1];
      if ( (unsigned __int64)v38 + v18 > v39 + (DllHandle & 0xFFFFFFFFFFFFFFFCuLL) )
      {
        v13 = -1073741701;
LABEL_18:
        v16 = 0LL;
LABEL_19:
        if ( a5 )
        {
          v17 = -1;
          if ( v16 )
            v17 = (int)v16;
          LdrpSetAlternateResourceModuleHandle(DllHandle, 0, 0, v17, -1, 0, 2, v13, 0LL);
        }
        goto LABEL_9;
      }
      v13 = -1073020925;
      v19 = v38[17];
      v20 = v19 + v38[18];
      if ( v20 > (unsigned int)v18 )
        goto LABEL_18;
      if ( v20 < v19 )
        goto LABEL_18;
      v21 = v38[19];
      v22 = v21 + v38[20];
      if ( v22 > (unsigned int)v18 )
        goto LABEL_18;
      if ( v22 < v21 )
        goto LABEL_18;
      v23 = v38[21];
      v24 = v23 + v38[22];
      if ( v24 > (unsigned int)v18 )
        goto LABEL_18;
      if ( v24 < v23 )
        goto LABEL_18;
      v25 = v38[23];
      v26 = v25 + v38[24];
      if ( v26 > (unsigned int)v18 )
        goto LABEL_18;
      if ( v26 < v25 )
        goto LABEL_18;
      v27 = v38[25];
      v28 = v27 + v38[26];
      if ( v28 > (unsigned int)v18 )
        goto LABEL_18;
      if ( v28 < v27 )
        goto LABEL_18;
      v29 = v38[27];
      v30 = v29 + v38[28];
      if ( v30 > (unsigned int)v18 )
        goto LABEL_18;
      if ( v30 < v29 )
        goto LABEL_18;
      v31 = v38[29];
      v32 = v31 + v38[30];
      if ( v32 > (unsigned int)v18 )
        goto LABEL_18;
      if ( v32 < v31 )
        goto LABEL_18;
      v33 = v38[31];
      v34 = v33 + v38[32];
      if ( v34 > (unsigned int)v18 )
        goto LABEL_18;
      if ( v34 < v33 )
        goto LABEL_18;
      if ( *v38 != -20054323 )
        goto LABEL_18;
      if ( v18 != v40[0] )
        goto LABEL_18;
      if ( v38[2] != 0x10000 )
        goto LABEL_18;
      v35 = (unsigned int)v38[3];
      if ( (_DWORD)v35 )
      {
        if ( !(unsigned __int8)CheckOneBitValidFlag(v35, 7LL, v38) )
          goto LABEL_18;
      }
      if ( !(unsigned __int8)CheckOneBitValidFlag(v16[4] & 0xFFFFFFCF, 3LL, v16) )
        goto LABEL_18;
      if ( !(unsigned __int8)CheckOneBitValidFlag(*(_DWORD *)(v36 + 16) & 0xFFFFFFFC, 48LL, v36) )
        goto LABEL_18;
      if ( (v16[4] & 1) != 0 )
      {
        if ( !(unsigned __int8)CheckOneBitValidFlag((unsigned int)v16[6], 3LL, v16) )
          goto LABEL_18;
        v37 = (unsigned int)v16[5];
        if ( (_DWORD)v37 )
        {
          if ( !(unsigned __int8)CheckOneBitValidFlag(v37, 256LL, v16) )
            goto LABEL_18;
        }
      }
    }
    if ( a3 )
      *a3 = v16;
    v13 = 0;
    goto LABEL_19;
  }
  v12 = LdrpGetFromMUIMemCache(DllHandle, 0, 0LL, 8);
  v38 = v12;
  if ( v12 != (_DWORD *)-1LL )
  {
    if ( v12 )
    {
      v13 = 0;
      if ( a3 )
        *a3 = v12;
      goto LABEL_9;
    }
    goto LABEL_13;
  }
  v13 = -1073741686;
LABEL_9:
  if ( (MEMORY[0x7FFE0385] & 1) != 0 )
    LdrpTraceLoadMUIDll(&v41, MEMORY[0x7FFE0384]);
  return v13;
}
