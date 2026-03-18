/*
 * XREFs of GreGetRealizationInfo @ 0x1C010CE84
 * Callers:
 *     NtGdiGetRealizationInfo @ 0x1C010CE00 (NtGdiGetRealizationInfo.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002D6C4 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?GetRealizationInfo@RFONTOBJ@@QEAAHPEAUtagFONT_REALIZATION_INFO@@@Z @ 0x1C002E7E8 (-GetRealizationInfo@RFONTOBJ@@QEAAHPEAUtagFONT_REALIZATION_INFO@@@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C002EAC0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetRealizationInfo(HDC a1, struct tagFONT_REALIZATION_INFO *a2)
{
  unsigned int RealizationInfo; // edi
  int v4; // eax
  struct _FD_XFORM *v5; // rbx
  _QWORD v7[7]; // [rsp+20h] [rbp-38h] BYREF
  struct _FD_XFORM *v8; // [rsp+70h] [rbp+18h] BYREF

  RealizationInfo = 0;
  DCOBJ::DCOBJ((DCOBJ *)v7, a1);
  if ( v7[0] )
  {
    v4 = RFONTOBJ::bInit(&v8, (struct XDCOBJ *)v7, 0, 2u);
    v5 = v8;
    if ( v4 )
      GreAcquireSemaphore(*(_QWORD *)&v8[33].eXX);
    if ( v5 )
      RealizationInfo = RFONTOBJ::GetRealizationInfo((RFONTOBJ *)&v8, a2);
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v8);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v7);
  return RealizationInfo;
}
