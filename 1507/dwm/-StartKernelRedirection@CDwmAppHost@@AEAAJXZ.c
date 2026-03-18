/*
 * XREFs of ?StartKernelRedirection@CDwmAppHost@@AEAAJXZ @ 0x140001F30
 * Callers:
 *     ?StartComposition@CDwmAppHost@@AEAAJXZ @ 0x140002000 (-StartComposition@CDwmAppHost@@AEAAJXZ.c)
 * Callees:
 *     ??1CPortClient@@UEAA@XZ @ 0x1400014E0 (--1CPortClient@@UEAA@XZ.c)
 *     ??0CPortClient@@QEAA@IPEAX@Z @ 0x140001640 (--0CPortClient@@QEAA@IPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1400019F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SendSimpleAsyncRequest@CPortClient@@QEAAJK@Z @ 0x140002510 (-SendSimpleAsyncRequest@CPortClient@@QEAAJK@Z.c)
 *     TemplateEventDescriptor @ 0x140004930 (TemplateEventDescriptor.c)
 */

__int64 __fastcall CDwmAppHost::StartKernelRedirection(CDwmAppHost *this, __int64 a2, void *a3)
{
  __int64 v3; // rcx
  int v4; // eax
  signed int v5; // ebx
  signed int LastError; // eax
  int v8; // r9d
  unsigned int v9; // [rsp+20h] [rbp-78h]
  _BYTE v10[48]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v11; // [rsp+60h] [rbp-38h]

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
    v11 = (__int64)*(&g_dwmAppHost + 1);
    v4 = CPortClient::SendSimpleAsyncRequest((CPortClient *)v10, 0x40000024u);
    v5 = v4;
    if ( v4 < 0 )
    {
      v9 = 302;
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
        v9 = 304;
        if ( v5 >= 0 )
          v5 = -2003304445;
        v8 = v5;
        goto LABEL_19;
      }
      v4 = CPortClient::SendSimpleAsyncRequest((CPortClient *)v10, 0x40000025u);
      v5 = v4;
      if ( v4 >= 0 )
      {
LABEL_9:
        CPortClient::~CPortClient((CPortClient *)v10);
        return (unsigned int)v5;
      }
      v9 = 306;
    }
    v8 = v4;
LABEL_19:
    MilInstrumentationCheckHR(0x14u, &dword_14000A804, 1u, v8, v9);
    goto LABEL_9;
  }
  return 0LL;
}
