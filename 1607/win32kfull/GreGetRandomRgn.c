/*
 * XREFs of GreGetRandomRgn @ 0x1C014BED0
 * Callers:
 *     NtGdiGetRandomRgn @ 0x1C004C4D0 (NtGdiGetRandomRgn.c)
 *     _ExcludeUpdateRgn @ 0x1C0125A3C (_ExcludeUpdateRgn.c)
 *     ?GetTrueClipRgn@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C014BE30 (-GetTrueClipRgn@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     DrawTextExWorker @ 0x1C0247624 (DrawTextExWorker.c)
 * Callees:
 *     ??0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C004892C (--0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C0048970 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C004BB88 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     UserGetRedirectedWindowOrigin @ 0x1C00632E0 (UserGetRedirectedWindowOrigin.c)
 *     ??0AcquireDcVisRgnShared@@QEAA@PEAVDC@@@Z @ 0x1C025B198 (--0AcquireDcVisRgnShared@@QEAA@PEAVDC@@@Z.c)
 *     _lambda_6307e9d0c45e74b0794dfefaa8f58e1d_::operator() @ 0x1C028FD34 (_lambda_6307e9d0c45e74b0794dfefaa8f58e1d_--operator().c)
 *     ??1AcquireDcVisRgnShared@@QEAA@XZ @ 0x1C02D5A64 (--1AcquireDcVisRgnShared@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetRandomRgn(HDC a1, HRGN a2, int a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // edi
  __int64 v10; // rcx
  __int64 v11; // rcx
  struct _POINTL v12; // rax
  __int64 v13; // r8
  struct _POINTL v15; // [rsp+28h] [rbp-99h] BYREF
  _QWORD v16[7]; // [rsp+30h] [rbp-91h] BYREF
  struct DC *v17[6]; // [rsp+68h] [rbp-59h] BYREF
  _BYTE v18[112]; // [rsp+98h] [rbp-29h] BYREF
  __int64 v19; // [rsp+140h] [rbp+7Fh] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v17, a1);
  v6 = 0;
  if ( v17[0] && *((_WORD *)v17[0] + 6) == 1 )
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v18, (struct XDCOBJ *)v17, 1);
    if ( (v18[24] & 1) == 0 )
    {
      v6 = -1;
LABEL_32:
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v18);
      goto LABEL_33;
    }
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v16, a2, 0, 0);
    if ( !v16[0] )
    {
      v6 = -1;
LABEL_31:
      RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v16);
      goto LABEL_32;
    }
    if ( a3 == 4 && (*((_DWORD *)v17[0] + 9) & 0x4000) != 0 )
    {
      AcquireDcVisRgnShared::AcquireDcVisRgnShared((AcquireDcVisRgnShared *)&v19, v17[0]);
      v9 = lambda_6307e9d0c45e74b0794dfefaa8f58e1d_::operator()(v8, v16, *((_QWORD *)v17[0] + 192));
      if ( v9 == 1 )
      {
        AcquireDcVisRgnShared::~AcquireDcVisRgnShared((AcquireDcVisRgnShared *)&v19);
        v15 = 0LL;
        if ( (unsigned int)UserGetRedirectedWindowOrigin((__int64)a1, (__int64)&v15)
          && RGNOBJ::bOffset((RGNOBJ *)v16, &v15) )
        {
          v9 = 1;
        }
        else
        {
          v9 = -1;
        }
      }
      else
      {
        AcquireDcVisRgnShared::~AcquireDcVisRgnShared((AcquireDcVisRgnShared *)&v19);
      }
    }
    else
    {
      switch ( a3 )
      {
        case 1:
          v13 = *((_QWORD *)v17[0] + 28);
          break;
        case 2:
          v13 = *((_QWORD *)v17[0] + 29);
          break;
        case 3:
          v11 = *((_QWORD *)v17[0] + 29);
          v12 = (struct _POINTL)*((_QWORD *)v17[0] + 28);
          if ( v11 )
          {
            if ( v12 )
            {
              v19 = *((_QWORD *)v17[0] + 29);
              v15 = v12;
              v6 = RGNOBJAPI::iCombine((RGNOBJAPI *)v16, (struct RGNOBJ *)&v15, (struct RGNOBJ *)&v19, 1) != 0 ? 1 : -1;
              goto LABEL_31;
            }
          }
          else if ( v12 )
          {
            v11 = *((_QWORD *)v17[0] + 28);
          }
          v6 = lambda_6307e9d0c45e74b0794dfefaa8f58e1d_::operator()(v11, v16, v11);
          goto LABEL_31;
        default:
          if ( (unsigned int)(a3 - 4) <= 1 )
          {
            AcquireDcVisRgnShared::AcquireDcVisRgnShared((AcquireDcVisRgnShared *)&v19, v17[0]);
            v6 = lambda_6307e9d0c45e74b0794dfefaa8f58e1d_::operator()(v10, v16, *((_QWORD *)v17[0] + 192));
            AcquireDcVisRgnShared::~AcquireDcVisRgnShared((AcquireDcVisRgnShared *)&v19);
          }
          goto LABEL_31;
      }
      v9 = lambda_6307e9d0c45e74b0794dfefaa8f58e1d_::operator()(v7, v16, v13);
    }
    v6 = v9;
    goto LABEL_31;
  }
  EngSetLastError(6u);
  v6 = -1;
LABEL_33:
  DCOBJ::~DCOBJ((DCOBJ *)v17);
  return v6;
}
