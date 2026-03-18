/*
 * XREFs of _SetCursorIconData @ 0x1C011BB5C
 * Callers:
 *     NtUserSetCursorIconData @ 0x1C011B8C0 (NtUserSetCursorIconData.c)
 *     _DuplicateCursor @ 0x1C014C640 (_DuplicateCursor.c)
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004AA94 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004AC30 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     HMValidateHandle @ 0x1C004AD4C (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x1C011BF70 (-ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C011DDB4 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     AllocateUnicodeString @ 0x1C011FED4 (AllocateUnicodeString.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 */

__int64 __fastcall SetCursorIconData(__int64 a1, __int64 a2, _OWORD *a3, __int64 a4, size_t Size)
{
  void *v8; // r12
  int v9; // r14d
  __int64 v10; // rcx
  _DWORD *v11; // rcx
  __int64 CurrentProcessWin32Process; // r14
  __int64 v13; // rax
  HBITMAP v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // ecx
  __int64 v18; // rax
  int *v20; // rcx
  __int64 v21; // r11
  int v22; // eax
  int v23; // r8d
  int v24; // r9d
  __int64 v25; // r10
  int v26; // esi
  __int64 v27; // r15
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // r14
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  int v39; // ecx
  int v40; // esi
  __int64 v41; // r14
  __int64 v42; // rcx
  __int64 v43; // rcx
  _BYTE v44[32]; // [rsp+30h] [rbp-48h] BYREF

  v8 = 0LL;
  *(_DWORD *)(a1 + 80) &= ~0x800u;
  v9 = *(_DWORD *)(a1 + 80) | *(_DWORD *)(a4 + 24);
  if ( (*(_DWORD *)(a4 + 24) & 8) != 0 && *(_QWORD *)(a1 + 96) )
    return 0LL;
  if ( *(_WORD *)a3 )
  {
    if ( !(unsigned int)AllocateUnicodeString(a1 + 56, a3) )
    {
      if ( (v9 & 8) == 0 )
      {
        v34 = *(_QWORD *)(a4 + 32);
        if ( v34 )
          GreDeleteObject(v34);
        v35 = *(_QWORD *)(a4 + 40);
        if ( v35 )
          GreDeleteObject(v35);
      }
      *(_QWORD *)(a1 + 64) = 0LL;
      *(_DWORD *)(a1 + 56) = 0;
      return 0LL;
    }
  }
  else
  {
    *(_OWORD *)(a1 + 56) = *a3;
  }
  if ( *(_QWORD *)(a2 + 8) )
  {
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v44);
    *(_WORD *)(a1 + 72) = (int)RtlStringCchCopyW(&gawchAtomScratch, 0x100uLL, *(const unsigned __int16 **)(a2 + 8)) < 0
                        ? 0
                        : UserAddAtomEx(&gawchAtomScratch, 0LL, 2LL);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v44);
    if ( !*(_WORD *)(a1 + 72) )
    {
      if ( (v9 & 8) == 0 )
      {
        v36 = *(_QWORD *)(a4 + 32);
        if ( v36 )
          GreDeleteObject(v36);
        v37 = *(_QWORD *)(a4 + 40);
        if ( v37 )
          GreDeleteObject(v37);
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
  if ( (v9 & 8) != 0 )
  {
    if ( (_DWORD)Size )
      v8 = (void *)Win32AllocPoolWithQuota((unsigned int)Size, 1969451861LL);
    if ( !v8 )
    {
      if ( *(_WORD *)(a1 + 56) )
      {
        Win32FreePool(*(_QWORD *)(a1 + 64));
        *(_QWORD *)(a1 + 64) = 0LL;
        *(_DWORD *)(a1 + 56) = 0;
      }
      v38 = *(unsigned __int16 *)(a1 + 72);
      if ( (_WORD)v38 )
      {
        UserDeleteAtom(v38);
        *(_WORD *)(a1 + 72) = 0;
      }
      return 0LL;
    }
  }
  *(_DWORD *)(a1 + 80) |= *(_DWORD *)(a4 + 24);
  *(_WORD *)(a1 + 74) = *(_WORD *)(a4 + 16);
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(a1) + 776) & 0x2000) != 0
    || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v10) + 776) & 0x4000) != 0 )
  {
    v11 = (_DWORD *)(gpsi + 1932LL);
  }
  else
  {
    v11 = (_DWORD *)(gpsi + 2320LL);
  }
  *(_DWORD *)(a1 + 76) = *v11;
  if ( (*(_DWORD *)(a1 + 80) & 8) == 0 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11);
    *(_OWORD *)(a1 + 84) = *(_OWORD *)(a4 + 28);
    *(_OWORD *)(a1 + 100) = *(_OWORD *)(a4 + 44);
    *(_OWORD *)(a1 + 116) = *(_OWORD *)(a4 + 60);
    *(_OWORD *)(a1 + 132) = *(_OWORD *)(a4 + 76);
    *(_DWORD *)(a1 + 148) = *(_DWORD *)(a4 + 92);
    *(_QWORD *)(a1 + 88) = 0LL;
    *(_QWORD *)(a1 + 96) = 0LL;
    if ( !*(_DWORD *)(a1 + 140) || !*(_DWORD *)(a1 + 144) || (v13 = *(_QWORD *)(a4 + 32)) == 0 )
    {
      UserSetLastError(87);
      v42 = *(_QWORD *)(a4 + 32);
      if ( v42 )
        GreDeleteObject(v42);
      v43 = *(_QWORD *)(a4 + 40);
      if ( v43 )
        GreDeleteObject(v43);
      return 0LL;
    }
    *(_QWORD *)(a1 + 88) = v13;
    v14 = *(HBITMAP *)(a4 + 40);
    *(_QWORD *)(a1 + 96) = v14;
    *(_QWORD *)(a1 + 128) = ProcessAlphaBitmap(v14);
    GreSetBitmapOwner(*(_QWORD *)(a1 + 88), 0LL);
    GreIncQuotaCount(CurrentProcessWin32Process);
    v15 = *(_QWORD *)(a1 + 96);
    if ( v15 )
    {
      GreSetBitmapOwner(v15, 0LL);
      GreIncQuotaCount(CurrentProcessWin32Process);
    }
    v16 = *(_QWORD *)(a1 + 128);
    if ( v16 )
    {
      GreSetBitmapOwner(v16, 0LL);
      GreIncQuotaCount(CurrentProcessWin32Process);
    }
