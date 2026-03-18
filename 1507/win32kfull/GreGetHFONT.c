/*
 * XREFs of GreGetHFONT @ 0x1C0292834
 * Callers:
 *     xxxDrawState @ 0x1C023DBC0 (xxxDrawState.c)
 *     IsSysFontAndDefaultMode @ 0x1C024B5AC (IsSysFontAndDefaultMode.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetHFONT(HDC a1)
{
  __int64 v1; // rbx
  _QWORD v3[7]; // [rsp+20h] [rbp-38h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v3, a1);
  v1 = 0LL;
  if ( v3[0] )
    v1 = *(_QWORD *)(*(_QWORD *)(v3[0] + 80LL) + 176LL);
  DCOBJ::~DCOBJ((DCOBJ *)v3);
  return v1;
}
