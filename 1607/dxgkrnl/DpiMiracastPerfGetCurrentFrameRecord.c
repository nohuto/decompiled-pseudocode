/*
 * XREFs of DpiMiracastPerfGetCurrentFrameRecord @ 0x1C0030598
 * Callers:
 *     DpiMiracastPerfHandleChunkInfo @ 0x1C0030AA4 (DpiMiracastPerfHandleChunkInfo.c)
 *     DpiMiracastPerfHandleChunkSent @ 0x1C0030D34 (DpiMiracastPerfHandleChunkSent.c)
 * Callees:
 *     memset @ 0x1C00127C0 (memset.c)
 *     DpiMiracastPerfRetireFrame @ 0x1C0030760 (DpiMiracastPerfRetireFrame.c)
 */

__int64 __fastcall DpiMiracastPerfGetCurrentFrameRecord(__int64 a1, _QWORD *a2, char a3, int *a4)
{
  int v4; // r10d
  int v6; // ecx
  unsigned __int64 v7; // rbx
  void *v10; // rcx
  unsigned int v11; // ebx
  int v12; // r8d
  int v13; // r9d
  unsigned __int64 v14; // rdx
  int v15; // eax
  unsigned __int64 v16; // rdx

  v4 = *(_DWORD *)(a1 + 1032);
  v6 = *(_DWORD *)(a1 + 1036);
  v7 = *a2 & 0xFFFFFFFFFFLL;
  if ( v4 == v6 )
  {
    if ( v7 > *(_QWORD *)(a1 + 1040) )
    {
      if ( a3 )
      {
        *(_DWORD *)(a1 + 1032) = 0;
        v10 = (void *)(a1 + 1056);
        *a4 = 0;
        *(_DWORD *)(a1 + 1036) = 1;
LABEL_5:
        memset(v10, 0, 0x20uLL);
        goto LABEL_26;
      }
      return (unsigned int)-1073741275;
    }
LABEL_24:
    ++*(_DWORD *)(a1 + 868);
    return (unsigned int)-1073741266;
  }
  v12 = v6 - 1;
  v13 = v4;
  if ( a3 && v12 == v4 + 31 )
  {
    if ( !(unsigned __int8)DpiMiracastPerfRetireFrame(a1) )
      return (unsigned int)-1073741823;
    v6 = *(_DWORD *)(a1 + 1036);
    v4 = *(_DWORD *)(a1 + 1032);
    v13 = v4;
    v12 = v6 - 1;
  }
  v14 = *(_QWORD *)(32 * ((v12 & 0x1F) + 33LL) + a1);
  if ( v7 > v14 )
  {
    if ( a3 && v7 - 1 == v14 )
    {
      *(_DWORD *)(a1 + 1036) = v6 + 1;
      *a4 = ((_BYTE)v12 + 1) & 0x1F;
      v10 = (void *)(a1 + 32 * ((((_BYTE)v12 + 1) & 0x1F) + 33LL));
      goto LABEL_5;
    }
    return (unsigned int)-1073741275;
  }
  if ( v7 != v14 )
  {
    do
    {
      v15 = (v12 + v13) / 2;
      v16 = *(_QWORD *)(32 * ((v15 & 0x1F) + 33LL) + a1);
      if ( v7 == v16 )
      {
        *a4 = v15 & 0x1F;
        goto LABEL_26;
      }
      if ( v7 <= v16 )
        v12 = v15 - 1;
      else
        v13 = v15 + 1;
    }
    while ( v13 <= v12 );
    if ( v15 != v4 )
      return (unsigned int)-1073741275;
    goto LABEL_24;
  }
  *a4 = v12 & 0x1F;
LABEL_26:
  v11 = 0;
  if ( !*(_BYTE *)(a1 + 809) )
  {
    memset((void *)(a1 + 812), 0, 0x24uLL);
    *(_BYTE *)(a1 + 809) = 1;
    KeSetTimerEx((PKTIMER)(a1 + 904), (LARGE_INTEGER)-10000000LL, 1000, (PKDPC)(a1 + 968));
  }
  return v11;
}
