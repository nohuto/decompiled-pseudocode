/*
 * XREFs of ?CreateFormatConverterPipe@CStreamGroup@@IEAAJPEAUtWAVEFORMATEX@@_J@Z @ 0x140034300
 * Callers:
 *     ?ConnectToDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@W4STREAMGROUP_CONNECT_OPTIONS@@@Z @ 0x140011960 (-ConnectToDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@W4STREAMGROUP_CONNECT_OPTIONS@@@.c)
 * Callees:
 *     ?Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@@Z @ 0x140034414 (-Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMA.c)
 */

int __fastcall CStreamGroup::CreateFormatConverterPipe(CStreamGroup *this, struct tWAVEFORMATEX *a2, __int64 a3)
{
  struct IDeviceGraphObjectCache *v4; // rdx
  int v5; // eax
  int v7; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+28h] [rbp-30h]
  struct tWAVEFORMATEX *v9; // [rsp+30h] [rbp-28h]
  __int64 v10; // [rsp+38h] [rbp-20h]
  __int64 v11; // [rsp+40h] [rbp-18h]

  v8 = *((_QWORD *)this + 25);
  v4 = (struct IDeviceGraphObjectCache *)*((_QWORD *)this + 31);
  v11 = *((_QWORD *)this + 9);
  v5 = *((_DWORD *)this + 60);
  v10 = a3;
  v9 = a2;
  v7 = v5;
  return CFormatConverterPipe::Initialize(
           (CStreamGroup *)((char *)this + 272),
           v4,
           a2,
           (const struct FORMAT_CONVERTER_PIPE_DESCRIPTOR *)&v7);
}
