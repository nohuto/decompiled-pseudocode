/*
 * XREFs of ?_EnsureResources@CAnimationResource@@IEAAJXZ @ 0x18003BAB8
 * Callers:
 *     ?AddBinding@CAnimationResource@@QEAAJII@Z @ 0x18003BF34 (-AddBinding@CAnimationResource@@QEAAJII@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x1800177C0 (-Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?SendWithData@CResource@@QEAAJPEAXI0I@Z @ 0x180017918 (-SendWithData@CResource@@QEAAJPEAXI0I@Z.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x180017A34 (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 */

__int64 __fastcall CAnimationResource::_EnsureResources(CAnimationResource *this)
{
  unsigned int v1; // ebx
  CResource **v2; // rsi
  int v4; // eax
  __int64 v5; // rax
  int v6; // eax
  _OWORD *v7; // rdx
  void *v8; // r9
  CResource *v9; // rcx
  int v10; // eax
  CResource *v12; // rcx
  int v13; // eax
  CResource *v14; // rcx
  int v15; // eax
  int v16; // [rsp+30h] [rbp-20h] BYREF
  _BYTE v17[20]; // [rsp+34h] [rbp-1Ch] BYREF

  v1 = 0;
  v2 = (CResource **)((char *)this + 16);
  if ( *((_QWORD *)this + 2) )
    return v1;
  v4 = CResource::Create(0x4Bu, *((_QWORD *)this + 1), (CBaseObject **)this + 2);
  v1 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v4, 0x136u);
  }
  else if ( *((_BYTE *)this + 81) )
  {
    v12 = *v2;
    v16 = 120;
    memset(v17, 0, sizeof(v17));
    *(_DWORD *)v17 = *((_DWORD *)v12 + 6);
    *(_QWORD *)&v17[4] = *((_QWORD *)this + 9);
    v13 = CResource::Send(v12, &v16, 0x18u);
    v1 = v13;
    if ( v13 >= 0 )
      goto LABEL_6;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v13, 0x13Du);
  }
  else
  {
    v5 = *((_QWORD *)this + 12);
    if ( !v5
      || (v16 = 124,
          *(_QWORD *)v17 = 0LL,
          *(_DWORD *)&v17[4] = *(_DWORD *)(v5 + 24),
          v6 = CResource::Send(*v2, &v16, 0xCu),
          v1 = v6,
          v6 >= 0) )
    {
LABEL_6:
      v7 = (_OWORD *)*((_QWORD *)this + 4);
      if ( v7
        && (v14 = *v2,
            memset(v17, 0, sizeof(v17)),
            v16 = 123,
            *(_DWORD *)v17 = *((_DWORD *)v14 + 6),
            *(_OWORD *)&v17[4] = *v7,
            v15 = CResource::Send(v14, &v16, 0x18u),
            v1 = v15,
            v15 < 0) )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v15, 0x14Bu);
      }
      else
      {
        v8 = (void *)*((_QWORD *)this + 5);
        v9 = *v2;
        *(_QWORD *)v17 = 0LL;
        *(_DWORD *)&v17[4] = *((_DWORD *)this + 16);
        v16 = 121;
        v10 = CResource::SendWithData(v9, &v16, 0xCu, v8, 32 * *(_DWORD *)&v17[4]);
        v1 = v10;
        if ( v10 >= 0 )
          return v1;
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v10, 0x152u);
      }
      goto LABEL_16;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, 0x143u);
  }
LABEL_16:
  if ( *v2 )
  {
    CBaseObject::Release(*v2);
    *v2 = 0LL;
  }
  return v1;
}
