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
        unsigned int *a5)
{
  _QWORD *v6; // r12
  unsigned int v7; // r15d
  unsigned int v8; // edi
  unsigned __int64 v9; // rsi
  unsigned int *v10; // rdx
  int v11; // r14d
  __int64 (__fastcall *v12)(); // rbx
  int v13; // eax
  __int64 v14; // r12
  __int64 (__fastcall *v15)(_QWORD *, __int64, __int64 *); // rbx
  __int64 v16; // rdx
  __int64 v17; // r12
  int v18; // eax
  unsigned int v19; // ecx
  __int64 (__fastcall *v20)(_DWORD, _DWORD, int, _DWORD, char); // rbx
  int v21; // r8d
  __int64 (__fastcall *v22)(_QWORD *, __int64, __int64 *); // rbx
  __int64 v23; // rdx
  __int64 v24; // rdx
  void (*v26)(void); // rbx
  void (*v27)(void); // rbx
  _QWORD *v28; // [rsp+38h] [rbp-A0h]
  _DWORD *v29; // [rsp+48h] [rbp-90h]
  __int64 v30; // [rsp+50h] [rbp-88h] BYREF
  BOOL v31; // [rsp+58h] [rbp-80h]
  _QWORD v32[2]; // [rsp+60h] [rbp-78h] BYREF
  __int64 v33; // [rsp+70h] [rbp-68h] BYREF
  int v34; // [rsp+78h] [rbp-60h]
  _QWORD v35[11]; // [rsp+80h] [rbp-58h] BYREF
  int v36; // [rsp+E0h] [rbp+8h]

  v6 = a1;
  v28 = a1;
  v7 = 8;
  v35[0] = 0LL;
  v35[1] = &LdrpProtectedCopyMemory;
  v35[2] = LdrpQueryInformationCurrentProcess;
  if ( a4 < 8 )
  {
    v8 = -1073741820;
    v29 = 0LL;
  }
  else
  {
    *a3 = 0;
    v29 = a3 + 2;
    v8 = 0;
  }
  if ( !a1 || (a2 & 2) != 0 )
  {
    v6 = v35;
    v28 = v35;
  }
  v9 = 0LL;
  v10 = a5;
  while ( 1 )
  {
    v32[1] = v9;
    if ( v9 >= (unsigned __int64)((a2 & 1) != 0) + 1 )
      return v8;
    v36 = 10240;
    v11 = 1;
    if ( v10 )
      *v10 = v7;
    if ( (a2 & 2) != 0 )
    {
      v26 = (void (*)(void))funcs_1800691ED[5 * v9];
      _guard_check_icall_fptr();
      v26();
    }
    v12 = funcs_180068FD9[5 * v9];
    _guard_check_icall_fptr();
    v13 = ((__int64 (__fastcall *)(_QWORD *, _QWORD *, __int64 *))v12)(v6, v32, &v33);
    if ( v13 >= 0 )
    {
      v14 = v32[0];
      if ( !v32[0] )
        goto LABEL_27;
      v15 = (__int64 (__fastcall *)(_QWORD *, __int64, __int64 *))*(&funcs_18006901D + 5 * v9);
      _guard_check_icall_fptr();
      v16 = v14;
      v6 = v28;
      v13 = v15(v28, v16, &v30);
      if ( v13 >= 0 )
      {
        while ( 1 )
        {
          v17 = v30;
          if ( v30 == v32[0] )
            break;
          v18 = v36;
          if ( !v36 )
          {
            v8 = -1073741271;
            break;
          }
          --v36;
          v34 = v18 - 1;
          v7 += 296 * v11;
          v11 = 1;
          v31 = 1;
          v19 = a4;
          if ( a4 < v7 )
          {
            v8 = -1073741820;
          }
          else
          {
            v20 = *(&funcs_1800690BB + 5 * v9);
            _guard_check_icall_fptr();
            v21 = v17;
            v6 = v28;
            v13 = v20((_DWORD)v28, (_DWORD)v29, v21, v33, a2);
            if ( v13 < 0 )
              goto LABEL_29;
            v31 = *((_QWORD *)v29 + 2) != 0LL;
            v11 = v31;
            v29 += 74 * v31;
            v35[3] = v29;
            v17 = v30;
            v19 = a4;
          }
          if ( a3 && v19 >= 0x130 )
            *a3 += v11;
          v22 = (__int64 (__fastcall *)(_QWORD *, __int64, __int64 *))*(&funcs_18006901D + 5 * v9);
          if ( (char *)v22 == (char *)LdrQueryNextListEntry )
          {
            v23 = v17;
            v6 = v28;
            v13 = LdrQueryNextListEntry(v28, v23, &v30);
          }
          else
          {
            _guard_check_icall_fptr();
            v24 = v17;
            v6 = v28;
            v13 = v22(v28, v24, &v30);
          }
          if ( v13 < 0 )
            goto LABEL_29;
        }
LABEL_27:
        v6 = v28;
        goto LABEL_31;
      }
    }
LABEL_29:
    v8 = v13;
LABEL_31:
    if ( (a2 & 2) != 0 )
    {
      v27 = (void (*)(void))funcs_180069217[5 * v9];
      _guard_check_icall_fptr();
      v27();
    }
    v10 = a5;
    if ( a5 )
      *a5 = v7;
    ++v9;
  }
}
