/*
 * XREFs of ?StopInteraction@CInteractionContextWrapper@@UEAAJXZ @ 0x180021D70
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     _TlgWrite @ 0x180114534 (_TlgWrite.c)
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
      (*(void (__fastcall **)(CInteractionContextWrapper *, _QWORD))(*(_QWORD *)this + 64LL))(this, (unsigned int)v7);
      v5 = v7;
    }
  }
  else
  {
    v5 = -2147019873;
    v7 = -2147019873;
  }
  if ( (unsigned int)pRelatedActivityId > 4 && (qword_1801EAA90 & 2) != 0 && (qword_1801EAA98 & 2) == qword_1801EAA98 )
  {
    v12 = 0;
    v15 = 0;
    v10 = &v8;
    v13 = &v7;
    v8 = this;
    v11 = 8;
    v14 = 4;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1801C61FD, (LPCGUID)4, a4, 4u, &pData);
    return (unsigned int)v7;
  }
  return v5;
}
