/*
 * XREFs of ?ProcessInput@CInteractionContextWrapper@@UEAAJAEBUtagPOINTER_INFO@@@Z @ 0x18012F0E0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x1800636A0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?EnsureInteractionContext@CInteractionContextWrapper@@AEAAJXZ @ 0x18012EECC (-EnsureInteractionContext@CInteractionContextWrapper@@AEAAJXZ.c)
 */

__int64 __fastcall CInteractionContextWrapper::ProcessInput(
        CInteractionContextWrapper *this,
        const struct tagPOINTER_INFO *a2)
{
  const GUID *v4; // r9
  unsigned __int64 v5; // r8
  unsigned int v6; // eax
  int v8; // [rsp+30h] [rbp-59h] BYREF
  int v9; // [rsp+34h] [rbp-55h] BYREF
  int v10; // [rsp+38h] [rbp-51h] BYREF
  CInteractionContextWrapper *v11; // [rsp+40h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-39h] BYREF
  CInteractionContextWrapper **v13; // [rsp+70h] [rbp-19h]
  int v14; // [rsp+78h] [rbp-11h]
  int v15; // [rsp+7Ch] [rbp-Dh]
  char *v16; // [rsp+80h] [rbp-9h]
  int v17; // [rsp+88h] [rbp-1h]
  int v18; // [rsp+8Ch] [rbp+3h]
  char *v19; // [rsp+90h] [rbp+7h]
  int v20; // [rsp+98h] [rbp+Fh]
  int v21; // [rsp+9Ch] [rbp+13h]
  int *v22; // [rsp+A0h] [rbp+17h]
  int v23; // [rsp+A8h] [rbp+1Fh]
  int v24; // [rsp+ACh] [rbp+23h]
  int *v25; // [rsp+B0h] [rbp+27h]
  int v26; // [rsp+B8h] [rbp+2Fh]
  int v27; // [rsp+BCh] [rbp+33h]
  int *v28; // [rsp+C0h] [rbp+37h]
  int v29; // [rsp+C8h] [rbp+3Fh]
  int v30; // [rsp+CCh] [rbp+43h]

  v8 = CInteractionContextWrapper::EnsureInteractionContext(this);
  v5 = (unsigned int)v8;
  if ( v8 >= 0 )
  {
    if ( *((_DWORD *)a2 + 2) != *((_DWORD *)this + 15) )
    {
      *((_DWORD *)this + 10) = 0;
      *((_DWORD *)this + 11) = 0;
      *((_BYTE *)this + 56) &= ~1u;
      *((_DWORD *)this + 12) = 1065353216;
      *((_DWORD *)this + 15) = *((_DWORD *)a2 + 2);
    }
    v6 = ProcessPointerFramesInteractionContext(*((_QWORD *)this + 3), 1LL, 1LL, a2);
    v5 = v6;
    v8 = v6;
  }
  if ( (unsigned int)pRelatedActivityId > 4 && (qword_180190AC0 & 2) != 0 && (qword_180190AC8 & 2) == qword_180190AC8 )
  {
    v15 = 0;
    v18 = 0;
    v21 = 0;
    v24 = 0;
    v27 = 0;
    v30 = 0;
    v13 = &v11;
    v16 = (char *)a2 + 4;
    v19 = (char *)a2 + 8;
    v10 = *((_DWORD *)a2 + 14);
    v22 = &v10;
    v9 = *((_DWORD *)a2 + 15);
    v25 = &v9;
    v28 = &v8;
    v11 = this;
    v14 = 8;
    v17 = 4;
    v20 = 4;
    v23 = 4;
    v26 = 4;
    v29 = 4;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_18016F86C, (LPCGUID)v5, v4, 8u, &pData);
    LODWORD(v5) = v8;
  }
  return (unsigned int)v5;
}
