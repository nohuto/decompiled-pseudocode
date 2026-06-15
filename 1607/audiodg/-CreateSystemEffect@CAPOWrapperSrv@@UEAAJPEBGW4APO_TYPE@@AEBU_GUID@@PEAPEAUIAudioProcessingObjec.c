/*
 * XREFs of ?CreateSystemEffect@CAPOWrapperSrv@@UEAAJPEBGW4APO_TYPE@@AEBU_GUID@@PEAPEAUIAudioProcessingObject@@@Z @ 0x14000FF60
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CAPOExceptionWrapper@@UEAAKXZ @ 0x140010470 (-Release@CAPOExceptionWrapper@@UEAAKXZ.c)
 *     ?QueryInterface@CAPOExceptionWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140010870 (-QueryInterface@CAPOExceptionWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Init@CAPOExceptionWrapper@@AEAAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@PEAPEAU5@@Z @ 0x140010920 (-Init@CAPOExceptionWrapper@@AEAAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@PEAPEAU.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140012688 (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x140012A20 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x140012AA0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     _TlgWrite @ 0x140016088 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x140016CD0 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x140018370 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAPOWrapperSrv::CreateSystemEffect(__int64 a1, __int64 a2, int a3, __int64 a4, _QWORD *a5)
{
  CAPOExceptionWrapper *v5; // rbx
  void *v10; // rax
  _DWORD *v11; // rax
  __int64 v12; // r8
  int v13; // esi
  void **v14; // r8
  __int64 (__fastcall *v15)(CAPOExceptionWrapper *__hidden, const struct _GUID *, void **); // rax
  int v16; // eax
  CAPOExceptionWrapper *v17; // rcx
  void *v18; // rdi
  __int64 (__fastcall *v19)(CAPOExceptionWrapper *__hidden, const struct _GUID *, void **); // rax
  unsigned int (__fastcall *v20)(CAPOExceptionWrapper *__hidden); // rax
  LPCGUID v22; // r8
  LPCGUID v23; // r9
  int v24; // [rsp+40h] [rbp-61h] BYREF
  void *v25; // [rsp+48h] [rbp-59h] BYREF
  CAPOExceptionWrapper *v26; // [rsp+50h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-21h] BYREF
  CAPOExceptionWrapper **v29; // [rsp+90h] [rbp-11h]
  __int64 v30; // [rsp+98h] [rbp-9h]
  int *v31; // [rsp+A0h] [rbp-1h]
  __int64 v32; // [rsp+A8h] [rbp+7h]

  v5 = 0LL;
  v24 = 0;
  v26 = 0LL;
  v25 = 0LL;
  v10 = AERTGetDLLRTHeap();
  v11 = AERTAllocate(0x88uLL, v10);
  if ( !v11 )
  {
    v13 = -2147024882;
LABEL_27:
    v24 = v13;
    goto LABEL_28;
  }
  v11[10] = 1;
  *(_QWORD *)v11 = &CAPOExceptionWrapper::`vftable'{for `INDUnknown'};
  *((_QWORD *)v11 + 6) = 0LL;
  *((_QWORD *)v11 + 1) = &CAPOExceptionWrapper::`vftable'{for `IAudioProcessingObject'};
  *((_QWORD *)v11 + 2) = &CAPOExceptionWrapper::`vftable'{for `IAudioProcessingObjectConfiguration'};
  *((_QWORD *)v11 + 3) = &CAPOExceptionWrapper::`vftable'{for `IAudioProcessingObjectRT'};
  *((_QWORD *)v11 + 4) = &CAPOExceptionWrapper::`vftable'{for `IAudioSystemEffects2'};
  *((_QWORD *)v11 + 9) = 0LL;
  *((_QWORD *)v11 + 12) = 0LL;
  *((_QWORD *)v11 + 13) = 0LL;
  *((_QWORD *)v11 + 14) = 0LL;
  *((_QWORD *)v11 + 15) = 0LL;
  *((_QWORD *)v11 + 16) = 0LL;
  v5 = v26;
  v13 = CAPOExceptionWrapper::Init(v11, a4, v12, a2, a3);
  v24 = v13;
  if ( v13 >= 0 )
  {
    v14 = (void **)(a1 + 80);
    v15 = **(__int64 (__fastcall ***)(CAPOExceptionWrapper *__hidden, const struct _GUID *, void **))v26;
    v16 = v15 == CAPOExceptionWrapper::QueryInterface
        ? CAPOExceptionWrapper::QueryInterface(v26, &GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10, v14)
        : v15(v26, &GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10, v14);
    v24 = v16;
    v13 = v16;
    if ( v16 >= 0 )
    {
      v17 = *(CAPOExceptionWrapper **)(a1 + 80);
      v18 = v25;
      if ( v25 != v17 )
      {
        v25 = 0LL;
        if ( v17 )
        {
          v19 = **(__int64 (__fastcall ***)(CAPOExceptionWrapper *__hidden, const struct _GUID *, void **))v17;
          if ( v19 == CAPOExceptionWrapper::QueryInterface )
            CAPOExceptionWrapper::QueryInterface(v17, &GUID_5fa00f27_add6_499a_8a9d_6b98521fa75b, &v25);
          else
            v19(v17, &GUID_5fa00f27_add6_499a_8a9d_6b98521fa75b, &v25);
        }
        if ( v18 )
          (*(void (__fastcall **)(void *))(*(_QWORD *)v18 + 16LL))(v18);
      }
      if ( v25 )
      {
        *a5 = a1 + 8;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)(a1 + 8) + 8LL))(a1 + 8);
        v13 = v24;
        if ( v24 >= 0 )
          goto LABEL_14;
        goto LABEL_28;
      }
      if ( *(_QWORD *)(a1 + 80) )
        ATL::AtlComPtrAssign((struct IUnknown **)(a1 + 80), 0LL);
      v13 = -2147467262;
      goto LABEL_27;
    }
  }
LABEL_28:
  if ( (unsigned int)hProvider > 2 )
  {
    TlgCreateSz(&pDesc, "CAPOWrapperSrv::CreateSystemEffect");
    LODWORD(v26) = 53;
    v29 = &v26;
    v31 = &v24;
    v30 = 4LL;
    v32 = 4LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_140045E2B, v22, v23, 5u, &pData);
    v13 = v24;
  }
LABEL_14:
  if ( v5 )
  {
    v20 = *(unsigned int (__fastcall **)(CAPOExceptionWrapper *__hidden))(*(_QWORD *)v5 + 16LL);
    if ( v20 == CAPOExceptionWrapper::Release )
      CAPOExceptionWrapper::Release(v5);
    else
      v20(v5);
  }
  if ( v25 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v25 + 16LL))(v25);
  return (unsigned int)v13;
}
