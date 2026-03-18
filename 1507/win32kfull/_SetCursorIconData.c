/*
 * XREFs of _SetCursorIconData @ 0x1C0091DB4
 * Callers:
 *     NtUserSetCursorIconData @ 0x1C00923B0 (NtUserSetCursorIconData.c)
 *     _DuplicateCursor @ 0x1C012366C (_DuplicateCursor.c)
 * Callees:
 *     GreReferenceObject @ 0x1C000BE2C (GreReferenceObject.c)
 *     GreDereferenceObject @ 0x1C000C01C (GreDereferenceObject.c)
 *     GreExtGetObjectW @ 0x1C0014EE0 (GreExtGetObjectW.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C005E4A8 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x1C0091AE0 (-ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00954C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0095664 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     HMValidateHandle @ 0x1C00956E8 (HMValidateHandle.c)
 *     AllocateUnicodeString @ 0x1C00F47D4 (AllocateUnicodeString.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 */

__int64 __fastcall SetCursorIconData(__int64 a1, __int64 a2, _OWORD *a3, __int64 a4, size_t Size)
{
  __int64 v7; // r13
  void *v9; // r12
  __int64 v10; // rcx
  int v11; // r14d
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  _DWORD *v18; // rcx
  __int64 v19; // rdx
  unsigned int *v20; // rcx
  __int64 v21; // r11
  int v22; // eax
  int v23; // r8d
  int v24; // ecx
  int v25; // r9d
  __int64 v26; // r10
  int v27; // esi
  __int64 v28; // r15
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r14
  int v33; // eax
  int v34; // esi
  __int64 v35; // r14
  __int64 CurrentProcessWin32Process; // r14
  HSURF v37; // rcx
  __int64 v38; // rcx
  HSURF v39; // rcx
  HSURF v40; // rcx
  HSURF v41; // rcx
  HSURF v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rcx
  int v45; // ecx
  __int64 v46; // rax
  HSURF v48; // rcx
  __int128 v49; // [rsp+28h] [rbp-A0h] BYREF
  _DWORD v50[12]; // [rsp+40h] [rbp-88h] BYREF
  _DWORD v51[22]; // [rsp+70h] [rbp-58h] BYREF

  v7 = a2;
  v9 = 0LL;
  memset(v50, 0, 0x20uLL);
  memset(v51, 0, 0x20uLL);
  *(_DWORD *)(a1 + 80) &= ~0x800u;
  v10 = *(unsigned int *)(a4 + 24);
  v11 = *(_DWORD *)(a1 + 80) | *(_DWORD *)(a4 + 24);
  if ( (v10 & 8) != 0 && *(_QWORD *)(a1 + 96) )
    return 0LL;
  if ( *(_WORD *)a3 )
  {
    if ( !(unsigned int)AllocateUnicodeString(a1 + 56, a3) )
    {
      if ( (v11 & 8) == 0 )
      {
        v12 = *(_QWORD *)(a4 + 32);
        if ( v12 )
          GreDeleteObject(v12);
        v13 = *(_QWORD *)(a4 + 40);
        if ( v13 )
          GreDeleteObject(v13);
      }
      *(_QWORD *)(a1 + 64) = 0LL;
      *(_DWORD *)(a1 + 56) = 0;
      return 0LL;
    }
    v7 = a2;
  }
  else
  {
    *(_OWORD *)(a1 + 56) = *a3;
  }
  if ( *(_QWORD *)(v7 + 8) )
  {
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v49);
    *(_WORD *)(a1 + 72) = (int)RtlStringCchCopyW((char *)gawchAtomScratch, 256LL, *(char **)(v7 + 8)) < 0
                        ? 0
                        : UserAddAtomEx(gawchAtomScratch, 0LL, 2LL);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v49);
    if ( !*(_WORD *)(a1 + 72) )
    {
      if ( (v11 & 8) == 0 )
      {
        v14 = *(_QWORD *)(a4 + 32);
        if ( v14 )
          GreDeleteObject(v14);
        v15 = *(_QWORD *)(a4 + 40);
        if ( v15 )
          GreDeleteObject(v15);
      }
      if ( *(_WORD *)(a1 + 56) )
      {
        Win32FreePool(*(_QWORD *)(a1 + 64));
        *(_QWORD *)(a1 + 64) = 0LL;
        *(_DWORD *)(a1 + 56) = 0;
      }
      return 0LL;
    }
  }
  if ( (v11 & 8) != 0 )
  {
    if ( (_DWORD)Size )
      v9 = (void *)Win32AllocPoolWithQuota((unsigned int)Size, 1969451861LL);
    if ( !v9 )
    {
      if ( *(_WORD *)(a1 + 56) )
      {
        Win32FreePool(*(_QWORD *)(a1 + 64));
        *(_QWORD *)(a1 + 64) = 0LL;
        *(_DWORD *)(a1 + 56) = 0;
      }
      v16 = *(unsigned __int16 *)(a1 + 72);
      if ( (_WORD)v16 )
      {
        UserDeleteAtom(v16);
        *(_WORD *)(a1 + 72) = 0;
      }
      return 0LL;
    }
  }
  *(_DWORD *)(a1 + 80) |= *(_DWORD *)(a4 + 24);
  *(_WORD *)(a1 + 74) = *(_WORD *)(a4 + 16);
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v10) + 776) & 0x2000) != 0
    || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v17) + 776) & 0x4000) != 0 )
  {
    v18 = (_DWORD *)(gpsi + 1932LL);
  }
  else
  {
    v18 = (_DWORD *)(gpsi + 2320LL);
  }
  *(_DWORD *)(a1 + 76) = *v18;
  if ( (*(_DWORD *)(a1 + 80) & 8) == 0 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v18);
    *(_QWORD *)(a4 + 48) = 0LL;
    v49 = 0uLL;
    *(_OWORD *)(a4 + 56) = 0uLL;
    *(_OWORD *)(a1 + 84) = *(_OWORD *)(a4 + 28);
    *(_OWORD *)(a1 + 100) = *(_OWORD *)(a4 + 44);
    *(_OWORD *)(a1 + 116) = *(_OWORD *)(a4 + 60);
    *(_OWORD *)(a1 + 132) = *(_OWORD *)(a4 + 76);
    *(_DWORD *)(a1 + 148) = *(_DWORD *)(a4 + 92);
    *(_QWORD *)(a1 + 88) = 0LL;
    *(_QWORD *)(a1 + 96) = 0LL;
    v37 = *(HSURF *)(a4 + 32);
    if ( v37 && (int)GreReferenceObject(v37) < 0 )
    {
      GreDeleteObject(*(_QWORD *)(a4 + 32));
      v38 = *(_QWORD *)(a4 + 40);
      if ( v38 )
        GreDeleteObject(v38);
      return 0LL;
    }
    v39 = *(HSURF *)(a4 + 40);
    if ( v39 && (int)GreReferenceObject(v39) < 0 )
    {
      GreDeleteObject(*(_QWORD *)(a4 + 40));
      v40 = *(HSURF *)(a4 + 32);
    }
    else
    {
      if ( *(_DWORD *)(a1 + 140) )
      {
        if ( *(_DWORD *)(a1 + 144) )
        {
          v41 = *(HSURF *)(a4 + 32);
          if ( v41 )
          {
            if ( !*(_QWORD *)(a4 + 40)
              || (unsigned int)GreExtGetObjectW(v41, 32, (unsigned __int16 *)v50)
              && (unsigned int)GreExtGetObjectW(*(HSURF *)(a4 + 40), 32, (unsigned __int16 *)v51)
              && (v51[2] == v50[2] >> 1 || v51[2] == v50[2])
              && v51[1] >= v50[1] )
            {
              *(_QWORD *)(a1 + 88) = *(_QWORD *)(a4 + 32);
              v42 = *(HSURF *)(a4 + 40);
              *(_QWORD *)(a1 + 96) = v42;
              *(_QWORD *)(a1 + 128) = ProcessAlphaBitmap(v42);
              GreSetBitmapOwner(*(_QWORD *)(a1 + 88), 0LL);
              GreIncQuotaCount(CurrentProcessWin32Process);
              v43 = *(_QWORD *)(a1 + 96);
              if ( v43 )
              {
                GreSetBitmapOwner(v43, 0LL);
                GreIncQuotaCount(CurrentProcessWin32Process);
              }
              v44 = *(_QWORD *)(a1 + 128);
              if ( v44 )
              {
                GreSetBitmapOwner(v44, 0LL);
                GreIncQuotaCount(CurrentProcessWin32Process);
              }
              goto LABEL_83;
            }
          }
        }
      }
      UserSetLastError(87);
      v48 = *(HSURF *)(a4 + 32);
      if ( v48 )
        GreDereferenceObject(v48, 0);
      v40 = *(HSURF *)(a4 + 40);
    }
    if ( v40 )
      GreDereferenceObject(v40, 0);
    return 0LL;
  }
  *(_OWORD *)(a1 + 88) = *(_OWORD *)(a4 + 96);
  *(_OWORD *)(a1 + 104) = *(_OWORD *)(a4 + 112);
  *(_QWORD *)(a1 + 120) = *(_QWORD *)(a4 + 128);
  *(_QWORD *)(a1 + 96) = v9;
  memmove(v9, *(const void **)(a4 + 104), (unsigned int)Size);
  v20 = (unsigned int *)(*(_QWORD *)(a1 + 96) + *(_QWORD *)(a4 + 112));
  *(_QWORD *)(a1 + 104) = v20;
  v21 = *(_QWORD *)(a1 + 96) + *(_QWORD *)(a4 + 120);
  *(_QWORD *)(a1 + 112) = v21;
  v22 = 0;
  v23 = *(_DWORD *)(a1 + 92);
  if ( v23 > 0 )
  {
    do
    {
      v19 = *v20;
      if ( (int)v19 < 0 || (int)v19 >= *(_DWORD *)(a1 + 88) )
        goto LABEL_43;
      ++v22;
      ++v20;
    }
    while ( v22 < v23 );
  }
  v25 = 0;
  if ( v23 > 0 )
  {
    v26 = 0LL;
    do
    {
      v19 = 100 * *(_DWORD *)(v26 + v21) / 6u;
      if ( (_DWORD)v19 )
        break;
      ++v25;
      v26 += 4LL;
    }
    while ( v25 < v23 );
  }
  if ( v25 != v23 )
  {
    v27 = 0;
    if ( *(int *)(a1 + 88) > 0 )
    {
      v28 = 0LL;
      while ( 1 )
      {
        LOBYTE(v19) = 3;
        v29 = HMValidateHandle(*(_QWORD *)(v28 + *(_QWORD *)(a1 + 96)), v19);
        v32 = v29;
        if ( !v29 )
          break;
        v33 = *(_DWORD *)(v29 + 80);
        if ( (v33 & 8) != 0 || (v33 & 0x40) == 0 || PsGetCurrentProcess(v31, v30) != gpepCSRSS && !*(_QWORD *)(v32 + 24) )
          break;
        *(_QWORD *)(v28 + *(_QWORD *)(a1 + 96)) = 0LL;
        HMAssignmentLock(*(_QWORD *)(a1 + 96) + 8LL * v27++, v32);
        v28 += 8LL;
        if ( v27 >= *(_DWORD *)(a1 + 88) )
          goto LABEL_83;
      }
      v34 = v27 - 1;
      if ( v34 >= 0 )
      {
        v35 = 8LL * v34;
        do
        {
          HMAssignmentUnlock(v35 + *(_QWORD *)(a1 + 96));
          v35 -= 8LL;
          --v34;
        }
        while ( v34 >= 0 );
      }
      v24 = 1402;
      goto LABEL_44;
    }
LABEL_83:
    *(_QWORD *)(a1 + 48) = a1;
    v45 = *(_DWORD *)(a1 + 80);
    if ( (v45 & 0x40) == 0 )
    {
      v46 = *(_QWORD *)(a1 + 24);
      if ( !v46 )
      {
        *(_QWORD *)(a1 + 32) = gpcurFirst;
        gpcurFirst = a1;
LABEL_88:
        *(_DWORD *)(a1 + 80) |= 0x100u;
        return 1LL;
      }
      if ( (v45 & 4) != 0 )
      {
        *(_QWORD *)(a1 + 32) = *(_QWORD *)(v46 + 704);
        *(_QWORD *)(v46 + 704) = a1;
        goto LABEL_88;
      }
    }
    return 1LL;
  }
LABEL_43:
  v24 = 87;
LABEL_44:
  UserSetLastError(v24);
  Win32FreePool(*(_QWORD *)(a1 + 96));
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_DWORD *)(a1 + 120) = 0;
  return 0LL;
}
