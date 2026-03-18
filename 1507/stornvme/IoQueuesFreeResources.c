/*
 * XREFs of IoQueuesFreeResources @ 0x1C0003EA4
 * Callers:
 *     IoQueuesCreation @ 0x1C00039EC (IoQueuesCreation.c)
 *     NVMeControllerStop @ 0x1C00048A4 (NVMeControllerStop.c)
 *     NVMeControllerRemove @ 0x1C00049B4 (NVMeControllerRemove.c)
 * Callees:
 *     <none>
 */

void __fastcall IoQueuesFreeResources(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebp
  unsigned int v6; // edi
  unsigned __int16 i; // si
  __int64 v8; // r8
  unsigned __int16 j; // di
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // r8
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // r8

  v5 = 16 * *(unsigned __int16 *)(a1 + 222);
  v6 = *(unsigned __int16 *)(a1 + 222) << 6;
  if ( !*(_BYTE *)(a1 + 16) )
  {
    if ( *(_QWORD *)(a1 + 536) )
    {
      for ( i = 0; i < *(_WORD *)(a1 + 224); ++i )
      {
        v8 = *(_QWORD *)(136LL * i + *(_QWORD *)(a1 + 536));
        if ( v8 )
          StorPortExtendedFunction(25LL, a1, v8, v6);
      }
    }
    if ( *(_QWORD *)(a1 + 544) )
    {
      for ( j = 0; j < *(_WORD *)(a1 + 226); ++j )
      {
        v10 = *(_QWORD *)(168LL * j + *(_QWORD *)(a1 + 544));
        if ( v10 )
          StorPortExtendedFunction(25LL, a1, v10, v5);
      }
    }
    v11 = *(_QWORD *)(a1 + 536);
    if ( v11 )
    {
      v12 = *(_QWORD *)(v11 + 24);
      if ( v12 )
        StorPortExtendedFunction(1LL, a1, v12, a4);
      v13 = *(_QWORD *)(*(_QWORD *)(a1 + 536) + 32LL);
      if ( v13 )
        StorPortExtendedFunction(1LL, a1, v13, a4);
      v14 = *(_QWORD *)(a1 + 536);
      if ( v14 )
        StorPortExtendedFunction(1LL, a1, v14, a4);
    }
    v15 = *(_QWORD *)(a1 + 544);
    if ( v15 )
    {
      v16 = *(_QWORD *)(v15 + 120);
      if ( v16 )
        StorPortExtendedFunction(1LL, a1, v16, a4);
      v17 = *(_QWORD *)(a1 + 544);
      if ( v17 )
        StorPortExtendedFunction(1LL, a1, v17, a4);
    }
  }
  *(_QWORD *)(a1 + 544) = 0LL;
  *(_QWORD *)(a1 + 536) = 0LL;
  *(_DWORD *)(a1 + 224) = 0;
}
