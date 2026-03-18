/*
 * XREFs of ?iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z @ 0x1C0266338
 * Callers:
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C026561C (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z.c)
 * Callees:
 *     ?pSurfobj@SURFACE@@QEAAPEAU_SURFOBJ@@XZ @ 0x1C0033D5C (-pSurfobj@SURFACE@@QEAAPEAU_SURFOBJ@@XZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C003A36C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00449C0 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     ?bSupportsJPEG@XDCOBJ@@QEAAHXZ @ 0x1C02662C0 (-bSupportsJPEG@XDCOBJ@@QEAAHXZ.c)
 *     ?bSupportsPNG@XDCOBJ@@QEAAHXZ @ 0x1C02662DC (-bSupportsPNG@XDCOBJ@@QEAAHXZ.c)
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
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 XlateObject; // rax
  __int64 v15; // rbx
  struct _SURFOBJ *v16; // r10
  _DWORD *v17; // rbx
  __int64 v19; // [rsp+30h] [rbp-328h]
  __int64 v20; // [rsp+38h] [rbp-320h]
  __int64 v21; // [rsp+40h] [rbp-318h]
  __int64 v22; // [rsp+58h] [rbp-300h]
  __int64 v23; // [rsp+68h] [rbp-2F0h] BYREF
  __int64 v24; // [rsp+70h] [rbp-2E8h] BYREF
  int v25; // [rsp+78h] [rbp-2E0h]
  int v26; // [rsp+80h] [rbp-2D8h]
  _DWORD *v27; // [rsp+88h] [rbp-2D0h]
  _DWORD *v28; // [rsp+90h] [rbp-2C8h]
  _BYTE v29[624]; // [rsp+A0h] [rbp-2B8h] BYREF

  v28 = a5;
  v27 = a7;
  v9 = 0;
  v10 = 0;
  if ( a3 == 8 )
  {
    v26 = *a5;
    if ( v26 == 4119 )
      v11 = XDCOBJ::bSupportsJPEG(this);
    else
      v11 = XDCOBJ::bSupportsPNG(this);
    if ( v11 && *(_QWORD *)(*(_QWORD *)a2 + 3320LL) )
      return 1;
    return v10;
  }
  if ( !*(_QWORD *)(*(_QWORD *)a2 + 3320LL) )
    return v10;
  if ( (unsigned __int64)a6 < 4 || !a7 )
    return (unsigned int)-1;
  v12 = *(_QWORD *)(*(_QWORD *)this + 512LL);
  if ( v12 )
    v22 = *(_QWORD *)(v12 + 120);
  else
    v22 = 0LL;
  v13 = *(_QWORD *)(*(_QWORD *)this + 96LL);
  v25 = 0;
  v24 = 0LL;
  v23 = 0LL;
  if ( (a3 != 4119 || !(unsigned int)XDCOBJ::bSupportsJPEG(this))
    && (a3 != 4120 || !(unsigned int)XDCOBJ::bSupportsPNG(this))
    || !PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v24, 8u, 0, 0LL, 0, 0, 0, 0x200u, 1) )
  {
    goto LABEL_21;
  }
  LODWORD(v21) = 0xFFFFFF;
  LODWORD(v20) = 0;
  LODWORD(v19) = 0;
  XlateObject = CreateXlateObject(
                  *(void **)(*(_QWORD *)(*(_QWORD *)this + 80LL) + 112LL),
                  *(_DWORD *)(*(_QWORD *)this + 112LL),
                  v24,
                  v22,
                  v13,
                  v13,
                  v19,
                  v20,
                  v21,
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
    v15 = *(_QWORD *)this;
    if ( !SURFACE::pSurfobj(*(SURFACE **)(*(_QWORD *)this + 512LL)) )
    {
      memset(v29, 0, 0x268uLL);
      v16 = SURFACE::pSurfobj((SURFACE *)v29);
      v16->dhpdev = *(DHPDEV *)(v15 + 24);
      v16->hdev = *(HDEV *)(*(_QWORD *)this + 48LL);
      v16->iType = 1;
    }
    v17 = v27;
    LOBYTE(v9) = (unsigned int)_guard_dispatch_icall_fptr() != 0;
    v10 = 1;
    *v17 = v9;
  }
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v23);
  PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v24);
  return v10;
}
