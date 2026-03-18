/*
 * XREFs of ?UpdateFontLinksLockOrder@RFONTOBJ@@AEAAXXZ @ 0x1C00090B0
 * Callers:
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C002C5A0 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C029A324 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

void __fastcall RFONTOBJ::UpdateFontLinksLockOrder(RFONTOBJ *this)
{
  __int64 v1; // r8
  unsigned int v3; // eax
  __int64 v4; // rdi
  unsigned __int8 v5; // bl
  __int64 v6; // rdx
  __int64 v7; // rax
  _QWORD *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rsi
  char *v12; // rdx
  char v13; // al
  _QWORD v14[2]; // [rsp+20h] [rbp-248h] BYREF
  __int64 Base; // [rsp+30h] [rbp-238h] BYREF
  _BYTE v16[536]; // [rsp+38h] [rbp-230h] BYREF

  v1 = *(_QWORD *)this;
  v3 = *(_DWORD *)(*(_QWORD *)this + 848LL);
  if ( v3 <= 0x20 )
  {
    v4 = 0LL;
    v5 = 0;
    if ( v3 )
    {
      do
      {
        v6 = 2LL * v5;
        v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 752) + 8LL * v5) + 112LL);
        v16[8 * v6] = v5++;
        *(_QWORD *)&v16[8 * v6 - 8] = v7;
      }
      while ( (unsigned int)v5 < *(_DWORD *)(v1 + 848) );
    }
    v8 = v14;
    v14[0] = *(_QWORD *)(v1 + 744);
    v9 = *(_QWORD *)(v1 + 736);
    v10 = 2LL;
    v14[1] = v9;
    do
    {
      if ( *v8 )
        *(_QWORD *)&v16[16 * v5 - 8] = *(_QWORD *)(*v8 + 112LL);
      else
        *(_QWORD *)&v16[16 * v5 - 8] = 0LL;
      v16[16 * v5] = v5;
      ++v8;
      ++v5;
      --v10;
    }
    while ( v10 );
    v11 = v5;
    qsort(&Base, v5, 0x10uLL, RFONTOBJ::AddressMap::Compare);
    if ( v5 )
    {
      v12 = v16;
      do
      {
        v13 = *v12;
        v12 += 16;
        *(_BYTE *)(v4 + *(_QWORD *)this + 864) = v13;
        ++v4;
        --v11;
      }
      while ( v11 );
    }
  }
}
