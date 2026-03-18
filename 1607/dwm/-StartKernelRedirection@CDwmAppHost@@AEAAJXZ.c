/*
 * XREFs of ?StartKernelRedirection@CDwmAppHost@@AEAAJXZ @ 0x140002030
 * Callers:
 *     ?StartComposition@CDwmAppHost@@AEAAJXZ @ 0x140002110 (-StartComposition@CDwmAppHost@@AEAAJXZ.c)
 * Callees:
 *     ??0CPortClient@@QEAA@IPEAX@Z @ 0x1400014C0 (--0CPortClient@@QEAA@IPEAX@Z.c)
 *     ??1CPortClient@@UEAA@XZ @ 0x1400015A0 (--1CPortClient@@UEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x140001A90 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140003F20 (_guard_dispatch_icall_nop.c)
 *     TemplateEventDescriptor @ 0x140004718 (TemplateEventDescriptor.c)
 */

__int64 __fastcall CDwmAppHost::StartKernelRedirection(CDwmAppHost *this, __int64 a2, void *a3)
{
  __int64 v3; // rcx
  int v4; // eax
  signed int v5; // ebx
  signed int LastError; // eax
  int v8; // r9d
  unsigned int v9; // [rsp+20h] [rbp-78h]
  _BYTE v10[16]; // [rsp+30h] [rbp-68h] BYREF
  __int64 (__fastcall *v11)(_BYTE *, __int64); // [rsp+40h] [rbp-58h]
  __int64 v12; // [rsp+60h] [rbp-38h]

  if ( (dword_14000A89C & 1) == 0 )
  {
    dword_14000A804 = -2147024865;
    dword_14000A89C |= 1u;
  }
  if ( *(&g_dwmAppHost + 1) )
  {
    CPortClient::CPortClient((CPortClient *)v10, a2, a3);
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      TemplateEventDescriptor(v3, &UdwmEstablishKernelRedirection_Start);
    v12 = (__int64)*(&g_dwmAppHost + 1);
    v4 = v11(v10, 1073741860LL);
    v5 = v4;
    if ( v4 < 0 )
    {
      v9 = 283;
    }
    else
    {
      SetLastError(0);
      if ( !(unsigned int)DwmKernelStartup() )
      {
        LastError = GetLastError();
        v5 = LastError;
        if ( LastError > 0 )
          v5 = (unsigned __int16)LastError | 0x80070000;
        v9 = 285;
        if ( v5 >= 0 )
          v5 = -2003304445;
        v8 = v5;
        goto LABEL_19;
      }
      v4 = v11(v10, 1073741861LL);
      v5 = v4;
      if ( v4 >= 0 )
      {
LABEL_9:
        CPortClient::~CPortClient((CPortClient *)v10);
        return (unsigned int)v5;
      }
      v9 = 287;
    }
    v8 = v4;
LABEL_19:
    MilInstrumentationCheckHR(0x14u, &dword_14000A804, 1u, v8, v9);
    goto LABEL_9;
  }
  return 0LL;
}
