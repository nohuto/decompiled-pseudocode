/*
 * XREFs of ?ndisPDInitializePDBuffers@@YAXPEAPEAU_PD_BUFFER@@KT_LARGE_INTEGER@@PEAEKKG@Z @ 0x1C00DAA30
 * Callers:
 *     ?NdisPDAllocateBufferSet@@YAJPEAUPD_BUFFER_MANAGEMENT_GROUP_HANDLE__@@KGPEAKKPEAPEAUPD_BUFFER_SET_HANDLE__@@@Z @ 0x1C00D7B10 (-NdisPDAllocateBufferSet@@YAJPEAUPD_BUFFER_MANAGEMENT_GROUP_HANDLE__@@KGPEAKKPEAPEAUPD_BUFFER_SE.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisPDInitializePDBuffers(
        struct _PD_BUFFER **a1,
        unsigned int a2,
        union _LARGE_INTEGER a3,
        unsigned __int8 *a4,
        unsigned int a5,
        unsigned int a6,
        unsigned __int16 a7)
{
  __int64 v9; // r9
  unsigned int v10; // r11d
  __int64 v11; // rdx
  struct _PD_BUFFER *v12; // rcx

  if ( a2 )
  {
    v9 = a2;
    v10 = 0;
    do
    {
      v11 = a7 + (unsigned __int64)v10;
      v12 = (struct _PD_BUFFER *)&a4[v11];
      *(_DWORD *)&a4[v11 + 48] = a6;
      if ( a6 )
      {
        v12->Attributes = 1;
        v12->DataBufferVirtualAddress = (unsigned __int8 *)&v12[1].PDClientReserved;
        v12->DataBufferDmaLogicalAddress.QuadPart = v11 + a3.QuadPart + 128;
      }
      v12->PDClientContextSize = a7;
      if ( a7 )
        v12->PDClientContext = (char *)v12 - a7;
      *a1 = v12;
      v10 += a7 + a6 + 128;
      ++a1;
      --v9;
    }
    while ( v9 );
  }
}
