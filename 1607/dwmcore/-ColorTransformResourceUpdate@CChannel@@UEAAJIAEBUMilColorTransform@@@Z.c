/*
 * XREFs of ?ColorTransformResourceUpdate@CChannel@@UEAAJIAEBUMilColorTransform@@@Z @ 0x180114900
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038B54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18004AC50 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 */

__int64 __fastcall CChannel::ColorTransformResourceUpdate(CChannel *this, int a2, const struct MilColorTransform *a3)
{
  int v6; // eax
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  unsigned int v12; // ebx
  int v14; // [rsp+28h] [rbp-19h] BYREF
  int v15; // [rsp+2Ch] [rbp-15h] BYREF
  __int128 v16; // [rsp+30h] [rbp-11h]
  __int128 v17; // [rsp+40h] [rbp-1h]
  __int128 v18; // [rsp+50h] [rbp+Fh]
  __int128 v19; // [rsp+60h] [rbp+1Fh]
  __int128 v20; // [rsp+70h] [rbp+2Fh]
  __int128 v21; // [rsp+80h] [rbp+3Fh]
  int v22; // [rsp+90h] [rbp+4Fh]
  struct _RTL_CRITICAL_SECTION *v23; // [rsp+A8h] [rbp+67h] BYREF

  v23 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v14 = 39;
  memset_0(&v15, 0, 0x68uLL);
  v6 = *((_DWORD *)a3 + 24);
  v7 = *((_OWORD *)a3 + 1);
  v16 = *(_OWORD *)a3;
  v15 = a2;
  v8 = *((_OWORD *)a3 + 2);
  v22 = v6;
  v17 = v7;
  v9 = *((_OWORD *)a3 + 3);
  v18 = v8;
  v10 = *((_OWORD *)a3 + 4);
  v19 = v9;
  v11 = *((_OWORD *)a3 + 5);
  v20 = v10;
  v21 = v11;
  v12 = CChannel::SendCommand(this, &v14, 0x6Cu);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v23);
  return v12;
}
