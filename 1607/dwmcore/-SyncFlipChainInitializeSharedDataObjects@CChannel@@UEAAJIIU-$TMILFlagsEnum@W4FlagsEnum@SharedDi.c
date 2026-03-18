/*
 * XREFs of ?SyncFlipChainInitializeSharedDataObjects@CChannel@@UEAAJIIU?$TMILFlagsEnum@W4FlagsEnum@SharedDisplaySurface@@@@AEBUtagRECT@@PEBX22@Z @ 0x180115A70
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038B54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SyncFlush@CChannel@@UEAAJXZ @ 0x18004A9A0 (-SyncFlush@CChannel@@UEAAJXZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18004AC50 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 */

__int64 __fastcall CChannel::SyncFlipChainInitializeSharedDataObjects(
        CChannel *this,
        int a2,
        int a3,
        int a4,
        __int128 *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int128 v11; // xmm0
  int v12; // eax
  unsigned int v13; // ebx
  unsigned int v15; // [rsp+20h] [rbp-50h]
  _DWORD v16[4]; // [rsp+30h] [rbp-40h] BYREF
  __int128 v17; // [rsp+40h] [rbp-30h] BYREF
  __int64 v18; // [rsp+50h] [rbp-20h]
  __int64 v19; // [rsp+58h] [rbp-18h]
  __int64 v20; // [rsp+60h] [rbp-10h]
  int *v21; // [rsp+68h] [rbp-8h]
  struct _RTL_CRITICAL_SECTION *v22; // [rsp+90h] [rbp+20h] BYREF
  int v23; // [rsp+98h] [rbp+28h] BYREF
  int v24; // [rsp+A8h] [rbp+38h]

  v24 = a4;
  v23 = 0;
  v22 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v16[0] = 170;
  memset_0(&v17, 0, 0x30uLL);
  v16[3] = v24;
  v16[1] = a2;
  v16[2] = a3;
  v11 = *a5;
  v18 = a6;
  v19 = a7;
  v20 = a8;
  v21 = &v23;
  v17 = v11;
  v12 = CChannel::SendCommand(this, v16, 0x40u);
  v13 = v12;
  if ( v12 < 0 )
  {
    v15 = 2303;
    goto LABEL_7;
  }
  v12 = CChannel::SyncFlush(this);
  v13 = v12;
  if ( v12 < 0 )
  {
    v15 = 2304;
LABEL_7:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, v15);
    goto LABEL_8;
  }
  v13 = v23;
  if ( v23 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0x901u);
LABEL_8:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v22);
  return v13;
}
