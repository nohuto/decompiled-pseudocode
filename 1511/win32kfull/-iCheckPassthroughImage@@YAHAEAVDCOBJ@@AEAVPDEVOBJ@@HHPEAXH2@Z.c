/*
 * XREFs of ?iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z @ 0x1C0268040
 * Callers:
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C0140480 (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z.c)
 * Callees:
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0043CE0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0046230 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     ?bSupportsJPEG@XDCOBJ@@QEAAHXZ @ 0x1C026800C (-bSupportsJPEG@XDCOBJ@@QEAAHXZ.c)
 *     ?bSupportsPNG@XDCOBJ@@QEAAHXZ @ 0x1C0268028 (-bSupportsPNG@XDCOBJ@@QEAAHXZ.c)
 */

__int64 __fastcall iCheckPassthroughImage(
        struct DCOBJ *this,
        struct PDEVOBJ *a2,
        int a3,
        __int64 a4,
        int *a5,
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
  __int64 v17; // rax
  __int64 v19; // [rsp+30h] [rbp-C8h]
  __int64 v20; // [rsp+38h] [rbp-C0h]
  __int64 v21; // [rsp+58h] [rbp-A0h] BYREF
  __int64 v22; // [rsp+60h] [rbp-98h]
  __int64 v23; // [rsp+68h] [rbp-90h] BYREF
  int v24; // [rsp+70h] [rbp-88h]
  int v25; // [rsp+78h] [rbp-80h]
  _QWORD v26[10]; // [rsp+80h] [rbp-78h] BYREF

  v9 = 0;
  v10 = 0;
  if ( a3 == 8 )
  {
    v25 = *a5;
    if ( v25 == 4119 )
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
    v22 = *(_QWORD *)(v13 + 120);
  else
    v22 = 0LL;
  v14 = *(_QWORD *)(v12 + 96);
  v24 = 0;
  v23 = 0LL;
  v21 = 0LL;
  if ( (a3 != 4119 || !(unsigned int)XDCOBJ::bSupportsJPEG(this))
    && (a3 != 4120 || !(unsigned int)XDCOBJ::bSupportsPNG(this))
    || !PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v23, 8u, 0, 0LL, 0, 0, 0, 0x200u) )
  {
    goto LABEL_21;
  }
  LODWORD(v20) = 0;
  LODWORD(v19) = 0;
  XlateObject = CreateXlateObject(
                  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 80LL) + 112LL),
                  *(_DWORD *)(*(_QWORD *)this + 112LL),
                  v23,
                  v22,
                  v14,
                  v14,
                  v19,
                  v20,
                  0xFFFFFF,
                  0);
  v21 = XlateObject;
  if ( !XlateObject )
  {
    v10 = -1;
LABEL_21:
    XlateObject = 0LL;
  }
  if ( XlateObject )
  {
    v16 = *(_QWORD *)this;
    v17 = *(_QWORD *)(*(_QWORD *)this + 512LL);
    if ( !v17 || v17 == -24 )
    {
      memset(v26, 0, sizeof(v26));
      v26[2] = *(_QWORD *)(v16 + 24);
      v26[3] = *(_QWORD *)(v16 + 48);
      v10 = 1;
      WORD2(v26[9]) = 1;
    }
    else
    {
      v10 = 1;
    }
    LOBYTE(v9) = (unsigned int)_guard_dispatch_icall_fptr() != 0;
    *a7 = v9;
  }
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v21, (__int64)a2);
  PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v23);
  return v10;
}
