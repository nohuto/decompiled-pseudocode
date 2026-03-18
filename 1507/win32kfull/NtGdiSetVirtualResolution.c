/*
 * XREFs of NtGdiSetVirtualResolution @ 0x1C00F07D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiSetVirtualResolution(HDC a1, int a2, int a3, int a4, int a5)
{
  unsigned int v5; // ebx
  int v9; // edi
  _QWORD v11[7]; // [rsp+20h] [rbp-38h] BYREF

  v5 = 0;
  if ( a2 )
  {
    if ( !a3 )
      return v5;
    if ( !a4 )
      return v5;
    v9 = a5;
    if ( !a5 )
      return v5;
  }
  else
  {
    if ( a3 )
      return v5;
    if ( a4 )
      return v5;
    v9 = a5;
    if ( a5 )
      return v5;
  }
  DCOBJ::DCOBJ((DCOBJ *)v11, a1);
  if ( v11[0] )
  {
    v5 = 1;
    *(_DWORD *)(*(_QWORD *)(v11[0] + 80LL) + 356LL) = a2;
    *(_DWORD *)(*(_QWORD *)(v11[0] + 80LL) + 360LL) = a3;
    *(_DWORD *)(*(_QWORD *)(v11[0] + 80LL) + 364LL) = a4;
    *(_DWORD *)(*(_QWORD *)(v11[0] + 80LL) + 368LL) = v9;
  }
  DCOBJ::~DCOBJ((DCOBJ *)v11);
  return v5;
}
