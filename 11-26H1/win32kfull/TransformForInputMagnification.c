/*
 * XREFs of TransformForInputMagnification @ 0x140198CB0
 * Callers:
 *     <none>
 * Callees:
 *     PtInRect @ 0x14008C1B0 (PtInRect.c)
 *     MagInputTransform @ 0x140198D44 (MagInputTransform.c)
 *     AcquireMagInputLock @ 0x140198D88 (AcquireMagInputLock.c)
 *     ReleaseMagInputLock @ 0x140198DD4 (ReleaseMagInputLock.c)
 *     ConvertPointCoordinates @ 0x140198E98 (ConvertPointCoordinates.c)
 *     MagnificationTransformPoint @ 0x140198FD8 (MagnificationTransformPoint.c)
 */

__int64 __fastcall TransformForInputMagnification(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v9; // r9

  AcquireMagInputLock();
  v4 = MagInputTransform();
  if ( v4 && PtInRect((_DWORD *)(v4 + 16), *a3) )
  {
    MagnificationTransformPoint(v9, a3);
    ConvertPointCoordinates(*a3);
  }
  return ReleaseMagInputLock(v6, v5, v7);
}
