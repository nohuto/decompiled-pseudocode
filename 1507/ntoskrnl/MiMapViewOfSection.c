/*
 * XREFs of MiMapViewOfSection @ 0x1404BA540
 * Callers:
 *     MiMapCfgBitMapSection @ 0x140463740 (MiMapCfgBitMapSection.c)
 *     MmMapViewOfSection @ 0x140466864 (MmMapViewOfSection.c)
 *     AlpcpCreateView @ 0x140475280 (AlpcpCreateView.c)
 *     NtMapViewOfSection @ 0x1404B5D50 (NtMapViewOfSection.c)
 * Callees:
 *     MiSectionControlArea @ 0x140089EB0 (MiSectionControlArea.c)
 *     MiMakeProtectionMask @ 0x14008E520 (MiMakeProtectionMask.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     MiArbitraryCodeBlocked @ 0x1400DCCF8 (MiArbitraryCodeBlocked.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     MiMapViewOfImageSection @ 0x140421990 (MiMapViewOfImageSection.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     MiMapViewOfDataSection @ 0x1404B64E0 (MiMapViewOfDataSection.c)
 *     MiUnmapViewOfSection @ 0x1404B72D0 (MiUnmapViewOfSection.c)
 *     MiMapViewOfPhysicalSection @ 0x1405B2C58 (MiMapViewOfPhysicalSection.c)
 */

