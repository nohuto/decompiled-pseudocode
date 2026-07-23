/*
 * XREFs of WmipFirmwareTableHandler @ 0x140224798
 * Callers:
 *     <none>
 * Callees:
 *     MmUnmapIoSpace @ 0x14009ACB0 (MmUnmapIoSpace.c)
 *     MmMapIoSpaceEx @ 0x14009B070 (MmMapIoSpaceEx.c)
 *     memmove @ 0x140171780 (memmove.c)
 */

__int64 __fastcall WmipFirmwareTableHandler(_DWORD *a1)
{
  unsigned int v1; // edi
  __int64 v3; // rdx
  int v5; // eax
  bool v6; // cf
  _DWORD *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // r11d
  unsigned int v11; // ecx
  unsigned int v12; // r8d
  unsigned int v13; // r9d
  size_t v14; // rsi
  void *v15; // rax
  void *v16; // rbp

  v1 = 0;
  v3 = 0LL;
  if ( !a1 )
    return 3221225711LL;
  v5 = a1[1];
  if ( v5 )
  {
    if ( v5 != 1 )
      return 3221225711LL;
    v10 = a1[2];
    v11 = 2;
    v12 = 0;
    v13 = 0;
    while ( WmipFirmwareTableArray[v12] != v10 )
    {
      ++v13;
      v12 += 2;
      if ( v13 >= 2 )
        goto LABEL_16;
    }
    v3 = WmipFirmwareTableArray[v12 + 1];
    v6 = a1[3] < (unsigned int)v3;
    a1[3] = v3;
    if ( v6 )
      return 3221225507LL;
    v11 = v12;
LABEL_16:
    if ( v13 == 2 )
      return 3221225711LL;
    v14 = (unsigned int)v3;
    v15 = (void *)MmMapIoSpaceEx(WmipFirmwareTableArray[v11], v3, 0x204u);
    v16 = v15;
    if ( !v15 )
      return 3221226021LL;
    memmove(a1 + 4, v15, v14);
    MmUnmapIoSpace(v16, v14);
  }
  else
  {
    v6 = a1[3] < 8u;
    a1[3] = 8;
    if ( v6 )
      return 3221225507LL;
    v7 = a1 + 4;
    v8 = 2LL;
    do
    {
      v9 = v1;
      v1 += 2;
      *v7++ = WmipFirmwareTableArray[v9];
      --v8;
    }
    while ( v8 );
  }
  return 0LL;
}
