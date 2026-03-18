/*
 * XREFs of NtGdiBeginPath @ 0x1C0008170
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiBeginPath(HDC a1)
{
  DC *v1; // rcx
  unsigned int v2; // ebx
  int v4; // eax
  DC *v5[6]; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v6[8]; // [rsp+50h] [rbp-88h] BYREF
  struct HPATH__ **v7; // [rsp+58h] [rbp-80h]

  DCOBJ::DCOBJ((DCOBJ *)v5, a1);
  v1 = v5[0];
  v2 = 0;
  if ( v5[0] )
  {
    if ( *((_QWORD *)v5[0] + 21) )
    {
      v4 = *((_DWORD *)v5[0] + 44);
      if ( (v4 & 2) != 0 )
      {
        *((_DWORD *)v5[0] + 44) = v4 & 0xFFFFFFFD;
        v1 = v5[0];
      }
      *((_DWORD *)v1 + 44) &= ~1u;
      DC::hpath(v1, 0LL);
    }
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v6);
    if ( v7 )
    {
      DC::hpath(v5[0], *v7);
      v2 = 1;
      *((_DWORD *)v5[0] + 44) |= 1u;
    }
    else
    {
      EngSetLastError(8u);
    }
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v6);
  }
  else
  {
    EngSetLastError(6u);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v5);
  return v2;
}