LABEL_20:
    *(_QWORD *)(a1 + 48) = a1;
    v17 = *(_DWORD *)(a1 + 80);
    if ( (v17 & 0x40) == 0 )
    {
      v18 = *(_QWORD *)(a1 + 24);
      if ( v18 )
      {
        if ( (v17 & 4) == 0 )
          return 1LL;
        *(_QWORD *)(a1 + 32) = *(_QWORD *)(v18 + 704);
        *(_QWORD *)(v18 + 704) = a1;
      }
      else
      {
        *(_QWORD *)(a1 + 32) = gpcurFirst;
        gpcurFirst = a1;
      }
      *(_DWORD *)(a1 + 80) |= 0x100u;
    }
    return 1LL;
  }
  *(_OWORD *)(a1 + 88) = *(_OWORD *)(a4 + 96);
  *(_OWORD *)(a1 + 104) = *(_OWORD *)(a4 + 112);
  *(_QWORD *)(a1 + 120) = *(_QWORD *)(a4 + 128);
  *(_QWORD *)(a1 + 96) = v8;
  memmove(v8, *(const void **)(a4 + 104), (unsigned int)Size);
  v20 = (int *)(*(_QWORD *)(a1 + 96) + *(_QWORD *)(a4 + 112));
  *(_QWORD *)(a1 + 104) = v20;
  v21 = *(_QWORD *)(a1 + 96) + *(_QWORD *)(a4 + 120);
  *(_QWORD *)(a1 + 112) = v21;
  v22 = 0;
  v23 = *(_DWORD *)(a1 + 92);
  if ( v23 > 0 )
  {
    while ( *v20 >= 0 && *v20 < *(_DWORD *)(a1 + 88) )
    {
      ++v22;
      ++v20;
      if ( v22 >= v23 )
        goto LABEL_35;
    }
    goto LABEL_71;
  }
LABEL_35:
  v24 = 0;
  if ( v23 > 0 )
  {
    v25 = 0LL;
    do
    {
      if ( 100 * *(_DWORD *)(v25 + v21) / 6u )
        break;
      ++v24;
      v25 += 4LL;
    }
    while ( v24 < v23 );
  }
  if ( v24 == v23 )
  {
LABEL_71:
    v39 = 87;
    goto LABEL_73;
  }
  v26 = 0;
  if ( *(int *)(a1 + 88) <= 0 )
    goto LABEL_20;
  v27 = 0LL;
  while ( 1 )
  {
    v28 = HMValidateHandle(*(_QWORD *)(*(_QWORD *)(a1 + 96) + v27), 3);
    v32 = v28;
    if ( !v28 )
      break;
    v33 = *(unsigned int *)(v28 + 80);
    if ( (v33 & 8) != 0 || PsGetCurrentProcess(v33, v29, v30, v31) != gpepCSRSS && !*(_QWORD *)(v32 + 24) )
      break;
    *(_QWORD *)(v27 + *(_QWORD *)(a1 + 96)) = 0LL;
    HMAssignmentLock(*(_QWORD *)(a1 + 96) + 8LL * v26++, v32);
    v27 += 8LL;
    if ( v26 >= *(_DWORD *)(a1 + 88) )
      goto LABEL_20;
  }
  v40 = v26 - 1;
  if ( v40 >= 0 )
  {
    v41 = 8LL * v40;
    do
    {
      HMAssignmentUnlock(v41 + *(_QWORD *)(a1 + 96));
      v41 -= 8LL;
      --v40;
    }
    while ( v40 >= 0 );
  }
  v39 = 1402;
LABEL_73:
  UserSetLastError(v39);
  Win32FreePool(*(_QWORD *)(a1 + 96));
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_DWORD *)(a1 + 120) = 0;
  return 0LL;
}