__int64 __fastcall MiMapViewOfSection(
        __int64 a1,
        struct _KPROCESS *a2,
        unsigned __int64 *a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 *a6,
        size_t *a7,
        int a8,
        unsigned int a9,
        unsigned int a10,
        int a11,
        _QWORD *a12)
{
  __int64 v14; // rcx
  unsigned __int64 *v15; // r9
  unsigned __int64 *v16; // r11
  __int64 v17; // r13
  __int64 v18; // rdi
  unsigned int v19; // esi
  char ProtectionMask; // al
  unsigned int v21; // r12d
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // r8
  __int16 v25; // ax
  int v26; // esi
  size_t *v27; // r9
  _KPROCESS *v28; // r10
  unsigned __int64 *v29; // r11
  _KPROCESS *Process; // rdi
  int v31; // eax
  int v32; // eax
  int v33; // ebx
  BOOLEAN v35; // al
  int v36; // eax
  void *v37; // r12
  unsigned __int8 v38[8]; // [rsp+70h] [rbp-F8h] BYREF
  struct _KPROCESS *v39; // [rsp+78h] [rbp-F0h]
  unsigned __int64 *v40; // [rsp+80h] [rbp-E8h]
  size_t *v41; // [rsp+88h] [rbp-E0h]
  unsigned __int64 *v42; // [rsp+90h] [rbp-D8h]
  unsigned __int64 v43; // [rsp+98h] [rbp-D0h]
  int v44; // [rsp+A0h] [rbp-C8h]
  _QWORD *v45; // [rsp+A8h] [rbp-C0h]
  void *Src; // [rsp+B0h] [rbp-B8h] BYREF
  int v47; // [rsp+B8h] [rbp-B0h]
  size_t Size; // [rsp+C0h] [rbp-A8h] BYREF
  __int64 v49; // [rsp+C8h] [rbp-A0h]
  struct _KPROCESS *v50; // [rsp+D0h] [rbp-98h]
  unsigned __int64 *v51; // [rsp+D8h] [rbp-90h]
  _KPROCESS *v52; // [rsp+E0h] [rbp-88h]
  unsigned __int64 v53; // [rsp+E8h] [rbp-80h]
  __int64 v54; // [rsp+F0h] [rbp-78h]
  _BYTE v55[48]; // [rsp+F8h] [rbp-70h] BYREF

  v43 = a4;
  v42 = a3;
  v39 = a2;
  v50 = a2;
  v51 = a3;
  v53 = a4;
  v40 = a6;
  v41 = a7;
  v45 = a12;
  v44 = 0;
  v54 = a1;
  v17 = MiSectionControlArea(a1);
  v49 = v17;
  v18 = *(_QWORD *)v17;
  v38[0] = 1;
  v19 = a10;
  if ( (a10 & 0x40000000) != 0 )
  {
    if ( (a10 & 0xF0) == 0 )
      return 3221225720LL;
    v38[0] = 0;
    v19 = a10 & 0xBFFFFFFF;
  }
  if ( (*(_DWORD *)(v14 + 56) & 0x20) != 0 )
  {
    v21 = a9;
    if ( (a9 & 0x20000000) != 0 )
    {
      if ( *v16
        || (BYTE2(MiFlags) & 3u) > 1
        || (*(_DWORD *)(v17 + 56) & 0x20000) != 0
        || (v35 = SeSinglePrivilegeCheck(SeLockMemoryPrivilege, KeGetCurrentThread()->PreviousMode),
            v15 = v41,
            v16 = v40,
            !v35) )
      {
        v21 = a9 & 0xDFFFFFFF;
      }
    }
  }
  else
  {
    ProtectionMask = MiMakeProtectionMask(*(_DWORD *)(v14 + 60) & 0xFFF);
    if ( (v19 | MmCompatibleProtectionMask[ProtectionMask & 7] | 0x700) != (MmCompatibleProtectionMask[ProtectionMask & 7] | 0x700) )
      return 3221225550LL;
    v21 = a9;
  }
  v22 = *v16 + *v15;
  if ( v22 < *v16 )
    return 3221225503LL;
  v23 = *(_QWORD *)(a1 + 48);
  if ( v22 > v23 && (v21 & 0x2000) == 0 )
    return 3221225503LL;
  if ( !*v15 )
  {
    v24 = v23 - *v16;
    *v15 = v24;
    if ( (unsigned __int64)MmHighestUserAddress - *a3 - 0xFFFF < v24 )
      return 3221225503LL;
  }
  if ( a5 > *v15 && (v21 & 0x2000) == 0 )
    return 3221225715LL;
  if ( *v15 > *(_QWORD *)(a1 + 48) )
  {
    if ( (v21 & 0x2000) != 0 )
    {
LABEL_42:
      if ( (*(_DWORD *)(a1 + 60) & 0x44) != 0 )
        goto LABEL_12;
      return 3221225550LL;
    }
    return 3221225503LL;
  }
  if ( (v21 & 0x2000) != 0 )
    goto LABEL_42;
LABEL_12:
  if ( (v21 & 0x800000) != 0 && ((*(_DWORD *)(a1 + 56) & 0x20) == 0 || (v21 & 0x20000000) != 0) )
    return 3221225719LL;
  v25 = *(_WORD *)(v18 + 12);
  if ( v25 < 0 )
    v19 = v19 & 0xFFFFF9FF | 0x200;
  if ( (v25 & 0x4000) != 0 )
    v19 = v19 & 0xFFFFF9FF | 0x400;
  v26 = MiMakeProtectionMask(v19);
  v47 = v26;
  if ( v26 == -1 )
    return 3221225541LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v52 = Process;
  if ( (Process[1].DirectoryTableBase & 0x400) != 0 || (BYTE2(MiFlags) & 3u) > 1 && (MiFlags & 0x40000) != 0 )
  {
    if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
    {
      v21 &= ~0x20000000u;
    }
    else if ( (v26 & 2) != 0 )
    {
      return MiArbitraryCodeBlocked((__int64)Process);
    }
  }
  if ( Process != v28 )
  {
    KiStackAttachProcess(v28, 0, (__int64)v55);
    v44 = 1;
    v27 = v41;
    v28 = v39;
    v29 = v40;
  }
  v31 = *(_DWORD *)(v17 + 56);
  if ( (v31 & 0x400) != 0 )
  {
    if ( v45 )
    {
      v33 = -1073741575;
      goto LABEL_26;
    }
    v32 = MiMapViewOfPhysicalSection((_DWORD)v28, (_DWORD)a3, (_DWORD)v29, (_DWORD)v27, v26, v43, v21, (__int64)v38);
  }
  else
  {
    if ( (v31 & 0x20) != 0 )
    {
      if ( v45 )
      {
        v33 = -1073741575;
      }
      else if ( (v21 & 0x2000) != 0 )
      {
        v33 = -1073741577;
      }
      else
      {
        Src = (void *)*a3;
        Size = *v27;
        while ( 1 )
        {
          v33 = MiMapViewOfImageSection(v17, (__int64)Process, v28, v42, v29, v27, a1, a8, v26, v43, v21, 0);
          LODWORD(v45) = v33;
          if ( (v21 & 0x20000000) == 0 )
            break;
          v21 &= ~0x20000000u;
          v36 = MiMapViewOfImageSection(
                  v17,
                  (__int64)Process,
                  v39,
                  (unsigned __int64 *)&Src,
                  v40,
                  &Size,
                  a1,
                  a8,
                  v26,
                  v43,
                  v21,
                  0);
          if ( v33 < 0 )
          {
            *v42 = (unsigned __int64)Src;
            *v41 = Size;
            v33 = v36;
            goto LABEL_26;
          }
          if ( v36 >= 0 )
          {
            v37 = Src;
            memmove((void *)*v42, Src, Size);
            MiUnmapViewOfSection(v39, (__int64)v37, 0);
            goto LABEL_26;
          }
          MiUnmapViewOfSection(v39, *v42, 0);
          v27 = v41;
          v17 = v49;
          v28 = v39;
          v29 = v40;
        }
      }
      goto LABEL_26;
    }
    v32 = MiMapViewOfDataSection(
            (__int64 *)v17,
            (__int64)v28,
            a3,
            v29,
            (__int64 *)v27,
            a1,
            a8,
            v26,
            a5,
            v43,
            v21,
            a11,
            v38,
            v45);
  }
  v33 = v32;
LABEL_26:
  if ( v44 )
    KiUnstackDetachProcess((struct _KTHREAD *)v55, 0);
  return (unsigned int)v33;
}
