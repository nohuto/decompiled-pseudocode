/*
 * XREFs of ?GetEffectsList@CAPOWrapperSrv@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z @ 0x18008B3B0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180029790 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x180029AE0 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAPOWrapperSrv::GetEffectsList(CAPOWrapperSrv *this, struct _GUID **a2, unsigned int *a3, void *a4)
{
  __int64 result; // rax
  char *v9; // rcx
  LPCGUID v10; // r8
  LPCGUID v11; // r9
  unsigned int v12; // [rsp+30h] [rbp-39h] BYREF
  int v13; // [rsp+34h] [rbp-35h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-9h] BYREF
  int *v16; // [rsp+70h] [rbp+7h]
  int v17; // [rsp+78h] [rbp+Fh]
  int v18; // [rsp+7Ch] [rbp+13h]
  unsigned int *v19; // [rsp+80h] [rbp+17h]
  int v20; // [rsp+88h] [rbp+1Fh]
  int v21; // [rsp+8Ch] [rbp+23h]

  v12 = 0;
  if ( !*((_QWORD *)this + 9) )
  {
    result = 2147500033LL;
    v12 = -2147467263;
LABEL_8:
    if ( (unsigned int)hProvider > 2 )
    {
      TlgCreateSz(&pDesc, "CAPOWrapperSrv::GetEffectsList");
      v18 = 0;
      v21 = 0;
      v16 = &v13;
      v19 = &v12;
      v13 = 329;
      v17 = 4;
      v20 = 4;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800A877D, v10, v11, 5u, &pData);
      return v12;
    }
    return result;
  }
  if ( a4 )
  {
    v9 = (char *)*((_QWORD *)this + 10);
    if ( (unsigned __int64)(v9 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      CloseHandle(v9);
      *((_QWORD *)this + 10) = 0LL;
    }
    *((_QWORD *)this + 10) = a4;
  }
  result = (*(__int64 (__fastcall **)(_QWORD, struct _GUID **, unsigned int *, void *))(**((_QWORD **)this + 9) + 24LL))(
             *((_QWORD *)this + 9),
             a2,
             a3,
             a4);
  v12 = result;
  if ( (int)result < 0 )
    goto LABEL_8;
  return result;
}
