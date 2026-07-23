/*
 * XREFs of LdrQueryProcessModuleInformationEx @ 0x180068EE8
 * Callers:
 *     LdrQueryProcessModuleInformation @ 0x180002FF0 (LdrQueryProcessModuleInformation.c)
 *     RtlQueryProcessModuleInformation @ 0x180068C74 (RtlQueryProcessModuleInformation.c)
 * Callees:
 *     LdrQueryNextListEntry @ 0x180069240 (LdrQueryNextListEntry.c)
 *     LdrQueryModuleInfoFromLdrEntry @ 0x180069260 (LdrQueryModuleInfoFromLdrEntry.c)
 *     LdrQueryInLoadOrderModuleList @ 0x1800694D0 (LdrQueryInLoadOrderModuleList.c)
 *     LdrQueryInLoadOrderModuleList32 @ 0x180069500 (LdrQueryInLoadOrderModuleList32.c)
 *     LdrQueryModuleInfoLocalLoaderUnlock @ 0x180069820 (LdrQueryModuleInfoLocalLoaderUnlock.c)
 *     LdrQueryModuleInfoLocalLoaderLock @ 0x180069840 (LdrQueryModuleInfoLocalLoaderLock.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     LdrQueryModuleInfoFromLdrEntry32 @ 0x18007FD80 (LdrQueryModuleInfoFromLdrEntry32.c)
 *     LdrQueryNextListEntry32 @ 0x18007FFF0 (LdrQueryNextListEntry32.c)
 */

