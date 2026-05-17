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
        unsigned int *a5)
{
  _QWORD *v6; // r12
  unsigned int v7; // r15d
  unsigned int v8; // edi
  _DWORD *v9; // rax
  unsigned __int64 v10; // rsi
  unsigned int *v11; // rdx
  int v12; // r14d
  void (*v13)(void); // rbx
  __int64 (__fastcall *v14)(); // rbx
  int ModuleInfoFromLdrEntry; // eax
  __int64 v16; // r12
  __int64 (__fastcall *v17)(_QWORD *, __int64, __int64 *); // rbx
  __int64 v18; // rdx
  __int64 v19; // rbx
  int v20; // eax
  unsigned int v21; // ecx
  __int64 (__fastcall *v22)(_DWORD, _DWORD, int, _DWORD, char); // r12
  _DWORD *v23; // rbx
  __int64 (__fastcall *v24)(_QWORD *, __int64, __int64 *); // r12
  int v25; // r8d
  void (*v26)(void); // rbx
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
  v29 = v9;
  if ( !a1 || (a2 & 2) != 0 )
  {
    v6 = v35;
    v28 = v35;
  }
  v10 = 0LL;
  v11 = a5;
  while ( 1 )
  {
    v32[1] = v10;
    if ( v10 >= (unsigned __int64)((a2 & 1) != 0) + 1 )
      return v8;
    v36 = 10240;
    v12 = 1;
    if ( v11 )
      *v11 = v7;
    if ( (a2 & 2) != 0 )
    {
      v13 = (void (*)(void))funcs_18006C80B[5 * v10];
      _guard_check_icall_fptr();
      v13();
    }
    v14 = funcs_18006C835[5 * v10];
    _guard_check_icall_fptr();
    ModuleInfoFromLdrEntry = ((__int64 (__fastcall *)(_QWORD *, _QWORD *, __int64 *))v14)(v6, v32, &v33);
    if ( ModuleInfoFromLdrEntry < 0 )
      goto LABEL_32;
    v16 = v32[0];
    if ( !v32[0] )
    {
      v6 = v28;
      goto LABEL_34;
    }
    v17 = (__int64 (__fastcall *)(_QWORD *, __int64, __int64 *))*(&funcs_18006C879 + 5 * v10);
    _guard_check_icall_fptr();
    v18 = v16;
    v6 = v28;
    ModuleInfoFromLdrEntry = v17(v28, v18, &v30);
    if ( ModuleInfoFromLdrEntry < 0 )
    {
LABEL_32:
      v8 = ModuleInfoFromLdrEntry;
    }
    else
    {
      while ( 1 )
      {
        v19 = v30;
        if ( v30 == v32[0] )
          break;
        v20 = v36;
        if ( !v36 )
        {
          v8 = -1073741271;
          break;
        }
        --v36;
        v34 = v20 - 1;
        v7 += 296 * v12;
        v12 = 1;
        v31 = 1;
        v21 = a4;
        if ( a4 < v7 )
        {
          v8 = -1073741820;
        }
        else
        {
          v22 = *(&funcs_18006CA0C + 5 * v10);
          if ( v22 == LdrQueryModuleInfoFromLdrEntry )
          {
            v23 = v29;
            v6 = v28;
            ModuleInfoFromLdrEntry = LdrQueryModuleInfoFromLdrEntry((_DWORD)v28, (_DWORD)v29, v30, v33, a2);
          }
          else
          {
            _guard_check_icall_fptr();
            v25 = v19;
            v23 = v29;
            ModuleInfoFromLdrEntry = v22((_DWORD)v28, (_DWORD)v29, v25, v33, a2);
            v6 = v28;
          }
          if ( ModuleInfoFromLdrEntry < 0 )
            goto LABEL_32;
          v31 = *((_QWORD *)v23 + 2) != 0LL;
          v12 = v31;
          v29 = &v23[74 * v31];
          v35[3] = v29;
          v19 = v30;
          v21 = a4;
        }
        if ( a3 && v21 >= 0x130 )
          *a3 += v12;
        v24 = (__int64 (__fastcall *)(_QWORD *, __int64, __int64 *))*(&funcs_18006C879 + 5 * v10);
        if ( (char *)v24 == (char *)LdrQueryNextListEntry )
        {
          v6 = v28;
          ModuleInfoFromLdrEntry = LdrQueryNextListEntry(v28, v19, &v30);
        }
        else
        {
          _guard_check_icall_fptr();
          ModuleInfoFromLdrEntry = v24(v28, v19, &v30);
          v6 = v28;
        }
        if ( ModuleInfoFromLdrEntry < 0 )
          goto LABEL_32;
      }
    }
LABEL_34:
    if ( (a2 & 2) != 0 )
    {
      v26 = (void (*)(void))funcs_18006CA4C[5 * v10];
      _guard_check_icall_fptr();
      v26();
    }
    v11 = a5;
    if ( a5 )
      *a5 = v7;
    ++v10;
  }
}
