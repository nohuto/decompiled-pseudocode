/*
 * XREFs of Method @ 0x1C0010C60
 * Callers:
 *     <none>
 * Callees:
 *     CreateNameSpaceObject @ 0x1C000F9D0 (CreateNameSpaceObject.c)
 *     AddObjSymbol @ 0x1C0010D70 (AddObjSymbol.c)
 *     HeapAlloc @ 0x1C0013430 (HeapAlloc.c)
 *     memmove @ 0x1C0023800 (memmove.c)
 *     memset @ 0x1C0023B40 (memset.c)
 *     LogError @ 0x1C00442B8 (LogError.c)
 *     PrintDebugMessage @ 0x1C00459AC (PrintDebugMessage.c)
 */

__int64 __fastcall Method(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  unsigned int NameSpaceObject; // esi
  __int64 v6; // rax
  __int64 v7; // rbx

  v2 = a2 + 64;
  NameSpaceObject = CreateNameSpaceObject(
                      *(_QWORD *)(a1 + 320),
                      *(unsigned __int8 **)(*(_QWORD *)(a2 + 80) + 32LL),
                      *(_QWORD *)(a1 + 80),
                      *(struct _EX_RUNDOWN_REF **)(a1 + 88),
                      (struct _EX_RUNDOWN_REF **)(a2 + 64),
                      0);
  if ( !NameSpaceObject )
  {
    *(_WORD *)(*(_QWORD *)v2 + 58LL) = 8;
    *(_DWORD *)(*(_QWORD *)v2 + 80LL) = *(_DWORD *)(a2 + 40) - *(_DWORD *)(a1 + 120) + 186;
    v6 = HeapAlloc(*(_QWORD *)(a1 + 320), 1413827912LL, *(unsigned int *)(*(_QWORD *)v2 + 80LL));
    *(_QWORD *)(*(_QWORD *)v2 + 88LL) = v6;
    if ( !v6 )
    {
      NameSpaceObject = -1073741670;
      LogError(3221225626LL);
      PrintDebugMessage(104, 0, 0, 0, 0LL);
      return NameSpaceObject;
    }
    v7 = *(_QWORD *)(*(_QWORD *)v2 + 88LL);
    AddObjSymbol(v7 + 186);
    memset(*(void **)(*(_QWORD *)v2 + 88LL), 0, *(unsigned int *)(*(_QWORD *)v2 + 80LL));
    *(_BYTE *)(v7 + 185) = *(_BYTE *)(*(_QWORD *)(a1 + 120) - 1LL);
    memmove((void *)(v7 + 186), *(const void **)(a1 + 120), *(_QWORD *)(a2 + 40) - *(_QWORD *)(a1 + 120));
    *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 40);
  }
  if ( NameSpaceObject == -1073741771 && g_SimulatorCallbackObject )
  {
    NameSpaceObject = 0;
    *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 40);
  }
  return NameSpaceObject;
}
