/*
 * XREFs of NtGdiEndPath @ 0x1C0008580
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiEndPath(HDC a1)
{
  unsigned int v1; // ebx
  ULONG v2; // ecx
  int v3; // eax
  _QWORD v5[7]; // [rsp+20h] [rbp-38h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v5, a1);
  v1 = 0;
  if ( v5[0] )
  {
    v3 = *(_DWORD *)(v5[0] + 176LL);
    if ( (v3 & 1) != 0 )
    {
      v1 = 1;
      *(_DWORD *)(v5[0] + 176LL) = v3 & 0xFFFFFFFE;
      goto LABEL_6;
    }
    v2 = 1003;
  }
  else
  {
    v2 = 6;
  }
  EngSetLastError(v2);
LABEL_6:
  DCOBJ::~DCOBJ((DCOBJ *)v5);
  return v1;
}
