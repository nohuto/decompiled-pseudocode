/*
 * XREFs of ?vTransparentScan@@YAXPEAU_SURFOBJ@@0KKPEAU_XLATEOBJ@@PEAU_RECTL@@K@Z @ 0x140320558
 * Callers:
 *     ?GreTransparentBltPS@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3K@Z @ 0x1400601D4 (-GreTransparentBltPS@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3K@Z.c)
 * Callees:
 *     ?ReadScanLine@@YAKPEAEKKKK@Z @ 0x14031F3F8 (-ReadScanLine@@YAKPEAEKKKK@Z.c)
 *     ?SkipScanLine@@YAKPEAEKKKK@Z @ 0x14031F4D4 (-SkipScanLine@@YAKPEAEKKKK@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

void __fastcall vTransparentScan(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        unsigned int a3,
        int a4,
        struct _XLATEOBJ *a5,
        struct _RECTL *a6,
        unsigned int a7)
{
  __int64 p_hdev; // rbx
  unsigned int v8; // edi
  int v10; // eax
  __int128 v12; // xmm0
  unsigned int v13; // esi
  unsigned __int8 *v14; // r13
  __int64 v15; // rbx
  unsigned int ScanLine; // eax
  unsigned int v17; // ebp
  int v18; // ecx
  __int64 p_hsurf; // rax
  unsigned int v20; // ecx
  _DWORD v21[2]; // [rsp+40h] [rbp-78h] BYREF
  struct _XLATEOBJ *v22; // [rsp+48h] [rbp-70h]
  __int128 v23; // [rsp+50h] [rbp-68h] BYREF

  p_hdev = (__int64)&a1->hdev;
  v8 = a3;
  v22 = a5;
  v21[0] = a3;
  v10 = a2->lDelta * a4;
  v12 = (__int128)*a6;
  v13 = a3 + a6->right - a6->left;
  v21[1] = a4;
  v14 = (unsigned __int8 *)a2->pvScan0 + v10;
  v23 = v12;
  if ( !a1 )
    p_hdev = 48LL;
  v15 = *(_QWORD *)p_hdev;
  if ( a3 < v13 )
  {
    do
    {
      ScanLine = ReadScanLine(v14, v8, v13, a2->iBitmapFormat, a7);
      v17 = ScanLine;
      if ( ScanLine - 1 > v8 )
      {
        v18 = ScanLine + v23 - v8;
        p_hsurf = (__int64)&a1[1].hsurf;
        DWORD2(v23) = v18;
        if ( !a1 )
          p_hsurf = 112LL;
        if ( (*(_DWORD *)p_hsurf & 0x400) != 0 )
          (*(void (__fastcall **)(struct _SURFOBJ *, struct _SURFOBJ *, _QWORD, struct _XLATEOBJ *, __int128 *, _DWORD *))(v15 + 2832))(
            a1,
            a2,
            0LL,
            v22,
            &v23,
            v21);
        else
          ((void (__fastcall *)(struct _SURFOBJ *, struct _SURFOBJ *, _QWORD, struct _XLATEOBJ *, __int128 *, _DWORD *))EngCopyBits)(
            a1,
            a2,
            0LL,
            v22,
            &v23,
            v21);
      }
      v21[0] = SkipScanLine(v14, v17, v13, a2->iBitmapFormat, a7);
      v20 = v21[0] - v8;
      v8 = v21[0];
      LODWORD(v23) = v20 + v23;
    }
    while ( v21[0] < v13 );
  }
}
