/*
 * XREFs of NtGdiEndPath @ 0x1C02A4E20
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002D9CC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall NtGdiEndPath(HDC a1)
{
  unsigned int v1; // ebx
  ULONG v2; // ecx
  int v3; // eax
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

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
  return v1;
}
