/*
 * XREFs of ??$MakeAndInitialize@VInputDeliveryServer@@UIInputDeliveryServer@@AEAPEAUIInputDeliveryServerHost@@AEAPEBGAEAW4TestMode@1@@Details@WRL@Microsoft@@YAJPEAPEAUIInputDeliveryServer@@AEAPEAUIInputDeliveryServerHost@@AEAPEBGAEAW4TestMode@InputDeliveryServer@@@Z @ 0x18006AA34
 * Callers:
 *     ?Create@InputDeliveryServer@@SAJPEAUIInputDeliveryServerHost@@PEBGW4TestMode@1@PEAPEAUIInputDeliveryServer@@@Z @ 0x1800685FC (-Create@InputDeliveryServer@@SAJPEAUIInputDeliveryServerHost@@PEBGW4TestMode@1@PEAPEAUIInputDeli.c)
 * Callees:
 *     ??0InputDeliveryServer@@QEAA@XZ @ 0x18006AC1C (--0InputDeliveryServer@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E02C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<InputDeliveryServer,IInputDeliveryServer,IInputDeliveryServerHost * &,unsigned short const * &,enum InputDeliveryServer::TestMode &>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        unsigned int *a4)
{
  InputDeliveryServer *v7; // rbx
  InputDeliveryServer *v8; // rax
  int v9; // edi

  InputDeliveryServer::s_pInputDeliveryServer = 0LL;
  v7 = 0LL;
  v8 = (InputDeliveryServer *)operator new(0x1D8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    v7 = InputDeliveryServer::InputDeliveryServer(v8);
    v9 = (*(__int64 (__fastcall **)(InputDeliveryServer *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v7 + 64LL))(
           v7,
           *a2,
           *a3,
           *a4);
    if ( v9 >= 0 )
      v9 = (**(__int64 (__fastcall ***)(InputDeliveryServer *, GUID *, struct IInputDeliveryServer **))v7)(
             v7,
             &GUID_32cc20dc_af78_43d9_b31d_cfc456c2dfba,
             &InputDeliveryServer::s_pInputDeliveryServer);
  }
  else
  {
    v9 = -2147024882;
  }
  if ( v7 )
    (*(void (__fastcall **)(InputDeliveryServer *))(*(_QWORD *)v7 + 16LL))(v7);
  return (unsigned int)v9;
}
