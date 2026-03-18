/*
 * XREFs of GetClassIcoCur @ 0x140150968
 * Callers:
 *     NtUserGetClassIcoCur @ 0x140150A60 (NtUserGetClassIcoCur.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ @ 0x14014FA30 (--1-$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1401509D8 (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 */

__int64 __fastcall GetClassIcoCur(__int64 a1, int a2)
{
  __int64 v3; // rbx
  __int64 v5[3]; // [rsp+20h] [rbp-18h] BYREF

  SmartObjStackRefBase<tagCLS>::Init(v5, *(_QWORD *)(a1 + 136));
  switch ( a2 )
  {
    case -14:
      v3 = *(_QWORD *)(*(_QWORD *)v5[0] + 80LL);
      break;
    case -12:
      v3 = *(_QWORD *)(*(_QWORD *)v5[0] + 88LL);
      break;
    case -34:
      v3 = *(_QWORD *)(*(_QWORD *)v5[0] + 112LL);
      break;
    default:
      v3 = 0LL;
      break;
  }
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v5);
  return v3;
}
