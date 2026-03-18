/*
 * XREFs of DwmAsyncDestroySprite @ 0x14009D21C
 * Callers:
 *     ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x14009CB84 (-GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z.c)
 *     GreTransferDwmStateToSpriteState @ 0x14028A2CC (GreTransferDwmStateToSpriteState.c)
 * Callees:
 *     ?IncrementDWMWindowUniqueness@@YA_JXZ @ 0x140038D64 (-IncrementDWMWindowUniqueness@@YA_JXZ.c)
 */

__int64 __fastcall DwmAsyncDestroySprite(PVOID Object, __int64 a2, __int64 a3)
{
  unsigned int v5; // edi
  _OWORD v7[2]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v8[5]; // [rsp+40h] [rbp-28h]

  v5 = -1073741823;
  IncrementDWMWindowUniqueness((__int64)Object, a2, a3);
  if ( Object )
  {
    memset(v7, 0, sizeof(v7));
    v8[0] = 0LL;
    LODWORD(v7[0]) = 3407884;
    WORD2(v7[0]) = 0x8000;
    LODWORD(v8[1]) = 1073741827;
    *(_QWORD *)((char *)&v8[1] + 4) = a2;
    EtwUpdateEvent(a2);
    v5 = LpcRequestPort(Object, v7);
    ObfDereferenceObject(Object);
  }
  return v5;
}
