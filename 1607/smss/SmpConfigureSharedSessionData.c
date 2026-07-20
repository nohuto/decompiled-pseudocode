/*
 * XREFs of SmpConfigureSharedSessionData @ 0x14000699C
 * Callers:
 *     SmpLoadDataFromRegistry @ 0x14000614C (SmpLoadDataFromRegistry.c)
 * Callees:
 *     SmpCopyListToSharedSection @ 0x140006E64 (SmpCopyListToSharedSection.c)
 *     SmpFreeSavedRegistryEntry @ 0x140009354 (SmpFreeSavedRegistryEntry.c)
 *     __security_check_cookie @ 0x14000C850 (__security_check_cookie.c)
 *     memcpy_0 @ 0x14000CC54 (memcpy_0.c)
 */

NTSTATUS SmpConfigureSharedSessionData()
{
  int v0; // ebx
  NTSTATUS result; // eax
  __int64 *v2; // rdi
  __int64 v3; // rax
  unsigned __int64 v4; // rdi
  int v5; // ecx
  bool v6; // zf
  char *v7; // rdi
  char *v8; // rdi
  __int64 v9; // rsi
  char *v10; // rdi
  char *v11; // rdi
  NTSTATUS v12; // eax
  __int64 *v13; // rcx
  _QWORD *v14; // rcx
  _WORD *v15; // [rsp+58h] [rbp-B0h] BYREF
  char *v16; // [rsp+60h] [rbp-A8h] BYREF
  ULONG_PTR ViewSize; // [rsp+68h] [rbp-A0h] BYREF
  union _LARGE_INTEGER MaximumSize; // [rsp+70h] [rbp-98h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-90h] BYREF
  __int64 (__usercall *v20)@<rax>(wchar_t *@<rcx>, int, __int64); // [rsp+A8h] [rbp-60h] BYREF
  int v21; // [rsp+B0h] [rbp-58h]
  const wchar_t *v22; // [rsp+B8h] [rbp-50h]
  int *v23; // [rsp+C0h] [rbp-48h]
  int v24; // [rsp+C8h] [rbp-40h]
  __int64 v25; // [rsp+D0h] [rbp-38h]
  int v26; // [rsp+D8h] [rbp-30h]
  void *v27; // [rsp+E0h] [rbp-28h]
  int v28; // [rsp+E8h] [rbp-20h]
  const wchar_t *v29; // [rsp+F0h] [rbp-18h]
  int *v30; // [rsp+F8h] [rbp-10h]
  int v31; // [rsp+100h] [rbp-8h]
  __int64 v32; // [rsp+108h] [rbp+0h]
  int v33; // [rsp+110h] [rbp+8h]
  void *v34; // [rsp+118h] [rbp+10h]
  int v35; // [rsp+120h] [rbp+18h]
  const wchar_t *v36; // [rsp+128h] [rbp+20h]
  int *v37; // [rsp+130h] [rbp+28h]
  int v38; // [rsp+138h] [rbp+30h]
  __int64 v39; // [rsp+140h] [rbp+38h]
  int v40; // [rsp+148h] [rbp+40h]
  __int64 (__fastcall *v41)(int, int, int, int, int, __int64); // [rsp+150h] [rbp+48h]
  int v42; // [rsp+158h] [rbp+50h]
  const wchar_t *v43; // [rsp+160h] [rbp+58h]
  int *v44; // [rsp+168h] [rbp+60h]
  int v45; // [rsp+170h] [rbp+68h]
  __int64 v46; // [rsp+178h] [rbp+70h]
  int v47; // [rsp+180h] [rbp+78h]
  __int64 v48; // [rsp+188h] [rbp+80h]
  int v49; // [rsp+190h] [rbp+88h]
  __int128 v50; // [rsp+198h] [rbp+90h]
  int v51; // [rsp+1A8h] [rbp+A0h]
  __int64 v52; // [rsp+1B0h] [rbp+A8h]
  int v53; // [rsp+1B8h] [rbp+B0h]

  v0 = 0;
  v21 = 17;
  v24 = 0;
  v23 = &dword_140026218;
  v27 = &SmpBuildSubSystemLists;
  v20 = SmpConfigureSubSystems;
  v28 = 16;
  v22 = L"SubSystems";
  v30 = &dword_140026218;
  v29 = L"Required";
  v34 = &SmpBuildSubSystemLists;
  v36 = L"Optional";
  v35 = 16;
  v41 = SmpConfigureExecute;
  v37 = &dword_140026218;
  v43 = L"Execute";
  v44 = &dword_140026218;
  qword_140026238 = (__int64)&qword_140026230;
  qword_140026230 = (__int64)&qword_140026230;
  v25 = 0LL;
  v26 = 0;
  v31 = 0;
  v32 = 0LL;
  v33 = 0;
  v38 = 0;
  v39 = 0LL;
  v40 = 0;
  v42 = 2;
  v45 = 0;
  v46 = 0LL;
  v47 = 0;
  v48 = 0LL;
  v49 = 0;
  v50 = 0LL;
  v51 = 0;
  v52 = 0LL;
  v53 = 0;
  qword_140026228 = (__int64)&qword_140026220;
  qword_140026220 = (__int64)&qword_140026220;
  qword_140026248 = (__int64)&qword_140026240;
  qword_140026240 = (__int64)&qword_140026240;
  result = RtlQueryRegistryValuesEx(2LL, L"Session Manager", &v20);
  if ( result >= 0 )
  {
    v2 = (__int64 *)qword_140026220;
    while ( v2 != &qword_140026220 )
    {
      v13 = v2;
      v2 = (__int64 *)*v2;
      SmpFreeSavedRegistryEntry(v13);
    }
    if ( (__int64 *)qword_140026240 == &qword_140026240 )
    {
      v3 = 0LL;
      SmpInitExecuteCmd = 0LL;
    }
    else
    {
      v3 = qword_140026248;
      v14 = *(_QWORD **)(qword_140026248 + 8);
      if ( *(__int64 **)qword_140026248 != &qword_140026240 || *v14 != qword_140026248 )
        __fastfail(3u);
      qword_140026248 = *(_QWORD *)(qword_140026248 + 8);
      *v14 = &qword_140026240;
      SmpInitExecuteCmd = v3;
    }
    v4 = (16LL * (unsigned int)dword_140026218 + 105) & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v3 )
      v5 = *(unsigned __int16 *)(v3 + 16);
    else
      v5 = 0;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    MaximumSize.QuadPart = (unsigned int)dword_14002621C
                         + (__int64)v5
                         + v4
                         + SmpS0InitCmd.Length
                         + SmpDefaultLibPath.Length
                         + 6LL;
    ObjectAttributes.Attributes = 2;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = NtCreateSection(&SmpSharedSection, 6u, &ObjectAttributes, &MaximumSize, 4u, 0x8400000u, 0LL);
    if ( result >= 0 )
    {
      ViewSize = 0LL;
      result = NtMapViewOfSection(
                 SmpSharedSection,
                 (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                 &SmpMappedView,
                 0LL,
                 0LL,
                 0LL,
                 &ViewSize,
                 ViewUnmap,
                 0,
                 4u);
      if ( result >= 0 )
      {
        v6 = SmpS0CommandOverride == 0;
        *(_DWORD *)SmpMappedView = 0;
        if ( !v6 )
          *(_DWORD *)SmpMappedView |= 1u;
        v7 = (char *)SmpMappedView + v4;
        *((_QWORD *)SmpMappedView + 1) = v7 - (_BYTE *)SmpMappedView;
        *((_WORD *)SmpMappedView + 8) = SmpDefaultLibPath.Length;
        memcpy_0(v7, SmpDefaultLibPath.Buffer, SmpDefaultLibPath.Length);
        v8 = &v7[SmpDefaultLibPath.Length];
        *(_WORD *)v8 = 0;
        v8 += 2;
        *((_QWORD *)SmpMappedView + 3) = v8 - (_BYTE *)SmpMappedView;
        *((_WORD *)SmpMappedView + 16) = SmpS0InitCmd.Length;
        memcpy_0(v8, SmpS0InitCmd.Buffer, SmpS0InitCmd.Length);
        v9 = SmpInitExecuteCmd;
        v10 = &v8[SmpS0InitCmd.Length];
        *(_WORD *)v10 = 0;
        v11 = v10 + 2;
        *((_QWORD *)SmpMappedView + 5) = v11 - (_BYTE *)SmpMappedView;
        if ( v9 && *(_QWORD *)(v9 + 24) )
        {
          *((_WORD *)SmpMappedView + 24) = *(_WORD *)(v9 + 16);
          memcpy_0(v11, *(const void **)(v9 + 24), *(unsigned __int16 *)(v9 + 16));
          v11 += *(unsigned __int16 *)(v9 + 16);
        }
        else
        {
          *((_WORD *)SmpMappedView + 24) = 0;
        }
        *(_WORD *)v11 = 0;
        v16 = (char *)SmpMappedView + 104;
        v15 = v11 + 2;
        SmpCopyListToSharedSection((unsigned int)&qword_140026230, 0, 1, 0, (__int64)&v16, (__int64)&v15);
        SmpCopyListToSharedSection((unsigned int)&SmpSubSystemsRequired, 1, 0, 1, (__int64)&v16, (__int64)&v15);
        SmpCopyListToSharedSection((unsigned int)&qword_140026240, 0, 1, 2, (__int64)&v16, (__int64)&v15);
        NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, SmpMappedView);
        result = NtDuplicateObject(
                   (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                   SmpSharedSection,
                   (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                   &SmpSharedSection,
                   4u,
                   2u,
                   9u);
        if ( result >= 0 )
        {
          ViewSize = 0LL;
          SmpMappedView = 0LL;
          v12 = NtMapViewOfSection(
                  SmpSharedSection,
                  (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                  &SmpMappedView,
                  0LL,
                  0LL,
                  0LL,
                  &ViewSize,
                  ViewUnmap,
                  0,
                  2u);
          if ( v12 < 0 )
            return v12;
          return v0;
        }
      }
    }
  }
  return result;
}
