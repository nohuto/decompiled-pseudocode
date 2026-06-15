/*
 * XREFs of ?GetEffectsList@CAPOWrapperSrv@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z @ 0x14000F770
 * Callers:
 *     ?GetEffectsListRemote@CAPOWrapperSrv@@UEAAJPEAPEAU_GUID@@PEAI_K@Z @ 0x14000F730 (-GetEffectsListRemote@CAPOWrapperSrv@@UEAAJPEAPEAU_GUID@@PEAI_K@Z.c)
 * Callees:
 *     ?GetEffectsList@CAPOExceptionWrapper@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z @ 0x1400104B0 (-GetEffectsList@CAPOExceptionWrapper@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z.c)
 *     _TlgWrite @ 0x140016088 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x140016CD0 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x140018370 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAPOWrapperSrv::GetEffectsList(CAPOWrapperSrv *this, struct _GUID **a2, unsigned int *a3, void *a4)
{
  CAPOExceptionWrapper *v8; // rcx
  __int64 (__fastcall *v9)(CAPOExceptionWrapper *__hidden, struct _GUID **, unsigned int *, void *); // rax
  __int64 result; // rax
  LPCGUID v11; // r8
  LPCGUID v12; // r9
  char *v13; // rcx
  unsigned int v14; // [rsp+30h] [rbp-39h] BYREF
  int v15; // [rsp+34h] [rbp-35h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-9h] BYREF
  int *v18; // [rsp+70h] [rbp+7h]
  int v19; // [rsp+78h] [rbp+Fh]
  int v20; // [rsp+7Ch] [rbp+13h]
  unsigned int *v21; // [rsp+80h] [rbp+17h]
  int v22; // [rsp+88h] [rbp+1Fh]
  int v23; // [rsp+8Ch] [rbp+23h]

  v14 = 0;
  if ( !*((_QWORD *)this + 9) )
  {
    result = 2147500033LL;
    v14 = -2147467263;
LABEL_9:
    if ( (unsigned int)hProvider > 2 )
    {
      TlgCreateSz(&pDesc, "CAPOWrapperSrv::GetEffectsList");
      v20 = 0;
      v23 = 0;
      v18 = &v15;
      v21 = &v14;
      v15 = 329;
      v19 = 4;
      v22 = 4;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_140045E2B, v11, v12, 5u, &pData);
      return v14;
    }
    return result;
  }
  if ( a4 )
  {
    v13 = (char *)*((_QWORD *)this + 10);
    if ( (unsigned __int64)(v13 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      CloseHandle(v13);
      *((_QWORD *)this + 10) = 0LL;
    }
    *((_QWORD *)this + 10) = a4;
  }
  v8 = (CAPOExceptionWrapper *)*((_QWORD *)this + 9);
  v9 = *(__int64 (__fastcall **)(CAPOExceptionWrapper *__hidden, struct _GUID **, unsigned int *, void *))(*(_QWORD *)v8 + 24LL);
  if ( v9 == CAPOExceptionWrapper::GetEffectsList )
    result = CAPOExceptionWrapper::GetEffectsList(v8, a2, a3, a4);
  else
    result = v9(v8, a2, a3, a4);
  v14 = result;
  if ( (int)result < 0 )
    goto LABEL_9;
  return result;
}
