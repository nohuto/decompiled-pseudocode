/*
 * XREFs of ?WindowNodeNotifyDxUpdate@CChannel@@UEAAJIIPEAXU_LUID@@_KU?$TMILFlagsEnum@W4FlagsEnum@SharedDisplaySurface@@@@AEBUtagRECT@@HI@Z @ 0x180116280
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038B54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18004AC50 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 */

__int64 __fastcall CChannel::WindowNodeNotifyDxUpdate(
        CChannel *this,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int128 *a8,
        unsigned int a9,
        unsigned int a10)
{
  __int128 v14; // xmm0
  unsigned int v15; // ebx
  int v17; // [rsp+20h] [rbp-40h] BYREF
  _DWORD v18[2]; // [rsp+24h] [rbp-3Ch] BYREF
  __int64 v19; // [rsp+2Ch] [rbp-34h]
  __int64 v20; // [rsp+34h] [rbp-2Ch]
  __int64 v21; // [rsp+3Ch] [rbp-24h]
  int v22; // [rsp+44h] [rbp-1Ch]
  __int128 v23; // [rsp+48h] [rbp-18h]
  unsigned __int64 v24; // [rsp+58h] [rbp-8h]
  struct _RTL_CRITICAL_SECTION *v25; // [rsp+80h] [rbp+20h] BYREF

  v25 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v17 = 94;
  memset_0(v18, 0, 0x20uLL);
  v18[0] = a2;
  v24 = 0LL;
  v20 = a5;
  v21 = a6;
  v22 = a7;
  v18[1] = a3;
  v19 = a4;
  v14 = *a8;
  v24 = __PAIR64__(a10, a9);
  v23 = v14;
  v15 = CChannel::SendCommand(this, &v17, 0x40u);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v25);
  return v15;
}
