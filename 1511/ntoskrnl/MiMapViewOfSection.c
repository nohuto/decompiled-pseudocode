/*
 * XREFs of MiMapViewOfSection @ 0x140419680
 * Callers:
 *     MmMapViewOfSection @ 0x1404644F4 (MmMapViewOfSection.c)
 *     MmMapSecureViewOfSection @ 0x14047CDA8 (MmMapSecureViewOfSection.c)
 *     NtMapViewOfSection @ 0x140493120 (NtMapViewOfSection.c)
 * Callees:
 *     MiSectionControlArea @ 0x1400627B0 (MiSectionControlArea.c)
 *     MiMakeProtectionMask @ 0x140062870 (MiMakeProtectionMask.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     MiArbitraryCodeBlocked @ 0x1400F5BF8 (MiArbitraryCodeBlocked.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     MiMapViewOfImageSection @ 0x1403F5860 (MiMapViewOfImageSection.c)
 *     MiMapViewOfDataSection @ 0x140416C00 (MiMapViewOfDataSection.c)
 *     MiUnmapViewOfSection @ 0x14041BC60 (MiUnmapViewOfSection.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 *     MiMapViewOfPhysicalSection @ 0x14053B280 (MiMapViewOfPhysicalSection.c)
 */

__int64 __fastcall MiMapViewOfSection(
        __int64 a1,
        struct _KPROCESS *a2,
        void **a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        _QWORD *a6,
        size_t *a7,
        int a8,
        unsigned int a9,
        unsigned int a10,
        int a11,
        _QWORD *a12)
{
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned __int64 *v16; // r9
  _QWORD *v17; // r11
  __int64 v18; // r13
  __int64 v19; // rdi
  unsigned int v20; // esi
  char ProtectionMask; // al
  unsigned int v22; // r15d
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // r8
  __int16 v26; // ax
  int v27; // esi
  size_t *v28; // r9
  _KPROCESS *v29; // r10
  unsigned __int64 *v30; // r11
  _KPROCESS *Process; // rdi
  int v32; // eax
  int v33; // eax
  int v34; // ebx
  void *v36; // r15
  BOOLEAN v37; // al
  int v38; // eax
  unsigned __int8 v39[8]; // [rsp+70h] [rbp-108h] BYREF
  struct _KPROCESS *v40; // [rsp+78h] [rbp-100h]
  size_t *v41; // [rsp+80h] [rbp-F8h]
  _QWORD *v42; // [rsp+88h] [rbp-F0h]
  unsigned __int64 v43; // [rsp+90h] [rbp-E8h]
  void *Src; // [rsp+98h] [rbp-E0h] BYREF
  void *v45; // [rsp+A0h] [rbp-D8h] BYREF
  int v46; // [rsp+A8h] [rbp-D0h]
  _QWORD *v47; // [rsp+B0h] [rbp-C8h]
  int v48; // [rsp+B8h] [rbp-C0h]
  size_t Size; // [rsp+C0h] [rbp-B8h] BYREF
  __int64 v50; // [rsp+C8h] [rbp-B0h]
  void **v51; // [rsp+D0h] [rbp-A8h]
  struct _KPROCESS *v52; // [rsp+D8h] [rbp-A0h]
  void **v53; // [rsp+E0h] [rbp-98h]
  _KPROCESS *v54; // [rsp+E8h] [rbp-90h]
  unsigned __int64 v55; // [rsp+F0h] [rbp-88h]
  __int64 v56; // [rsp+F8h] [rbp-80h]
  $D4FCF91253F76F57393CBFE908971F67 v57; // [rsp+100h] [rbp-78h] BYREF

  v43 = a4;
  v51 = a3;
  v40 = a2;
  v52 = a2;
  v53 = a3;
  v55 = a4;
  v42 = a6;
  v41 = a7;
  v47 = a12;
  v46 = 0;
  v56 = a1;
  v18 = MiSectionControlArea(a1);
  v50 = v18;
  v19 = *(_QWORD *)v18;
  v39[0] = 1;
  v20 = a10;
  if ( (a10 & 0x40000000) != 0 )
  {
    if ( (a10 & 0xF0) == 0 )
      return 3221225720LL;
    v39[0] = 0;
    v20 = a10 & 0xBFFFFFFF;
  }
  if ( (*(_DWORD *)(v15 + 56) & 0x20) != 0 )
  {
    if ( v14 )
      return 3221225721LL;
    v22 = a9;
    if ( (a9 & 0x2000) != 0 )
      return 3221225719LL;
    if ( (a9 & 0x20000000) != 0 )
    {
      if ( *v17
        || (MiFlags & 0x40000) != 0
        || (*(_DWORD *)(v18 + 56) & 0x20000) != 0
        || (v37 = SeSinglePrivilegeCheck(SeLockMemoryPrivilege, KeGetCurrentThread()->PreviousMode),
            v16 = v41,
            v17 = v42,
            !v37) )
      {
        v22 = a9 & 0xDFFFFFFF;
      }
    }
  }
  else
  {
    ProtectionMask = MiMakeProtectionMask(*(_DWORD *)(v15 + 60) & 0xFFF);
    if ( (v20 | MmCompatibleProtectionMask[ProtectionMask & 7] | 0x700) != (MmCompatibleProtectionMask[ProtectionMask & 7] | 0x700) )
      return 3221225550LL;
    v22 = a9;
  }
  v23 = *v16 + *v17;
  if ( v23 < *v17 )
    return 3221225503LL;
  v24 = *(_QWORD *)(a1 + 48);
  if ( v23 > v24 && (v22 & 0x2000) == 0 )
    return 3221225503LL;
  if ( !*v16 )
  {
    v25 = v24 - *v17;
    *v16 = v25;
    if ( (_BYTE *)MmHighestUserAddress - (_BYTE *)*a3 - 0xFFFF < v25 )
      return 3221225503LL;
  }
  if ( a5 > *v16 && (v22 & 0x2000) == 0 )
    return 3221225715LL;
  if ( *v16 > *(_QWORD *)(a1 + 48) )
  {
    if ( (v22 & 0x2000) != 0 )
    {
LABEL_43:
      if ( (*(_DWORD *)(a1 + 60) & 0x44) != 0 )
        goto LABEL_12;
      return 3221225550LL;
    }
    return 3221225503LL;
  }
  if ( (v22 & 0x2000) != 0 )
    goto LABEL_43;
LABEL_12:
  if ( (v22 & 0x800000) != 0 && ((*(_DWORD *)(a1 + 56) & 0x20) == 0 || (v22 & 0x20000000) != 0) )
    return 3221225719LL;
  v26 = *(_WORD *)(v19 + 12);
  if ( v26 < 0 )
    v20 = v20 & 0xFFFFF9FF | 0x200;
  if ( (v26 & 0x4000) != 0 )
    v20 = v20 & 0xFFFFF9FF | 0x400;
  v27 = MiMakeProtectionMask(v20);
  v48 = v27;
  if ( v27 == -1 )
    return 3221225541LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v54 = Process;
  if ( (Process[1].DirectoryTableBase & 0x400) != 0 )
  {
    if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
    {
      v22 &= ~0x20000000u;
    }
    else if ( (v27 & 2) != 0 )
    {
      return MiArbitraryCodeBlocked((__int64)Process);
    }
  }
  if ( Process != v29 )
  {
    KiStackAttachProcess(v29, 0LL, (__int64)&v57);
    v46 = 1;
    v28 = v41;
    v29 = v40;
    v30 = v42;
  }
  v32 = *(_DWORD *)(v18 + 56);
  if ( (v32 & 0x400) != 0 )
  {
    if ( v47 )
    {
      v34 = -1073741575;
      goto LABEL_25;
    }
    v33 = MiMapViewOfPhysicalSection((_DWORD)v29, (_DWORD)a3, (_DWORD)v30, (_DWORD)v28, v27, v43, v22, (__int64)v39);
  }
  else
  {
    if ( (v32 & 0x20) != 0 )
    {
      v45 = *a3;
      Src = v45;
      Size = *v28;
      while ( 1 )
      {
        v34 = MiMapViewOfImageSection(
                v18,
                (__int64)Process,
                v29,
                (unsigned __int64 *)&v45,
                v30,
                v28,
                a1,
                a8,
                v27,
                v43,
                v22,
                0);
        LODWORD(v47) = v34;
        if ( (v22 & 0x20000000) == 0 )
        {
          v36 = v45;
          goto LABEL_35;
        }
        v22 &= ~0x20000000u;
        v38 = MiMapViewOfImageSection(
                v18,
                (__int64)Process,
                v40,
                (unsigned __int64 *)&Src,
                v42,
                &Size,
                a1,
                a8,
                v27,
                v43,
                v22,
                0);
        if ( v34 < 0 )
        {
          v36 = Src;
          *v41 = Size;
          v34 = v38;
          goto LABEL_35;
        }
        if ( v38 >= 0 )
          break;
        MiUnmapViewOfSection(v40, v45, 0LL);
        v28 = v41;
        v18 = v50;
        v29 = v40;
        v30 = v42;
      }
      v36 = v45;
      memmove(v45, Src, Size);
      MiUnmapViewOfSection(v40, Src, 0LL);
LABEL_35:
      if ( v34 >= 0 )
        *v51 = v36;
      goto LABEL_25;
    }
    v33 = MiMapViewOfDataSection(
            (__int64 *)v18,
            (__int64)v29,
            (unsigned __int64 *)a3,
            v30,
            (__int64 *)v28,
            a1,
            a8,
            v27,
            a5,
            v43,
            v22,
            a11,
            v39,
            v47);
  }
  v34 = v33;
LABEL_25:
  if ( v46 )
    KiUnstackDetachProcess(&v57, 0LL);
  return (unsigned int)v34;
}
