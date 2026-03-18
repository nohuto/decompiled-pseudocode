/*
 * XREFs of DwmAsyncDirtySprite @ 0x1C0132C84
 * Callers:
 *     GreUpdateSprite @ 0x1C00503E0 (GreUpdateSprite.c)
 *     ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1C0063AB0 (-bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z @ 0x1C025D778 (-SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z.c)
 * Callees:
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall DwmAsyncDirtySprite(PVOID Object, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  unsigned int v8; // ebx
  _BYTE v10[64]; // [rsp+20h] [rbp-48h] BYREF

  v8 = -1073741823;
  if ( Object )
  {
    memset(&v10[2], 0, 0x3EuLL);
    *(_DWORD *)v10 = 4194328;
    *(_WORD *)&v10[4] = 0x8000;
    *(_QWORD *)&v10[56] = a5;
    *(_DWORD *)&v10[40] = 1073741828;
    *(_QWORD *)&v10[48] = a2;
    *(_DWORD *)&v10[44] = a4;
    EtwUpdateEvent(a2);
    v8 = LpcRequestPort(Object, v10);
    ObfDereferenceObject(Object);
  }
  return v8;
}
