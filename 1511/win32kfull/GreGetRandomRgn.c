/*
 * XREFs of GreGetRandomRgn @ 0x1C01475A0
 * Callers:
 *     _ExcludeUpdateRgn @ 0x1C00CC3D8 (_ExcludeUpdateRgn.c)
 *     ?GetTrueClipRgn@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C01474DC (-GetTrueClipRgn@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     DrawTextExWorker @ 0x1C024B318 (DrawTextExWorker.c)
 * Callees:
 *     ??0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C002C838 (--0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002D9CC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0037A14 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     UserGetRedirectedWindowOrigin @ 0x1C007A940 (UserGetRedirectedWindowOrigin.c)
 */

__int64 __fastcall GreGetRandomRgn(HDC a1, HRGN a2, int a3)
{
  struct _POINTL v6; // r14
  unsigned int v7; // ebx
  int v8; // r15d
  __int64 v9; // rdi
  _QWORD v11[2]; // [rsp+28h] [rbp-49h] BYREF
  struct _POINTL v12; // [rsp+38h] [rbp-39h] BYREF
  _QWORD v13[3]; // [rsp+40h] [rbp-31h] BYREF
  _BYTE v14[80]; // [rsp+58h] [rbp-19h] BYREF
  __int64 v15; // [rsp+F0h] [rbp+7Fh] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v11, a1);
  v6 = 0LL;
  v7 = -1;
  v8 = 5;
  if ( v11[0] )
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v14, (struct XDCOBJ *)v11, 1);
    if ( (v14[24] & 1) == 0 )
    {
LABEL_8:
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v14);
      goto LABEL_9;
    }
    switch ( a3 )
    {
      case 1:
        v9 = *(_QWORD *)(v11[0] + 224LL);
        break;
      case 2:
        v9 = *(_QWORD *)(v11[0] + 232LL);
        break;
      case 3:
        v9 = *(_QWORD *)(v11[0] + 224LL);
        v6 = *(struct _POINTL *)(v11[0] + 232LL);
        if ( v9 )
        {
          if ( v6 )
            v8 = 1;
        }
        else
        {
          v9 = *(_QWORD *)(v11[0] + 232LL);
        }
        break;
      default:
        if ( (unsigned int)(a3 - 4) > 1 )
        {
LABEL_7:
          v7 = 0;
          goto LABEL_8;
        }
        v9 = *(_QWORD *)(v11[0] + 1512LL);
        break;
    }
    if ( v9 )
    {
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v13, a2, 0);
      if ( v13[0] )
      {
        v15 = v9;
        if ( v8 == 5 )
        {
          if ( RGNOBJAPI::bCopy((RGNOBJAPI *)v13, (struct RGNOBJ *)&v15)
            && (a3 != 4
             || (*(_DWORD *)(v11[0] + 36LL) & 0x4000) == 0
             || (unsigned int)UserGetRedirectedWindowOrigin((__int64)a1, (__int64)&v12)
             && RGNOBJ::bOffset((RGNOBJ *)v13, &v12)) )
          {
            v7 = 1;
          }
        }
        else
        {
          v12 = v6;
          if ( RGNOBJAPI::iCombine((RGNOBJAPI *)v13, (struct RGNOBJ *)&v15, (struct RGNOBJ *)&v12, v8) )
            v7 = 1;
        }
      }
      RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v13);
      goto LABEL_8;
    }
    goto LABEL_7;
  }
  EngSetLastError(6u);
LABEL_9:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v11);
  return v7;
}
