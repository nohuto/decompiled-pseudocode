/*
 * XREFs of ?OnConnectedToPump@CPipeInstance@@QEAAX_J0@Z @ 0x1400044C0
 * Callers:
 *     ?ConnectToSaDevice@CStreamInstanceNew@@QEAAJPEAUISaDeviceInternal@@PEBVCPipeInstance@@_J@Z @ 0x140014150 (-ConnectToSaDevice@CStreamInstanceNew@@QEAAJPEAUISaDeviceInternal@@PEBVCPipeInstance@@_J@Z.c)
 * Callees:
 *     ?Release@?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ @ 0x140013DA0 (-Release@-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ.c)
 *     ?QueryInterface@?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140013EA0 (-QueryInterface@-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?OnConnectedToPump@CCrossProcessBaseServerEndpoint@@UEAAJ_J0@Z @ 0x1400189F0 (-OnConnectedToPump@CCrossProcessBaseServerEndpoint@@UEAAJ_J0@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CPipeInstance::OnConnectedToPump(CPipeInstance *this, __int64 a2, __int64 a3)
{
  __int64 v5; // rsi
  __int64 v6; // rax
  _QWORD *v7; // rax
  int v8; // eax
  void *v9; // rbx
  CCrossProcessBaseServerEndpoint *v10; // rdi
  void (__fastcall *v11)(void *, GUID *, CCrossProcessBaseServerEndpoint **); // rdi
  __int64 (__fastcall *v12)(CCrossProcessBaseServerEndpoint *__hidden, __int64, __int64); // rbx
  __int64 (__fastcall *v13)(void *); // rdi
  void *v14; // [rsp+70h] [rbp+8h] BYREF
  CCrossProcessBaseServerEndpoint *v15; // [rsp+88h] [rbp+20h] BYREF

  v5 = *((_QWORD *)this + 3);
  while ( v5 )
  {
    v6 = *(_QWORD *)(v5 + 16);
    v5 = *(_QWORD *)(v5 + 8);
    if ( *(_DWORD *)(v6 + 40) == 3 )
    {
      v7 = *(_QWORD **)(v6 + 32);
      v14 = 0LL;
      v8 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, void **))*v7)(
             *v7,
             &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
             &v14);
      v9 = v14;
      if ( v8 >= 0 )
      {
        v10 = 0LL;
        v15 = 0LL;
        if ( v14 )
        {
          v11 = **(void (__fastcall ***)(void *, GUID *, CCrossProcessBaseServerEndpoint **))v14;
          if ( (char *)v11 == (char *)ATL::CComObject<CCrossProcessServerInputEndpoint>::QueryInterface )
            ATL::CComObject<CCrossProcessServerInputEndpoint>::QueryInterface(
              v14,
              &GUID_ac67aa4b_5f51_4bcb_9b5d_c71155af8054,
              &v15);
          else
            v11(v14, &GUID_ac67aa4b_5f51_4bcb_9b5d_c71155af8054, &v15);
          v10 = v15;
          v9 = v14;
        }
        if ( v10 )
        {
          v12 = *(__int64 (__fastcall **)(CCrossProcessBaseServerEndpoint *__hidden, __int64, __int64))(*(_QWORD *)v10 + 32LL);
          if ( v12 == CCrossProcessBaseServerEndpoint::OnConnectedToPump )
            CCrossProcessBaseServerEndpoint::OnConnectedToPump(v10, a2, a3);
          else
            v12(v10, a2, a3);
          v10 = v15;
          v9 = v14;
        }
        if ( v10 )
        {
          (*(void (__fastcall **)(CCrossProcessBaseServerEndpoint *))(*(_QWORD *)v10 + 16LL))(v10);
          v9 = v14;
        }
      }
      if ( v9 )
      {
        v13 = *(__int64 (__fastcall **)(void *))(*(_QWORD *)v9 + 16LL);
        if ( v13 == ATL::CComObject<CCrossProcessServerInputEndpoint>::Release )
          ATL::CComObject<CCrossProcessServerInputEndpoint>::Release(v9);
        else
          v13(v9);
      }
    }
  }
}
