/*
 * XREFs of MiMapViewOfSection @ 0x140431EE0
 * Callers:
 *     MmMapSecureViewOfSection @ 0x14040C068 (MmMapSecureViewOfSection.c)
 *     NtMapViewOfSection @ 0x140435610 (NtMapViewOfSection.c)
 *     MmMapViewOfSection @ 0x14046AEB8 (MmMapViewOfSection.c)
 * Callees:
 *     MiMakeProtectionMask @ 0x14002B880 (MiMakeProtectionMask.c)
 *     MiSectionControlArea @ 0x14002C050 (MiSectionControlArea.c)
 *     MiArbitraryCodeBlocked @ 0x1400B548C (MiArbitraryCodeBlocked.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     SeSinglePrivilegeCheck @ 0x140412E30 (SeSinglePrivilegeCheck.c)
 *     MiMapViewOfImageSection @ 0x140428990 (MiMapViewOfImageSection.c)
 *     MiUnmapViewOfSection @ 0x14042D2D0 (MiUnmapViewOfSection.c)
 *     MiMapViewOfDataSection @ 0x140434390 (MiMapViewOfDataSection.c)
 *     MiMapViewOfPhysicalSection @ 0x140573180 (MiMapViewOfPhysicalSection.c)
 */

__int64 __fastcall MiMapViewOfSection(
        __int64 a1,
        _KPROCESS *a2,
        void **a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        _QWORD *a6,
        size_t *a7,
        int a8,
        unsigned int a9,
        unsigned int a10,
        int a11,
        __int64 a12)
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
  __int16 v25; // ax
  int v26; // esi
  size_t *v27; // r9
  _KPROCESS *v28; // r10
  _QWORD *v29; // r11
  struct _KTHREAD *CurrentThread; // rcx
  __int64 Process; // rdi
  int v32; // eax
  int v33; // eax
  int v34; // ebx
  unsigned __int64 v36; // r8
  void *v37; // r15
  BOOLEAN v38; // al
  int v39; // eax
  char v40[8]; // [rsp+70h] [rbp-108h] BYREF
  _KPROCESS *v41; // [rsp+78h] [rbp-100h]
  size_t *v42; // [rsp+80h] [rbp-F8h]
  _QWORD *v43; // [rsp+88h] [rbp-F0h]
  int v44; // [rsp+90h] [rbp-E8h]
  void *Src; // [rsp+98h] [rbp-E0h] BYREF
  void *v46; // [rsp+A0h] [rbp-D8h] BYREF
  unsigned __int64 v47; // [rsp+A8h] [rbp-D0h]
  __int64 v48; // [rsp+B0h] [rbp-C8h]
  int v49; // [rsp+B8h] [rbp-C0h]
  size_t Size; // [rsp+C0h] [rbp-B8h] BYREF
  __int64 v51; // [rsp+C8h] [rbp-B0h]
  void **v52; // [rsp+D0h] [rbp-A8h]
  __int64 v53; // [rsp+D8h] [rbp-A0h]
  __int64 v54; // [rsp+E0h] [rbp-98h]
  _KPROCESS *v55; // [rsp+E8h] [rbp-90h]
  void **v56; // [rsp+F0h] [rbp-88h]
  unsigned __int64 v57; // [rsp+F8h] [rbp-80h]
  _BYTE v58[48]; // [rsp+100h] [rbp-78h] BYREF

  v47 = a4;
  v52 = a3;
  v41 = a2;
  v55 = a2;
  v56 = a3;
  v57 = a4;
  v43 = a6;
  v42 = a7;
  v48 = a12;
  v44 = 0;
  v53 = a1;
  v18 = MiSectionControlArea(a1);
  v51 = v18;
  v19 = *(_QWORD *)v18;
  v40[0] = 1;
  v20 = a10;
  if ( (a10 & 0x40000000) != 0 )
  {
    if ( (a10 & 0xF0) == 0 )
      return 3221225720LL;
    v40[0] = 0;
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
        || (MiFlags & 0x10000) != 0
        || (*(_DWORD *)(v18 + 56) & 0x20000) != 0
        || (v38 = SeSinglePrivilegeCheck(SeLockMemoryPrivilege, KeGetCurrentThread()->PreviousMode),
            v16 = v42,
            v17 = v43,
            !v38) )
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
    v36 = v24 - *v17;
    *v16 = v36;
    if ( 0x7FFFFFFE0000LL - (__int64)*a3 < v36 )
      return 3221225503LL;
  }
  if ( a5 > *v16 && (v22 & 0x2000) == 0 )
    return 3221225715LL;
  if ( *v16 > *(_QWORD *)(a1 + 48) )
  {
    if ( (v22 & 0x2000) == 0 )
      return 3221225503LL;
LABEL_44:
    if ( (*(_DWORD *)(a1 + 60) & 0x44) != 0 )
      goto LABEL_11;
    return 3221225550LL;
  }
  if ( (v22 & 0x2000) != 0 )
    goto LABEL_44;
