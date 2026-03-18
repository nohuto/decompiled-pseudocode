/*
 * XREFs of IoQueuesFreeResources @ 0x1C0005DA8
 * Callers:
 *     IoQueuesCreation @ 0x1C0005BD0 (IoQueuesCreation.c)
 *     NVMeControllerRemove @ 0x1C0007134 (NVMeControllerRemove.c)
 *     NVMeControllerStop @ 0x1C0007424 (NVMeControllerStop.c)
 * Callees:
 *     NVMeFreeDmaBuffer @ 0x1C0007514 (NVMeFreeDmaBuffer.c)
 *     NVMeFreePool @ 0x1C000761C (NVMeFreePool.c)
 */

__int64 __fastcall IoQueuesFreeResources(__int64 a1)
{
  __int64 v2; // rdi
  __int64 result; // rax
  unsigned __int16 v4; // si
  __int64 v5; // rbp
  unsigned __int16 i; // si

  v2 = 16 * (unsigned int)*(unsigned __int16 *)(a1 + 230);
  result = *(unsigned __int16 *)(a1 + 230) << 6;
  if ( !*(_BYTE *)(a1 + 16) )
  {
    if ( *(_QWORD *)(a1 + 544) )
    {
      v4 = 0;
      if ( *(_WORD *)(a1 + 232) )
      {
        v5 = (unsigned int)result;
        do
          result = NVMeFreeDmaBuffer(a1, v5, *(_QWORD *)(136LL * v4++ + *(_QWORD *)(a1 + 544)));
        while ( v4 < *(_WORD *)(a1 + 232) );
      }
    }
    if ( *(_QWORD *)(a1 + 552) )
    {
      for ( i = 0; i < *(_WORD *)(a1 + 234); ++i )
        result = NVMeFreeDmaBuffer(a1, v2, *(_QWORD *)(168LL * i + *(_QWORD *)(a1 + 552)));
    }
    if ( *(_QWORD *)(a1 + 544) )
    {
      NVMeFreePool(a1);
      NVMeFreePool(a1);
      result = NVMeFreePool(a1);
    }
    if ( *(_QWORD *)(a1 + 552) )
    {
      NVMeFreePool(a1);
      result = NVMeFreePool(a1);
    }
  }
  *(_QWORD *)(a1 + 552) = 0LL;
  *(_QWORD *)(a1 + 544) = 0LL;
  *(_DWORD *)(a1 + 232) = 0;
  return result;
}
