/*
 * XREFs of ?UpdateFontLinksLockOrder@RFONTOBJ@@AEAAXXZ @ 0x1C0002A1C
 * Callers:
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C002667C (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C029A7D0 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

void __fastcall RFONTOBJ::UpdateFontLinksLockOrder(RFONTOBJ *this)
{
  __int64 v1; // r8
  unsigned int v3; // eax
  unsigned __int8 v4; // bl
  unsigned __int8 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD Base[64]; // [rsp+20h] [rbp-218h] BYREF

  v1 = *(_QWORD *)this;
  v3 = *(_DWORD *)(*(_QWORD *)this + 848LL);
  if ( v3 <= 0x20 )
  {
    v4 = 0;
    v5 = 0;
    if ( v3 )
    {
      do
      {
        v6 = 2LL * v5;
        v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 752) + 8LL * v5) + 112LL);
        LOBYTE(Base[v6 + 1]) = v5++;
        Base[v6] = v7;
      }
      while ( (unsigned int)v5 < *(_DWORD *)(v1 + 848) );
    }
    qsort(Base, *(unsigned int *)(v1 + 848), 0x10uLL, RFONTOBJ::AddressMap::Compare);
    v8 = *(_QWORD *)this;
    if ( *(_DWORD *)(*(_QWORD *)this + 848LL) )
    {
      do
      {
        v9 = v4++;
        *(_BYTE *)(v9 + v8 + 864) = Base[2 * (unsigned int)v9 + 1];
        v8 = *(_QWORD *)this;
      }
      while ( (unsigned int)v4 < *(_DWORD *)(*(_QWORD *)this + 848LL) );
    }
  }
}
