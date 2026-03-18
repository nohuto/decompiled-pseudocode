/*
 * XREFs of NtGdiConvertMetafileRect @ 0x1C00059A0
 * Callers:
 *     <none>
 * Callees:
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0032CA0 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiConvertMetafileRect(HDC a1, struct _POINTFIX a2)
{
  _OWORD *v2; // rdi
  __int128 *v3; // rax
  unsigned int v4; // ebx
  FIX x; // r8d
  FIX v6; // ecx
  FIX y; // r9d
  FIX v8; // edx
  FIX v9; // edx
  FIX v11; // eax
  FIX v12; // eax
  HDC v13[2]; // [rsp+28h] [rbp-70h] BYREF
  _QWORD v14[6]; // [rsp+38h] [rbp-60h] BYREF
  struct _POINTFIX v15; // [rsp+68h] [rbp-30h] BYREF
  FIX v16; // [rsp+70h] [rbp-28h]
  FIX v17; // [rsp+74h] [rbp-24h]
  __int128 v18; // [rsp+78h] [rbp-20h] BYREF

  v2 = (_OWORD *)a2;
  v13[0] = a1;
  v15 = a2;
  v3 = (__int128 *)a2;
  if ( *(unsigned __int64 *)&a2 >= W32UserProbeAddress )
    v3 = (__int128 *)W32UserProbeAddress;
  v18 = *v3;
  v4 = 2;
  DCOBJ::DCOBJ((DCOBJ *)v14, a1);
  if ( !v14[0] )
    goto LABEL_4;
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v13, (struct XDCOBJ *)v14, 0x204u);
  if ( !v13[0] || !EXFORMOBJ::bXform((EXFORMOBJ *)v13, (struct _POINTL *)&v18, &v15, 2uLL) )
    goto LABEL_4;
  x = v15.x;
  v6 = v16;
  if ( v15.x > v16 )
  {
    v11 = v15.x;
    x = v16;
    v15.x = v16;
    v6 = v11;
  }
  y = v15.y;
  v8 = v17;
  if ( v15.y > v17 )
  {
    v12 = v15.y;
    y = v17;
    v15.y = v17;
    v8 = v12;
  }
  v16 = v6 - 16;
  v9 = v8 - 16;
  v17 = v9;
  if ( v6 - 16 < x || v9 < y )
    v4 = 1;
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v13, (struct XDCOBJ *)v14, 0x402u);
  if ( v13[0] && EXFORMOBJ::bXform((EXFORMOBJ *)v13, &v15, (struct _POINTL *)&v18, 2uLL) )
  {
    if ( (unsigned __int64)v2 >= W32UserProbeAddress )
      v2 = (_OWORD *)W32UserProbeAddress;
    *v2 = v18;
  }
  else
  {
LABEL_4:
    v4 = 0;
  }
  DCOBJ::~DCOBJ((DCOBJ *)v14);
  if ( !v4 )
    EngSetLastError(0x57u);
  return v4;
}
