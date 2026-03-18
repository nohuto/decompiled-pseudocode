/*
 * XREFs of ?iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z @ 0x1C02693E4
 * Callers:
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C012588C (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z.c)
 * Callees:
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0025BE0 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0026620 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?pSurfobj@SURFACE@@QEAAPEAU_SURFOBJ@@XZ @ 0x1C009CDAC (-pSurfobj@SURFACE@@QEAAPEAU_SURFOBJ@@XZ.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     ?bSupportsJPEG@XDCOBJ@@QEAAHXZ @ 0x1C02693B0 (-bSupportsJPEG@XDCOBJ@@QEAAHXZ.c)
 *     ?bSupportsPNG@XDCOBJ@@QEAAHXZ @ 0x1C02693CC (-bSupportsPNG@XDCOBJ@@QEAAHXZ.c)
 */

__int64 __fastcall iCheckPassthroughImage(
        struct DCOBJ *this,
        struct PDEVOBJ *a2,
        int a3,
        __int64 a4,
        _DWORD *a5,
        int a6,
        _DWORD *a7)
{
  int v9; // edi
  unsigned int v10; // esi
  int v11; // eax
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 XlateObject; // rax
  __int64 v16; // rbx
  struct _SURFOBJ *v17; // r10
  _DWORD *v18; // rbx
  __int64 v20; // [rsp+30h] [rbp-318h]
  __int64 v21; // [rsp+38h] [rbp-310h]
  __int64 v22; // [rsp+40h] [rbp-308h]
  __int64 v23; // [rsp+60h] [rbp-2E8h] BYREF
  __int64 v24; // [rsp+68h] [rbp-2E0h]
  __int64 v25; // [rsp+70h] [rbp-2D8h] BYREF
  int v26; // [rsp+78h] [rbp-2D0h]
  _DWORD *v27; // [rsp+80h] [rbp-2C8h]
  int v28; // [rsp+88h] [rbp-2C0h]
  _DWORD *v29; // [rsp+90h] [rbp-2B8h]
  _BYTE v30[608]; // [rsp+A0h] [rbp-2A8h] BYREF

  v29 = a5;
  v27 = a7;
  v9 = 0;
  v10 = 0;
  if ( a3 == 8 )
  {
    v28 = *a5;
    if ( v28 == 4119 )
      v11 = XDCOBJ::bSupportsJPEG(this);
    else
      v11 = XDCOBJ::bSupportsPNG(this);
    if ( v11 && *(_QWORD *)(*(_QWORD *)a2 + 3328LL) )
      return 1;
    return v10;
  }
  if ( !*(_QWORD *)(*(_QWORD *)a2 + 3328LL) )
    return v10;
  if ( (unsigned __int64)a6 < 4 || !a7 )
    return (unsigned int)-1;
  v12 = *(_QWORD *)this;
  v13 = *(_QWORD *)(*(_QWORD *)this + 512LL);
  if ( v13 )
    v24 = *(_QWORD *)(v13 + 120);
  else
    v24 = 0LL;
  v14 = *(_QWORD *)(v12 + 96);
  v26 = 0;
  v25 = 0LL;
  v23 = 0LL;
  if ( (a3 != 4119 || !(unsigned int)XDCOBJ::bSupportsJPEG(this))
    && (a3 != 4120 || !(unsigned int)XDCOBJ::bSupportsPNG(this))
    || !PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v25, 8u, 0, 0LL, 0, 0, 0, 0x200u, 1) )
  {
    goto LABEL_21;
  }
  LODWORD(v22) = 0xFFFFFF;
  LODWORD(v21) = 0;
  LODWORD(v20) = 0;
  XlateObject = CreateXlateObject(
                  *(void **)(*(_QWORD *)(*(_QWORD *)this + 80LL) + 112LL),
                  *(_DWORD *)(*(_QWORD *)this + 112LL),
                  v25,
                  v24,
                  v14,
                  v14,
                  v20,
                  v21,
                  v22,
                  0);
  v23 = XlateObject;
  if ( !XlateObject )
  {
    v10 = -1;
LABEL_21:
    XlateObject = 0LL;
  }
  if ( XlateObject )
  {
    v16 = *(_QWORD *)this;
    if ( !SURFACE::pSurfobj(*(SURFACE **)(*(_QWORD *)this + 512LL)) )
    {
      memset(v30, 0, sizeof(v30));
      v17 = SURFACE::pSurfobj((SURFACE *)v30);
      v17->dhpdev = *(DHPDEV *)(v16 + 24);
      v17->hdev = *(HDEV *)(*(_QWORD *)this + 48LL);
      v17->iType = 1;
    }
    v18 = v27;
    LOBYTE(v9) = (unsigned int)_guard_dispatch_icall_fptr() != 0;
    v10 = 1;
    *v18 = v9;
  }
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v23);
  PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v25);
  return v10;
}
