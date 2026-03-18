/*
 * XREFs of NtGdiEndPath @ 0x1C02A5F90
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C025B550 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 */

__int64 __fastcall NtGdiEndPath(HDC a1)
{
  unsigned int v1; // ebx
  ULONG v2; // ecx
  int v3; // eax
  _QWORD v5[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v6[40]; // [rsp+30h] [rbp-28h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v5, a1);
  v1 = 0;
  if ( v5[0] )
  {
    v3 = *(_DWORD *)(v5[0] + 176LL);
    if ( (v3 & 1) != 0 )
    {
      v1 = 1;
      *(_DWORD *)(v5[0] + 176LL) = v3 & 0xFFFFFFFE;
      goto LABEL_7;
    }
    v2 = 1003;
  }
  else
  {
    v2 = 6;
  }
  EngSetLastError(v2);
LABEL_7:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v5);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v6);
  return v1;
}
