/*
 * XREFs of GreGetRandomRgn @ 0x1C011DA40
 * Callers:
 *     NtGdiGetRandomRgn @ 0x1C00148D0 (NtGdiGetRandomRgn.c)
 *     _ExcludeUpdateRgn @ 0x1C00FC0C8 (_ExcludeUpdateRgn.c)
 *     ?GetTrueClipRgn@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C011D97C (-GetTrueClipRgn@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     DrawTextExWorker @ 0x1C024B358 (DrawTextExWorker.c)
 * Callees:
 *     UserGetRedirectedWindowOrigin @ 0x1C0012A30 (UserGetRedirectedWindowOrigin.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C00160F4 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0019248 (--0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C001928C (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0AcquireDcVisRgnShared@@QEAA@PEAVDC@@@Z @ 0x1C025E1A4 (--0AcquireDcVisRgnShared@@QEAA@PEAVDC@@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 *     _lambda_9431b920671dafc29836e842bdd7a9f0_::operator() @ 0x1C0291218 (_lambda_9431b920671dafc29836e842bdd7a9f0_--operator().c)
 *     ??1AcquireDcVisRgnShared@@QEAA@XZ @ 0x1C02D16D4 (--1AcquireDcVisRgnShared@@QEAA@XZ.c)
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
      v9 = lambda_9431b920671dafc29836e842bdd7a9f0_::operator()(v8, v16, *((_QWORD *)v17[0] + 192));
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
          v6 = lambda_9431b920671dafc29836e842bdd7a9f0_::operator()(v11, v16, v11);
          goto LABEL_31;
        default:
          if ( (unsigned int)(a3 - 4) <= 1 )
          {
            AcquireDcVisRgnShared::AcquireDcVisRgnShared((AcquireDcVisRgnShared *)&v19, v17[0]);
            v6 = lambda_9431b920671dafc29836e842bdd7a9f0_::operator()(v10, v16, *((_QWORD *)v17[0] + 192));
            AcquireDcVisRgnShared::~AcquireDcVisRgnShared((AcquireDcVisRgnShared *)&v19);
          }
          goto LABEL_31;
      }
      v9 = lambda_9431b920671dafc29836e842bdd7a9f0_::operator()(v7, v16, v13);
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
