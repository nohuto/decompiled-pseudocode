/*
 * XREFs of NtGdiModifyWorldTransform @ 0x1C0109040
 * Callers:
 *     <none>
 * Callees:
 *     ?bModifyWorldTransform@XDCOBJ@@QEAAHPEBU_XFORML@@K@Z @ 0x1C0049080 (-bModifyWorldTransform@XDCOBJ@@QEAAHPEBU_XFORML@@K@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C025B160 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C025B464 (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C025B550 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 */

__int64 __fastcall NtGdiModifyWorldTransform(HDC a1, struct _XFORML *a2, unsigned int a3)
{
  unsigned int v3; // edi
  __int64 v8; // [rsp+20h] [rbp-68h] BYREF
  int v9; // [rsp+28h] [rbp-60h]
  int v10; // [rsp+2Ch] [rbp-5Ch]
  _BYTE v11[32]; // [rsp+30h] [rbp-58h] BYREF
  struct _XFORML v12; // [rsp+50h] [rbp-38h] BYREF

  v3 = 0;
  v8 = 0LL;
  v9 = 0;
  v10 = 0;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v11);
  XDCOBJ::vLock((XDCOBJ *)&v8, a1);
  if ( v8 )
  {
    if ( a2 )
    {
      v3 = ProbeAndConvertXFORM(a2, &v12);
    }
    else if ( a3 == 1 )
    {
LABEL_6:
      v3 = XDCOBJ::bModifyWorldTransform((XDCOBJ *)&v8, &v12, a3);
      goto LABEL_7;
    }
    if ( v3 )
      goto LABEL_6;
  }
LABEL_7:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)&v8);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v11);
  return v3;
}
