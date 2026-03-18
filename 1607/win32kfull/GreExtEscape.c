/*
 * XREFs of GreExtEscape @ 0x1C0267554
 * Callers:
 *     ?GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z @ 0x1C0265CA4 (-GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z.c)
 *     NtGdiExtEscape @ 0x1C02A7520 (NtGdiExtEscape.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C004A0C0 (--0DCOBJ@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C025B464 (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C025B550 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C026561C (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z.c)
 */

__int64 __fastcall GreExtEscape(HDC a1, unsigned int a2, signed int a3, char *a4, unsigned int a5, char *a6)
{
  unsigned int v10; // ebx
  int v11; // eax
  __int64 v13; // [rsp+38h] [rbp-59h] BYREF
  int v14; // [rsp+44h] [rbp-4Dh]
  _BYTE v15[32]; // [rsp+48h] [rbp-49h] BYREF
  _BYTE v16[32]; // [rsp+68h] [rbp-29h] BYREF
  int v17; // [rsp+88h] [rbp-9h]
  _QWORD v18[2]; // [rsp+98h] [rbp+7h] BYREF
  _BYTE v19[32]; // [rsp+A8h] [rbp+17h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v18, a1);
  v10 = 0;
  if ( v18[0] )
  {
    v10 = GreExtEscapeInternal((struct DCOBJ *)v18, a2, a3, a4, a5, a6);
  }
  else
  {
    DCOBJ::DCOBJ((DCOBJ *)&v13);
    v17 = 0;
    v14 = 1;
    v11 = PushThreadGuardedObject(v16, &v13, XFERDCOBJ::ThreadCleanup);
    v17 = v11;
    if ( v11 )
    {
      XDCOBJ::vLock((XDCOBJ *)&v13, a1);
      v11 = v17;
    }
    if ( v13 )
    {
      v10 = GreExtEscapeInternal((struct DCOBJ *)&v13, a2, a3, a4, a5, a6);
      v11 = v17;
    }
    if ( v11 )
      PopThreadGuardedObject(v16);
    XDCOBJ::vUnlockNoNullSet((XDCOBJ *)&v13);
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v15);
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v18);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v19);
  return v10;
}
