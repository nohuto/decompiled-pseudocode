/*
 * XREFs of NtGdiSetColorSpace @ 0x140331020
 * Callers:
 *     <none>
 * Callees:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??1COLORSPACEREF@@QEAA@XZ @ 0x140243FF4 (--1COLORSPACEREF@@QEAA@XZ.c)
 *     ??0COLORSPACEREF@@QEAA@PEAUHCOLORSPACE__@@@Z @ 0x140244044 (--0COLORSPACEREF@@QEAA@PEAUHCOLORSPACE__@@@Z.c)
 */

__int64 __fastcall NtGdiSetColorSpace(HDC a1, HCOLORSPACE a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rbx
  _BYTE v6[32]; // [rsp+20h] [rbp-49h] BYREF
  __int64 v7; // [rsp+40h] [rbp-29h]
  _QWORD v8[2]; // [rsp+50h] [rbp-19h] BYREF
  __int64 v9; // [rsp+60h] [rbp-9h]

  v3 = 0;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v8, a1);
  if ( v8[0] )
  {
    if ( a2 == *(HCOLORSPACE *)(*(_QWORD *)(v8[0] + 976LL) + 16LL) )
    {
      v3 = 1;
    }
    else
    {
      COLORSPACEREF::COLORSPACEREF((COLORSPACEREF *)v6, a2);
      if ( v7 )
      {
        v4 = v9;
        DEC_SHARE_REF_CNT(v9, *(_QWORD *)(v8[0] + 96LL));
        *(_QWORD *)(*(_QWORD *)(v8[0] + 976LL) + 16LL) = a2;
        *(_QWORD *)(v8[0] + 96LL) = v7;
        INC_SHARE_REF_CNT(v4, v7);
        v3 = 1;
      }
      COLORSPACEREF::~COLORSPACEREF((COLORSPACEREF *)v6);
    }
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v8);
  return v3;
}
