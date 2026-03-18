/*
 * XREFs of ?bSaveRegion@@YAHAEAVDCOBJ@@J@Z @ 0x1C00D6F80
 * Callers:
 *     <none>
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0010BA4 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0010BE0 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bHasSurface@XDCOBJ@@QEAAHXZ @ 0x1C026142C (-bHasSurface@XDCOBJ@@QEAAHXZ.c)
 *     ??0AcquireDcVisRgnExclusive@@QEAA@PEAVDC@@@Z @ 0x1C02D1660 (--0AcquireDcVisRgnExclusive@@QEAA@PEAVDC@@@Z.c)
 *     ??1AcquireDcVisRgnShared@@QEAA@XZ @ 0x1C02D16D4 (--1AcquireDcVisRgnShared@@QEAA@XZ.c)
 */

__int64 __fastcall bSaveRegion(struct DCOBJ *this, int a2)
{
  __int64 v3; // kr00_8
  DYNAMICMODECHANGESHARELOCK *v5; // rcx
  __int64 v6; // rax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // rcx
  _BYTE v10[8]; // [rsp+20h] [rbp-19h] BYREF
  __int64 v11; // [rsp+28h] [rbp-11h] BYREF
  int v12; // [rsp+30h] [rbp-9h]
  _BYTE v13[8]; // [rsp+38h] [rbp-1h] BYREF
  _QWORD v14[6]; // [rsp+40h] [rbp+7h] BYREF
  struct _RECTL v15; // [rsp+70h] [rbp+37h] BYREF

  if ( a2 == 1 )
  {
    v3 = *(_QWORD *)(*(_QWORD *)this + 528LL);
    v15.top = HIDWORD(v3);
    v15.right = v3;
    v15.left = 0;
    v15.bottom = 0;
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v11);
    if ( v11 )
    {
      if ( (unsigned int)XDCOBJ::bHasSurface(this) )
      {
        DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v10);
        DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v5);
      }
      RGNOBJ::vSet((RGNOBJ *)&v11, &v15);
      AcquireDcVisRgnExclusive::AcquireDcVisRgnExclusive((AcquireDcVisRgnExclusive *)v13, *(struct DC **)this);
      *(_QWORD *)(*(_QWORD *)this + 1536LL) = v11;
      AcquireDcVisRgnShared::~AcquireDcVisRgnShared((AcquireDcVisRgnShared *)v13);
      if ( v12 == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v11);
      return 1LL;
    }
    else
    {
      if ( v12 == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v11);
      return 0LL;
    }
  }
  else
  {
    DCOBJ::DCOBJ((DCOBJ *)v14, *(HDC *)(*(_QWORD *)this + 128LL));
    v6 = v14[0];
    v7 = 0;
    if ( v14[0] )
    {
      v8 = *(_QWORD *)(v14[0] + 232LL);
      if ( v8 )
      {
        ++*(_DWORD *)(v8 + 32);
        v6 = v14[0];
      }
      v9 = *(_QWORD *)(v6 + 224);
      if ( v9 )
        ++*(_DWORD *)(v9 + 32);
      v7 = 1;
    }
    DCOBJ::~DCOBJ((DCOBJ *)v14);
    return v7;
  }
}
