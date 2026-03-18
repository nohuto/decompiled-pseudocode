/*
 * XREFs of DxgkEngColorFillViaGDI @ 0x1C02630E0
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002D9CC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     NtGdiPatBlt @ 0x1C00412C0 (NtGdiPatBlt.c)
 */

__int64 __fastcall DxgkEngColorFillViaGDI(HDC a1, _DWORD *a2, __int64 a3, unsigned int a4, int a5)
{
  unsigned int v5; // r15d
  __int64 v6; // rdi
  __int64 SolidBrush; // rax
  __int64 v11; // rbp
  __int64 v12; // r14
  _DWORD *v13; // rsi
  unsigned int v14; // eax
  int *v15; // rsi
  unsigned int v16; // eax
  _QWORD v18[5]; // [rsp+30h] [rbp-28h] BYREF

  v5 = 0;
  v6 = a4;
  if ( a1 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v18, a1);
    if ( v18[0] )
    {
      SolidBrush = GreCreateSolidBrush(((unsigned __int8)a5 << 16) | BYTE2(a5) | (BYTE1(a5) << 8));
      v11 = SolidBrush;
      if ( SolidBrush )
      {
        v12 = GreSelectBrush(a1, SolidBrush);
        if ( a2 )
        {
          if ( (_DWORD)v6 )
          {
            v13 = (_DWORD *)(a3 + 4);
            do
            {
              v14 = NtGdiPatBlt(a1, *a2 + *(v13 - 1), *v13 + a2[1], v13[1] - *(v13 - 1), v13[2] - *v13, 15728673);
              v13 += 4;
              v5 = v14;
              --v6;
            }
            while ( v6 );
          }
        }
        else if ( (_DWORD)v6 )
        {
          v15 = (int *)(a3 + 4);
          do
          {
            v16 = NtGdiPatBlt(a1, *(v15 - 1), *v15, v15[1] - *(v15 - 1), v15[2] - *v15, 15728673);
            v15 += 4;
            v5 = v16;
            --v6;
          }
          while ( v6 );
        }
        if ( v12 )
          GreSelectBrush(a1, v12);
        GreDeleteObject(v11);
      }
    }
    XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v18);
  }
  return v5;
}
