/*
 * XREFs of LdrResGetRCConfig @ 0x18003BEB0
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x180037C1C (LdrpResSearchResourceMappedFile.c)
 *     RtlpResUltimateFallbackInfo @ 0x180039A8C (RtlpResUltimateFallbackInfo.c)
 *     LdrpVerifyAlternateResourceModule @ 0x18003C2DC (LdrpVerifyAlternateResourceModule.c)
 *     LdrpResReportResourceAccessInternal @ 0x18005246C (LdrpResReportResourceAccessInternal.c)
 * Callees:
 *     LdrpGetFromMUIMemCache @ 0x18003195C (LdrpGetFromMUIMemCache.c)
 *     LdrpResSearchResourceMappedFile @ 0x180037C1C (LdrpResSearchResourceMappedFile.c)
 *     LdrpResGetMappingSize @ 0x1800397F0 (LdrpResGetMappingSize.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x18003C78C (LdrpSetAlternateResourceModuleHandle.c)
 *     CheckOneBitValidFlag @ 0x18003E2A4 (CheckOneBitValidFlag.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     LdrpTraceLoadMUIDll @ 0x1800D44B4 (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall LdrResGetRCConfig(__int64 BaseOfImage, ULONG64 a2, __int64 *a3, int a4, char a5)
{
  int v9; // edi
  char v10; // si
  int v11; // edi
  __int64 v12; // rax
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
  __int64 v38; // [rsp+58h] [rbp-90h] BYREF
  ULONG64 v39; // [rsp+60h] [rbp-88h] BYREF
  __int64 v40[2]; // [rsp+68h] [rbp-80h] BYREF
  int v41; // [rsp+78h] [rbp-70h] BYREF
  const wchar_t *v42; // [rsp+80h] [rbp-68h]
  __int64 v43; // [rsp+88h] [rbp-60h]
  _QWORD v44[3]; // [rsp+90h] [rbp-58h] BYREF

  v43 = BaseOfImage;
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
  if ( !BaseOfImage )
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
        result = LdrpResGetMappingSize(BaseOfImage, &v39, a4, 0);
        if ( (int)result < 0 )
          return result;
      }
    }
    v15 = LdrpResSearchResourceMappedFile((PVOID)BaseOfImage, v39, v11 | 0x200000, (__int64)v44, 3, &v38, v40, 0LL, 0LL);
    if ( v15 < 0 )
    {
      if ( v15 != -1073741701 )
        v15 = -1073741686;
      v13 = v15;
      goto LABEL_18;
    }
    v16 = (_DWORD *)v38;
    if ( v10 )
    {
      v18 = *(unsigned int *)(v38 + 4);
      if ( v18 + v38 > v39 + (BaseOfImage & 0xFFFFFFFFFFFFFFFCuLL) )
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
          LdrpSetAlternateResourceModuleHandle(BaseOfImage, 0, 0, v17, -1, 0, 2, v13, 0LL);
        }
        goto LABEL_9;
      }
      v13 = -1073020925;
      v19 = *(_DWORD *)(v38 + 68);
      v20 = v19 + *(_DWORD *)(v38 + 72);
      if ( v20 > (unsigned int)v18 )
        goto LABEL_18;
      if ( v20 < v19 )
        goto LABEL_18;
      v21 = *(_DWORD *)(v38 + 76);
      v22 = v21 + *(_DWORD *)(v38 + 80);
      if ( v22 > (unsigned int)v18 )
        goto LABEL_18;
      if ( v22 < v21 )
        goto LABEL_18;
      v23 = *(_DWORD *)(v38 + 84);
      v24 = v23 + *(_DWORD *)(v38 + 88);
      if ( v24 > (unsigned int)v18 )
        goto LABEL_18;
      if ( v24 < v23 )
        goto LABEL_18;
      v25 = *(_DWORD *)(v38 + 92);
      v26 = v25 + *(_DWORD *)(v38 + 96);
      if ( v26 > (unsigned int)v18 )
        goto LABEL_18;
      if ( v26 < v25 )
        goto LABEL_18;
      v27 = *(_DWORD *)(v38 + 100);
      v28 = v27 + *(_DWORD *)(v38 + 104);
      if ( v28 > (unsigned int)v18 )
        goto LABEL_18;
      if ( v28 < v27 )
        goto LABEL_18;
      v29 = *(_DWORD *)(v38 + 108);
      v30 = v29 + *(_DWORD *)(v38 + 112);
      if ( v30 > (unsigned int)v18 )
        goto LABEL_18;
      if ( v30 < v29 )
        goto LABEL_18;
      v31 = *(_DWORD *)(v38 + 116);
      v32 = v31 + *(_DWORD *)(v38 + 120);
      if ( v32 > (unsigned int)v18 )
        goto LABEL_18;
      if ( v32 < v31 )
        goto LABEL_18;
      v33 = *(_DWORD *)(v38 + 124);
      v34 = v33 + *(_DWORD *)(v38 + 128);
      if ( v34 > (unsigned int)v18 )
        goto LABEL_18;
      if ( v34 < v33 )
        goto LABEL_18;
      if ( *(_DWORD *)v38 != -20054323 )
        goto LABEL_18;
      if ( v18 != v40[0] )
        goto LABEL_18;
      if ( *(_DWORD *)(v38 + 8) != 0x10000 )
        goto LABEL_18;
      v35 = *(unsigned int *)(v38 + 12);
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
      *a3 = (__int64)v16;
    v13 = 0;
    goto LABEL_19;
  }
  v12 = LdrpGetFromMUIMemCache(BaseOfImage, 0, 0LL, 8);
  v38 = v12;
  if ( v12 != -1 )
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
