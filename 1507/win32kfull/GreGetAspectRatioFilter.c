/*
 * XREFs of GreGetAspectRatioFilter @ 0x1C027FBE0
 * Callers:
 *     <none>
 * Callees:
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C0030CB4 (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C0030CF4 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetAspectRatioFilter(HDC a1, _DWORD *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // r8
  _QWORD v9[7]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10; // [rsp+68h] [rbp+10h] BYREF

  v2 = 0;
  if ( a2 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v9, a1);
    if ( v9[0] )
    {
      v10 = *(_QWORD *)(v9[0] + 48LL);
      if ( (*(_DWORD *)(*(_QWORD *)(v9[0] + 80LL) + 104LL) & 1) != 0 )
      {
        *a2 = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v10, v5, v6);
        a2[1] = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v10, v7, v8);
      }
      else
      {
        *(_QWORD *)a2 = 0LL;
      }
      v2 = 1;
    }
    else
    {
      EngSetLastError(6u);
    }
    DCOBJ::~DCOBJ((DCOBJ *)v9);
    return v2;
  }
  else
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
}
