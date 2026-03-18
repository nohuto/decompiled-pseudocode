/*
 * XREFs of NtGdiEndPage @ 0x140312400
 * Callers:
 *     <none>
 * Callees:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x14016BC60 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?vDone@RESTORESAVEDCATTRS@@QEAAXXZ @ 0x1402965CC (-vDone@RESTORESAVEDCATTRS@@QEAAXXZ.c)
 *     ?vInit@RESTORESAVEDCATTRS@@QEAAXPEAVAPIDCOBJ@@@Z @ 0x140296918 (-vInit@RESTORESAVEDCATTRS@@QEAAXPEAVAPIDCOBJ@@@Z.c)
 *     ??1RESTORESAVEDCATTRS@@QEAA@XZ @ 0x140296EA8 (--1RESTORESAVEDCATTRS@@QEAA@XZ.c)
 *     GreDeleteWnd @ 0x14031A0A0 (GreDeleteWnd.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtGdiEndPage(HDC a1)
{
  int v1; // ebx
  unsigned int v2; // edi
  unsigned int v3; // esi
  __int64 v4; // r8
  int v5; // ebx
  __int64 v6; // rbp
  __int64 v7; // rbx
  int v8; // eax
  __int64 (__fastcall *v9)(__int64); // rax
  struct EWNDOBJ *v10; // rcx
  _QWORD v12[14]; // [rsp+20h] [rbp-78h] BYREF
  DCOBJ *v13; // [rsp+A8h] [rbp+10h] BYREF

  v1 = (int)a1;
  v2 = 0;
  v3 = 0;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v12, a1);
  if ( v12[0] )
  {
    if ( (unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v12) )
    {
      v5 = v1 & 0x7F0000;
      if ( v5 != 0x10000 && v5 != 6684672 )
      {
        v6 = *(_QWORD *)(v4 + 496);
        if ( v6 )
        {
          v7 = *(_QWORD *)(v4 + 48);
          v8 = *(_DWORD *)(v7 + 40);
          if ( (v8 & 1) == 0 )
          {
            if ( *(_QWORD *)(v7 + 2552) )
            {
              v13 = 0LL;
              if ( (v8 & 0x8000) != 0 )
                RESTORESAVEDCATTRS::vInit((RESTORESAVEDCATTRS *)&v13, (struct APIDCOBJ *)v12);
              v9 = *(__int64 (__fastcall **)(__int64))(v7 + 2936);
              if ( v9 )
              {
                v3 = v9(v6 + 24);
                if ( v3 )
                {
                  RESTORESAVEDCATTRS::vDone(&v13);
                  if ( (*(_DWORD *)(v7 + 40) & 0x8000) != 0 )
                  {
                    *(_DWORD *)(v12[0] + 36LL) &= ~0x100u;
                    v10 = *(struct EWNDOBJ **)(v6 + 136);
                    if ( v10 )
                    {
                      GreDeleteWnd(v10);
                      *(_QWORD *)(v6 + 136) = 0LL;
                    }
                    *(_WORD *)(v12[0] + 2088LL) = -1;
                  }
                }
              }
              RESTORESAVEDCATTRS::~RESTORESAVEDCATTRS(&v13);
            }
          }
        }
      }
    }
    v2 = v3;
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v12);
  return v2;
}
