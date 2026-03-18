/*
 * XREFs of ?VidSchiUnreferenceDisplayingAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z @ 0x1C0002288
 * Callers:
 *     VidSchiSetFlipDevice @ 0x1C00109F4 (VidSchiSetFlipDevice.c)
 *     VidSchiFlipImmediateAndCompleteFlipEntry @ 0x1C00148AC (VidSchiFlipImmediateAndCompleteFlipEntry.c)
 * Callees:
 *     VidSchiUpdateFlipDeviceStatus @ 0x1C00023C8 (VidSchiUpdateFlipDeviceStatus.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1C000E980 (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiSignalFlipEvents @ 0x1C000FED8 (VidSchiSignalFlipEvents.c)
 *     VidSchiDecrementDeviceReference @ 0x1C00110F8 (VidSchiDecrementDeviceReference.c)
 */

void __fastcall VidSchiUnreferenceDisplayingAllocations(
        struct _VIDSCH_GLOBAL *a1,
        struct _VIDSCH_PRESENT_INFO *a2,
        __int16 a3)
{
  int v3; // esi
  char v5; // r15
  int v6; // edi
  unsigned int v7; // r13d
  bool v8; // zf
  int v9; // eax
  char v10; // dl
  char v11; // bp
  __int64 v12; // r14
  __int64 v13; // rdx
  unsigned int updated; // eax
  __int64 v15; // [rsp+60h] [rbp+8h]

  LOWORD(v3) = a3;
  v5 = 0;
  LOWORD(v6) = 0;
  if ( a3 )
  {
    do
    {
      v7 = 0;
      v8 = !_BitScanForward((unsigned int *)&v9, (unsigned __int16)v3);
      v10 = -1;
      if ( !v8 )
        v10 = v9;
      v11 = v10;
      if ( *((_WORD *)a2 + 7317) )
      {
        v5 = 1;
        v12 = (__int64)v10 << 6;
        do
        {
          v15 = v12 + v7;
          v13 = *((_QWORD *)a2 + 3 * v15 + 293);
          if ( _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(v13 + 16) + 12LL), 0) )
            _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v13 + 16) + 8LL));
          VidSchiCheckPendingDeviceCommand(*((_QWORD *)a2 + 3 * v15 + 295));
          VidSchiDecrementDeviceReference(*((PVOID *)a2 + 3 * v15 + 295));
          *((_QWORD *)a2 + 3 * v15 + 293) = 0LL;
          ++v7;
          *((_QWORD *)a2 + 3 * v15 + 295) = 0LL;
          *((_QWORD *)a2 + 3 * v15 + 294) = 0LL;
        }
        while ( v7 < *((unsigned __int16 *)a2 + 7317) );
      }
      v3 = (unsigned __int16)v3 & ~(1 << v11);
      v6 = (unsigned __int16)v6 | (1 << v11);
      *((_WORD *)a2 + 7316) &= ~(1 << v11);
    }
    while ( (_WORD)v3 );
    if ( v5 )
    {
      updated = VidSchiUpdateFlipDeviceStatus(a2);
      VidSchiSignalFlipEvents(a2, updated);
      *((_WORD *)a2 + 7318) &= ~(_WORD)v6;
    }
  }
}
