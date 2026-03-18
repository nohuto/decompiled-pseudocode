/*
 * XREFs of cMapRemoteFonts @ 0x14021BC40
 * Callers:
 *     ?GrepAddFontMemResource@@YAPEAXPEAXKPEAUtagDESIGNVECTOR@@KPEAK@Z @ 0x14021BB1C (-GrepAddFontMemResource@@YAPEAXPEAXKPEAUtagDESIGNVECTOR@@KPEAK@Z.c)
 *     NtGdiAddRemoteFontToDC @ 0x14031C1A0 (NtGdiAddRemoteFontToDC.c)
 * Callees:
 *     ??1MapViewOfSectionObj@Gre@@QEAA@XZ @ 0x14020AFBC (--1MapViewOfSectionObj@Gre@@QEAA@XZ.c)
 *     ?Map@MapViewOfSectionObj@Gre@@QEAA_NPEAXW4MapKind@12@_K@Z @ 0x14021164C (-Map@MapViewOfSectionObj@Gre@@QEAA_NPEAXW4MapKind@12@_K@Z.c)
 *     ??0SectionObj@Gre@@QEAA@PEAT_LARGE_INTEGER@@@Z @ 0x14021C1D8 (--0SectionObj@Gre@@QEAA@PEAT_LARGE_INTEGER@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall cMapRemoteFonts(const void **a1, DWORD a2, _QWORD *a3, int a4)
{
  union _LARGE_INTEGER v5; // r14
  const void *v6; // rbx
  int v7; // eax
  union _LARGE_INTEGER v8; // r15
  char *v9; // r13
  char *v10; // rbx
  const void *v11; // rdx
  const void **v13; // r13
  _QWORD *v14; // r12
  char *v15; // rbx
  _QWORD *v16; // r15
  DWORD v17; // eax
  __int64 v18; // rax
  unsigned int v19; // ebx
  int v20; // [rsp+30h] [rbp-108h] BYREF
  DWORD LowPart; // [rsp+38h] [rbp-100h]
  int v22; // [rsp+40h] [rbp-F8h]
  DWORD v23; // [rsp+44h] [rbp-F4h] BYREF
  __int64 v24; // [rsp+48h] [rbp-F0h] BYREF
  int v25; // [rsp+50h] [rbp-E8h]
  unsigned int v26; // [rsp+54h] [rbp-E4h]
  _QWORD *v27; // [rsp+58h] [rbp-E0h]
  char *v28; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v29; // [rsp+68h] [rbp-D0h] BYREF
  __int64 v30; // [rsp+70h] [rbp-C8h]
  char *v31; // [rsp+78h] [rbp-C0h]
  unsigned __int64 v32; // [rsp+80h] [rbp-B8h]
  int v33; // [rsp+88h] [rbp-B0h]
  int v34; // [rsp+90h] [rbp-A8h] BYREF
  const void **v35; // [rsp+98h] [rbp-A0h]
  void *v36; // [rsp+A0h] [rbp-98h]
  unsigned __int64 v37; // [rsp+A8h] [rbp-90h]
  const void **v38; // [rsp+B0h] [rbp-88h]
  union _LARGE_INTEGER v39; // [rsp+B8h] [rbp-80h] BYREF
  const void *v40; // [rsp+C0h] [rbp-78h]
  _QWORD *v41; // [rsp+D0h] [rbp-68h]
  char *v42; // [rsp+E0h] [rbp-58h] BYREF
  int v43; // [rsp+E8h] [rbp-50h]

  v27 = a3;
  v5.QuadPart = a2;
  v38 = a1;
  v36 = a3;
  v35 = a1;
  LowPart = a2;
  v41 = a3;
  v25 = 0;
  v6 = *a1;
  v37 = (unsigned __int64)v6;
  v40 = v6;
  *a1 = 0LL;
  if ( a2 - 12 > 0xFFFFFF4 || !a3 )
    return 0LL;
  memset_0(a3, 0, 0x78uLL);
  if ( a4 == 1 )
  {
    v42 = 0LL;
    v43 = 0;
    GreProbeAndReadFromUntrustedVa(&v42, 0xCuLL, v6, 0xCuLL, 4uLL);
    v7 = HIDWORD(v42);
    v20 = HIDWORD(v42);
    if ( HIDWORD(v42) > 3 )
      return 0LL;
    if ( !HIDWORD(v42) )
    {
      v25 = 1;
      v20 = 2;
      v7 = 2;
    }
  }
  else
  {
    v20 = 1;
    v7 = 1;
  }
  v26 = (4 * v7 + 15) & 0xFFFFFFF8;
  if ( v5.LowPart < v26 )
    return 0LL;
  v8 = v5;
  v39 = v5;
  Gre::SectionObj::SectionObj((Gre::SectionObj *)&v24, &v39);
  if ( !v24 )
  {
LABEL_17:
    Gre::SectionObj::~SectionObj((Gre::SectionObj *)&v24);
    return 0LL;
  }
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 6;
  v28 = 0LL;
  if ( !(unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))Gre::MapViewOfSectionObj::Map)(
                           &v29,
                           v24,
                           1LL,
                           (union _LARGE_INTEGER)v5.QuadPart,
                           &v28) )
    goto LABEL_31;
  v9 = v31;
  v10 = v31;
  v28 = v31;
  v11 = (const void *)v37;
  if ( v37 >= (unsigned __int64)v31 && v37 < (unsigned __int64)&v31[v32] )
    goto LABEL_15;
  if ( (unsigned __int64)v31 >= v37 )
  {
    if ( a4 == 2 )
      v8.QuadPart = v5.QuadPart - 16;
    if ( (unsigned __int64)v31 < v8.QuadPart + v37 )
    {
LABEL_15:
      if ( v33 != 6 )
        Gre::MapViewOfSectionObj::Unmap((Gre::MapViewOfSectionObj *)&v29);
      goto LABEL_17;
    }
  }
  if ( a4 == 2 )
  {
    v5.LowPart -= 16;
    LowPart = v5.LowPart;
    v9 = v31 + 16;
    v42 = v31 + 16;
    v34 = 0;
    v23 = v5.LowPart;
    GreProbeAndWriteToUntrustedVa(v31, 4uLL, &v34, 4uLL, 1uLL);
    GreProbeAndWriteToUntrustedVa(v10 + 4, 4uLL, &v20, 4uLL, 1uLL);
    GreProbeAndWriteToUntrustedVa(v10 + 8, 4uLL, &v23, 4uLL, 1uLL);
    v22 = 1;
    v11 = (const void *)v37;
  }
  GreProbeAndCopyToAndFromUntrustedVa(v9, v32, v11, v5.LowPart);
  v22 = 1;
  v13 = v38;
  if ( v25 )
  {
    v23 = 0;
    GreProbeAndWriteToUntrustedVa(v10, 4uLL, &v23, 4uLL, 1uLL);
    GreProbeAndWriteToUntrustedVa(v10 + 4, 4uLL, &v20, 4uLL, 1uLL);
  }
  v14 = v27;
  if ( !Gre::MapViewOfSectionObj::Unmap((Gre::MapViewOfSectionObj *)&v29)
    || !(unsigned __int8)Gre::MapViewOfSectionObj::Map((__int64)&v29, v24, 5LL, 0LL) )
  {
LABEL_31:
    Gre::MapViewOfSectionObj::~MapViewOfSectionObj((Gre::MapViewOfSectionObj *)&v29);
    goto LABEL_17;
  }
  v15 = v31;
  v16 = v41;
  v41[13] = v31;
  v14[2] = &v15[v26];
  v17 = v5.LowPart + 16;
  if ( a4 != 2 )
    v17 = v5.LowPart;
  *((_DWORD *)v14 + 6) = v17 - v26;
  v16[11] = v32;
  *((_DWORD *)v16 + 24) = 0;
  *((_DWORD *)v16 + 25) = 1;
  v18 = v24;
  v24 = 0LL;
  v14[4] = v18;
  *((_DWORD *)v16 + 28) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  v14[9] = v29;
  *v13 = v15;
  v31 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v32 = 0LL;
  v33 = 6;
  v19 = v20;
  Gre::MapViewOfSectionObj::~MapViewOfSectionObj((Gre::MapViewOfSectionObj *)&v29);
  Gre::SectionObj::~SectionObj((Gre::SectionObj *)&v24);
  return v19;
}
