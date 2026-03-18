/*
 * XREFs of ?_AdapterControl@FxDmaPacketTransaction@@KA?AW4_IO_ALLOCATION_ACTION@@PEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX2@Z @ 0x1C00632C0
 * Callers:
 *     ?AllocateAdapterChannel@FxDmaPacketTransaction@@IEAAJE@Z @ 0x1C00605D0 (-AllocateAdapterChannel@FxDmaPacketTransaction@@IEAAJE@Z.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C000A3FC (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qqqDd @ 0x1C00645C8 (WPP_IFR_SF_qqqDd.c)
 */

__int64 __fastcall FxDmaPacketTransaction::_AdapterControl(
        _DEVICE_OBJECT *DeviceObject,
        _IRP *Irp,
        void *MapRegisterBase,
        unsigned __int64 Context)
{
  _FX_DRIVER_GLOBALS *v4; // rbp
  const void *level; // rdi
  unsigned int v8; // r14d
  const void *_a1; // rax
  void (__fastcall *v10)(unsigned __int64, _QWORD); // rax
  unsigned __int64 v11; // rcx
  int v12; // eax
  unsigned __int8 v13; // dl
  unsigned int v14; // r8d
  unsigned __int16 v15; // r9
  int id; // esi
  unsigned int flags; // eax
  const _GUID *traceGuid; // [rsp+20h] [rbp-38h]

  v4 = *(_FX_DRIVER_GLOBALS **)(Context + 16);
  level = 0LL;
  v8 = (*(__int64 (__fastcall **)(unsigned __int64, _IRP *))(*(_QWORD *)Context + 112LL))(Context, Irp);
  if ( !*(_BYTE *)(Context + 272) )
  {
    *(_QWORD *)(Context + 264) = MapRegisterBase;
    *(_BYTE *)(Context + 272) = 1;
  }
  if ( v4->FxVerifierOn && v4->FxVerboseOn )
  {
    if ( *(_WORD *)(Context + 10) )
      _a1 = (const void *)(Context ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_qq(v4, 5u, 0xFu, 0x30u, WPP_FxDmaTransaction_cpp_Traceguids, _a1, MapRegisterBase);
  }
  if ( *(_DWORD *)(Context + 120) == 2 )
  {
    v10 = *(void (__fastcall **)(unsigned __int64, _QWORD))(Context + 152);
    *(_QWORD *)(Context + 152) = 0LL;
    if ( *(_WORD *)(Context + 10) )
      v11 = Context ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v11 = 0LL;
    if ( v10 )
      v10(v11, *(_QWORD *)(Context + 160));
  }
  else
  {
    v12 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)Context + 80LL))(Context);
    id = v12;
    if ( v12 < 0 )
    {
      flags = 3 - (v12 != -1073741536);
      if ( v4->FxVerifierOn && v4->FxVerboseOn )
      {
        if ( *(_WORD *)(Context + 10) )
          level = (const void *)(Context ^ 0xFFFFFFFFFFFFFFF8uLL);
        WPP_IFR_SF_qqqDd(
          v4,
          v13,
          v14,
          v15,
          traceGuid,
          *(const void **)(Context + 328),
          *(const void **)(Context + 336),
          level,
          flags,
          id);
      }
      (*(void (__fastcall **)(unsigned __int64, _QWORD))(*(_QWORD *)Context + 144LL))(
        Context,
        3 - (unsigned int)(id != -1073741536));
    }
  }
  return v8;
}
