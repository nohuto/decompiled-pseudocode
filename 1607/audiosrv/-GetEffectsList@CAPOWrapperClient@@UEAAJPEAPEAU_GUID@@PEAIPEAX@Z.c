/*
 * XREFs of ?GetEffectsList@CAPOWrapperClient@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z @ 0x180016A40
 * Callers:
 *     ?FindCriticalAPO@CEndpointCharacteristics@@AEAAHPEAUIAudioSystemEffects2@@@Z @ 0x18001D6D4 (-FindCriticalAPO@CEndpointCharacteristics@@AEAAHPEAUIAudioSystemEffects2@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180029790 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x180029AE0 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

int __fastcall CAPOWrapperClient::GetEffectsList(
        CAPOWrapperClient *this,
        struct _GUID **a2,
        unsigned int *a3,
        void *a4)
{
  int result; // eax
  void *v9; // rbx
  HANDLE CurrentProcess; // rax
  LPCGUID v11; // r8
  LPCGUID v12; // r9
  int v13; // [rsp+40h] [rbp-49h] BYREF
  int v14; // [rsp+44h] [rbp-45h] BYREF
  HANDLE TargetHandle; // [rsp+48h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-19h] BYREF
  int *v18; // [rsp+80h] [rbp-9h]
  int v19; // [rsp+88h] [rbp-1h]
  int v20; // [rsp+8Ch] [rbp+3h]
  int *v21; // [rsp+90h] [rbp+7h]
  int v22; // [rsp+98h] [rbp+Fh]
  int v23; // [rsp+9Ch] [rbp+13h]

  v13 = 0;
  TargetHandle = 0LL;
  if ( !*((_QWORD *)this + 2) || !g_ADGProcess )
    return -2147024809;
  if ( !a4
    || (v9 = *(void **)&g_ADGProcess[2].LockCount,
        CurrentProcess = GetCurrentProcess(),
        DuplicateHandle(CurrentProcess, a4, v9, &TargetHandle, 0, 0, 2u)) )
  {
    result = (*(__int64 (__fastcall **)(_QWORD, struct _GUID **, unsigned int *))(**((_QWORD **)this + 2) + 48LL))(
               *((_QWORD *)this + 2),
               a2,
               a3);
  }
  else
  {
    result = GetLastError();
    if ( result > 0 )
      result = (unsigned __int16)result | 0x80070000;
  }
  v13 = result;
  if ( result < 0 && (unsigned int)hProvider > 2 )
  {
    TlgCreateSz(&pDesc, "CAPOWrapperClient::GetEffectsList");
    v20 = 0;
    v23 = 0;
    v18 = &v14;
    v21 = &v13;
    v14 = 210;
    v19 = 4;
    v22 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800A877D, v11, v12, 5u, &pData);
    return v13;
  }
  return result;
}
