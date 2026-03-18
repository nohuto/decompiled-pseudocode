/*
 * XREFs of GreCreateBitmap @ 0x1C005D0D0
 * Callers:
 *     bInitBRUSHOBJ @ 0x1C0155E74 (bInitBRUSHOBJ.c)
 *     bInitBMOBJ @ 0x1C0156878 (bInitBMOBJ.c)
 * Callees:
 *     IsGreSetBitmapBitsSupported_0 @ 0x1C0001928 (IsGreSetBitmapBitsSupported_0.c)
 *     GreSetBitmapBits_0 @ 0x1C0001930 (GreSetBitmapBits_0.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0033330 (--1SURFMEM@@QEAA@XZ.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C0033590 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     GreSetBitmapOwnerEx @ 0x1C00346C8 (GreSetBitmapOwnerEx.c)
 *     EngSetLastError @ 0x1C0079760 (EngSetLastError.c)
 */

__int64 __fastcall GreCreateBitmap(int a1, int a2, unsigned int a3, unsigned int a4, __int64 a5)
{
  __int64 v5; // rbx
  unsigned int v6; // r10d
  int v7; // edi
  __int64 v8; // rsi
  __int64 v10; // [rsp+60h] [rbp+Fh] BYREF
  char v11; // [rsp+68h] [rbp+17h]
  int v12; // [rsp+6Ch] [rbp+1Bh]
  _DWORD v13[4]; // [rsp+70h] [rbp+1Fh] BYREF
  _QWORD v14[2]; // [rsp+80h] [rbp+2Fh]

  v5 = 0LL;
  v6 = a4 * a3;
  if ( a1 <= 0
    || (unsigned int)a1 > 0x7FFFFFF
    || a2 <= 0
    || a3 > 0x20
    || a4 > 0x20
    || v6 > 0x20
    || a2 * (unsigned __int64)(((a1 * v6 + 15) >> 3) & 0x1FFFFFFE) > 0xFFFFFFFF )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  else
  {
    v13[3] = 0;
    v14[1] = 1LL;
    v13[1] = a1;
    v13[2] = a2;
    v14[0] = 0LL;
    if ( v6 > 1 )
    {
      v7 = 4;
      if ( v6 <= 4 )
      {
        v7 = 2;
      }
      else if ( v6 <= 8 )
      {
        v7 = 3;
      }
      else if ( v6 > 0x10 )
      {
        v7 = (v6 > 0x18) + 5;
      }
    }
    else
    {
      v7 = 1;
      v14[0] = WPP_MAIN_CB.Dpc.DpcListEntry.Next;
    }
    v13[0] = v7;
    v10 = 0LL;
    v11 = 0;
    v12 = 0;
    SURFMEM::bCreateDIB((SURFMEM *)&v10, (struct _DEVBITMAPINFO *)v13, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    v8 = v10;
    if ( v10 )
    {
      *(_DWORD *)(v10 + 112) |= 0x4000000u;
      if ( a5 && (int)IsGreSetBitmapBitsSupported_0() >= 0 )
        GreSetBitmapBits_0();
      if ( v7 != 1 )
        *(_DWORD *)(v8 + 112) |= 0x800200u;
      v11 |= 1u;
      GreSetBitmapOwnerEx(*(_QWORD *)(v8 + 32), 0x80000002);
      v5 = *(_QWORD *)(v8 + 32);
    }
    SURFMEM::~SURFMEM((SURFMEM *)&v10);
    return v5;
  }
}
