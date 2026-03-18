/*
 * XREFs of _SetCursorIconData @ 0x1C009FF18
 * Callers:
 *     NtUserSetCursorIconData @ 0x1C009FC70 (NtUserSetCursorIconData.c)
 *     _DuplicateCursor @ 0x1C01536CC (_DuplicateCursor.c)
 * Callees:
 *     AllocateUnicodeString @ 0x1C0019B7C (AllocateUnicodeString.c)
 *     HMValidateHandle @ 0x1C003BC68 (HMValidateHandle.c)
 *     GreExtGetObjectW @ 0x1C004BBB8 (GreExtGetObjectW.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C007672C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00768C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x1C00A04F0 (-ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00A0A68 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     GreDereferenceObject @ 0x1C00D7D48 (GreDereferenceObject.c)
 *     GreReferenceObject @ 0x1C011FAC8 (GreReferenceObject.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall SetCursorIconData(__int64 a1, __int64 a2, unsigned __int16 *a3, __int64 a4, size_t Size)
{
  __int64 v7; // r13
  void *v9; // r15
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  int v14; // r14d
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rdx
  _DWORD *v21; // rcx
  __int64 v22; // rdx
  unsigned int *v23; // rcx
  __int64 v24; // r11
  int v25; // eax
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // r9
  __int64 v29; // r10
  int v30; // esi
  __int64 v31; // r15
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r14
  int v35; // eax
  int v36; // esi
  __int64 v37; // r14
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 CurrentProcessWin32Process; // r14
  HSURF v41; // rcx
  __int64 v42; // rcx
  HSURF v43; // rcx
  HSURF v44; // rcx
  struct HLFONT__ *v45; // rcx
  HBITMAP v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  int v49; // ecx
  __int64 v50; // rax
  HSURF v52; // rcx
  __int128 v53; // [rsp+28h] [rbp-A0h] BYREF
  _DWORD v54[12]; // [rsp+40h] [rbp-88h] BYREF
  _DWORD v55[22]; // [rsp+70h] [rbp-58h] BYREF

  v7 = a2;
  v9 = 0LL;
  memset(v54, 0, 0x20uLL);
  memset(v55, 0, 0x20uLL);
  *(_DWORD *)(a1 + 80) &= ~0x800u;
  v13 = *(unsigned int *)(a4 + 24);
  v14 = *(_DWORD *)(a1 + 80) | *(_DWORD *)(a4 + 24);
  if ( (v13 & 8) != 0 && *(_QWORD *)(a1 + 96) )
    return 0LL;
  if ( *a3 )
  {
    if ( !(unsigned int)AllocateUnicodeString((struct _UNICODE_STRING *)(a1 + 56), a3) )
    {
      if ( (v14 & 8) == 0 )
      {
        v15 = *(_QWORD *)(a4 + 32);
        if ( v15 )
          GreDeleteObject(v15);
        v16 = *(_QWORD *)(a4 + 40);
        if ( v16 )
          GreDeleteObject(v16);
      }
      *(_QWORD *)(a1 + 64) = 0LL;
      *(_DWORD *)(a1 + 56) = 0;
      return 0LL;
    }
    v7 = a2;
  }
  else
  {
    *(_OWORD *)(a1 + 56) = *(_OWORD *)a3;
  }
  if ( *(_QWORD *)(v7 + 8) )
  {
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v53);
    *(_WORD *)(a1 + 72) = (int)RtlStringCchCopyW(&gawchAtomScratch, 0x100uLL, *(const unsigned __int16 **)(v7 + 8)) < 0
                        ? 0
                        : UserAddAtomEx(&gawchAtomScratch, 0LL, 2LL);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v53);
    if ( !*(_WORD *)(a1 + 72) )
    {
      if ( (v14 & 8) == 0 )
      {
        v17 = *(_QWORD *)(a4 + 32);
        if ( v17 )
          GreDeleteObject(v17);
        v18 = *(_QWORD *)(a4 + 40);
        if ( v18 )
          GreDeleteObject(v18);
      }
      if ( *(_WORD *)(a1 + 56) )
      {
        Win32FreePool(*(_QWORD *)(a1 + 64), v10, v11);
        *(_QWORD *)(a1 + 64) = 0LL;
        *(_DWORD *)(a1 + 56) = 0;
      }
      return 0LL;
    }
  }
  if ( (v14 & 8) != 0 )
  {
    if ( (_DWORD)Size )
      v9 = (void *)Win32AllocPoolWithQuota((unsigned int)Size, 1969451861LL);
    if ( !v9 )
    {
      if ( *(_WORD *)(a1 + 56) )
      {
        Win32FreePool(*(_QWORD *)(a1 + 64), v10, v11);
        *(_QWORD *)(a1 + 64) = 0LL;
        *(_DWORD *)(a1 + 56) = 0;
      }
      v19 = *(unsigned __int16 *)(a1 + 72);
      if ( (_WORD)v19 )
      {
        UserDeleteAtom(v19);
        *(_WORD *)(a1 + 72) = 0;
      }
      return 0LL;
    }
  }
  *(_DWORD *)(a1 + 80) |= *(_DWORD *)(a4 + 24);
  *(_WORD *)(a1 + 74) = *(_WORD *)(a4 + 16);
  if ( (W32GetCurrentThreadDpiAwarenessContext(v13, v10, v11, v12) & 0xF) != 0 )
    v21 = (_DWORD *)(gpsi + 1932LL);
  else
    v21 = (_DWORD *)(gpsi + 2320LL);
  *(_DWORD *)(a1 + 76) = *v21;
  if ( (*(_DWORD *)(a1 + 80) & 8) == 0 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v21, v20);
    *(_QWORD *)(a4 + 48) = 0LL;
    v53 = 0uLL;
    *(_OWORD *)(a4 + 56) = 0uLL;
    *(_OWORD *)(a1 + 84) = *(_OWORD *)(a4 + 28);
    *(_OWORD *)(a1 + 100) = *(_OWORD *)(a4 + 44);
    *(_OWORD *)(a1 + 116) = *(_OWORD *)(a4 + 60);
    *(_OWORD *)(a1 + 132) = *(_OWORD *)(a4 + 76);
    *(_DWORD *)(a1 + 148) = *(_DWORD *)(a4 + 92);
    *(_QWORD *)(a1 + 88) = 0LL;
    *(_QWORD *)(a1 + 96) = 0LL;
    v41 = *(HSURF *)(a4 + 32);
    if ( v41 && (int)GreReferenceObject(v41) < 0 )
    {
      GreDeleteObject(*(_QWORD *)(a4 + 32));
      v42 = *(_QWORD *)(a4 + 40);
      if ( v42 )
        GreDeleteObject(v42);
      return 0LL;
    }
    v43 = *(HSURF *)(a4 + 40);
    if ( v43 && (int)GreReferenceObject(v43) < 0 )
    {
      GreDeleteObject(*(_QWORD *)(a4 + 40));
      v44 = *(HSURF *)(a4 + 32);
    }
    else
    {
      if ( *(_DWORD *)(a1 + 140) )
      {
        if ( *(_DWORD *)(a1 + 144) )
        {
          v45 = *(struct HLFONT__ **)(a4 + 32);
          if ( v45 )
          {
            if ( !*(_QWORD *)(a4 + 40)
              || (unsigned int)GreExtGetObjectW(v45, 32, (unsigned __int16 *)v54)
              && (unsigned int)GreExtGetObjectW(*(struct HLFONT__ **)(a4 + 40), 32, (unsigned __int16 *)v55)
              && (v55[2] == v54[2] >> 1 || v55[2] == v54[2])
              && v55[1] >= v54[1] )
            {
              *(_QWORD *)(a1 + 88) = *(_QWORD *)(a4 + 32);
              v46 = *(HBITMAP *)(a4 + 40);
              *(_QWORD *)(a1 + 96) = v46;
              *(_QWORD *)(a1 + 128) = ProcessAlphaBitmap(v46);
              GreSetBitmapOwner(*(_QWORD *)(a1 + 88), 0LL);
              GreIncQuotaCount(CurrentProcessWin32Process);
              v47 = *(_QWORD *)(a1 + 96);
              if ( v47 )
              {
                GreSetBitmapOwner(v47, 0LL);
                GreIncQuotaCount(CurrentProcessWin32Process);
              }
              v48 = *(_QWORD *)(a1 + 128);
              if ( v48 )
              {
                GreSetBitmapOwner(v48, 0LL);
                GreIncQuotaCount(CurrentProcessWin32Process);
              }
              goto LABEL_82;
            }
          }
        }
      }
      UserSetLastError(87LL);
      v52 = *(HSURF *)(a4 + 32);
      if ( v52 )
        GreDereferenceObject(v52);
      v44 = *(HSURF *)(a4 + 40);
    }
    if ( v44 )
      GreDereferenceObject(v44);
    return 0LL;
  }
  *(_OWORD *)(a1 + 88) = *(_OWORD *)(a4 + 96);
  *(_OWORD *)(a1 + 104) = *(_OWORD *)(a4 + 112);
  *(_QWORD *)(a1 + 120) = *(_QWORD *)(a4 + 128);
  *(_QWORD *)(a1 + 96) = v9;
  memmove(v9, *(const void **)(a4 + 104), (unsigned int)Size);
  v23 = (unsigned int *)(*(_QWORD *)(a1 + 96) + *(_QWORD *)(a4 + 112));
  *(_QWORD *)(a1 + 104) = v23;
  v24 = *(_QWORD *)(a1 + 96) + *(_QWORD *)(a4 + 120);
  *(_QWORD *)(a1 + 112) = v24;
  v25 = 0;
  v26 = *(unsigned int *)(a1 + 92);
  if ( (int)v26 > 0 )
  {
    do
    {
      v22 = *v23;
      if ( (int)v22 < 0 || (int)v22 >= *(_DWORD *)(a1 + 88) )
        goto LABEL_42;
      ++v25;
      ++v23;
    }
    while ( v25 < (int)v26 );
  }
  v28 = 0LL;
  if ( (int)v26 > 0 )
  {
    v29 = 0LL;
    do
    {
      v22 = 100 * *(_DWORD *)(v29 + v24) / 6u;
      if ( (_DWORD)v22 )
        break;
      v28 = (unsigned int)(v28 + 1);
      v29 += 4LL;
    }
    while ( (int)v28 < (int)v26 );
  }
  if ( (_DWORD)v28 != (_DWORD)v26 )
  {
    v30 = 0;
    if ( *(int *)(a1 + 88) > 0 )
    {
      v31 = 0LL;
      while ( 1 )
      {
        LOBYTE(v22) = 3;
        v32 = HMValidateHandle(*(_QWORD *)(v31 + *(_QWORD *)(a1 + 96)), v22, v26, v28);
        v34 = v32;
        if ( !v32 )
          break;
        v35 = *(_DWORD *)(v32 + 80);
        if ( (v35 & 8) != 0 || (v35 & 0x40) == 0 || PsGetCurrentProcess(v33) != gpepCSRSS && !*(_QWORD *)(v34 + 24) )
          break;
        *(_QWORD *)(v31 + *(_QWORD *)(a1 + 96)) = 0LL;
        HMAssignmentLock(*(_QWORD *)(a1 + 96) + 8LL * v30++, v34);
        v31 += 8LL;
        if ( v30 >= *(_DWORD *)(a1 + 88) )
          goto LABEL_82;
      }
      v36 = v30 - 1;
      if ( v36 >= 0 )
      {
        v37 = 8LL * v36;
        do
        {
          HMAssignmentUnlock(v37 + *(_QWORD *)(a1 + 96));
          v37 -= 8LL;
          --v36;
        }
        while ( v36 >= 0 );
      }
      v27 = 1402LL;
      goto LABEL_43;
    }
LABEL_82:
    *(_QWORD *)(a1 + 48) = a1;
    v49 = *(_DWORD *)(a1 + 80);
    if ( (v49 & 0x40) == 0 )
    {
      v50 = *(_QWORD *)(a1 + 24);
      if ( !v50 )
      {
        *(_QWORD *)(a1 + 32) = gpcurFirst;
        gpcurFirst = a1;
LABEL_87:
        *(_DWORD *)(a1 + 80) |= 0x100u;
        return 1LL;
      }
      if ( (v49 & 4) != 0 )
      {
        *(_QWORD *)(a1 + 32) = *(_QWORD *)(v50 + 696);
        *(_QWORD *)(v50 + 696) = a1;
        goto LABEL_87;
      }
    }
    return 1LL;
  }
LABEL_42:
  v27 = 87LL;
LABEL_43:
  UserSetLastError(v27);
  Win32FreePool(*(_QWORD *)(a1 + 96), v38, v39);
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_DWORD *)(a1 + 120) = 0;
  return 0LL;
}
