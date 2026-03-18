/*
 * XREFs of PnpiBiosMemoryToIoDescriptor @ 0x1C006F73C
 * Callers:
 *     PnpBiosResourcesToNtResources @ 0x1C006FE94 (PnpBiosResourcesToNtResources.c)
 * Callees:
 *     PnpiUpdateResourceList @ 0x1C007030C (PnpiUpdateResourceList.c)
 */

__int64 __fastcall PnpiBiosMemoryToIoDescriptor(unsigned __int8 *a1, __int64 a2, unsigned int a3)
{
  int v4; // ecx
  int v5; // ecx
  int v6; // edi
  int v7; // ebx
  __int64 result; // rax
  __int64 v9; // rcx
  __int16 v10; // si
  __int64 v11; // [rsp+20h] [rbp-10h]
  __int64 v12; // [rsp+28h] [rbp-8h] BYREF
  __int64 v13; // [rsp+50h] [rbp+20h]

  HIDWORD(v13) = 0;
  HIDWORD(v11) = 0;
  v10 = (a1[3] & 1) == 0;
  v4 = *a1 - 129;
  if ( v4 )
  {
    v5 = v4 - 4;
    if ( v5 )
    {
      if ( v5 != 1 )
        return 0LL;
      v6 = 1;
      v7 = *((_DWORD *)a1 + 2);
      LODWORD(v13) = *((_DWORD *)a1 + 1);
      LODWORD(v11) = v7 + v13 - 1;
    }
    else
    {
      v7 = *((_DWORD *)a1 + 4);
      v6 = *((_DWORD *)a1 + 3);
      LODWORD(v13) = *((_DWORD *)a1 + 1);
      LODWORD(v11) = *((_DWORD *)a1 + 2) + v7 - 1;
    }
  }
  else
  {
    v6 = *((unsigned __int16 *)a1 + 4);
    v10 |= 0x10u;
    LODWORD(v13) = *((unsigned __int16 *)a1 + 2) << 8;
    v7 = *((unsigned __int16 *)a1 + 5) << 8;
    LODWORD(v11) = v7 + (*((unsigned __int16 *)a1 + 3) << 8) - 1;
    if ( !*((_WORD *)a1 + 4) )
      v6 = 0x10000;
  }
  if ( v7 )
  {
    result = PnpiUpdateResourceList(a2 + 8LL * a3, &v12);
    if ( (int)result < 0 )
      return result;
    v9 = v12;
    *(_WORD *)(v12 + 1) = 259;
    *(_WORD *)(v9 + 4) = v10;
    *(_QWORD *)(v9 + 16) = v13;
    *(_QWORD *)(v9 + 24) = v11;
    *(_DWORD *)(v9 + 12) = v6;
    *(_DWORD *)(v9 + 8) = v7;
  }
  return 0LL;
}
