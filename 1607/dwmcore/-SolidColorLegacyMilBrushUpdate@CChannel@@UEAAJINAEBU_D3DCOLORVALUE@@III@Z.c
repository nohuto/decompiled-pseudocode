/*
 * XREFs of ?SolidColorLegacyMilBrushUpdate@CChannel@@UEAAJINAEBU_D3DCOLORVALUE@@III@Z @ 0x180047E00
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038B54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18004AC50 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 */

__int64 __fastcall CChannel::SolidColorLegacyMilBrushUpdate(
        CChannel *this,
        int a2,
        double a3,
        const struct _D3DCOLORVALUE *a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  __int128 v10; // xmm0
  unsigned int v11; // ebx
  int v13; // [rsp+20h] [rbp-48h] BYREF
  int v14; // [rsp+24h] [rbp-44h] BYREF
  double v15; // [rsp+28h] [rbp-40h]
  unsigned int v16; // [rsp+30h] [rbp-38h]
  unsigned int v17; // [rsp+34h] [rbp-34h]
  unsigned int v18; // [rsp+38h] [rbp-30h]
  __int128 v19; // [rsp+3Ch] [rbp-2Ch]
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+70h] [rbp+8h] BYREF

  v20 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v13 = 348;
  memset_0(&v14, 0, 0x28uLL);
  v10 = *(_OWORD *)&a4->r;
  v16 = a5;
  v17 = a6;
  v18 = a7;
  v15 = a3;
  v14 = a2;
  v19 = v10;
  v11 = CChannel::SendCommand(this, &v13, 0x2Cu);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v20);
  return v11;
}
