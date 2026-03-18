/*
 * XREFs of ?bSaveRegion@@YAHAEAVDCOBJ@@J@Z @ 0x1C0049F00
 * Callers:
 *     <none>
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0053F54 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0053F90 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C025B160 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C025B464 (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ??0AcquireDcVisRgnExclusive@@QEAA@PEAVDC@@@Z @ 0x1C02D59F0 (--0AcquireDcVisRgnExclusive@@QEAA@PEAVDC@@@Z.c)
 *     ??1AcquireDcVisRgnShared@@QEAA@XZ @ 0x1C02D5A64 (--1AcquireDcVisRgnShared@@QEAA@XZ.c)
 */

__int64 __fastcall bSaveRegion(struct DC **a1, int a2)
{
  struct DC *v2; // rax
  unsigned int v3; // edi
  __int64 v5; // kr00_8
  DYNAMICMODECHANGESHARELOCK *v7; // rcx
  HDC v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  _BYTE v12[8]; // [rsp+20h] [rbp-19h] BYREF
  __int64 v13; // [rsp+28h] [rbp-11h] BYREF
  int v14; // [rsp+30h] [rbp-9h]
  _BYTE v15[8]; // [rsp+38h] [rbp-1h] BYREF
  _QWORD v16[2]; // [rsp+40h] [rbp+7h] BYREF
  _BYTE v17[32]; // [rsp+50h] [rbp+17h] BYREF
  struct _RECTL v18; // [rsp+70h] [rbp+37h] BYREF

  v2 = *a1;
  v3 = 0;
  if ( a2 == 1 )
  {
    v5 = *((_QWORD *)v2 + 66);
    v18.top = HIDWORD(v5);
    v18.right = v5;
    v18.left = 0;
    v18.bottom = 0;
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v13);
    if ( v13 )
    {
      if ( *((_QWORD *)*a1 + 64) )
      {
        DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v12);
        DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v7);
      }
      RGNOBJ::vSet((RGNOBJ *)&v13, &v18);
      AcquireDcVisRgnExclusive::AcquireDcVisRgnExclusive((AcquireDcVisRgnExclusive *)v15, *a1);
      *((_QWORD *)*a1 + 192) = v13;
      AcquireDcVisRgnShared::~AcquireDcVisRgnShared((AcquireDcVisRgnShared *)v15);
      if ( v14 == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v13);
      return 1LL;
    }
    else
    {
      if ( v14 == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v13);
      return 0LL;
    }
  }
  else
  {
    v8 = (HDC)*((_QWORD *)v2 + 16);
    v16[0] = 0LL;
    v16[1] = 0LL;
    UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v17);
    XDCOBJ::vLock((XDCOBJ *)v16, v8);
    v9 = v16[0];
    if ( v16[0] )
    {
      v10 = *(_QWORD *)(v16[0] + 232LL);
      if ( v10 )
      {
        ++*(_DWORD *)(v10 + 32);
        v9 = v16[0];
      }
      v11 = *(_QWORD *)(v9 + 224);
      if ( v11 )
        ++*(_DWORD *)(v11 + 32);
      v3 = 1;
    }
    DCOBJ::~DCOBJ((DCOBJ *)v16);
    return v3;
  }
}
