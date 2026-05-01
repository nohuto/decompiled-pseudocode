/*
 * XREFs of RtlStringCbCopyExW @ 0x180002A84
 * Callers:
 *     GetNormalizedObjectPath @ 0x180002BC0 (GetNormalizedObjectPath.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x180002E00 (RtlStringCopyWorkerW.c)
 */

__int64 __fastcall RtlStringCbCopyExW(_WORD *a1, unsigned __int64 a2, _WORD *a3, _QWORD *a4, _QWORD *a5)
{
  unsigned __int64 v5; // rbx
  _WORD *v6; // rdi
  int v7; // r10d
  char v9; // si
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF

  v5 = a2 >> 1;
  v6 = a1;
  v7 = 0;
  v9 = a2;
  if ( (a2 >> 1) - 1 > 0x7FFFFFFE )
    v7 = -1073741811;
  if ( v7 < 0 )
  {
    if ( v5 )
      *a1 = 0;
  }
  else
  {
    v7 = 0;
    if ( v5 )
    {
      v11 = 0LL;
      v7 = RtlStringCopyWorkerW(a1, a2 >> 1, &v11, a3);
      v5 -= v11;
      v6 += v11;
      if ( (int)(v7 + 0x80000000) >= 0 && v7 != -2147483643 )
        return (unsigned int)v7;
    }
    else if ( *a3 )
    {
      if ( !a1 )
        return (unsigned int)-1073741811;
      v7 = -2147483643;
    }
    if ( a4 )
      *a4 = v6;
    if ( a5 )
      *a5 = (v9 & 1) + 2 * v5;
  }
  return (unsigned int)v7;
}