LABEL_11:
  if ( (v22 & 0x800000) != 0 && ((*(_DWORD *)(a1 + 56) & 0x20) == 0 || (v22 & 0x20000000) != 0) )
    return 3221225719LL;
  v25 = *(_WORD *)(v19 + 12);
  if ( v25 < 0 )
    v20 = v20 & 0xFFFFF9FF | 0x200;
  if ( (v25 & 0x4000) != 0 )
    v20 = v20 & 0xFFFFF9FF | 0x400;
  v26 = MiMakeProtectionMask(v20);
  v49 = v26;
  if ( v26 == -1 )
    return 3221225541LL;
  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  v54 = Process;
  if ( (*(_DWORD *)(Process + 768) & 0x400) != 0 && (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0x40000) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
    {
      v22 &= ~0x20000000u;
    }
    else if ( (v26 & 2) != 0 )
    {
      return MiArbitraryCodeBlocked(Process);
    }
  }
  if ( (_KPROCESS *)Process != v28 )
  {
    KiStackAttachProcess(v28, 0, (__int64)v58);
    v44 = 1;
    v27 = v42;
    v28 = v41;
    v29 = v43;
  }
  v32 = *(_DWORD *)(v18 + 56);
  if ( (v32 & 0x400) != 0 )
  {
    if ( v48 )
    {
      v34 = -1073741575;
      goto LABEL_24;
    }
    v33 = MiMapViewOfPhysicalSection((_DWORD)v28, (_DWORD)a3, (_DWORD)v29, (_DWORD)v27, v26, v47, v22, (__int64)v40);
  }
  else
  {
    if ( (v32 & 0x20) != 0 )
    {
      v46 = *a3;
      Src = v46;
      Size = *v27;
      while ( 1 )
      {
        v34 = MiMapViewOfImageSection(
                v18,
                Process,
                (__int64)v28,
                (unsigned __int64 *)&v46,
                v29,
                v27,
                a1,
                a8,
                v26,
                v47,
                v22,
                0);
        LODWORD(v48) = v34;
        if ( (v22 & 0x20000000) == 0 )
        {
          v37 = v46;
          goto LABEL_32;
        }
        v22 &= ~0x20000000u;
        v39 = MiMapViewOfImageSection(
                v18,
                Process,
                (__int64)v41,
                (unsigned __int64 *)&Src,
                v43,
                &Size,
                a1,
                a8,
                v26,
                v47,
                v22,
                0);
        if ( v34 < 0 )
        {
          v37 = Src;
          *v42 = Size;
          v34 = v39;
          goto LABEL_32;
        }
        if ( v39 >= 0 )
          break;
        MiUnmapViewOfSection(v41, (__int64)v46, 0);
        v27 = v42;
        v18 = v51;
        v28 = v41;
        v29 = v43;
      }
      v37 = v46;
      memmove(v46, Src, Size);
      MiUnmapViewOfSection(v41, (__int64)Src, 0);
LABEL_32:
      if ( v34 >= 0 )
        *v52 = v37;
      goto LABEL_24;
    }
    v33 = MiMapViewOfDataSection(
            v18,
            (_DWORD)v28,
            (_DWORD)a3,
            (_DWORD)v29,
            (__int64)v27,
            a1,
            a8,
            v26,
            a5,
            v47,
            v22,
            a11,
            (__int64)v40,
            v48);
  }
  v34 = v33;
LABEL_24:
  if ( v44 )
    KiUnstackDetachProcess((struct _KTHREAD *)v58, 0);
  return (unsigned int)v34;
}
