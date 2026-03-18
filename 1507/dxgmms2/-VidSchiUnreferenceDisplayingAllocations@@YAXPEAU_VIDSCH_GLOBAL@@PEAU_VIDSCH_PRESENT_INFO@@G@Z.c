/*
 * XREFs of ?VidSchiUnreferenceDisplayingAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z @ 0x1C00138A0
 * Callers:
 *     VidSchiSetFlipDevice @ 0x1C00036B8 (VidSchiSetFlipDevice.c)
 *     VidSchiFlipImmediateAndCompleteFlipEntry @ 0x1C001740C (VidSchiFlipImmediateAndCompleteFlipEntry.c)
 *     VidSchiProcessDpcVSyncCookie @ 0x1C0017F3C (VidSchiProcessDpcVSyncCookie.c)
 * Callees:
 *     VidSchiDecrementDeviceReference @ 0x1C0001150 (VidSchiDecrementDeviceReference.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1C0002C34 (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiSignalFlipEvents @ 0x1C001A3FC (VidSchiSignalFlipEvents.c)
 *     VidSchiUpdateFlipDeviceStatus @ 0x1C001B530 (VidSchiUpdateFlipDeviceStatus.c)
 */

void __fastcall VidSchiUnreferenceDisplayingAllocations(
        struct _VIDSCH_GLOBAL *a1,
        struct _VIDSCH_PRESENT_INFO *a2,
        __int16 a3)
{
  int v3; // ebp
  char v4; // r12
  int v5; // esi
  unsigned int v7; // r13d
  bool v8; // zf
  int v9; // eax
  char v10; // dl
  char v11; // r14
  __int64 v12; // r15
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rbx
  unsigned int updated; // eax
  __int64 v17; // [rsp+60h] [rbp+8h]

  if ( a3 )
  {
    LOWORD(v3) = a3;
    v4 = 0;
    LOWORD(v5) = 0;
    do
    {
      v7 = 0;
      v8 = !_BitScanForward((unsigned int *)&v9, (unsigned __int16)v3);
      v10 = -1;
      if ( !v8 )
        v10 = v9;
      v11 = v10;
      if ( *((_WORD *)a2 + 7313) )
      {
        v4 = 1;
        v12 = (__int64)v10 << 6;
        do
        {
          v13 = v12 + v7;
          v14 = *((_QWORD *)a2 + 3 * v13 + 292);
          v17 = 3 * v13;
          if ( _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(v14 + 16) + 12LL), 0) )
            _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v14 + 16) + 8LL));
          v15 = 3 * v13;
          VidSchiCheckPendingDeviceCommand(*((_QWORD **)a2 + 3 * v13 + 294), v13, v14);
          VidSchiDecrementDeviceReference(*((char **)a2 + v15 + 294), 1);
          *((_QWORD *)a2 + v15 + 294) = 0LL;
          ++v7;
          *((_QWORD *)a2 + v17 + 293) = 0LL;
          *((_QWORD *)a2 + v17 + 292) = 0LL;
        }
        while ( v7 < *((unsigned __int16 *)a2 + 7313) );
      }
      v3 = (unsigned __int16)v3 & ~(1 << v11);
      v5 = (unsigned __int16)v5 | (1 << v11);
      *((_WORD *)a2 + 7312) &= ~(1 << v11);
    }
    while ( (_WORD)v3 );
    if ( v4 )
    {
      updated = VidSchiUpdateFlipDeviceStatus(a2);
      VidSchiSignalFlipEvents(a2, updated);
      *((_WORD *)a2 + 7314) &= ~(_WORD)v5;
    }
  }
}
