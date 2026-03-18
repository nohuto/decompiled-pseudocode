/*
 * XREFs of ?PartitionSetCurrentMmTask@CChannel@@UEAAJAEBUDWM_MMTASK@@@Z @ 0x18004A0C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038B54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18004AC50 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 */

__int64 __fastcall CChannel::PartitionSetCurrentMmTask(CChannel *this, const struct DWM_MMTASK *a2)
{
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  int v12; // [rsp+20h] [rbp-A8h] BYREF
  _OWORD v13[10]; // [rsp+24h] [rbp-A4h] BYREF
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+D0h] [rbp+8h] BYREF

  v14 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v12 = 7;
  memset_0(v13, 0, 0x90uLL);
  v4 = *((_OWORD *)a2 + 1);
  v13[0] = *(_OWORD *)a2;
  v5 = *((_OWORD *)a2 + 2);
  v13[1] = v4;
  v6 = *((_OWORD *)a2 + 3);
  v13[2] = v5;
  v7 = *((_OWORD *)a2 + 4);
  v13[3] = v6;
  v8 = *((_OWORD *)a2 + 5);
  v13[4] = v7;
  v9 = *((_OWORD *)a2 + 6);
  v13[5] = v8;
  v10 = *((_OWORD *)a2 + 8);
  v13[6] = v9;
  v13[7] = *((_OWORD *)a2 + 7);
  v13[8] = v10;
  LODWORD(a2) = CChannel::SendCommand(this, &v12, 0x94u);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v14);
  return (unsigned int)a2;
}
