/*
 * XREFs of ?CombinedGeometryUpdate@CChannel@@UEAAJIW4Enum@MilCombineMode@@II@Z @ 0x18001DB50
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038B54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18004AC50 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::CombinedGeometryUpdate(__int64 a1, int a2, int a3, int a4, int a5)
{
  unsigned int v9; // ebx
  _DWORD v11[10]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  v12 = a1 + 176;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 176));
  v11[0] = 346;
  v11[4] = a5;
  v11[1] = a2;
  v11[2] = a3;
  v11[3] = a4;
  v9 = CChannel::SendCommand((CChannel *)a1, v11, 0x14u);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v12);
  return v9;
}
