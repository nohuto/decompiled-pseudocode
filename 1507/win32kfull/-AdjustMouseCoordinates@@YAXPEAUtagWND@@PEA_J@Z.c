/*
 * XREFs of ?AdjustMouseCoordinates@@YAXPEAUtagWND@@PEA_J@Z @ 0x1C010C788
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C010B80C (xxxHandleMenuMessages.c)
 * Callees:
 *     PhysicalToLogicalInPlacePoint @ 0x1C01E54A0 (PhysicalToLogicalInPlacePoint.c)
 */

void __fastcall AdjustMouseCoordinates(struct tagWND *a1, __int64 *a2, __int64 a3)
{
  int v4; // [rsp+30h] [rbp+8h] BYREF
  int v5; // [rsp+34h] [rbp+Ch]

  if ( *((_QWORD *)a1 + 34)
    && *((_DWORD *)a1 + 86) == 1
    && (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 776LL) & 0x4000) != 0
    && *(_DWORD *)(gptiCurrent + 684LL) == *(_DWORD *)(gptiCurrent + 692LL)
    && *(_DWORD *)(gptiCurrent + 688LL) == *(_DWORD *)(gptiCurrent + 696LL) )
  {
    v4 = *(__int16 *)a2;
    v5 = *((__int16 *)a2 + 1);
    PhysicalToLogicalInPlacePoint(a1, &v4, a3, gptiCurrent);
    *a2 = ((unsigned __int16)v5 << 16) | (unsigned __int16)v4;
  }
}
