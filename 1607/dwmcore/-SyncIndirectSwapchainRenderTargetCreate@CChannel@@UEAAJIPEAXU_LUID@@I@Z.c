/*
 * XREFs of ?SyncIndirectSwapchainRenderTargetCreate@CChannel@@UEAAJIPEAXU_LUID@@I@Z @ 0x180115B80
 * Callers:
 *     <none>
 * Callees:
 *     ?SendSyncCommand@CChannel@@AEAAJPEBXIPEAUMIL_MESSAGE@@I@Z @ 0x18001E758 (-SendSyncCommand@CChannel@@AEAAJPEBXIPEAUMIL_MESSAGE@@I@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038B54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CChannel::SyncIndirectSwapchainRenderTargetCreate(
        CChannel *this,
        int a2,
        void *a3,
        struct _LUID a4,
        unsigned int a5)
{
  int v8; // eax
  unsigned int v9; // ebx
  _DWORD v11[2]; // [rsp+30h] [rbp-40h] BYREF
  void *v12; // [rsp+38h] [rbp-38h]
  struct _LUID v13; // [rsp+40h] [rbp-30h]
  unsigned int v14; // [rsp+48h] [rbp-28h]
  _BYTE v15[8]; // [rsp+50h] [rbp-20h] BYREF
  int v16; // [rsp+58h] [rbp-18h]
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+90h] [rbp+20h] BYREF
  struct _LUID v18; // [rsp+A8h] [rbp+38h]

  v18 = a4;
  v17 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v11[0] = 139;
  v13 = v18;
  v14 = a5;
  v11[1] = a2;
  v12 = a3;
  v8 = CChannel::SendSyncCommand(this, v11, 0x1Cu, (struct MIL_MESSAGE *)v15);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x80Du);
  }
  else
  {
    v9 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x80Fu);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v17);
  return v9;
}
