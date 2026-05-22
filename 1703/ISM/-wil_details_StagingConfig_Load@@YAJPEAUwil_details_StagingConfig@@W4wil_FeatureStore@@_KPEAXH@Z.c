/*
 * XREFs of ?wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z @ 0x18003D954
 * Callers:
 *     ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z @ 0x18003FA18 (-IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z.c)
 *     ?WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x18003FCF0 (-WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 * Callees:
 *     ?wil_details_NtQueryWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBU__WIL__WNF_TYPE_ID@@PEBXPEAKPEAX3@Z @ 0x18003D368 (-wil_details_NtQueryWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBU__WIL__WNF_TYPE_ID@@PEBXPEAK.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     memset @ 0x18009D814 (memset.c)
 */

__int64 __fastcall wil_details_StagingConfig_Load(unsigned int *a1, unsigned int a2, __int64 a3, void *a4)
{
  const struct __WIL__WNF_TYPE_ID *v7; // rdx
  const void *v8; // r8
  unsigned int v9; // edi
  __int64 v10; // r13
  char *v11; // r15
  __int64 v12; // rax
  char *v13; // rbx
  SIZE_T v14; // r14
  unsigned int v15; // eax
  unsigned int v16; // r12d
  HANDLE ProcessHeap; // rax
  HANDLE v18; // rax
  const struct __WIL__WNF_TYPE_ID *v19; // rdx
  const void *v20; // r8
  const struct __WIL__WNF_TYPE_ID *v21; // r8
  __int64 v22; // r10
  const struct __WIL__WNF_TYPE_ID *v23; // rdx
  unsigned int v24; // r9d
  __int64 v25; // rax
  __int64 result; // rax
  char *v27; // rdx
  HANDLE v28; // rax
  unsigned int v29; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v30; // [rsp+34h] [rbp-2Ch] BYREF
  unsigned int v31[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v32; // [rsp+40h] [rbp-20h] BYREF
  __int64 v33; // [rsp+48h] [rbp-18h] BYREF

  LODWORD(v32) = a2;
  *(_QWORD *)v31 = a4;
  memset(a1, 0, 0x58uLL);
  v9 = 0;
  *a1 = a2;
  a1[1] = 0;
  v10 = 200LL;
  v11 = 0LL;
  v12 = 0x418A073AA3BC88F5LL;
  v13 = 0LL;
  v14 = -(__int64)(a4 != 0LL) & 0xC8;
  if ( !(_DWORD)v32 )
    v12 = 0x418A073AA3BC7C75LL;
  v33 = v12;
  v29 = a4 != 0LL ? 0xC8 : 0;
  v15 = wil_details_NtQueryWnfStateData((const struct __WIL__WNF_STATE_NAME *)&v33, v7, v8, a1 + 2, a4, &v29);
  v16 = v15;
  if ( v15 )
    goto LABEL_15;
  v13 = *(char **)v31;
  if ( *(_QWORD *)v31 )
    goto LABEL_15;
  do
  {
    if ( v14 < 0xC8 )
      v14 = 200LL;
    if ( v14 < v29 )
      v14 = v29;
    if ( v14 < 0x10 )
      v14 = 16LL;
    if ( v11 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v11);
    }
    v18 = GetProcessHeap();
    v11 = (char *)HeapAlloc(v18, 0, v14);
    if ( !v11 )
      return 3221225626LL;
    v29 = v14;
    v15 = wil_details_NtQueryWnfStateData((const struct __WIL__WNF_STATE_NAME *)&v33, v19, v20, a1 + 2, v11, &v29);
    v16 = v15;
    v13 = v11;
LABEL_15:
    ;
  }
  while ( v15 == -1073741789 );
  if ( v16 || !v13 )
  {
    if ( v11 )
    {
      v28 = GetProcessHeap();
      HeapFree(v28, 0, v11);
    }
    return v16;
  }
  else
  {
    v21 = (const struct __WIL__WNF_TYPE_ID *)v29;
    if ( v29 > 4 )
      *((_BYTE *)a1 + 12) = *v13;
    if ( (unsigned int)v21 >= 0x10
      && *((_BYTE *)a1 + 12) == 2
      && *((_WORD *)v13 + 1) >= 0x10u
      && (v22 = *((unsigned __int16 *)v13 + 2),
          v23 = (const struct __WIL__WNF_TYPE_ID *)(*((unsigned __int16 *)v13 + 1)
                                                  + 16LL * *((unsigned __int16 *)v13 + 3)
                                                  + 12 * v22),
          v21 >= v23) )
    {
      v30 = 0;
      v24 = 0;
      if ( (_WORD)v22 )
      {
        v25 = 0x418A073AA3BC90F5LL;
        if ( !(_DWORD)v32 )
          v25 = 0x418A073AA3BC8075LL;
        v32 = v25;
        v31[0] = 0;
        wil_details_NtQueryWnfStateData((const struct __WIL__WNF_STATE_NAME *)&v32, v23, v21, &v30, 0LL, v31);
        LODWORD(v21) = v29;
        v24 = v30;
      }
      *((_QWORD *)a1 + 3) = v13;
      *((_QWORD *)a1 + 4) = v13 + 16;
      *((_QWORD *)a1 + 5) = &v13[12 * *((unsigned __int16 *)v13 + 2) + 16];
      a1[12] = v24 != 0;
      if ( *v13 == 2 && (unsigned __int8)v13[1] < 2u )
      {
        LODWORD(v21) = *((unsigned __int16 *)v13 + 1)
                     + 16 * *((unsigned __int16 *)v13 + 3)
                     + 12 * *((unsigned __int16 *)v13 + 2);
        a1[4] = 1;
      }
    }
    else
    {
      v29 = 16;
      *(_QWORD *)v13 = 0LL;
      *((_QWORD *)v13 + 1) = 0LL;
      *((_WORD *)v13 + 1) = 16;
      *v13 = 2;
      v13[1] = 2;
      LODWORD(v21) = v29;
      *((_QWORD *)a1 + 3) = v13;
      v27 = &v13[*((unsigned __int16 *)v13 + 1)];
      *((_QWORD *)a1 + 4) = v27;
      *((_QWORD *)a1 + 5) = &v27[12 * *((unsigned __int16 *)v13 + 2)];
    }
    *((_QWORD *)a1 + 8) = (unsigned int)v21;
    if ( v11 )
      v10 = v14;
    *((_QWORD *)a1 + 7) = v13;
    *((_QWORD *)a1 + 9) = v10;
    LOBYTE(v9) = v13 == v11;
    result = 0LL;
    a1[20] = v9;
  }
  return result;
}
