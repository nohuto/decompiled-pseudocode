/*
 * XREFs of LdrQueryProcessModuleInformationEx @ 0x18006C728
 * Callers:
 *     LdrQueryProcessModuleInformation @ 0x18006C240 (LdrQueryProcessModuleInformation.c)
 *     RtlQueryProcessModuleInformation @ 0x18006C4B4 (RtlQueryProcessModuleInformation.c)
 * Callees:
 *     LdrQueryNextListEntry @ 0x18006CAA0 (LdrQueryNextListEntry.c)
 *     LdrQueryModuleInfoFromLdrEntry @ 0x18006CB50 (LdrQueryModuleInfoFromLdrEntry.c)
 *     LdrQueryInLoadOrderModuleList @ 0x18006CD90 (LdrQueryInLoadOrderModuleList.c)
 *     LdrQueryModuleInfoLocalLoaderUnlock @ 0x18006CDC0 (LdrQueryModuleInfoLocalLoaderUnlock.c)
 *     LdrQueryModuleInfoLocalLoaderLock @ 0x18006CDE0 (LdrQueryModuleInfoLocalLoaderLock.c)
 *     LdrQueryInLoadOrderModuleList32 @ 0x18006CE80 (LdrQueryInLoadOrderModuleList32.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     LdrQueryModuleInfoFromLdrEntry32 @ 0x180087800 (LdrQueryModuleInfoFromLdrEntry32.c)
 *     LdrQueryNextListEntry32 @ 0x1800878C0 (LdrQueryNextListEntry32.c)
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
  _DWORD *v9; // rax
  unsigned __int64 v10; // rsi
  PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR v11; // rdx
  int v12; // r14d
  _RTL_DYNAMIC_HASH_TABLE *v13; // rbx
  _RTL_DYNAMIC_HASH_TABLE *v14; // rbx
  int ModuleInfoFromLdrEntry; // eax
  _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR *v16; // rdx
  __int64 v17; // r12
  _RTL_DYNAMIC_HASH_TABLE *v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rbx
  int v21; // eax
  unsigned int v22; // ecx
  __int64 (__fastcall *v23)(_DWORD, _DWORD, int, _DWORD, char); // r12
  _DWORD *v24; // rbx
  __int64 (__fastcall *v25)(_QWORD *, __int64, __int64 *); // r12
  int v26; // r8d
  _RTL_DYNAMIC_HASH_TABLE *v27; // rbx
  _QWORD *v29; // [rsp+38h] [rbp-A0h]
  _DWORD *v30; // [rsp+48h] [rbp-90h]
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
  if ( a4 >= 8 )
  {
    *a3 = 0;
    v9 = a3 + 2;
    v8 = 0;
  }
  else
  {
    v8 = -1073741820;
    v9 = 0LL;
  }
  v30 = v9;
  if ( !a1 || (a2 & 2) != 0 )
  {
    v6 = v36;
    v29 = v36;
  }
  v10 = 0LL;
  v11 = Enumerator;
  while ( 1 )
  {
    v33[1] = v10;
    if ( v10 >= (unsigned __int64)((a2 & 1) != 0) + 1 )
      return v8;
    v37 = 10240;
    v12 = 1;
    if ( v11 )
      LODWORD(v11->HashEntry.Linkage.Flink) = v7;
    if ( (a2 & 2) != 0 )
    {
      v13 = (_RTL_DYNAMIC_HASH_TABLE *)funcs_18006C80B[5 * v10];
      ((void (__cdecl *)(PRTL_DYNAMIC_HASH_TABLE, PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR))_guard_check_icall_fptr)(v13, v11);
      ((void (*)(void))v13)();
    }
    v14 = (_RTL_DYNAMIC_HASH_TABLE *)funcs_18006C835[5 * v10];
    ((void (__cdecl *)(PRTL_DYNAMIC_HASH_TABLE, PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR))_guard_check_icall_fptr)(v14, v11);
    ModuleInfoFromLdrEntry = ((__int64 (__fastcall *)(_QWORD *, _QWORD *, __int64 *))v14)(v6, v33, &v34);
    if ( ModuleInfoFromLdrEntry < 0 )
      goto LABEL_32;
    v17 = v33[0];
    if ( !v33[0] )
    {
      v6 = v29;
      goto LABEL_34;
    }
    v18 = (_RTL_DYNAMIC_HASH_TABLE *)*(&funcs_18006C879 + 5 * v10);
    ((void (__cdecl *)(PRTL_DYNAMIC_HASH_TABLE, PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR))_guard_check_icall_fptr)(v18, v16);
    v19 = v17;
    v6 = v29;
    ModuleInfoFromLdrEntry = ((__int64 (__fastcall *)(_QWORD *, __int64, __int64 *))v18)(v29, v19, &v31);
    if ( ModuleInfoFromLdrEntry < 0 )
    {
LABEL_32:
      v8 = ModuleInfoFromLdrEntry;
    }
    else
    {
      while ( 1 )
      {
        v20 = v31;
        if ( v31 == v33[0] )
          break;
        v21 = v37;
        if ( !v37 )
        {
          v8 = -1073741271;
          break;
        }
        --v37;
        v35 = v21 - 1;
        v7 += 296 * v12;
        v12 = 1;
        v32 = 1;
        v22 = a4;
        if ( a4 < v7 )
        {
          v8 = -1073741820;
        }
        else
        {
          v23 = *(&funcs_18006CA0C + 5 * v10);
          if ( v23 == LdrQueryModuleInfoFromLdrEntry )
          {
            v24 = v30;
            v6 = v29;
            ModuleInfoFromLdrEntry = LdrQueryModuleInfoFromLdrEntry((_DWORD)v29, (_DWORD)v30, v31, v34, a2);
          }
          else
          {
            ((void (__cdecl *)(PRTL_DYNAMIC_HASH_TABLE, PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR))_guard_check_icall_fptr)(
              (PRTL_DYNAMIC_HASH_TABLE)*(&funcs_18006CA0C + 5 * v10),
              v16);
            v26 = v20;
            v24 = v30;
            ModuleInfoFromLdrEntry = v23((_DWORD)v29, (_DWORD)v30, v26, v34, a2);
            v6 = v29;
          }
          if ( ModuleInfoFromLdrEntry < 0 )
            goto LABEL_32;
          v32 = *((_QWORD *)v24 + 2) != 0LL;
          v12 = v32;
          v30 = &v24[74 * v32];
          v36[3] = v30;
          v20 = v31;
          v22 = a4;
        }
        if ( a3 && v22 >= 0x130 )
          *a3 += v12;
        v25 = (__int64 (__fastcall *)(_QWORD *, __int64, __int64 *))*(&funcs_18006C879 + 5 * v10);
        if ( (char *)v25 == (char *)LdrQueryNextListEntry )
        {
          v6 = v29;
          ModuleInfoFromLdrEntry = LdrQueryNextListEntry(v29, v20, &v31);
        }
        else
        {
          ((void (__cdecl *)(PRTL_DYNAMIC_HASH_TABLE, PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR))_guard_check_icall_fptr)(
            (PRTL_DYNAMIC_HASH_TABLE)*(&funcs_18006C879 + 5 * v10),
            v16);
          ModuleInfoFromLdrEntry = v25(v29, v20, &v31);
          v6 = v29;
        }
        if ( ModuleInfoFromLdrEntry < 0 )
          goto LABEL_32;
      }
    }
LABEL_34:
    if ( (a2 & 2) != 0 )
    {
      v27 = (_RTL_DYNAMIC_HASH_TABLE *)funcs_18006CA4C[5 * v10];
      ((void (__cdecl *)(PRTL_DYNAMIC_HASH_TABLE, PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR))_guard_check_icall_fptr)(v27, v16);
      ((void (*)(void))v27)();
    }
    v11 = Enumerator;
    if ( Enumerator )
      LODWORD(Enumerator->HashEntry.Linkage.Flink) = v7;
    ++v10;
  }
}
