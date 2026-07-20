/*
 * XREFs of sub_1400066B0 @ 0x1400066B0
 * Callers:
 *     sub_140005E5C @ 0x140005E5C (sub_140005E5C.c)
 * Callees:
 *     sub_140006B70 @ 0x140006B70 (sub_140006B70.c)
 *     sub_140008D78 @ 0x140008D78 (sub_140008D78.c)
 *     __security_check_cookie @ 0x14000BFC0 (__security_check_cookie.c)
 *     memcpy @ 0x14000C480 (memcpy.c)
 */

NTSTATUS sub_1400066B0()
{
  int v0; // ebx
  NTSTATUS result; // eax
  __int64 *v2; // rdi
  __int64 *v3; // rcx
  __int64 v4; // rax
  unsigned __int64 v5; // rdi
  int v6; // ecx
  bool v7; // zf
  char *v8; // rdi
  char *v9; // rdi
  __int64 v10; // rsi
  char *v11; // rdi
  char *v12; // rdi
  NTSTATUS v13; // eax
  _QWORD *v14; // rcx
  ULONG_PTR ViewSize; // [rsp+58h] [rbp-B0h] BYREF
  char *v16; // [rsp+60h] [rbp-A8h] BYREF
  _WORD *v17; // [rsp+68h] [rbp-A0h] BYREF
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
  v23 = &dword_140020910;
  v27 = &sub_140008270;
  v20 = sub_1400083D0;
  v28 = 16;
  v22 = L"SubSystems";
  v30 = &dword_140020910;
  v29 = L"Required";
  v34 = &sub_140008270;
  v36 = L"Optional";
  v35 = 16;
  v41 = sub_140011A70;
  v37 = &dword_140020910;
  v43 = L"Execute";
  v44 = &dword_140020910;
  qword_140020930 = (__int64)&qword_140020928;
  qword_140020928 = (__int64)&qword_140020928;
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
  qword_140020920 = (__int64)&qword_140020918;
  qword_140020918 = (__int64)&qword_140020918;
  qword_140020940 = (__int64)&qword_140020938;
  qword_140020938 = (__int64)&qword_140020938;
  result = RtlQueryRegistryValuesEx(2LL, L"Session Manager", &v20);
  if ( result >= 0 )
  {
    v2 = (__int64 *)qword_140020918;
    while ( v2 != &qword_140020918 )
    {
      v3 = v2;
      v2 = (__int64 *)*v2;
      sub_140008D78(v3);
    }
    if ( (__int64 *)qword_140020938 == &qword_140020938 )
    {
      v4 = 0LL;
      qword_140020158 = 0LL;
    }
    else
    {
      v4 = qword_140020940;
      v14 = *(_QWORD **)(qword_140020940 + 8);
      if ( *(__int64 **)qword_140020940 != &qword_140020938 || *v14 != qword_140020940 )
        __fastfail(3u);
      qword_140020940 = *(_QWORD *)(qword_140020940 + 8);
      *v14 = &qword_140020938;
      qword_140020158 = v4;
    }
    v5 = (16LL * (unsigned int)dword_140020910 + 105) & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v4 )
      v6 = *(unsigned __int16 *)(v4 + 16);
    else
      v6 = 0;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    MaximumSize.QuadPart = (unsigned int)dword_140020914
                         + (__int64)v6
                         + v5
                         + String1.Length
                         + stru_1400208A0.Length
                         + 6LL;
    ObjectAttributes.Attributes = 2;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = NtCreateSection(&SectionHandle, 6u, &ObjectAttributes, &MaximumSize, 4u, 0x8400000u, 0LL);
    if ( result >= 0 )
    {
      ViewSize = 0LL;
      result = NtMapViewOfSection(
                 SectionHandle,
                 (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                 &BaseAddress,
                 0LL,
                 0LL,
                 0LL,
                 &ViewSize,
                 ViewUnmap,
                 0,
                 4u);
      if ( result >= 0 )
      {
        v7 = dword_140020160 == 0;
        *(_DWORD *)BaseAddress = 0;
        if ( !v7 )
          *(_DWORD *)BaseAddress |= 1u;
        v8 = (char *)BaseAddress + v5;
        *((_QWORD *)BaseAddress + 1) = v8 - (_BYTE *)BaseAddress;
        *((_WORD *)BaseAddress + 8) = stru_1400208A0.Length;
        memcpy(v8, stru_1400208A0.Buffer, stru_1400208A0.Length);
        v9 = &v8[stru_1400208A0.Length];
        *(_WORD *)v9 = 0;
        v9 += 2;
        *((_QWORD *)BaseAddress + 3) = v9 - (_BYTE *)BaseAddress;
        *((_WORD *)BaseAddress + 16) = String1.Length;
        memcpy(v9, String1.Buffer, String1.Length);
        v10 = qword_140020158;
        v11 = &v9[String1.Length];
        *(_WORD *)v11 = 0;
        v12 = v11 + 2;
        *((_QWORD *)BaseAddress + 5) = v12 - (_BYTE *)BaseAddress;
        if ( v10 && *(_QWORD *)(v10 + 24) )
        {
          *((_WORD *)BaseAddress + 24) = *(_WORD *)(v10 + 16);
          memcpy(v12, *(const void **)(v10 + 24), *(unsigned __int16 *)(v10 + 16));
          v12 += *(unsigned __int16 *)(v10 + 16);
        }
        else
        {
          *((_WORD *)BaseAddress + 24) = 0;
        }
        *(_WORD *)v12 = 0;
        v16 = (char *)BaseAddress + 104;
        v17 = v12 + 2;
        sub_140006B70((unsigned int)&qword_140020928, 0, 1, 0, (__int64)&v16, (__int64)&v17);
        sub_140006B70((unsigned int)&qword_140020130, 1, 0, 1, (__int64)&v16, (__int64)&v17);
        sub_140006B70((unsigned int)&qword_140020938, 0, 1, 2, (__int64)&v16, (__int64)&v17);
        NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
        result = NtDuplicateObject(
                   (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                   SectionHandle,
                   (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                   &SectionHandle,
                   4u,
                   2u,
                   9u);
        if ( result >= 0 )
        {
          ViewSize = 0LL;
          BaseAddress = 0LL;
          v13 = NtMapViewOfSection(
                  SectionHandle,
                  (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                  &BaseAddress,
                  0LL,
                  0LL,
                  0LL,
                  &ViewSize,
                  ViewUnmap,
                  0,
                  2u);
          if ( v13 < 0 )
            return v13;
          return v0;
        }
      }
    }
  }
  return result;
}
