/*
 * XREFs of ?SyncTargetCaptureBits@CChannel@@UEAAJINIIIIPEAW4DXGI_FORMAT@@_KIIPEAPEAX@Z @ 0x18001E240
 * Callers:
 *     <none>
 * Callees:
 *     ?SendSyncCommand@CChannel@@AEAAJPEBXIPEAUMIL_MESSAGE@@I@Z @ 0x18001E758 (-SendSyncCommand@CChannel@@AEAAJPEBXIPEAUMIL_MESSAGE@@I@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038B54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 */

__int64 __fastcall CChannel::SyncTargetCaptureBits(
        CChannel *this,
        int a2,
        double a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        enum DXGI_FORMAT *a8,
        unsigned __int64 a9,
        unsigned int a10,
        unsigned int a11,
        void **a12)
{
  enum DXGI_FORMAT *v15; // rdi
  int v16; // eax
  unsigned int v17; // ebx
  void **v18; // rcx
  unsigned int v20; // [rsp+28h] [rbp-69h]
  _BYTE v21[8]; // [rsp+38h] [rbp-59h] BYREF
  void *v22; // [rsp+40h] [rbp-51h]
  enum DXGI_FORMAT v23; // [rsp+4Ch] [rbp-45h]
  int v24; // [rsp+50h] [rbp-41h]
  int v25; // [rsp+58h] [rbp-39h] BYREF
  int v26; // [rsp+5Ch] [rbp-35h] BYREF
  double v27; // [rsp+60h] [rbp-31h]
  int v28; // [rsp+68h] [rbp-29h]
  unsigned int v29; // [rsp+6Ch] [rbp-25h]
  unsigned int v30; // [rsp+70h] [rbp-21h]
  unsigned int v31; // [rsp+74h] [rbp-1Dh]
  enum DXGI_FORMAT v32; // [rsp+78h] [rbp-19h]
  unsigned __int64 v33; // [rsp+7Ch] [rbp-15h]
  unsigned int v34; // [rsp+84h] [rbp-Dh]
  unsigned int v35; // [rsp+88h] [rbp-9h]
  char *v36; // [rsp+B8h] [rbp+27h] BYREF

  v36 = (char *)this + 176;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v25 = 131;
  memset_0(&v26, 0, 0x30uLL);
  v29 = a5;
  v30 = a6;
  v31 = a7;
  v28 = a4;
  v15 = a8;
  v27 = a3;
  v26 = a2;
  v32 = *a8;
  v33 = a9;
  v34 = a10;
  v35 = a11;
  v16 = CChannel::SendSyncCommand(this, &v25, 0x34u, (struct MIL_MESSAGE *)v21, v20);
  v17 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x782u);
  }
  else
  {
    v17 = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0x784u);
    }
    else
    {
      v18 = a12;
      *v15 = v23;
      *v18 = v22;
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v36);
  return v17;
}