__int64 __fastcall LdrQueryProcessModuleInformationEx(
        _QWORD *a1,
        char a2,
        _DWORD *a3,
        unsigned int a4,
        PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator)
{
  _QWORD *v6; // r12
  unsigned int v7; // r15d
  unsigned int v8; // edi
  unsigned __int64 v9; // rsi
  PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR v10; // rdx
  int v11; // r14d
  _RTL_DYNAMIC_HASH_TABLE *v12; // rbx
  int v13; // eax
  _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR *v14; // rdx
  __int64 v15; // r12
  _RTL_DYNAMIC_HASH_TABLE *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // r12
  int v19; // eax
  unsigned int v20; // ecx
  _RTL_DYNAMIC_HASH_TABLE *v21; // rbx
  int v22; // r8d
  __int64 (__fastcall *v23)(_QWORD *, __int64, __int64 *); // rbx
  __int64 v24; // rdx
  __int64 v25; // rdx
  _RTL_DYNAMIC_HASH_TABLE *v27; // rbx
  _RTL_DYNAMIC_HASH_TABLE *v28; // rbx
  _QWORD *v29; // [rsp+38h] [rbp-A0h]
  _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR *v30; // [rsp+48h] [rbp-90h]
  __int64 v31; // [rsp+50h] [rbp-88h] BYREF
  BOOL v32; // [rsp+58h] [rbp-80h]
  _QWORD v33[2]; // [rsp+60h] [rbp-78h] BYREF
  __int64 v34; // [rsp+70h] [rbp-68h] BYREF
  int v35; // [rsp+78h] [rbp-60h]
  _QWORD v36[11]; // [rsp+80h] [rbp-58h] BYREF
  int v37; // [rsp+E0h] [rbp+8h]

  v6 = a1;
  v29 = a1;
  v7 = 8;
  v36[0] = 0LL;
  v36[1] = &LdrpProtectedCopyMemory;
  v36[2] = LdrpQueryInformationCurrentProcess;
  if ( a4 < 8 )
  {
    v8 = -1073741820;
    v30 = 0LL;
  }
  else
  {
    *a3 = 0;
    v30 = (_RTL_DYNAMIC_HASH_TABLE_ENUMERATOR *)(a3 + 2);
    v8 = 0;
  }
  if ( !a1 || (a2 & 2) != 0 )
  {
    v6 = v36;
    v29 = v36;
  }
  v9 = 0LL;
  v10 = Enumerator;
  while ( 1 )
  {
    v33[1] = v9;
    if ( v9 >= (unsigned __int64)((a2 & 1) != 0) + 1 )
      return v8;
    v37 = 10240;
    v11 = 1;
    if ( v10 )
      LODWORD(v10->HashEntry.Linkage.Flink) = v7;
    if ( (a2 & 2) != 0 )
    {
      v27 = (_RTL_DYNAMIC_HASH_TABLE *)funcs_1800691ED[5 * v9];
      ((void (__cdecl *)(PRTL_DYNAMIC_HASH_TABLE, PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR))_guard_check_icall_fptr)(v27, v10);
      ((void (*)(void))v27)();
    }
    v12 = (_RTL_DYNAMIC_HASH_TABLE *)funcs_180068FD9[5 * v9];
    ((void (__cdecl *)(PRTL_DYNAMIC_HASH_TABLE, PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR))_guard_check_icall_fptr)(v12, v10);
    v13 = ((__int64 (__fastcall *)(_QWORD *, _QWORD *, __int64 *))v12)(v6, v33, &v34);
    if ( v13 >= 0 )
    {
      v15 = v33[0];
      if ( !v33[0] )
        goto LABEL_27;
      v16 = (_RTL_DYNAMIC_HASH_TABLE *)*(&funcs_18006901D + 5 * v9);
      ((void (__cdecl *)(PRTL_DYNAMIC_HASH_TABLE, PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR))_guard_check_icall_fptr)(v16, v14);
      v17 = v15;
      v6 = v29;
      v13 = ((__int64 (__fastcall *)(_QWORD *, __int64, __int64 *))v16)(v29, v17, &v31);
      if ( v13 >= 0 )
      {
        while ( 1 )
        {
          v18 = v31;
          if ( v31 == v33[0] )
            break;
          v19 = v37;
          if ( !v37 )
          {
            v8 = -1073741271;
            break;
          }
          --v37;
          v35 = v19 - 1;
          v7 += 296 * v11;
          v11 = 1;
          v32 = 1;
          v20 = a4;
          if ( a4 < v7 )
          {
            v8 = -1073741820;
          }
          else
          {
            v21 = (_RTL_DYNAMIC_HASH_TABLE *)*(&funcs_1800690BB + 5 * v9);
            ((void (__cdecl *)(PRTL_DYNAMIC_HASH_TABLE, PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR))_guard_check_icall_fptr)(
              v21,
              v14);
            v22 = v18;
            v6 = v29;
            v13 = ((__int64 (__fastcall *)(_DWORD, _DWORD, int, _DWORD, char))v21)(
                    (_DWORD)v29,
                    (_DWORD)v30,
                    v22,
                    v34,
                    a2);
            if ( v13 < 0 )
              goto LABEL_29;
            v32 = v30->HashEntry.Signature != 0;
            v11 = v32;
            v14 = (_RTL_DYNAMIC_HASH_TABLE_ENUMERATOR *)((char *)v30 + 296 * v32);
            v30 = v14;
            v36[3] = v14;
            v18 = v31;
            v20 = a4;
          }
          if ( a3 && v20 >= 0x130 )
            *a3 += v11;
          v23 = (__int64 (__fastcall *)(_QWORD *, __int64, __int64 *))*(&funcs_18006901D + 5 * v9);
          if ( (char *)v23 == (char *)LdrQueryNextListEntry )
          {
            v24 = v18;
            v6 = v29;
            v13 = LdrQueryNextListEntry(v29, v24, &v31);
          }
          else
          {
            ((void (__cdecl *)(PRTL_DYNAMIC_HASH_TABLE, PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR))_guard_check_icall_fptr)(
              (PRTL_DYNAMIC_HASH_TABLE)*(&funcs_18006901D + 5 * v9),
              v14);
            v25 = v18;
            v6 = v29;
            v13 = v23(v29, v25, &v31);
          }
          if ( v13 < 0 )
            goto LABEL_29;
        }
LABEL_27:
        v6 = v29;
        goto LABEL_31;
      }
    }
LABEL_29:
    v8 = v13;
LABEL_31:
    if ( (a2 & 2) != 0 )
    {
      v28 = (_RTL_DYNAMIC_HASH_TABLE *)funcs_180069217[5 * v9];
      ((void (__cdecl *)(PRTL_DYNAMIC_HASH_TABLE, PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR))_guard_check_icall_fptr)(v28, v14);
      ((void (*)(void))v28)();
    }
    v10 = Enumerator;
    if ( Enumerator )
      LODWORD(Enumerator->HashEntry.Linkage.Flink) = v7;
    ++v9;
  }
}
