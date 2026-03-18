/*
 * XREFs of NtGdiStartPage @ 0x140312610
 * Callers:
 *     <none>
 * Callees:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x14016BC60 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?vDone@RESTORESAVEDCATTRS@@QEAAXXZ @ 0x1402965CC (-vDone@RESTORESAVEDCATTRS@@QEAAXXZ.c)
 *     ?vInit@RESTORESAVEDCATTRS@@QEAAXPEAVAPIDCOBJ@@@Z @ 0x140296918 (-vInit@RESTORESAVEDCATTRS@@QEAAXPEAVAPIDCOBJ@@@Z.c)
 *     ??1RESTORESAVEDCATTRS@@QEAA@XZ @ 0x140296EA8 (--1RESTORESAVEDCATTRS@@QEAA@XZ.c)
 *     ?bEndDocInternal@@YAHAEAVAPIDCOBJ@@K@Z @ 0x140310FE0 (-bEndDocInternal@@YAHAEAVAPIDCOBJ@@K@Z.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtGdiStartPage(HDC a1)
{
  int v1; // ebx
  unsigned int v2; // edi
  unsigned int v3; // esi
  __int64 v4; // r8
  int v5; // ebx
  __int64 v6; // r14
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64); // rax
  _QWORD v10[14]; // [rsp+20h] [rbp-29h] BYREF
  DCOBJ *v11; // [rsp+B8h] [rbp+6Fh] BYREF

  v1 = (int)a1;
  v2 = 0;
  v3 = 0;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v10, a1);
  if ( v10[0] )
  {
    if ( !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v10) || (v5 = v1 & 0x7F0000, v5 == 0x10000) || v5 == 6684672 )
    {
      EngSetLastError(6u);
    }
    else
    {
      v6 = *(_QWORD *)(v4 + 496);
      if ( v6 )
      {
        v7 = *(_QWORD *)(v4 + 48);
        if ( *(_QWORD *)(v7 + 2552) )
        {
          if ( (*(_DWORD *)(v7 + 40) & 0x8000) != 0 )
          {
            v11 = 0LL;
            RESTORESAVEDCATTRS::vInit((RESTORESAVEDCATTRS *)&v11, (struct APIDCOBJ *)v10);
            v8 = *(__int64 (__fastcall **)(__int64))(v7 + 2944);
            if ( v8 && (v3 = v8(v6 + 24)) != 0 )
            {
              RESTORESAVEDCATTRS::vDone(&v11);
              *(_DWORD *)(v10[0] + 36LL) |= 0x100u;
              *(_DWORD *)(v10[0] + 2128LL) = 0;
              *(_DWORD *)(v10[0] + 2132LL) = 0;
            }
            else
            {
              RESTORESAVEDCATTRS::vDone(&v11);
              bEndDocInternal((struct APIDCOBJ *)v10, 1u);
            }
            RESTORESAVEDCATTRS::~RESTORESAVEDCATTRS(&v11);
          }
        }
      }
    }
    v2 = v3;
  }
  else
  {
    EngSetLastError(6u);
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v10);
  return v2;
}
