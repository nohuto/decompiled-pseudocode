/*
 * XREFs of _GetClassInfoEx @ 0x1C0057B7C
 * Callers:
 *     NtUserGetClassInfoEx @ 0x1C00578B0 (NtUserGetClassInfoEx.c)
 * Callees:
 *     MapClientNeuterToClientPfn @ 0x1C005C9FC (MapClientNeuterToClientPfn.c)
 *     GetClassPtr @ 0x1C005D620 (GetClassPtr.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C005E4A8 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00954C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0095664 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     GetCPD @ 0x1C00FA93C (GetCPD.c)
 *     MapServerToClientPfn @ 0x1C0128AEC (MapServerToClientPfn.c)
 */

__int64 __fastcall GetClassInfoEx(__int64 a1, const unsigned __int16 *a2, __int64 a3, _QWORD *a4, unsigned int a5)
{
  int v8; // r15d
  unsigned __int16 v9; // r11
  __int64 v10; // r12
  __int64 ClassPtr; // rax
  __int64 v12; // rdi
  int v13; // eax
  __int64 *v14; // rax
  __int64 v15; // rax
  __int64 *v16; // rax
  __int64 v17; // rax
  __int64 *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v22; // rcx
  __int64 CPD; // rax
  _BYTE v24[72]; // [rsp+30h] [rbp-48h] BYREF

  v8 = 0;
  *(_QWORD *)(a3 + 56) = 0LL;
  *(_QWORD *)(a3 + 64) = 0LL;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v24);
  if ( ((unsigned __int64)a2 & 0xFFFFFFFFFFFF0000uLL) != 0
    && (int)RtlStringCchCopyW(&gawchAtomScratch, 0x100uLL, a2) >= 0 )
  {
    UserFindAtom(&gawchAtomScratch);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v24);
  v10 = hModClient;
  if ( !a1 )
    a1 = hModClient;
  ClassPtr = GetClassPtr(v9, *(_QWORD *)(gptiCurrent + 384LL), a1);
  if ( !ClassPtr )
  {
    UserSetLastError(1411LL);
    return 0LL;
  }
  v12 = *(_QWORD *)ClassPtr;
  v13 = *(_DWORD *)(*(_QWORD *)ClassPtr + 84LL) & 0x37BFF;
  *(_DWORD *)(a3 + 4) = v13;
  if ( *(_WORD *)(v12 + 12) && *(_WORD *)(gptiCurrent + 560LL) >= 0x400u )
    *(_DWORD *)(a3 + 4) = v13 & 0xFFFFBFFF;
  *(_DWORD *)(a3 + 16) = *(_DWORD *)(v12 + 96);
  *(_DWORD *)(a3 + 20) = *(_DWORD *)(v12 + 100);
  if ( *(_WORD *)(gptiCurrent + 560LL) < 0x400u )
  {
    v22 = *(_QWORD *)(v12 + 104);
    if ( v22 == hModuleWin || v22 == v10 )
      *(_QWORD *)(a3 + 24) = v10;
    else
      *(_QWORD *)(a3 + 24) = v22;
  }
  else
  {
    if ( a1 == v10 )
      a1 = 0LL;
    *(_QWORD *)(a3 + 24) = a1;
  }
  v14 = *(__int64 **)(v12 + 112);
  if ( v14 )
    v15 = *v14;
  else
    v15 = 0LL;
  *(_QWORD *)(a3 + 32) = v15;
  v16 = *(__int64 **)(v12 + 120);
  if ( v16 )
    v17 = *v16;
  else
    v17 = 0LL;
  *(_QWORD *)(a3 + 40) = v17;
  *(_QWORD *)(a3 + 48) = *(_QWORD *)(v12 + 128);
  v18 = *(__int64 **)(v12 + 152);
  if ( v18 )
  {
    if ( (*((_DWORD *)v18 + 20) & 0x80u) != 0 )
    {
      *(_QWORD *)(a3 + 72) = 0LL;
      goto LABEL_19;
    }
    v19 = *v18;
  }
  else
  {
    v19 = 0LL;
  }
  *(_QWORD *)(a3 + 72) = v19;
LABEL_19:
  if ( (*(_BYTE *)(v12 + 34) & 1) != 0 )
  {
    *(_QWORD *)(a3 + 8) = MapServerToClientPfn(*(_QWORD *)(v12 + 88), a5);
  }
  else
  {
    v20 = MapClientNeuterToClientPfn(v12, 0LL, a5);
    *(_QWORD *)(a3 + 8) = v20;
    if ( v20 == *(_QWORD *)(v12 + 88) && a5 != ((*(unsigned __int8 *)(v12 + 34) >> 1) & 1) )
      v8 = 2 - (a5 != 0);
  }
  if ( v8 )
  {
    CPD = GetCPD(v12, v8 | 0x10u, *(_QWORD *)(a3 + 8));
    if ( CPD )
      *(_QWORD *)(a3 + 8) = CPD;
  }
  if ( a5 )
    *a4 = *(_QWORD *)(v12 + 40);
  else
    *a4 = *(_QWORD *)(v12 + 48);
  return *(unsigned __int16 *)(v12 + 10);
}
