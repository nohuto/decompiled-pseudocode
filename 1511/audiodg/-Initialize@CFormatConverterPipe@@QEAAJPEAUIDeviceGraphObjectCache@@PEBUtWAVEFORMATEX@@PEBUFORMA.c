/*
 * XREFs of ?Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@@Z @ 0x1400345A8
 * Callers:
 *     ?CreateFormatConverterPipe@CStreamGroup@@IEAAJPEAUtWAVEFORMATEX@@_J@Z @ 0x140034554 (-CreateFormatConverterPipe@CStreamGroup@@IEAAJPEAUtWAVEFORMATEX@@_J@Z.c)
 * Callees:
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x14000DB78 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x14000E680 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x140014C98 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?Free@?$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ @ 0x14002661C (-Free@-$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ.c)
 *     ?Reset@CFormatConverterPipe@@QEAAXXZ @ 0x1400266CC (-Reset@CFormatConverterPipe@@QEAAXXZ.c)
 *     ?CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14002F734 (-CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CON.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CFormatConverterPipe::Initialize(
        LPVOID *this,
        struct IUnknown *a2,
        const struct tWAVEFORMATEX *a3,
        const struct tWAVEFORMATEX **a4)
{
  int v8; // esi
  CPipeInstance *v9; // rdi
  struct tWAVEFORMATEX *v10; // rbx
  struct tWAVEFORMATEX *v11; // rdi
  CPipeInstance *v13; // [rsp+20h] [rbp-38h] BYREF
  struct tWAVEFORMATEX *v14[6]; // [rsp+28h] [rbp-30h] BYREF

  v14[1] = (struct tWAVEFORMATEX *)-2LL;
  CFormatConverterPipe::Reset((CFormatConverterPipe *)this);
  v13 = 0LL;
  v8 = CPipeInstance::CreateFormatConverterPipeInstance(a2, a4, &v13);
  v9 = v13;
  if ( v8 >= 0 )
  {
    v8 = CPipeInstance::Initialize(v13);
    if ( v8 >= 0 )
      v8 = CPipeInstance::ConnectAPOs(v9, 0LL);
  }
  v10 = 0LL;
  v14[0] = 0LL;
  if ( v8 >= 0 )
  {
    v8 = CloneWaveFormat(a3, v14);
    if ( v8 < 0 )
    {
      v10 = v14[0];
    }
    else
    {
      v13 = 0LL;
      *this = v9;
      v11 = v14[0];
      CoTaskMemFree(this[1]);
      this[1] = v11;
      this[2] = (LPVOID)a4[3];
      *((_BYTE *)this + 24) = 0;
    }
  }
  CoTaskMemFree(v10);
  ATL::CAutoPtr<CPipeInstance>::Free((LPVOID **)&v13);
  return (unsigned int)v8;
}
