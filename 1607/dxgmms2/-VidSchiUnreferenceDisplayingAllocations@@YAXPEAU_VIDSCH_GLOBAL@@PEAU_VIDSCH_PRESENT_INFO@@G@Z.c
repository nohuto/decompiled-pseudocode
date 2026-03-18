/*
 * XREFs of ?VidSchiUnreferenceDisplayingAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z @ 0x1C001152C
 * Callers:
 *     VidSchiSetFlipDevice @ 0x1C00051FC (VidSchiSetFlipDevice.c)
 *     VidSchiFlipImmediateAndCompleteFlipEntry @ 0x1C0011F58 (VidSchiFlipImmediateAndCompleteFlipEntry.c)
 * Callees:
 *     VidSchiCheckPendingDeviceCommand @ 0x1C000DF5C (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiSignalFlipEvents @ 0x1C000EBC4 (VidSchiSignalFlipEvents.c)
 *     VidSchiUpdateFlipDeviceStatus @ 0x1C0011664 (VidSchiUpdateFlipDeviceStatus.c)
 */

void __fastcall VidSchiUnreferenceDisplayingAllocations(
        struct _VIDSCH_GLOBAL *a1,
        struct _VIDSCH_PRESENT_INFO *a2,
        __int16 a3)
{
  int v4; // r14d
  char v5; // r12
  int v6; // ebp
  char v7; // cl
  int v9; // eax
  char v10; // r15
  __int64 v11; // r13
  unsigned int v12; // r15d
  __int64 v13; // rdi
  __int64 v14; // rbx
  int updated; // eax
  char v16; // [rsp+88h] [rbp+20h]

  if ( a3 )
  {
    LOWORD(v4) = a3;
    v5 = 0;
    LOWORD(v6) = 0;
    do
    {
      v7 = -1;
      if ( _BitScanForward((unsigned int *)&v9, (unsigned __int16)v4) )
        v7 = v9;
      v10 = v7;
      v16 = v7;
      if ( *((_WORD *)a2 + 9369) )
      {
        v11 = (__int64)v7 << 6;
        v12 = 0;
        do
        {
          v13 = v11 + v12;
          v14 = 32 * v13;
          _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)a2 + 4 * v13 + 295) + 16LL) + 8LL));
          VidSchiCheckPendingDeviceCommand(*((_QWORD **)a2 + 2));
          *(_QWORD *)((char *)a2 + v14 + 2352) = 0LL;
          ++v12;
          *(_QWORD *)((char *)a2 + v14 + 2360) = 0LL;
          *(_WORD *)((char *)a2 + v14 + 2376) = 0;
          *((_QWORD *)a2 + 4 * v13 + 296) = 0LL;
        }
        while ( v12 < *((unsigned __int16 *)a2 + 9369) );
        v10 = v16;
        v5 = 1;
      }
      v4 = (unsigned __int16)v4 & ~(1 << v10);
      v6 = (unsigned __int16)v6 | (1 << v10);
      *((_WORD *)a2 + 9368) &= ~(1 << v10);
    }
    while ( (_WORD)v4 );
    if ( v5 )
    {
      updated = VidSchiUpdateFlipDeviceStatus(a2);
      VidSchiSignalFlipEvents((__int64)a2, updated);
      *((_WORD *)a2 + 9370) &= ~(_WORD)v6;
    }
  }
}
