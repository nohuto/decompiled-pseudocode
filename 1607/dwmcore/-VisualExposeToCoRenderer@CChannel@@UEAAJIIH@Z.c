/*
 * XREFs of ?VisualExposeToCoRenderer@CChannel@@UEAAJIIH@Z @ 0x180115F40
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038B54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18004AC50 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::VisualExposeToCoRenderer(CChannel *this, int a2, int a3, int a4)
{
  unsigned int v8; // ebx
  _DWORD v10[6]; // [rsp+20h] [rbp-18h] BYREF
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v10[0] = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
  v10[1] = a2;
  v10[2] = a3;
  v10[3] = a4;
  v8 = CChannel::SendCommand(this, v10, 0x10u);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v11);
  return v8;
}
