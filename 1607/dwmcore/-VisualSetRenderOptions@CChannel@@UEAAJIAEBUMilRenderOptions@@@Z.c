/*
 * XREFs of ?VisualSetRenderOptions@CChannel@@UEAAJIAEBUMilRenderOptions@@@Z @ 0x180049860
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038B54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18004AC50 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 */

__int64 __fastcall CChannel::VisualSetRenderOptions(CChannel *this, int a2, const struct MilRenderOptions *a3)
{
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  unsigned int v8; // ebx
  int v10; // [rsp+20h] [rbp-38h] BYREF
  int v11; // [rsp+24h] [rbp-34h] BYREF
  __int128 v12; // [rsp+28h] [rbp-30h]
  __int128 v13; // [rsp+38h] [rbp-20h]
  __int64 v14; // [rsp+48h] [rbp-10h]
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+60h] [rbp+8h] BYREF

  v15 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v10 = 51;
  memset_0(&v11, 0, 0x2CuLL);
  v6 = *(_OWORD *)a3;
  v7 = *((_OWORD *)a3 + 1);
  v11 = a2;
  v12 = v6;
  v14 = *((_QWORD *)a3 + 4);
  v13 = v7;
  v8 = CChannel::SendCommand(this, &v10, 0x30u);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v15);
  return v8;
}
