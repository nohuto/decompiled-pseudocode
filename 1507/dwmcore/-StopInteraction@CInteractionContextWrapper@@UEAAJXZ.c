/*
 * XREFs of ?StopInteraction@CInteractionContextWrapper@@UEAAJXZ @ 0x18012F350
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x1800636A0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CInteractionContextWrapper::StopInteraction(
        CInteractionContextWrapper *this,
        __int64 a2,
        __int64 a3,
        const GUID *a4)
{
  unsigned int v5; // edx
  int v7; // [rsp+30h] [rbp-9h] BYREF
  CInteractionContextWrapper *v8; // [rsp+38h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp+7h] BYREF
  CInteractionContextWrapper **v10; // [rsp+60h] [rbp+27h]
  int v11; // [rsp+68h] [rbp+2Fh]
  int v12; // [rsp+6Ch] [rbp+33h]
  int *v13; // [rsp+70h] [rbp+37h]
  int v14; // [rsp+78h] [rbp+3Fh]
  int v15; // [rsp+7Ch] [rbp+43h]

  if ( *((_QWORD *)this + 3) )
  {
    v7 = StopInteractionContext();
    v5 = v7;
    if ( v7 >= 0 )
    {
      (*(void (__fastcall **)(CInteractionContextWrapper *, _QWORD))(*(_QWORD *)this + 48LL))(this, (unsigned int)v7);
      v5 = v7;
    }
  }
  else
  {
    v5 = -2147019873;
    v7 = -2147019873;
  }
  if ( (unsigned int)pRelatedActivityId > 4 && (qword_180190AC0 & 2) != 0 && (qword_180190AC8 & 2) == qword_180190AC8 )
  {
    v12 = 0;
    v15 = 0;
    v10 = &v8;
    v13 = &v7;
    v8 = this;
    v11 = 8;
    v14 = 4;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_18016F922, (LPCGUID)4, a4, 4u, &pData);
    return (unsigned int)v7;
  }
  return v5;
}
