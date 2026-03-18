/*
 * XREFs of ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C002B3F8
 * Callers:
 *     ??0RGNMEMOBJTMP@@QEAA@K@Z @ 0x1C001F2F4 (--0RGNMEMOBJTMP@@QEAA@K@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C001F3CC (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0025350 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C0029890 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@W4DestructorDisposition@0@@Z @ 0x1C002B550 (--0RGNMEMOBJ@@QEAA@W4DestructorDisposition@0@@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@K@Z @ 0x1C002B570 (--0RGNMEMOBJ@@QEAA@K@Z.c)
 *     ?Combine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z @ 0x1C003EA98 (-Combine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z.c)
 * Callees:
 *     IsWin32AllocateFromPagedLookasideListImplSupported_0 @ 0x1C0002C38 (IsWin32AllocateFromPagedLookasideListImplSupported_0.c)
 *     Win32AllocateFromPagedLookasideListImpl_0 @ 0x1C0002C40 (Win32AllocateFromPagedLookasideListImpl_0.c)
 *     Win32AllocPool @ 0x1C0020C90 (Win32AllocPool.c)
 *     EngSetLastError @ 0x1C0076470 (EngSetLastError.c)
 */

void __fastcall RGNMEMOBJ::vInitialize(RGNMEMOBJ *this, unsigned int a2)
{
  int v2; // esi
  unsigned int v4; // edi
  int v5; // ebp
  __int64 v6; // rbx
  _QWORD *v7; // rax
  __int32 v8; // [rsp+48h] [rbp+10h]

  v2 = a2;
  if ( a2 < 0xD8 )
    v2 = 216;
  v4 = v2;
  if ( LODWORD(WPP_MAIN_CB.SecurityDescriptor) == 4 )
  {
    v5 = 1;
    v4 = v2 + 160;
  }
  else
  {
    v5 = 0;
  }
  if ( dword_1C0103610 >= v4
    && ((int)IsWin32AllocateFromPagedLookasideListImplSupported_0() < 0
      ? (v6 = 0LL)
      : (v6 = Win32AllocateFromPagedLookasideListImpl_0()),
        v6) )
  {
    *(_QWORD *)v6 = 0LL;
    *(_QWORD *)(v6 + 8) = 0LL;
    *(_QWORD *)(v6 + 16) = 0LL;
    if ( v5 )
      RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)(v4 + v6 - 160), 0LL);
    LOWORD(v8) = *(_WORD *)(v6 + 12);
    HIWORD(v8) = *(_WORD *)(v6 + 14) | 0x8000;
    _InterlockedExchange((volatile __int32 *)(v6 + 12), v8);
  }
  else
  {
    v6 = 0LL;
    if ( v4 )
      v6 = Win32AllocPool();
    if ( v6 )
    {
      *(_QWORD *)v6 = 0LL;
      *(_QWORD *)(v6 + 8) = 0LL;
      *(_QWORD *)(v6 + 16) = 0LL;
      if ( v5 )
        RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)(v4 + v6 - 160), 0LL);
    }
    else
    {
      EngSetLastError(8u);
      v6 = 0LL;
    }
  }
  *(_QWORD *)this = v6;
  if ( v6 )
  {
    *(_DWORD *)(v6 + 88) = 0;
    *(_DWORD *)(v6 + 92) = 0;
    *(_DWORD *)(v6 + 96) = 0;
    *(_DWORD *)(v6 + 100) = 0;
    *(_DWORD *)(v6 + 80) = 120;
    *(_DWORD *)(v6 + 84) = 1;
    *(_DWORD *)(v6 + 104) = 0;
    *(_DWORD *)(v6 + 108) = 0x80000000;
    *(_DWORD *)(v6 + 112) = 0x7FFFFFFF;
    *(_DWORD *)(v6 + 116) = 0;
    *(_QWORD *)(v6 + 40) = v6 + 104 + (unsigned int)(4 * *(_DWORD *)(v6 + 104) + 16);
    *(_DWORD *)(*(_QWORD *)this + 24LL) = v2;
    *(_DWORD *)(*(_QWORD *)this + 32LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 28LL) = 0;
    v7 = (_QWORD *)(*(_QWORD *)this + 48LL);
    v7[1] = v7;
    *v7 = v7;
  }
}
