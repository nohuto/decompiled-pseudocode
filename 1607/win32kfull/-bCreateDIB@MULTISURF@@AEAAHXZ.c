/*
 * XREFs of ?bCreateDIB@MULTISURF@@AEAAHXZ @ 0x1C02987B4
 * Callers:
 *     ?bLoadSourceNotMetaDEVBITMAP@MULTISURF@@AEAAHPEAUHDEV__@@@Z @ 0x1C0298C5C (-bLoadSourceNotMetaDEVBITMAP@MULTISURF@@AEAAHPEAUHDEV__@@@Z.c)
 * Callees:
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C00354E4 (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MULTISURF::bCreateDIB(MULTISURF *this)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  int v4; // eax
  __int64 v5; // r8
  __int64 *v6; // rax
  __int64 v7; // rax
  unsigned int v8; // esi
  void (__fastcall *v9)(__int64, __int64, _QWORD, _QWORD, __int64 *, __int64 *); // r10
  __int64 v10; // rax
  _DWORD *v11; // rcx
  _QWORD v13[4]; // [rsp+68h] [rbp-9h] BYREF
  __int64 v14; // [rsp+88h] [rbp+17h] BYREF
  int v15; // [rsp+90h] [rbp+1Fh]
  int v16; // [rsp+94h] [rbp+23h]
  __int64 v17; // [rsp+98h] [rbp+27h] BYREF
  int v18; // [rsp+A0h] [rbp+2Fh]
  int v19; // [rsp+A4h] [rbp+33h]

  v2 = 0LL;
  v3 = *(_QWORD *)(*(_QWORD *)this + 48LL);
  v4 = *(_DWORD *)(*(_QWORD *)this + 56LL);
  v16 = *(_DWORD *)(*(_QWORD *)this + 60LL);
  v14 = 0LL;
  v15 = v4;
  ERECTL::operator*=(&v14, (_DWORD *)this + 2);
  memset(v13, 0, sizeof(v13));
  v18 = v15 - v14;
  v19 = v16 - HIDWORD(v14);
  v17 = 0LL;
  LODWORD(v13[0]) = *(_DWORD *)(v5 + 96);
  HIDWORD(v13[0]) = v15 - v14;
  v13[1] = (unsigned int)(v16 - HIDWORD(v14));
  v6 = *(__int64 **)(v5 + 120);
  if ( v6 )
    v7 = *v6;
  else
    v7 = 0LL;
  v8 = 1;
  v13[2] = v7;
  LODWORD(v13[3]) = 1;
  if ( SURFMEM::bCreateDIB(
         (MULTISURF *)((char *)this + 56),
         (struct _DEVBITMAPINFO *)v13,
         0LL,
         0LL,
         0,
         0LL,
         0LL,
         0,
         1,
         0,
         0)
    && (v9 = *(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64 *, __int64 *))(v3 + 2864)) != 0LL )
  {
    v10 = *((_QWORD *)this + 7);
    if ( v10 )
      v2 = v10 + 24;
    v9(v2, *(_QWORD *)this + 24LL, 0LL, 0LL, &v17, &v14);
    v11 = (_DWORD *)*((_QWORD *)this + 13);
    *((_DWORD *)this + 18) = *v11 - v14;
    *((_DWORD *)this + 19) = v11[1] - HIDWORD(v14);
    *((_DWORD *)this + 20) = v11[2] - v14;
    *((_DWORD *)this + 21) = v11[3] - HIDWORD(v14);
  }
  else
  {
    return 0;
  }
  return v8;
}
